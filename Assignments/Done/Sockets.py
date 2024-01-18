import socket

# AF_INET is IPv4; SOCK_STREAm is TCP, SOCK_DGRAM is UDP
tcp = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# Allow Socket to be reused
tcp.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
host = socket.gethostname() # Get Local device IP
port = 9999 

def do_server():
  tcp.bind((host, port))
  tcp.listen(5)
  print("Listening...")
  while True:
    csocket, addr = tcp.accept()
    print(f"Connected from: {addr}")
    msg = "Thanks for connecting!".encode('ascii')
    csocket.send(msg)
    csocket.close()

def do_client():
  tcp.connect((host, port))
  msg = tcp.recv(1024)
  tcp.close()
  print(f"Received: {msg.decode('ascii')}")
  
choice = input("Are you client or server?")
if choice in "client":
  do_client()
else:
  do_server()


