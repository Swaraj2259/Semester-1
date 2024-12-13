''' 
# lambda is keyword
def square(a):
    return a*a 
print(square(5))
#example od lamda fun
s=lambda n: n*n
print(s(2))

import tkinter as mp

# Initialize the main application window
root = mp.Tk()
root.geometry('500x500')
root.title("My First Tkinter App")

# Create a label
label = mp.Label(root, text="Enter something:", font=("Arial", 14))
label.pack(pady=10)

# Create an entry widget
entry = mp.Entry(root, font=("Arial", 12), width=30)
entry.pack(pady=5)

# Function to display the entered text
def show_text():
    user_input = entry.get()  # Get text from entry widget
    output_label.config(text=f"You entered: {user_input}")

# Create a button to trigger the show_text function
button = mp.Button(root, text="Hello", command=show_text, font=("Arial", 12))
button.pack(pady=10)
label = mp.Label(root, text="Hello, this is a sample text!", font=("Times New Roman", 30), fg="white", bg="black")
label.pack(padx=20, pady=20)

# Create a label to display output text
output_label = mp.Label(root, text="", font=("Arial", 14), fg="blue")
output_label.pack(pady=10)

# Start the main event loop
root.mainloop()
'''
import tkinter as tk

# Create the main window
root = tk.Tk()

# Set the window title
root.title("Neeche dekh")

# Create a label widget to display the text
label = tk.Label(root, text="Yo !", font=("Times New Roman", 100), fg="white", bg="black")
label.pack(expand=True)

# Run the application
root.mainloop()
