import requests
import unicodedata

from cchecksum import to_checksum_address

# Keep historical name mapping
name_mapping = {
    56   : 'Bsc',
    97   : 'BscTestnet',
    100  : 'Gnosis',
    128  : 'Heco',
    250  : 'Fantom',
    324  : 'ZkSync',
    369  : 'PulseChain',
    943  : 'PulseChainTestnet',
    1088 : 'Metis',
    1329 : 'Sei',
    43114: 'Avax',
}


def normalize_network_name(name: str, chain_id: int) -> str:
    if chain_id in name_mapping:
        return name_mapping[chain_id]

    decomposed = unicodedata.normalize("NFD", name)
    filtered = ''.join(char for char in decomposed if not unicodedata.combining(char))

    if filtered != 'Mainnet':
        filtered = filtered.replace(' Mainnet', '')

    char_replace = '(). '
    for char in char_replace:
        filtered = filtered.replace(char, '')

    return filtered


def extract_contract_address(url: str) -> str:
    start = url.find("0x")
    return url[start:start + 42]


def fetch_deployments():
    url = "https://raw.githubusercontent.com/mds1/multicall/main/deployments.json"
    response = requests.get(url)
    data = response.json()

    # Filter out Tron network and sort by chainId
    filtered_data = [item for item in data if item['name'] != 'Tron' and '0x' in item['url']]
    sorted_data = sorted(filtered_data, key=lambda x: x['chainId'])

    # Extract contract address from URL
    for item in sorted_data:
        item['name'] = normalize_network_name(item['name'], item['chainId'])
        item['url'] = to_checksum_address(extract_contract_address(item['url']))

    print('class Network(IntEnum):')
    for item in sorted_data:
        print(f"    {item['name']} = {item['chainId']}")

    print('\nMULTICALL3_ADDRESSES: Final[Dict[int, ChecksumAddress]] = {')
    for item in sorted_data:
        print(f"    Network.{item['name']}: '{item['url']}',")
    print('}')


if __name__ == "__main__":
    fetch_deployments()
