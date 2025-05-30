GlobalVarCount = 0

Strings:
	Rifle
	Revolver
	rifle_ammo
	revolver_ammo
	halfboot_repel
	drapery
	cloak_repel
	raincoat_repel
	glove_disp
	glove
	boot_army
	glove_army
	balahon
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
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
		EVENT_0 Op = 0x6c Vars = (object)


0x0: PushEmpty(int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(string, int, int)
0x5: Stack[-3] = "Rifle"
0x6: Stack[-2] = (int) 1
0x7: Stack[-1] = (int) 200
0x8: Call 0x80

0x9: Pop(3)
0xa: PushEmpty(string, int, int)
0xb: Stack[-3] = "Revolver"
0xc: Stack[-2] = (int) 1
0xd: Stack[-1] = (int) 150
0xe: Call 0x80

0xf: Pop(3)
0x10: PushEmpty(string, int, int, int)
0x11: Stack[-4] = "rifle_ammo"
0x12: Stack[-3] = (int) 1
0x13: Stack[-2] = (int) 20
0x14: Stack[-1] = (int) 3
0x15: Call 0x8b

0x16: Pop(4)
0x17: PushEmpty(string, int, int, int)
0x18: Stack[-4] = "revolver_ammo"
0x19: Stack[-3] = (int) 1
0x1a: Stack[-2] = (int) 20
0x1b: Stack[-1] = (int) 6
0x1c: Call 0x8b

0x1d: Pop(4)
0x1e: PushEmpty(int)
0x1f: Call 0xa5

0x20: Stack[-2] = Stack[-1]
0x21: Pop(1)
0x22: Push((int) 3)
0x23: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x25: PushEmpty(string, int, int)
0x26: Stack[-3] = "halfboot_repel"
0x27: Stack[-2] = (int) 1
0x28: Stack[-1] = (int) 15
0x29: Call 0x80

0x2a: Pop(3)
0x2b: PushEmpty(string, int, int)
0x2c: Stack[-3] = "boot_repel"
0x2d: Stack[-2] = (int) 1
0x2e: Stack[-1] = (int) 20
0x2f: Call 0x80

0x30: Pop(3)
0x31: PushEmpty(string, int, int)
0x32: Stack[-3] = "drapery"
0x33: Stack[-2] = (int) 1
0x34: Stack[-1] = (int) 5
0x35: Call 0x80

0x36: Pop(3)
0x37: PushEmpty(string, int, int)
0x38: Stack[-3] = "cloak_repel"
0x39: Stack[-2] = (int) 1
0x3a: Stack[-1] = (int) 15
0x3b: Call 0x80

0x3c: Pop(3)
0x3d: PushEmpty(string, int, int)
0x3e: Stack[-3] = "raincoat_repel"
0x3f: Stack[-2] = (int) 1
0x40: Stack[-1] = (int) 35
0x41: Call 0x80

0x42: Pop(3)
0x43: PushEmpty(string, int, int)
0x44: Stack[-3] = "glove_disp"
0x45: Stack[-2] = (int) 1
0x46: Stack[-1] = (int) 20
0x47: Call 0x80

0x48: Pop(3)
0x49: PushEmpty(string, int, int)
0x4a: Stack[-3] = "glove"
0x4b: Stack[-2] = (int) 1
0x4c: Stack[-1] = (int) 20
0x4d: Call 0x80

0x4e: Pop(3)
0x4f: Push((int) 9)
0x50: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x52: PushEmpty(string, int, int)
0x53: Stack[-3] = "boot_army"
0x54: Stack[-2] = (int) 1
0x55: Stack[-1] = (int) 40
0x56: Call 0x80

0x57: Pop(3)
0x58: PushEmpty(string, int, int)
0x59: Stack[-3] = "glove_army"
0x5a: Stack[-2] = (int) 1
0x5b: Stack[-1] = (int) 50
0x5c: Call 0x80

0x5d: Pop(3)
0x5e: PushEmpty(string, int, int)
0x5f: Stack[-3] = "balahon"
0x60: Stack[-2] = (int) 1
0x61: Stack[-1] = (int) 80
0x62: Call 0x80

0x63: Pop(3)
0x64: PushEmpty()
0x65: Call 0x68

0x66: Pop(0)
0x67: Return(); Pop(2)

0x68: @ Hold()
0x69: Pop(0)
0x6a: GOTO 0x68

0x6b: Return(); Pop(0)

0x6c: PushEmpty(bool, bool, bool, bool)
0x6d: PushEmpty(bool)
0x6e: Call 0x9f

0x6f: Pop(0)
0x70: Pop(1); Push((bool) Stack[-1] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Return(); Pop(4)

0x73: @@ IsOnGround(Stack[-2])
0x74: Pop(0)
0x75: Push(Stack[-2])
0x76: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x77: EventDisable(0)
0x78: @ IsOverrideActive(Stack[-1])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-1] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: @ Barter(Stack[-5])
0x7d: Pop(0)
0x7e: EventEnable(0)
0x7f: Return(); Pop(4)

0x80: PushEmpty(bool, bool)
0x81: PushEmpty(bool, int, int)
0x82: Stack[-2] = Stack[-7]
0x83: Stack[-1] = Stack[-6]
0x84: Call 0x9a

0x85: Pop(2)
0x86: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x87: Push((int) 0)
0x88: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x89: Pop(1)
0x8a: Return(); Pop(2)

0x8b: PushEmpty(int, bool, int, bool)
0x8c: PushEmpty(bool, int, int)
0x8d: Stack[-2] = Stack[-10]
0x8e: Stack[-1] = Stack[-9]
0x8f: Call 0x9a

0x90: Pop(2)
0x91: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x92: @ irand(Stack[-2], Stack[-5])
0x93: Pop(0)
0x94: Push((int) 0)
0x95: Push((int) 1)
0x96: Pop(1); Push(Stack[-7] + Stack[-1]);
0x97: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: Return(); Pop(4)

0x9a: PushEmpty(int, int)
0x9b: @ irand(Stack[-1], Stack[-3])
0x9c: Pop(0)
0x9d: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x9e: Return(); Pop(2)

0x9f: PushEmpty(int, int)
0xa0: Push("nouse_container")
0xa1: @ GetVariable(Stack[-1], Stack[-2])
0xa2: Pop(1)
0xa3: Stack[-3] = !Stack[-1]; Pop(0);
0xa4: Return(); Pop(2)

0xa5: PushEmpty(float, float)
0xa6: @ GetGameTime(Stack[-1])
0xa7: Pop(0)
0xa8: Push((int) 1)
0xa9: PushEmpty(int)
0xaa: Push((int) 24)
0xab: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xac: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xad: Return(); Pop(2)

