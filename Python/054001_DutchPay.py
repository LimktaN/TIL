num_of_ppl = 3
food_price = [10, 20, 15, 17, 50]

def going_dutch(num_of_ppl, food_price):
    total = 0
    dutch = 0

    for i in range(0, len(food_price)):
        total += food_price[i]

    dutch = total / num_of_ppl

    return print(f"total: {total}\ndutch: {dutch}")

going_dutch(num_of_ppl, food_price)