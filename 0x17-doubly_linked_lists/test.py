largest_palindrome = 906609

# Convert the palindrome to a string
palindrome_str = str(largest_palindrome)

# Pad the string with leading zeros if needed
padded_str = palindrome_str.zfill(6)

# Save the padded string in the file
with open("102-result", "w") as file:
    file.write(padded_str)

