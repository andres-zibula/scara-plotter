import serial

ser = serial.Serial('COM3', 115200)

command = "ASD123;"


with open('commands.txt') as f:
    commands = f.readlines()

for command in commands:
    print("sending: " + command)
    command = command.ljust(80, '0')
    command = str.encode(command)
    ser.write(command)
    input_buffer = ser.readline()
    print("received: " + input_buffer)

