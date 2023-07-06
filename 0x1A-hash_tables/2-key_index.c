/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key to be indexed
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
