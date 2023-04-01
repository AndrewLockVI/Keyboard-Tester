from sshkeyboard import listen_keyboard
import os

def press(key):
    print(f"'{key}' pressed")





os.system('cls||clear')
print("Press ESC to Exit")
listen_keyboard(
    on_press=press,
)
