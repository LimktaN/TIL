def travel():
    print("Hello there !")
    print("Are you excited ?")

travel()

def travel_to_country(country: str):
    print("Hello there !")
    print(f"You are going to travel to {country}")
    print("Are you excited ?")

travel_to_country("USA")

# country = parameter
# "USA" = argument

def travel_to_country2(country: str, name: str):
    print(f"Hello {name}")
    print(f"You are going to travel to {country}")
    print("Are you excited ?")

travel_to_country2("USA", "LIM")

travel_to_country2(name = "LIM", country = "USA")