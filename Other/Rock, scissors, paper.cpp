#import <random>;

print("Welcome to the game: \ 'Rock, scissors, paper'")
print("    The game will go against the computer     ")
print("      The game consists of 3 rounds           ")
print("      Use the big letters to select           ")
print("[R] - rock")
print("[S] - scissors")
print("[P] - paper")
user_score    =0
user_choice   =0
bot_score     =0
bot_choice    =0
print(" BEGINNING OF THE GAME ")
for i in range(3):
  print(" ROUND ? " + str(i+1) +" \n")
  bot_choice = random.choice(["R", "S", "P"])
  user_choice = input(" Your choice: ")
  print("You: " + user_choice + " x Bot:" + bot_choice + " - ", end = "\n")
  if user_choice == bot_choice:
    print("DRAW")
  elif user_choice == "R":
    if bot_choice == "S":
      user_score = user_score + 1
      print("HUMAN WINS")
    else:
      bot_score = bot_score + 1
      print("BOT WINS")
  elif user_choice == "S":
    if bot_choice == "P":
      user_score = user_score + 1
      print("HUMAN WINS")
    else:
      bot_score = bot_score + 1
      print("BOT WINS")
  elif user_choice == "P":
    if bot_choice == "R":
      user_score = user_score + 1
      print("HUMAN WINS")
    else:
      bot_score = bot_score + 1
      print("BOT WINS")
  else:
    print("ERROR")
if user_score > bot_score:
  print("Result of the game: HUMAN WINS !")
elif user_score < bot_score:
  print("Result of the game: BOT WINS !")
elif user_score == bot_score:
  print("Result of the game: DRAW !")

