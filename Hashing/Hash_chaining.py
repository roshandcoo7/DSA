# Function to display hash table
def dispay(hashTable):
    for i in range(len(hashTable)):
        print(i, end = " ")
        for j in hashTable[i]:
            print("-->", end = " ")
            print(j, end = " ")
        print()

# Creating hash table as a nested list

HashTable = [[] for _ in range(10)]

# Hash function
def Hash(keyValue):
    return keyValue % len(HashTable)

# Insert function
def insert(hashTable, keyValue, Value):
    hashKey = Hash(keyValue)
    hashTable[hashKey].append(Value)

insert(HashTable,10,'calicut')
insert(HashTable,25,'Kannur')
insert(HashTable,20,'Kochi')
insert(HashTable,9,'Thalassery')
insert(HashTable,21,'Trivandrum')
insert(HashTable,21,'Trishur')

dispay(HashTable)
    