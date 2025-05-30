GlobalVarCount = 0

Strings:
	meradorm
	alpha_pills
	tvirin
	lemon
	novocaine
	morfin
	etorfin
	revolver_ammo
	rifle_ammo
	powder
	syringe
	kerosene
	lockpick
	hook
	needle
	glove
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	DisableUpdate (0 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x81 Vars = (object)


0x0: PushEmpty(int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ DisableUpdate()
0x5: Pop(0)
0x6: PushEmpty(string, int, int)
0x7: Stack[-3] = "meradorm"
0x8: Stack[-2] = (int) 1
0x9: Stack[-1] = (int) 20
0xa: Call2 0x9b

0xb: Pop(3)
0xc: PushEmpty(string, int, int, int)
0xd: Stack[-4] = "alpha_pills"
0xe: Stack[-3] = (int) 1
0xf: Stack[-2] = (int) 25
0x10: Stack[-1] = (int) 4
0x11: Call2 0xa6

0x12: Pop(4)
0x13: PushEmpty(string, int, int)
0x14: Stack[-3] = "tvirin"
0x15: Stack[-2] = (int) 1
0x16: Stack[-1] = (int) 12
0x17: Call2 0x9b

0x18: Pop(3)
0x19: PushEmpty(string, int, int, int)
0x1a: Stack[-4] = "lemon"
0x1b: Stack[-3] = (int) 1
0x1c: Stack[-2] = (int) 10
0x1d: Stack[-1] = (int) 2
0x1e: Call2 0xa6

0x1f: Pop(4)
0x20: PushEmpty(int)
0x21: Call2 0xc0

0x22: Stack[-2] = Stack[-1]
0x23: Pop(1)
0x24: Push((int) 5)
0x25: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x27: PushEmpty(string, int, int)
0x28: Stack[-3] = "novocaine"
0x29: Stack[-2] = (int) 1
0x2a: Stack[-1] = (int) 10
0x2b: Call2 0x9b

0x2c: Pop(3)
0x2d: Push((int) 7)
0x2e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x30: PushEmpty(string, int, int)
0x31: Stack[-3] = "morfin"
0x32: Stack[-2] = (int) 1
0x33: Stack[-1] = (int) 20
0x34: Call2 0x9b

0x35: Pop(3)
0x36: Push((int) 10)
0x37: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x39: PushEmpty(string, int, int)
0x3a: Stack[-3] = "etorfin"
0x3b: Stack[-2] = (int) 1
0x3c: Stack[-1] = (int) 30
0x3d: Call2 0x9b

0x3e: Pop(3)
0x3f: PushEmpty(string, int, int, int)
0x40: Stack[-4] = "revolver_ammo"
0x41: Stack[-3] = (int) 1
0x42: Stack[-2] = (int) 20
0x43: Stack[-1] = (int) 2
0x44: Call2 0xa6

0x45: Pop(4)
0x46: PushEmpty(string, int, int)
0x47: Stack[-3] = "rifle_ammo"
0x48: Stack[-2] = (int) 1
0x49: Stack[-1] = (int) 10
0x4a: Call2 0x9b

0x4b: Pop(3)
0x4c: PushEmpty(string, int, int)
0x4d: Stack[-3] = "powder"
0x4e: Stack[-2] = (int) 1
0x4f: Stack[-1] = (int) 500
0x50: Call2 0x9b

0x51: Pop(3)
0x52: PushEmpty(string, int, int)
0x53: Stack[-3] = "syringe"
0x54: Stack[-2] = (int) 1
0x55: Stack[-1] = (int) 20
0x56: Call2 0x9b

0x57: Pop(3)
0x58: PushEmpty(string, int, int, int)
0x59: Stack[-4] = "kerosene"
0x5a: Stack[-3] = (int) 1
0x5b: Stack[-2] = (int) 4
0x5c: Stack[-1] = (int) 10
0x5d: Call2 0xa6

0x5e: Pop(4)
0x5f: PushEmpty(string, int, int)
0x60: Stack[-3] = "lockpick"
0x61: Stack[-2] = (int) 1
0x62: Stack[-1] = (int) 20
0x63: Call2 0x9b

0x64: Pop(3)
0x65: PushEmpty(string, int, int, int)
0x66: Stack[-4] = "hook"
0x67: Stack[-3] = (int) 1
0x68: Stack[-2] = (int) 15
0x69: Stack[-1] = (int) 5
0x6a: Call2 0xa6

0x6b: Pop(4)
0x6c: PushEmpty(string, int, int, int)
0x6d: Stack[-4] = "needle"
0x6e: Stack[-3] = (int) 1
0x6f: Stack[-2] = (int) 15
0x70: Stack[-1] = (int) 3
0x71: Call2 0xa6

0x72: Pop(4)
0x73: PushEmpty(string, int, int)
0x74: Stack[-3] = "glove"
0x75: Stack[-2] = (int) 1
0x76: Stack[-1] = (int) 70
0x77: Call2 0x9b

0x78: Pop(3)
0x79: PushEmpty()
0x7a: Call2 0x7d

0x7b: Pop(0)
0x7c: Return(); Pop(2)

0x7d: @ Hold()
0x7e: Pop(0)
0x7f: GOTO 0x7d

0x80: Return(); Pop(0)

0x81: PushEmpty(bool, bool, bool, bool)
0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 1
0x84: Pop(0); Push((bool) Stack[-6] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x86: PushEmpty(bool)
0x87: Call2 0xba

0x88: Pop(0)
0x89: Pop(1); Push((bool) Stack[-1] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 0
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(4)

0x8e: @@ IsOnGround(Stack[-2])
0x8f: Pop(0)
0x90: Push(Stack[-2])
0x91: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x92: EventDisable(0)
0x93: @ IsOverrideActive(Stack[-1])
0x94: Pop(0)
0x95: Pop(0); Push((bool) Stack[-1] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x97: @ Barter(Stack[-5])
0x98: Pop(0)
0x99: EventEnable(0)
0x9a: Return(); Pop(4)

0x9b: PushEmpty(bool, bool)
0x9c: PushEmpty(bool, int, int)
0x9d: Stack[-2] = Stack[-7]
0x9e: Stack[-1] = Stack[-6]
0x9f: Call2 0xb5

0xa0: Pop(2)
0xa1: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa2: Push((int) 0)
0xa3: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xa4: Pop(1)
0xa5: Return(); Pop(2)

0xa6: PushEmpty(int, bool, int, bool)
0xa7: PushEmpty(bool, int, int)
0xa8: Stack[-2] = Stack[-10]
0xa9: Stack[-1] = Stack[-9]
0xaa: Call2 0xb5

0xab: Pop(2)
0xac: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xad: @ irand(Stack[-2], Stack[-5])
0xae: Pop(0)
0xaf: Push((int) 0)
0xb0: Push((int) 1)
0xb1: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb2: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: Return(); Pop(4)

0xb5: PushEmpty(int, int)
0xb6: @ irand(Stack[-1], Stack[-3])
0xb7: Pop(0)
0xb8: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb9: Return(); Pop(2)

0xba: PushEmpty(int, int)
0xbb: Push("nouse_container")
0xbc: @ GetVariable(Stack[-1], Stack[-2])
0xbd: Pop(1)
0xbe: Stack[-3] = !Stack[-1]; Pop(0);
0xbf: Return(); Pop(2)

0xc0: PushEmpty(float, float)
0xc1: @ GetGameTime(Stack[-1])
0xc2: Pop(0)
0xc3: Push((int) 1)
0xc4: PushEmpty(int)
0xc5: Push((int) 24)
0xc6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc8: Return(); Pop(2)

