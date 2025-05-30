GlobalVarCount = 0

Strings:
	health
	immunity
	invisibility
	noiseless
	reputation
	hunger
	tiredness
	infection

Import:
	CaptureKeyboard (0 args)
	GetPlayerHealth (1 args)
	SendMessage (2 args)
	GetPlayerImmunity (1 args)
	GetPlayerVisibility (1 args)
	GetPlayerNoise (1 args)
	GetPlayerReputation (1 args)
	GetPlayerHunger (1 args)
	GetPlayerTiredness (1 args)
	GetPlayerDisease (1 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_100 Op = 0x42 Vars = (int)


0x0: PushEmpty(float, float)
0x1: @ CaptureKeyboard()
0x2: Pop(0)
0x3: @ GetPlayerHealth(Stack[-1])
0x4: Pop(0)
0x5: Push((int) 100)
0x6: Pop(1); Push(Stack[-1] * Stack[-2]);
0x7: Push("health")
0x8: @ SendMessage(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: @ GetPlayerImmunity(Stack[-1])
0xb: Pop(0)
0xc: Push((int) 100)
0xd: Pop(1); Push(Stack[-1] * Stack[-2]);
0xe: Push("immunity")
0xf: @ SendMessage(Stack[-2], Stack[-1])
0x10: Pop(2)
0x11: @ GetPlayerVisibility(Stack[-1])
0x12: Pop(0)
0x13: Push((int) 100)
0x14: Push((float)1.0)
0x15: Pop(1); Push(Stack[-1] - Stack[-3]);
0x16: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17: Push("invisibility")
0x18: @ SendMessage(Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: @ GetPlayerNoise(Stack[-1])
0x1b: Pop(0)
0x1c: Push((int) 100)
0x1d: Push((float)1.0)
0x1e: Pop(1); Push(Stack[-1] - Stack[-3]);
0x1f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20: Push("noiseless")
0x21: @ SendMessage(Stack[-2], Stack[-1])
0x22: Pop(2)
0x23: @ GetPlayerReputation(Stack[-1])
0x24: Pop(0)
0x25: Push((int) 100)
0x26: Pop(1); Push(Stack[-1] * Stack[-2]);
0x27: Push("reputation")
0x28: @ SendMessage(Stack[-2], Stack[-1])
0x29: Pop(2)
0x2a: @ GetPlayerHunger(Stack[-1])
0x2b: Pop(0)
0x2c: Push((int) 100)
0x2d: Pop(1); Push(Stack[-1] * Stack[-2]);
0x2e: Push("hunger")
0x2f: @ SendMessage(Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: @ GetPlayerTiredness(Stack[-1])
0x32: Pop(0)
0x33: Push((int) 100)
0x34: Pop(1); Push(Stack[-1] * Stack[-2]);
0x35: Push("tiredness")
0x36: @ SendMessage(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: @ GetPlayerDisease(Stack[-1])
0x39: Pop(0)
0x3a: Push((int) 100)
0x3b: Pop(1); Push(Stack[-1] * Stack[-2]);
0x3c: Push("infection")
0x3d: @ SendMessage(Stack[-2], Stack[-1])
0x3e: Pop(2)
0x3f: @ ProcessEvents()
0x40: Pop(0)
0x41: Return(); Pop(2)

0x42: PushEmpty()
0x43: @ DestroyWindow()
0x44: Pop(0)
0x45: Return(); Pop(0)

