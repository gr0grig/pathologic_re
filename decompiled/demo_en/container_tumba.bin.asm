GlobalVarCount = 0

Strings:
	nailed
	GetProperty
	alpha_pills
	tvirin
	lemon
	meradorm
	syringe
	kerosene
	hook
	needle
	Money
	neomicin
	glove_disp
	novocaine
	beta_pills
	Scalpel
	packet
	monomicin
	morfin
	gamma_pills
	feromicin
	delta_pills
	etorfin
	bandage
	tourniquet
	flower
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	glove
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
		EVENT_0 Op = 0x123 Vars = (object)


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
0xc: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xd: PushEmpty(string, int, int, int)
0xe: Stack[-4] = "alpha_pills"
0xf: Stack[-3] = (int) 1
0x10: Stack[-2] = (int) 2
0x11: Stack[-1] = (int) 3
0x12: Call2 0x151

0x13: Pop(4)
0x14: PushEmpty(string, int, int)
0x15: Stack[-3] = "tvirin"
0x16: Stack[-2] = (int) 1
0x17: Stack[-1] = (int) 20
0x18: Call2 0x146

0x19: Pop(3)
0x1a: PushEmpty(string, int, int)
0x1b: Stack[-3] = "lemon"
0x1c: Stack[-2] = (int) 1
0x1d: Stack[-1] = (int) 10
0x1e: Call2 0x146

0x1f: Pop(3)
0x20: PushEmpty(string, int, int)
0x21: Stack[-3] = "meradorm"
0x22: Stack[-2] = (int) 1
0x23: Stack[-1] = (int) 25
0x24: Call2 0x146

0x25: Pop(3)
0x26: PushEmpty(string, int, int)
0x27: Stack[-3] = "syringe"
0x28: Stack[-2] = (int) 1
0x29: Stack[-1] = (int) 20
0x2a: Call2 0x146

0x2b: Pop(3)
0x2c: PushEmpty(string, int, int, int)
0x2d: Stack[-4] = "kerosene"
0x2e: Stack[-3] = (int) 1
0x2f: Stack[-2] = (int) 3
0x30: Stack[-1] = (int) 10
0x31: Call2 0x151

0x32: Pop(4)
0x33: PushEmpty(string, int, int, int)
0x34: Stack[-4] = "hook"
0x35: Stack[-3] = (int) 1
0x36: Stack[-2] = (int) 15
0x37: Stack[-1] = (int) 3
0x38: Call2 0x151

0x39: Pop(4)
0x3a: PushEmpty(string, int, int, int)
0x3b: Stack[-4] = "needle"
0x3c: Stack[-3] = (int) 1
0x3d: Stack[-2] = (int) 5
0x3e: Stack[-1] = (int) 2
0x3f: Call2 0x151

0x40: Pop(4)
0x41: PushEmpty(string, int, int, int)
0x42: Stack[-4] = "Money"
0x43: Stack[-3] = (int) 1
0x44: Stack[-2] = (int) 2
0x45: Stack[-1] = (int) 5
0x46: Call2 0x151

0x47: Pop(4)
0x48: PushEmpty(int)
0x49: Call2 0x16b

0x4a: Stack[-3] = Stack[-1]
0x4b: Pop(1)
0x4c: Push((int) 4)
0x4d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x4f: PushEmpty(string, int, int)
0x50: Stack[-3] = "neomicin"
0x51: Stack[-2] = (int) 1
0x52: Stack[-1] = (int) 15
0x53: Call2 0x146

0x54: Pop(3)
0x55: PushEmpty(string, int, int)
0x56: Stack[-3] = "glove_disp"
0x57: Stack[-2] = (int) 1
0x58: Stack[-1] = (int) 30
0x59: Call2 0x146

0x5a: Pop(3)
0x5b: Push((int) 5)
0x5c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x5e: PushEmpty(string, int, int)
0x5f: Stack[-3] = "novocaine"
0x60: Stack[-2] = (int) 1
0x61: Stack[-1] = (int) 20
0x62: Call2 0x146

0x63: Pop(3)
0x64: PushEmpty(string, int, int, int)
0x65: Stack[-4] = "beta_pills"
0x66: Stack[-3] = (int) 1
0x67: Stack[-2] = (int) 4
0x68: Stack[-1] = (int) 2
0x69: Call2 0x151

0x6a: Pop(4)
0x6b: PushEmpty(string, int, int)
0x6c: Stack[-3] = "Scalpel"
0x6d: Stack[-2] = (int) 1
0x6e: Stack[-1] = (int) 45
0x6f: Call2 0x146

0x70: Pop(3)
0x71: Push((int) 7)
0x72: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x74: PushEmpty(string, int, int)
0x75: Stack[-3] = "packet"
0x76: Stack[-2] = (int) 1
0x77: Stack[-1] = (int) 25
0x78: Call2 0x146

0x79: Pop(3)
0x7a: PushEmpty(string, int, int)
0x7b: Stack[-3] = "monomicin"
0x7c: Stack[-2] = (int) 1
0x7d: Stack[-1] = (int) 25
0x7e: Call2 0x146

0x7f: Pop(3)
0x80: PushEmpty(string, int, int)
0x81: Stack[-3] = "morfin"
0x82: Stack[-2] = (int) 1
0x83: Stack[-1] = (int) 25
0x84: Call2 0x146

0x85: Pop(3)
0x86: PushEmpty(string, int, int, int)
0x87: Stack[-4] = "gamma_pills"
0x88: Stack[-3] = (int) 1
0x89: Stack[-2] = (int) 8
0x8a: Stack[-1] = (int) 2
0x8b: Call2 0x151

0x8c: Pop(4)
0x8d: Push((int) 10)
0x8e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x90: PushEmpty(string, int, int)
0x91: Stack[-3] = "feromicin"
0x92: Stack[-2] = (int) 1
0x93: Stack[-1] = (int) 35
0x94: Call2 0x146

0x95: Pop(3)
0x96: PushEmpty(string, int, int)
0x97: Stack[-3] = "delta_pills"
0x98: Stack[-2] = (int) 1
0x99: Stack[-1] = (int) 16
0x9a: Call2 0x146

0x9b: Pop(3)
0x9c: PushEmpty(string, int, int)
0x9d: Stack[-3] = "etorfin"
0x9e: Stack[-2] = (int) 1
0x9f: Stack[-1] = (int) 40
0xa0: Call2 0x146

0xa1: Pop(3)
0xa2: GOTO 0x11a

0xa3: PushEmpty(int)
0xa4: Call2 0x16b

0xa5: Stack[-2] = Stack[-1]
0xa6: Pop(1)
0xa7: PushEmpty(string, int, int)
0xa8: Stack[-3] = "bandage"
0xa9: Stack[-2] = (int) 1
0xaa: Stack[-1] = (int) 50
0xab: Call2 0x146

0xac: Pop(3)
0xad: PushEmpty(string, int, int)
0xae: Stack[-3] = "tourniquet"
0xaf: Stack[-2] = (int) 1
0xb0: Stack[-1] = (int) 50
0xb1: Call2 0x146

0xb2: Pop(3)
0xb3: PushEmpty(string, int, int, int)
0xb4: Stack[-4] = "alpha_pills"
0xb5: Stack[-3] = (int) 1
0xb6: Stack[-2] = (int) 4
0xb7: Stack[-1] = (int) 3
0xb8: Call2 0x151

0xb9: Pop(4)
0xba: Push((int) 7)
0xbb: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbd: PushEmpty(string, int, int)
0xbe: Stack[-3] = "packet"
0xbf: Stack[-2] = (int) 1
0xc0: Stack[-1] = (int) 50
0xc1: Call2 0x146

0xc2: Pop(3)
0xc3: GOTO 0xca

0xc4: PushEmpty(string, int, int)
0xc5: Stack[-3] = "packet"
0xc6: Stack[-2] = (int) 1
0xc7: Stack[-1] = (int) 20
0xc8: Call2 0x146

0xc9: Pop(3)
0xca: PushEmpty(string, int, int, int)
0xcb: Stack[-4] = "needle"
0xcc: Stack[-3] = (int) 1
0xcd: Stack[-2] = (int) 15
0xce: Stack[-1] = (int) 2
0xcf: Call2 0x151

0xd0: Pop(4)
0xd1: PushEmpty(string, int, int)
0xd2: Stack[-3] = "hook"
0xd3: Stack[-2] = (int) 1
0xd4: Stack[-1] = (int) 5
0xd5: Call2 0x146

0xd6: Pop(3)
0xd7: PushEmpty(string, int, int)
0xd8: Stack[-3] = "flower"
0xd9: Stack[-2] = (int) 1
0xda: Stack[-1] = (int) 10
0xdb: Call2 0x146

0xdc: Pop(3)
0xdd: PushEmpty(string, int, int)
0xde: Stack[-3] = "syringe"
0xdf: Stack[-2] = (int) 1
0xe0: Stack[-1] = (int) 30
0xe1: Call2 0x146

0xe2: Pop(3)
0xe3: PushEmpty(string, int, int)
0xe4: Stack[-3] = "watch"
0xe5: Stack[-2] = (int) 1
0xe6: Stack[-1] = (int) 30
0xe7: Call2 0x146

0xe8: Pop(3)
0xe9: PushEmpty(string, int, int)
0xea: Stack[-3] = "razor"
0xeb: Stack[-2] = (int) 1
0xec: Stack[-1] = (int) 30
0xed: Call2 0x146

0xee: Pop(3)
0xef: PushEmpty(string, int, int)
0xf0: Stack[-3] = "beads"
0xf1: Stack[-2] = (int) 1
0xf2: Stack[-1] = (int) 20
0xf3: Call2 0x146

0xf4: Pop(3)
0xf5: PushEmpty(string, int, int)
0xf6: Stack[-3] = "bracelet"
0xf7: Stack[-2] = (int) 1
0xf8: Stack[-1] = (int) 20
0xf9: Call2 0x146

0xfa: Pop(3)
0xfb: PushEmpty(string, int, int)
0xfc: Stack[-3] = "ear_ring"
0xfd: Stack[-2] = (int) 1
0xfe: Stack[-1] = (int) 20
0xff: Call2 0x146

0x100: Pop(3)
0x101: PushEmpty(string, int, int)
0x102: Stack[-3] = "gold_ring"
0x103: Stack[-2] = (int) 1
0x104: Stack[-1] = (int) 50
0x105: Call2 0x146

0x106: Pop(3)
0x107: PushEmpty(string, int, int)
0x108: Stack[-3] = "silver_ring"
0x109: Stack[-2] = (int) 1
0x10a: Stack[-1] = (int) 30
0x10b: Call2 0x146

0x10c: Pop(3)
0x10d: PushEmpty(string, int, int)
0x10e: Stack[-3] = "glove"
0x10f: Stack[-2] = (int) 1
0x110: Stack[-1] = (int) 80
0x111: Call2 0x146

0x112: Pop(3)
0x113: PushEmpty(string, int, int, int)
0x114: Stack[-4] = "Money"
0x115: Stack[-3] = (int) 1
0x116: Stack[-2] = (int) 2
0x117: Stack[-1] = (int) 3
0x118: Call2 0x151

0x119: Pop(4)
0x11a: PushEmpty()
0x11b: Call2 0x11f

0x11c: Pop(0)
0x11d: Return(); Pop(8)

0x11e: Stack[-4] = 0
0x11f: @ Hold()
0x120: Pop(0)
0x121: GOTO 0x11f

0x122: Return(); Pop(0)

0x123: PushEmpty(bool, bool, int, object, bool, bool, int, object)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 1
0x126: Pop(0); Push((bool) Stack[-10] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x128: PushEmpty(bool)
0x129: Call2 0x165

0x12a: Pop(0)
0x12b: Pop(1); Push((bool) Stack[-1] == 0)
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-1] = (bool) 0
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Return(); Pop(8)

0x130: @@ IsOnGround(Stack[-4])
0x131: Pop(0)
0x132: Push(Stack[-4])
0x133: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x134: EventDisable(0)
0x135: @ IsOverrideActive(Stack[-3])
0x136: Pop(0)
0x137: Pop(0); Push((bool) Stack[-3] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x139: @ GetItemCount(Stack[-2])
0x13a: Pop(0)
0x13b: Push(Stack[-2])
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ GetScene(Stack[-1])
0x13e: Pop(0)
0x13f: @ BroadcastSteal(Stack[-9], Stack[-1])
0x140: Pop(0)
0x141: Stack[-1] = 0
0x142: @ Barter(Stack[-9])
0x143: Pop(0)
0x144: EventEnable(0)
0x145: Return(); Pop(8)

0x146: PushEmpty(bool, bool)
0x147: PushEmpty(bool, int, int)
0x148: Stack[-2] = Stack[-7]
0x149: Stack[-1] = Stack[-6]
0x14a: Call2 0x160

0x14b: Pop(2)
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: Push((int) 0)
0x14e: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x14f: Pop(1)
0x150: Return(); Pop(2)

0x151: PushEmpty(int, bool, int, bool)
0x152: PushEmpty(bool, int, int)
0x153: Stack[-2] = Stack[-10]
0x154: Stack[-1] = Stack[-9]
0x155: Call2 0x160

0x156: Pop(2)
0x157: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x158: @ irand(Stack[-2], Stack[-5])
0x159: Pop(0)
0x15a: Push((int) 0)
0x15b: Push((int) 1)
0x15c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x15d: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x15e: Pop(2)
0x15f: Return(); Pop(4)

0x160: PushEmpty(int, int)
0x161: @ irand(Stack[-1], Stack[-3])
0x162: Pop(0)
0x163: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x164: Return(); Pop(2)

0x165: PushEmpty(int, int)
0x166: Push("nouse_container")
0x167: @ GetVariable(Stack[-1], Stack[-2])
0x168: Pop(1)
0x169: Stack[-3] = !Stack[-1]; Pop(0);
0x16a: Return(); Pop(2)

0x16b: PushEmpty(float, float)
0x16c: @ GetGameTime(Stack[-1])
0x16d: Pop(0)
0x16e: Push((int) 1)
0x16f: PushEmpty(int)
0x170: Push((int) 24)
0x171: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x172: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x173: Return(); Pop(2)

