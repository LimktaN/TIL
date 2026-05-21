def get_name(first_name, last_name):
    if first_name == "":
        return "Your first name is missing..."
    elif last_name == "":
        return "Your last name is missing..."
    else:
        return f"{first_name}, {last_name}"

return_value = get_name(
    first_name=input("Your first name ?"),
    last_name=input("Your last name ?")
)

print(return_value)