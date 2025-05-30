GlobalVarCount = 0

Strings:
	nailed
	GetProperty
	Rifle
	Revolver
	halfboot_repel
	drapery
	glove_disp
	cloak_repel
	glove
	raincoat_repel
	Money
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	DisableUpdate (0 args)
	GetScene (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetItemCount (1 args)
	BroadcastSteal (2 args)
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
		EVENT_0 Op = 0xa5 Vars = (object)


0x0: PushEmpty(object, bool, int, int, object, bool, int, int)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ DisableUpdate()
0x5: Pop(0)
0x6: @ GetScene(Stack[-4])
0x7: Pop(0)
0x8: Push("nailed")
0x9: @@ GetProperty(Stack[-1], Stack[-4])
0xa: Pop(1)
0xb: Push(Stack[-3])
0xc: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0xd: PushEmpty(string, int, int)
0xe: Stack[-3] = "Rifle"
0xf: Stack[-2] = (int) 1
0x10: Stack[-1] = (int) 250
0x11: Call2 0xc8

0x12: Pop(3)
0x13: PushEmpty(string, int, int)
0x14: Stack[-3] = "Revolver"
0x15: Stack[-2] = (int) 1
0x16: Stack[-1] = (int) 250
0x17: Call2 0xc8

0x18: Pop(3)
0x19: PushEmpty(int)
0x1a: Call2 0xed

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: Push((int) 3)
0x1e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x20: PushEmpty(string, int, int)
0x21: Stack[-3] = "halfboot_repel"
0x22: Stack[-2] = (int) 1
0x23: Stack[-1] = (int) 40
0x24: Call2 0xc8

0x25: Pop(3)
0x26: PushEmpty(string, int, int)
0x27: Stack[-3] = "drapery"
0x28: Stack[-2] = (int) 1
0x29: Stack[-1] = (int) 30
0x2a: Call2 0xc8

0x2b: Pop(3)
0x2c: PushEmpty(string, int, int)
0x2d: Stack[-3] = "glove_disp"
0x2e: Stack[-2] = (int) 1
0x2f: Stack[-1] = (int) 40
0x30: Call2 0xc8

0x31: Pop(3)
0x32: Push((int) 5)
0x33: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x35: PushEmpty(string, int, int)
0x36: Stack[-3] = "cloak_repel"
0x37: Stack[-2] = (int) 1
0x38: Stack[-1] = (int) 40
0x39: Call2 0xc8

0x3a: Pop(3)
0x3b: PushEmpty(string, int, int)
0x3c: Stack[-3] = "glove"
0x3d: Stack[-2] = (int) 1
0x3e: Stack[-1] = (int) 40
0x3f: Call2 0xc8

0x40: Pop(3)
0x41: Push((int) 6)
0x42: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x44: PushEmpty(string, int, int)
0x45: Stack[-3] = "boot_repel"
0x46: Stack[-2] = (int) 1
0x47: Stack[-1] = (int) 70
0x48: Call2 0xc8

0x49: Pop(3)
0x4a: Push((int) 8)
0x4b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4d: PushEmpty(string, int, int)
0x4e: Stack[-3] = "raincoat_repel"
0x4f: Stack[-2] = (int) 1
0x50: Stack[-1] = (int) 60
0x51: Call2 0xc8

0x52: Pop(3)
0x53: PushEmpty(string, int, int, int)
0x54: Stack[-4] = "Money"
0x55: Stack[-3] = (int) 1
0x56: Stack[-2] = (int) 2
0x57: Stack[-1] = (int) 5
0x58: Call2 0xd3

0x59: Pop(4)
0x5a: GOTO 0x9c

0x5b: PushEmpty(int)
0x5c: Call2 0xed

0x5d: Stack[-2] = Stack[-1]
0x5e: Pop(1)
0x5f: Push((int) 3)
0x60: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x62: PushEmpty(string, int, int)
0x63: Stack[-3] = "halfboot_repel"
0x64: Stack[-2] = (int) 1
0x65: Stack[-1] = (int) 60
0x66: Call2 0xc8

0x67: Pop(3)
0x68: PushEmpty(string, int, int)
0x69: Stack[-3] = "drapery"
0x6a: Stack[-2] = (int) 1
0x6b: Stack[-1] = (int) 40
0x6c: Call2 0xc8

0x6d: Pop(3)
0x6e: PushEmpty(string, int, int)
0x6f: Stack[-3] = "glove_disp"
0x70: Stack[-2] = (int) 1
0x71: Stack[-1] = (int) 60
0x72: Call2 0xc8

0x73: Pop(3)
0x74: Push((int) 5)
0x75: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x77: PushEmpty(string, int, int)
0x78: Stack[-3] = "cloak_repel"
0x79: Stack[-2] = (int) 1
0x7a: Stack[-1] = (int) 60
0x7b: Call2 0xc8

0x7c: Pop(3)
0x7d: PushEmpty(string, int, int)
0x7e: Stack[-3] = "glove"
0x7f: Stack[-2] = (int) 1
0x80: Stack[-1] = (int) 60
0x81: Call2 0xc8

0x82: Pop(3)
0x83: Push((int) 8)
0x84: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x86: PushEmpty(string, int, int)
0x87: Stack[-3] = "boot_repel"
0x88: Stack[-2] = (int) 1
0x89: Stack[-1] = (int) 80
0x8a: Call2 0xc8

0x8b: Pop(3)
0x8c: Push((int) 8)
0x8d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8f: PushEmpty(string, int, int)
0x90: Stack[-3] = "raincoat_repel"
0x91: Stack[-2] = (int) 1
0x92: Stack[-1] = (int) 80
0x93: Call2 0xc8

0x94: Pop(3)
0x95: PushEmpty(string, int, int, int)
0x96: Stack[-4] = "Money"
0x97: Stack[-3] = (int) 1
0x98: Stack[-2] = (int) 2
0x99: Stack[-1] = (int) 3
0x9a: Call2 0xd3

0x9b: Pop(4)
0x9c: PushEmpty()
0x9d: Call2 0xa1

0x9e: Pop(0)
0x9f: Return(); Pop(8)

0xa0: Stack[-4] = 0
0xa1: @ Hold()
0xa2: Pop(0)
0xa3: GOTO 0xa1

0xa4: Return(); Pop(0)

0xa5: PushEmpty(bool, bool, int, object, bool, bool, int, object)
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 1
0xa8: Pop(0); Push((bool) Stack[-10] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaa: PushEmpty(bool)
0xab: Call2 0xe7

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Stack[-1] = (bool) 0
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Return(); Pop(8)

0xb2: @@ IsOnGround(Stack[-4])
0xb3: Pop(0)
0xb4: Push(Stack[-4])
0xb5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb6: EventDisable(0)
0xb7: @ IsOverrideActive(Stack[-3])
0xb8: Pop(0)
0xb9: Pop(0); Push((bool) Stack[-3] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbb: @ GetItemCount(Stack[-2])
0xbc: Pop(0)
0xbd: Push(Stack[-2])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: @ GetScene(Stack[-1])
0xc0: Pop(0)
0xc1: @ BroadcastSteal(Stack[-9], Stack[-1])
0xc2: Pop(0)
0xc3: Stack[-1] = 0
0xc4: @ Barter(Stack[-9])
0xc5: Pop(0)
0xc6: EventEnable(0)
0xc7: Return(); Pop(8)

0xc8: PushEmpty(bool, bool)
0xc9: PushEmpty(bool, int, int)
0xca: Stack[-2] = Stack[-7]
0xcb: Stack[-1] = Stack[-6]
0xcc: Call2 0xe2

0xcd: Pop(2)
0xce: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcf: Push((int) 0)
0xd0: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(int, bool, int, bool)
0xd4: PushEmpty(bool, int, int)
0xd5: Stack[-2] = Stack[-10]
0xd6: Stack[-1] = Stack[-9]
0xd7: Call2 0xe2

0xd8: Pop(2)
0xd9: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xda: @ irand(Stack[-2], Stack[-5])
0xdb: Pop(0)
0xdc: Push((int) 0)
0xdd: Push((int) 1)
0xde: Pop(1); Push(Stack[-4] + Stack[-1]);
0xdf: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xe0: Pop(2)
0xe1: Return(); Pop(4)

0xe2: PushEmpty(int, int)
0xe3: @ irand(Stack[-1], Stack[-3])
0xe4: Pop(0)
0xe5: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xe6: Return(); Pop(2)

0xe7: PushEmpty(int, int)
0xe8: Push("nouse_container")
0xe9: @ GetVariable(Stack[-1], Stack[-2])
0xea: Pop(1)
0xeb: Stack[-3] = !Stack[-1]; Pop(0);
0xec: Return(); Pop(2)

0xed: PushEmpty(float, float)
0xee: @ GetGameTime(Stack[-1])
0xef: Pop(0)
0xf0: Push((int) 1)
0xf1: PushEmpty(int)
0xf2: Push((int) 24)
0xf3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf5: Return(); Pop(2)

