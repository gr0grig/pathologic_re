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
	Money
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

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0xaf Vars = (object)


0x0: PushEmpty(object, bool, object, bool)
0x1: Push((bool) 1)
0x2: @ SetVisibility(Stack[-1])
0x3: Pop(1)
0x4: @ DisableUpdate()
0x5: Pop(0)
0x6: @ GetScene(Stack[-2])
0x7: Pop(0)
0x8: Push("nailed")
0x9: @@ GetProperty(Stack[-1], Stack[-2])
0xa: Pop(1)
0xb: Push(Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0xd: PushEmpty(string, int, int)
0xe: Stack[-3] = "Knife"
0xf: Stack[-2] = (int) 1
0x10: Stack[-1] = (int) 30
0x11: Call2 0xd2

0x12: Pop(3)
0x13: PushEmpty(string, int, int)
0x14: Stack[-3] = "tvirin"
0x15: Stack[-2] = (int) 1
0x16: Stack[-1] = (int) 10
0x17: Call2 0xd2

0x18: Pop(3)
0x19: PushEmpty(string, int, int, int)
0x1a: Stack[-4] = "lemon"
0x1b: Stack[-3] = (int) 1
0x1c: Stack[-2] = (int) 20
0x1d: Stack[-1] = (int) 2
0x1e: Call2 0xdd

0x1f: Pop(4)
0x20: PushEmpty(string, int, int)
0x21: Stack[-3] = "funduk"
0x22: Stack[-2] = (int) 1
0x23: Stack[-1] = (int) 40
0x24: Call2 0xd2

0x25: Pop(3)
0x26: PushEmpty(string, int, int)
0x27: Stack[-3] = "peanut"
0x28: Stack[-2] = (int) 1
0x29: Stack[-1] = (int) 40
0x2a: Call2 0xd2

0x2b: Pop(3)
0x2c: PushEmpty(string, int, int)
0x2d: Stack[-3] = "walnut"
0x2e: Stack[-2] = (int) 1
0x2f: Stack[-1] = (int) 40
0x30: Call2 0xd2

0x31: Pop(3)
0x32: PushEmpty(string, int, int, int)
0x33: Stack[-4] = "Money"
0x34: Stack[-3] = (int) 1
0x35: Stack[-2] = (int) 2
0x36: Stack[-1] = (int) 5
0x37: Call2 0xdd

0x38: Pop(4)
0x39: GOTO 0xa6

0x3a: PushEmpty(string, int, int)
0x3b: Stack[-3] = "Knife"
0x3c: Stack[-2] = (int) 1
0x3d: Stack[-1] = (int) 30
0x3e: Call2 0xd2

0x3f: Pop(3)
0x40: PushEmpty(string, int, int)
0x41: Stack[-3] = "tvirin"
0x42: Stack[-2] = (int) 1
0x43: Stack[-1] = (int) 20
0x44: Call2 0xd2

0x45: Pop(3)
0x46: PushEmpty(string, int, int, int)
0x47: Stack[-4] = "lemon"
0x48: Stack[-3] = (int) 1
0x49: Stack[-2] = (int) 10
0x4a: Stack[-1] = (int) 2
0x4b: Call2 0xdd

0x4c: Pop(4)
0x4d: PushEmpty(string, int, int, int)
0x4e: Stack[-4] = "funduk"
0x4f: Stack[-3] = (int) 1
0x50: Stack[-2] = (int) 50
0x51: Stack[-1] = (int) 2
0x52: Call2 0xdd

0x53: Pop(4)
0x54: PushEmpty(string, int, int, int)
0x55: Stack[-4] = "peanut"
0x56: Stack[-3] = (int) 1
0x57: Stack[-2] = (int) 50
0x58: Stack[-1] = (int) 2
0x59: Call2 0xdd

0x5a: Pop(4)
0x5b: PushEmpty(string, int, int, int)
0x5c: Stack[-4] = "walnut"
0x5d: Stack[-3] = (int) 1
0x5e: Stack[-2] = (int) 50
0x5f: Stack[-1] = (int) 2
0x60: Call2 0xdd

0x61: Pop(4)
0x62: PushEmpty(string, int, int, int)
0x63: Stack[-4] = "rusk"
0x64: Stack[-3] = (int) 1
0x65: Stack[-2] = (int) 10
0x66: Stack[-1] = (int) 2
0x67: Call2 0xdd

0x68: Pop(4)
0x69: PushEmpty(string, int, int)
0x6a: Stack[-3] = "dried_fish"
0x6b: Stack[-2] = (int) 1
0x6c: Stack[-1] = (int) 50
0x6d: Call2 0xd2

0x6e: Pop(3)
0x6f: PushEmpty(string, int, int)
0x70: Stack[-3] = "egg"
0x71: Stack[-2] = (int) 1
0x72: Stack[-1] = (int) 40
0x73: Call2 0xd2

0x74: Pop(3)
0x75: PushEmpty(string, int, int)
0x76: Stack[-3] = "vegetables"
0x77: Stack[-2] = (int) 1
0x78: Stack[-1] = (int) 50
0x79: Call2 0xd2

0x7a: Pop(3)
0x7b: PushEmpty(string, int, int)
0x7c: Stack[-3] = "milk"
0x7d: Stack[-2] = (int) 1
0x7e: Stack[-1] = (int) 30
0x7f: Call2 0xd2

0x80: Pop(3)
0x81: PushEmpty(string, int, int)
0x82: Stack[-3] = "dried_meat"
0x83: Stack[-2] = (int) 1
0x84: Stack[-1] = (int) 50
0x85: Call2 0xd2

0x86: Pop(3)
0x87: PushEmpty(string, int, int)
0x88: Stack[-3] = "smoked_meat"
0x89: Stack[-2] = (int) 1
0x8a: Stack[-1] = (int) 50
0x8b: Call2 0xd2

0x8c: Pop(3)
0x8d: PushEmpty(string, int, int)
0x8e: Stack[-3] = "fresh_fish"
0x8f: Stack[-2] = (int) 1
0x90: Stack[-1] = (int) 50
0x91: Call2 0xd2

0x92: Pop(3)
0x93: PushEmpty(string, int, int)
0x94: Stack[-3] = "fresh_meat"
0x95: Stack[-2] = (int) 1
0x96: Stack[-1] = (int) 50
0x97: Call2 0xd2

0x98: Pop(3)
0x99: PushEmpty(string, int, int)
0x9a: Stack[-3] = "bread"
0x9b: Stack[-2] = (int) 1
0x9c: Stack[-1] = (int) 10
0x9d: Call2 0xd2

0x9e: Pop(3)
0x9f: PushEmpty(string, int, int, int)
0xa0: Stack[-4] = "Money"
0xa1: Stack[-3] = (int) 1
0xa2: Stack[-2] = (int) 2
0xa3: Stack[-1] = (int) 3
0xa4: Call2 0xdd

0xa5: Pop(4)
0xa6: PushEmpty()
0xa7: Call2 0xab

0xa8: Pop(0)
0xa9: Return(); Pop(4)

0xaa: Stack[-2] = 0
0xab: @ Hold()
0xac: Pop(0)
0xad: GOTO 0xab

0xae: Return(); Pop(0)

0xaf: PushEmpty(bool, bool, int, object, bool, bool, int, object)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 1
0xb2: Pop(0); Push((bool) Stack[-10] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb4: PushEmpty(bool)
0xb5: Call2 0xf1

0xb6: Pop(0)
0xb7: Pop(1); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(8)

0xbc: @@ IsOnGround(Stack[-4])
0xbd: Pop(0)
0xbe: Push(Stack[-4])
0xbf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc0: EventDisable(0)
0xc1: @ IsOverrideActive(Stack[-3])
0xc2: Pop(0)
0xc3: Pop(0); Push((bool) Stack[-3] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc5: @ GetItemCount(Stack[-2])
0xc6: Pop(0)
0xc7: Push(Stack[-2])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: @ GetScene(Stack[-1])
0xca: Pop(0)
0xcb: @ BroadcastSteal(Stack[-9], Stack[-1])
0xcc: Pop(0)
0xcd: Stack[-1] = 0
0xce: @ Barter(Stack[-9])
0xcf: Pop(0)
0xd0: EventEnable(0)
0xd1: Return(); Pop(8)

0xd2: PushEmpty(bool, bool)
0xd3: PushEmpty(bool, int, int)
0xd4: Stack[-2] = Stack[-7]
0xd5: Stack[-1] = Stack[-6]
0xd6: Call2 0xec

0xd7: Pop(2)
0xd8: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd9: Push((int) 0)
0xda: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xdb: Pop(1)
0xdc: Return(); Pop(2)

0xdd: PushEmpty(int, bool, int, bool)
0xde: PushEmpty(bool, int, int)
0xdf: Stack[-2] = Stack[-10]
0xe0: Stack[-1] = Stack[-9]
0xe1: Call2 0xec

0xe2: Pop(2)
0xe3: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe4: @ irand(Stack[-2], Stack[-5])
0xe5: Pop(0)
0xe6: Push((int) 0)
0xe7: Push((int) 1)
0xe8: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe9: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: Return(); Pop(4)

0xec: PushEmpty(int, int)
0xed: @ irand(Stack[-1], Stack[-3])
0xee: Pop(0)
0xef: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xf0: Return(); Pop(2)

0xf1: PushEmpty(int, int)
0xf2: Push("nouse_container")
0xf3: @ GetVariable(Stack[-1], Stack[-2])
0xf4: Pop(1)
0xf5: Stack[-3] = !Stack[-1]; Pop(0);
0xf6: Return(); Pop(2)

