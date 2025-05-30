GlobalVarCount = 0

Strings:
	revolver_ammo
	rifle_ammo
	alpha_pills
	beta_pills
	gamma_pills
	delta_pills
	tvirin
	lemon
	powder
	neomicin
	monomicin
	feromicin
	meradorm
	novocaine
	morfin
	etorfin
	syringe
	kerosene
	lockpick
	glove_disp
	glove
	mask
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
		EVENT_0 Op = 0x9e Vars = (object)


0x0: PushEmpty(int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(string, int, int, int)
0x5: Stack[-4] = "revolver_ammo"
0x6: Stack[-3] = (int) 1
0x7: Stack[-2] = (int) 15
0x8: Stack[-1] = (int) 2
0x9: Call 0xbd

0xa: Pop(4)
0xb: PushEmpty(string, int, int, int)
0xc: Stack[-4] = "rifle_ammo"
0xd: Stack[-3] = (int) 1
0xe: Stack[-2] = (int) 20
0xf: Stack[-1] = (int) 2
0x10: Call 0xbd

0x11: Pop(4)
0x12: PushEmpty(string, int, int, int)
0x13: Stack[-4] = "alpha_pills"
0x14: Stack[-3] = (int) 1
0x15: Stack[-2] = (int) 3
0x16: Stack[-1] = (int) 4
0x17: Call 0xbd

0x18: Pop(4)
0x19: PushEmpty(string, int, int, int)
0x1a: Stack[-4] = "beta_pills"
0x1b: Stack[-3] = (int) 1
0x1c: Stack[-2] = (int) 6
0x1d: Stack[-1] = (int) 3
0x1e: Call 0xbd

0x1f: Pop(4)
0x20: PushEmpty(string, int, int, int)
0x21: Stack[-4] = "gamma_pills"
0x22: Stack[-3] = (int) 1
0x23: Stack[-2] = (int) 8
0x24: Stack[-1] = (int) 2
0x25: Call 0xbd

0x26: Pop(4)
0x27: PushEmpty(string, int, int)
0x28: Stack[-3] = "delta_pills"
0x29: Stack[-2] = (int) 1
0x2a: Stack[-1] = (int) 12
0x2b: Call 0xb2

0x2c: Pop(3)
0x2d: PushEmpty(string, int, int)
0x2e: Stack[-3] = "tvirin"
0x2f: Stack[-2] = (int) 1
0x30: Stack[-1] = (int) 12
0x31: Call 0xb2

0x32: Pop(3)
0x33: PushEmpty(string, int, int, int)
0x34: Stack[-4] = "lemon"
0x35: Stack[-3] = (int) 1
0x36: Stack[-2] = (int) 10
0x37: Stack[-1] = (int) 2
0x38: Call 0xbd

0x39: Pop(4)
0x3a: PushEmpty(string, int, int)
0x3b: Stack[-3] = "powder"
0x3c: Stack[-2] = (int) 1
0x3d: Stack[-1] = (int) 500
0x3e: Call 0xb2

0x3f: Pop(3)
0x40: PushEmpty(string, int, int)
0x41: Stack[-3] = "neomicin"
0x42: Stack[-2] = (int) 1
0x43: Stack[-1] = (int) 10
0x44: Call 0xb2

0x45: Pop(3)
0x46: PushEmpty(string, int, int)
0x47: Stack[-3] = "monomicin"
0x48: Stack[-2] = (int) 1
0x49: Stack[-1] = (int) 20
0x4a: Call 0xb2

0x4b: Pop(3)
0x4c: PushEmpty(string, int, int)
0x4d: Stack[-3] = "feromicin"
0x4e: Stack[-2] = (int) 1
0x4f: Stack[-1] = (int) 30
0x50: Call 0xb2

0x51: Pop(3)
0x52: PushEmpty(string, int, int)
0x53: Stack[-3] = "meradorm"
0x54: Stack[-2] = (int) 1
0x55: Stack[-1] = (int) 20
0x56: Call 0xb2

0x57: Pop(3)
0x58: PushEmpty(string, int, int)
0x59: Stack[-3] = "novocaine"
0x5a: Stack[-2] = (int) 1
0x5b: Stack[-1] = (int) 10
0x5c: Call 0xb2

0x5d: Pop(3)
0x5e: PushEmpty(string, int, int)
0x5f: Stack[-3] = "morfin"
0x60: Stack[-2] = (int) 1
0x61: Stack[-1] = (int) 20
0x62: Call 0xb2

0x63: Pop(3)
0x64: PushEmpty(string, int, int)
0x65: Stack[-3] = "etorfin"
0x66: Stack[-2] = (int) 1
0x67: Stack[-1] = (int) 30
0x68: Call 0xb2

0x69: Pop(3)
0x6a: PushEmpty(string, int, int)
0x6b: Stack[-3] = "syringe"
0x6c: Stack[-2] = (int) 1
0x6d: Stack[-1] = (int) 20
0x6e: Call 0xb2

0x6f: Pop(3)
0x70: PushEmpty(string, int, int, int)
0x71: Stack[-4] = "kerosene"
0x72: Stack[-3] = (int) 2
0x73: Stack[-2] = (int) 5
0x74: Stack[-1] = (int) 10
0x75: Call 0xbd

0x76: Pop(4)
0x77: PushEmpty(string, int, int)
0x78: Stack[-3] = "lockpick"
0x79: Stack[-2] = (int) 1
0x7a: Stack[-1] = (int) 20
0x7b: Call 0xb2

0x7c: Pop(3)
0x7d: PushEmpty(int)
0x7e: Call 0xd7

0x7f: Stack[-2] = Stack[-1]
0x80: Pop(1)
0x81: Push((int) 3)
0x82: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x84: PushEmpty(string, int, int)
0x85: Stack[-3] = "glove_disp"
0x86: Stack[-2] = (int) 1
0x87: Stack[-1] = (int) 20
0x88: Call 0xb2

0x89: Pop(3)
0x8a: PushEmpty(string, int, int)
0x8b: Stack[-3] = "glove"
0x8c: Stack[-2] = (int) 1
0x8d: Stack[-1] = (int) 20
0x8e: Call 0xb2

0x8f: Pop(3)
0x90: PushEmpty(string, int, int)
0x91: Stack[-3] = "mask"
0x92: Stack[-2] = (int) 1
0x93: Stack[-1] = (int) 40
0x94: Call 0xb2

0x95: Pop(3)
0x96: PushEmpty()
0x97: Call 0x9a

0x98: Pop(0)
0x99: Return(); Pop(2)

0x9a: @ Hold()
0x9b: Pop(0)
0x9c: GOTO 0x9a

0x9d: Return(); Pop(0)

0x9e: PushEmpty(bool, bool, bool, bool)
0x9f: PushEmpty(bool)
0xa0: Call 0xd1

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(4)

0xa5: @@ IsOnGround(Stack[-2])
0xa6: Pop(0)
0xa7: Push(Stack[-2])
0xa8: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa9: EventDisable(0)
0xaa: @ IsOverrideActive(Stack[-1])
0xab: Pop(0)
0xac: Pop(0); Push((bool) Stack[-1] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xae: @ Barter(Stack[-5])
0xaf: Pop(0)
0xb0: EventEnable(0)
0xb1: Return(); Pop(4)

0xb2: PushEmpty(bool, bool)
0xb3: PushEmpty(bool, int, int)
0xb4: Stack[-2] = Stack[-7]
0xb5: Stack[-1] = Stack[-6]
0xb6: Call 0xcc

0xb7: Pop(2)
0xb8: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb9: Push((int) 0)
0xba: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xbb: Pop(1)
0xbc: Return(); Pop(2)

0xbd: PushEmpty(int, bool, int, bool)
0xbe: PushEmpty(bool, int, int)
0xbf: Stack[-2] = Stack[-10]
0xc0: Stack[-1] = Stack[-9]
0xc1: Call 0xcc

0xc2: Pop(2)
0xc3: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc4: @ irand(Stack[-2], Stack[-5])
0xc5: Pop(0)
0xc6: Push((int) 0)
0xc7: Push((int) 1)
0xc8: Pop(1); Push(Stack[-7] + Stack[-1]);
0xc9: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: Return(); Pop(4)

0xcc: PushEmpty(int, int)
0xcd: @ irand(Stack[-1], Stack[-3])
0xce: Pop(0)
0xcf: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xd0: Return(); Pop(2)

0xd1: PushEmpty(int, int)
0xd2: Push("nouse_container")
0xd3: @ GetVariable(Stack[-1], Stack[-2])
0xd4: Pop(1)
0xd5: Stack[-3] = !Stack[-1]; Pop(0);
0xd6: Return(); Pop(2)

0xd7: PushEmpty(float, float)
0xd8: @ GetGameTime(Stack[-1])
0xd9: Pop(0)
0xda: Push((int) 1)
0xdb: PushEmpty(int)
0xdc: Push((int) 24)
0xdd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xde: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xdf: Return(); Pop(2)

