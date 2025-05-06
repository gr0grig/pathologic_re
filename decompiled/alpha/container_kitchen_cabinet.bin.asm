GlobalVarCount = 0

Strings:
	nailed
	GetProperty
	Knife
	tvirin
	lemon
	funduk
	peanut
	walnut
	rusk
	dried_fish
	egg
	vegetables
	milk
	dried_meat
	smoked_meat
	fresh_fish
	fresh_meat
	bread
	IsOnGround
	nouse_container

Import:
	SetVisibility (1 args)
	GetScene (1 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	AddItem (3 args)
	irand (2 args)
	AddItem (4 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xa3 Vars = (object)


0x0: PushEmpty(object, bool, object, bool)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ GetScene(Stack[-2])
0x5: Pop(0)
0x6: Push("nailed")
0x7: @@ GetProperty(Stack[-1], Stack[-2])
0x8: Pop(1)
0x9: Push(Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0xb: PushEmpty(string, int, int)
0xc: Stack[-3] = "Knife"
0xd: Stack[-2] = (int) 1
0xe: Stack[-1] = (int) 10
0xf: Call 0xb7

0x10: Pop(3)
0x11: PushEmpty(string, int, int, int)
0x12: Stack[-4] = "tvirin"
0x13: Stack[-3] = (int) 1
0x14: Stack[-2] = (int) 10
0x15: Stack[-1] = (int) 1
0x16: Call 0xc2

0x17: Pop(4)
0x18: PushEmpty(string, int, int, int)
0x19: Stack[-4] = "lemon"
0x1a: Stack[-3] = (int) 1
0x1b: Stack[-2] = (int) 20
0x1c: Stack[-1] = (int) 2
0x1d: Call 0xc2

0x1e: Pop(4)
0x1f: PushEmpty(string, int, int, int)
0x20: Stack[-4] = "funduk"
0x21: Stack[-3] = (int) 1
0x22: Stack[-2] = (int) 40
0x23: Stack[-1] = (int) 1
0x24: Call 0xc2

0x25: Pop(4)
0x26: PushEmpty(string, int, int, int)
0x27: Stack[-4] = "peanut"
0x28: Stack[-3] = (int) 1
0x29: Stack[-2] = (int) 40
0x2a: Stack[-1] = (int) 1
0x2b: Call 0xc2

0x2c: Pop(4)
0x2d: PushEmpty(string, int, int, int)
0x2e: Stack[-4] = "walnut"
0x2f: Stack[-3] = (int) 1
0x30: Stack[-2] = (int) 40
0x31: Stack[-1] = (int) 1
0x32: Call 0xc2

0x33: Pop(4)
0x34: GOTO 0x9a

0x35: PushEmpty(string, int, int)
0x36: Stack[-3] = "Knife"
0x37: Stack[-2] = (int) 1
0x38: Stack[-1] = (int) 20
0x39: Call 0xb7

0x3a: Pop(3)
0x3b: PushEmpty(string, int, int)
0x3c: Stack[-3] = "tvirin"
0x3d: Stack[-2] = (int) 1
0x3e: Stack[-1] = (int) 20
0x3f: Call 0xb7

0x40: Pop(3)
0x41: PushEmpty(string, int, int, int)
0x42: Stack[-4] = "lemon"
0x43: Stack[-3] = (int) 1
0x44: Stack[-2] = (int) 10
0x45: Stack[-1] = (int) 2
0x46: Call 0xc2

0x47: Pop(4)
0x48: PushEmpty(string, int, int, int)
0x49: Stack[-4] = "funduk"
0x4a: Stack[-3] = (int) 1
0x4b: Stack[-2] = (int) 50
0x4c: Stack[-1] = (int) 2
0x4d: Call 0xc2

0x4e: Pop(4)
0x4f: PushEmpty(string, int, int, int)
0x50: Stack[-4] = "peanut"
0x51: Stack[-3] = (int) 1
0x52: Stack[-2] = (int) 50
0x53: Stack[-1] = (int) 2
0x54: Call 0xc2

0x55: Pop(4)
0x56: PushEmpty(string, int, int, int)
0x57: Stack[-4] = "walnut"
0x58: Stack[-3] = (int) 1
0x59: Stack[-2] = (int) 50
0x5a: Stack[-1] = (int) 2
0x5b: Call 0xc2

0x5c: Pop(4)
0x5d: PushEmpty(string, int, int, int)
0x5e: Stack[-4] = "rusk"
0x5f: Stack[-3] = (int) 1
0x60: Stack[-2] = (int) 10
0x61: Stack[-1] = (int) 2
0x62: Call 0xc2

0x63: Pop(4)
0x64: PushEmpty(string, int, int)
0x65: Stack[-3] = "dried_fish"
0x66: Stack[-2] = (int) 1
0x67: Stack[-1] = (int) 50
0x68: Call 0xb7

0x69: Pop(3)
0x6a: PushEmpty(string, int, int)
0x6b: Stack[-3] = "egg"
0x6c: Stack[-2] = (int) 1
0x6d: Stack[-1] = (int) 40
0x6e: Call 0xb7

0x6f: Pop(3)
0x70: PushEmpty(string, int, int)
0x71: Stack[-3] = "vegetables"
0x72: Stack[-2] = (int) 1
0x73: Stack[-1] = (int) 50
0x74: Call 0xb7

0x75: Pop(3)
0x76: PushEmpty(string, int, int)
0x77: Stack[-3] = "milk"
0x78: Stack[-2] = (int) 1
0x79: Stack[-1] = (int) 30
0x7a: Call 0xb7

0x7b: Pop(3)
0x7c: PushEmpty(string, int, int)
0x7d: Stack[-3] = "dried_meat"
0x7e: Stack[-2] = (int) 1
0x7f: Stack[-1] = (int) 50
0x80: Call 0xb7

0x81: Pop(3)
0x82: PushEmpty(string, int, int)
0x83: Stack[-3] = "smoked_meat"
0x84: Stack[-2] = (int) 1
0x85: Stack[-1] = (int) 50
0x86: Call 0xb7

0x87: Pop(3)
0x88: PushEmpty(string, int, int)
0x89: Stack[-3] = "fresh_fish"
0x8a: Stack[-2] = (int) 1
0x8b: Stack[-1] = (int) 50
0x8c: Call 0xb7

0x8d: Pop(3)
0x8e: PushEmpty(string, int, int)
0x8f: Stack[-3] = "fresh_meat"
0x90: Stack[-2] = (int) 1
0x91: Stack[-1] = (int) 50
0x92: Call 0xb7

0x93: Pop(3)
0x94: PushEmpty(string, int, int)
0x95: Stack[-3] = "bread"
0x96: Stack[-2] = (int) 1
0x97: Stack[-1] = (int) 10
0x98: Call 0xb7

0x99: Pop(3)
0x9a: PushEmpty()
0x9b: Call 0x9f

0x9c: Pop(0)
0x9d: Return(); Pop(4)

0x9e: Stack[-2] = 0
0x9f: @ Hold()
0xa0: Pop(0)
0xa1: GOTO 0x9f

0xa2: Return(); Pop(0)

0xa3: PushEmpty(bool, bool, bool, bool)
0xa4: PushEmpty(bool)
0xa5: Call 0xd6

0xa6: Pop(0)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Return(); Pop(4)

0xaa: @@ IsOnGround(Stack[-2])
0xab: Pop(0)
0xac: Push(Stack[-2])
0xad: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xae: EventDisable(0)
0xaf: @ IsOverrideActive(Stack[-1])
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: @ Barter(Stack[-5])
0xb4: Pop(0)
0xb5: EventEnable(0)
0xb6: Return(); Pop(4)

0xb7: PushEmpty(bool, bool)
0xb8: PushEmpty(bool, int, int)
0xb9: Stack[-2] = Stack[-7]
0xba: Stack[-1] = Stack[-6]
0xbb: Call 0xd1

0xbc: Pop(2)
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: Push((int) 0)
0xbf: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xc0: Pop(1)
0xc1: Return(); Pop(2)

0xc2: PushEmpty(int, bool, int, bool)
0xc3: PushEmpty(bool, int, int)
0xc4: Stack[-2] = Stack[-10]
0xc5: Stack[-1] = Stack[-9]
0xc6: Call 0xd1

0xc7: Pop(2)
0xc8: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc9: @ irand(Stack[-2], Stack[-5])
0xca: Pop(0)
0xcb: Push((int) 0)
0xcc: Push((int) 1)
0xcd: Pop(1); Push(Stack[-7] + Stack[-1]);
0xce: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: Return(); Pop(4)

0xd1: PushEmpty(int, int)
0xd2: @ irand(Stack[-1], Stack[-3])
0xd3: Pop(0)
0xd4: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xd5: Return(); Pop(2)

0xd6: PushEmpty(int, int)
0xd7: Push("nouse_container")
0xd8: @ GetVariable(Stack[-1], Stack[-2])
0xd9: Pop(1)
0xda: Stack[-3] = !Stack[-1]; Pop(0);
0xdb: Return(); Pop(2)

