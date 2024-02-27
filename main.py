def alphabet_position(text):
    result = []
    for i in text.lower():
        if i.isalpha():
            result.append(str(ord(i)-96))
    return  " ".join(result)


print(alphabet_position("The sunset sets at twelve o' clock."))
