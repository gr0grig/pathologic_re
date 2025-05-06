GlobalVarCount = 0

Strings:
	Rifle
	rifle_ammo
	revolver_ammo
	halfboot_repel
	drapery
	glove_disp
	cloak_repel
	glove
	raincoat_repel
	needle
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
		EVENT_0 Op = 0x63 Vars = (object)


0x0: PushEmpty(int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ DisableUpdate()
0x5: Pop(0)
0x6: PushEmpty(string, int, int)
0x7: Stack[-3] = "Rifle"
0x8: Stack[-2] = (int) 1
0x9: Stack[-1] = (int) 250
0xa: Call2 0x7d

0xb: Pop(3)
0xc: PushEmpty(string, int, int, int)
0xd: Stack[-4] = "rifle_ammo"
0xe: Stack[-3] = (int) 1
0xf: Stack[-2] = (int) 20
0x10: Stack[-1] = (int) 2
0x11: Call2 0x88

0x12: Pop(4)
0x13: PushEmpty(string, int, int, int)
0x14: Stack[-4] = "revolver_ammo"
0x15: Stack[-3] = (int) 1
0x16: Stack[-2] = (int) 20
0x17: Stack[-1] = (int) 2
0x18: Call2 0x88

0x19: Pop(4)
0x1a: PushEmpty(int)
0x1b: Call2 0xa2

0x1c: Stack[-2] = Stack[-1]
0x1d: Pop(1)
0x1e: Push((int) 3)
0x1f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x21: PushEmpty(string, int, int)
0x22: Stack[-3] = "halfboot_repel"
0x23: Stack[-2] = (int) 1
0x24: Stack[-1] = (int) 30
0x25: Call2 0x7d

0x26: Pop(3)
0x27: PushEmpty(string, int, int)
0x28: Stack[-3] = "drapery"
0x29: Stack[-2] = (int) 1
0x2a: Stack[-1] = (int) 40
0x2b: Call2 0x7d

0x2c: Pop(3)
0x2d: PushEmpty(string, int, int)
0x2e: Stack[-3] = "glove_disp"
0x2f: Stack[-2] = (int) 1
0x30: Stack[-1] = (int) 40
0x31: Call2 0x7d

0x32: Pop(3)
0x33: Push((int) 5)
0x34: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x36: PushEmpty(string, int, int)
0x37: Stack[-3] = "cloak_repel"
0x38: Stack[-2] = (int) 1
0x39: Stack[-1] = (int) 70
0x3a: Call2 0x7d

0x3b: Pop(3)
0x3c: PushEmpty(string, int, int)
0x3d: Stack[-3] = "glove"
0x3e: Stack[-2] = (int) 1
0x3f: Stack[-1] = (int) 70
0x40: Call2 0x7d

0x41: Pop(3)
0x42: Push((int) 6)
0x43: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x45: PushEmpty(string, int, int)
0x46: Stack[-3] = "boot_repel"
0x47: Stack[-2] = (int) 1
0x48: Stack[-1] = (int) 40
0x49: Call2 0x7d

0x4a: Pop(3)
0x4b: Push((int) 8)
0x4c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: PushEmpty(string, int, int)
0x4f: Stack[-3] = "raincoat_repel"
0x50: Stack[-2] = (int) 1
0x51: Stack[-1] = (int) 80
0x52: Call2 0x7d

0x53: Pop(3)
0x54: PushEmpty(string, int, int, int)
0x55: Stack[-4] = "needle"
0x56: Stack[-3] = (int) 1
0x57: Stack[-2] = (int) 5
0x58: Stack[-1] = (int) 1
0x59: Call2 0x88

0x5a: Pop(4)
0x5b: PushEmpty()
0x5c: Call2 0x5f

0x5d: Pop(0)
0x5e: Return(); Pop(2)

0x5f: @ Hold()
0x60: Pop(0)
0x61: GOTO 0x5f

0x62: Return(); Pop(0)

0x63: PushEmpty(bool, bool, bool, bool)
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 1
0x66: Pop(0); Push((bool) Stack[-6] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: PushEmpty(bool)
0x69: Call2 0x9c

0x6a: Pop(0)
0x6b: Pop(1); Push((bool) Stack[-1] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 0
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: Return(); Pop(4)

0x70: @@ IsOnGround(Stack[-2])
0x71: Pop(0)
0x72: Push(Stack[-2])
0x73: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x74: EventDisable(0)
0x75: @ IsOverrideActive(Stack[-1])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-1] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: @ Barter(Stack[-5])
0x7a: Pop(0)
0x7b: EventEnable(0)
0x7c: Return(); Pop(4)

0x7d: PushEmpty(bool, bool)
0x7e: PushEmpty(bool, int, int)
0x7f: Stack[-2] = Stack[-7]
0x80: Stack[-1] = Stack[-6]
0x81: Call2 0x97

0x82: Pop(2)
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: Push((int) 0)
0x85: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, bool, int, bool)
0x89: PushEmpty(bool, int, int)
0x8a: Stack[-2] = Stack[-10]
0x8b: Stack[-1] = Stack[-9]
0x8c: Call2 0x97

0x8d: Pop(2)
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: @ irand(Stack[-2], Stack[-5])
0x90: Pop(0)
0x91: Push((int) 0)
0x92: Push((int) 1)
0x93: Pop(1); Push(Stack[-4] + Stack[-1]);
0x94: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: Return(); Pop(4)

0x97: PushEmpty(int, int)
0x98: @ irand(Stack[-1], Stack[-3])
0x99: Pop(0)
0x9a: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: Push("nouse_container")
0x9e: @ GetVariable(Stack[-1], Stack[-2])
0x9f: Pop(1)
0xa0: Stack[-3] = !Stack[-1]; Pop(0);
0xa1: Return(); Pop(2)

0xa2: PushEmpty(float, float)
0xa3: @ GetGameTime(Stack[-1])
0xa4: Pop(0)
0xa5: Push((int) 1)
0xa6: PushEmpty(int)
0xa7: Push((int) 24)
0xa8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xaa: Return(); Pop(2)

