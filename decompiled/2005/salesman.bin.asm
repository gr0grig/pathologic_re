GlobalVarCount = 0

Strings:
	Neutral
	all
	idle
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	Updating salesman
	clothes
	weapon
	food
	medcine
	other
	rep_threshold
	player
	head
	GetPosition
	HasProperty
	HasProperty
	GetEyesHeight
	Can't find lsh animation : 
	AddItem
	drapery
	halfboot_repel
	glove_disp
	glove
	cloak_repel
	mask
	raincoat_repel
	glove_army
	boot_army
	balahon
	tourniquet
	alpha_pills
	meradorm
	neomicin
	novocaine
	gamma_pills
	beta_pills
	packet
	morfin
	Scalpel
	monomicin
	etorfin
	feromicin
	delta_pills
	lemon
	rusk
	dried_fish
	smoked_meat
	bread
	egg
	vegetables
	milk
	dried_meat
	fresh_fish
	fresh_meat
	funduk
	peanut
	walnut
	hook
	needle
	kerosene
	rifle_ammo
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	reputation
	GetProperty

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	Trace (1 args)
	GetProperty (2 args)
	ClearSubContainer (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x103
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc2 Vars = (int, int)
	GTASK_3 Vars = (int, int, bool, bool, object, bool, bool, bool, bool, bool, float, int) Params = 0
		EVENT_6 Op = 0x117 Vars = ()
		EVENT_5 Op = 0x11d Vars = ()
		EVENT_0 Op = 0x120 Vars = (object)
		EVENT_7 Op = 0x20e Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x5aa

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x332

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x5aa

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 70.0
0x2d: Call2 0x2a2

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x5a4

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x5a2

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x5a6

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x5a8

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x579

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[-11]
0x59: Stack[-1] = Stack[-6]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1])
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1])
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-1] = Stack[-10]
0x69: Call2 0x2e6

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2])
0x6e: Pop(0)
0x6f: Stack[-10] = Stack[-2]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x78: PushEmpty(string)
0x79: Stack[-1] = "Neutral"
0x7a: Call2 0xac

0x7b: Pop(1)
0x7c: Push((int) 520509)
0x7d: @@ SetMessage(Stack[-1])
0x7e: Pop(1)
0x7f: @@ ClearReplies()
0x80: Pop(0)
0x81: Push((int) 524384)
0x82: Push((int) 25709)
0x83: Push((int) 25708)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: Push((int) 520510)
0x87: Push((int) -1)
0x88: Push((int) 21713)
0x89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a: Pop(3)
0x8b: GOTO 0x8e

0x8c: Return(); Pop(0)

0x8d: GOTO 0x76

0x8e: PushEmpty(bool)
0x8f: Call2 0x5aa

0x90: Pop(0)
0x91: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x92: @ lshWaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: PushEmpty(string)
0x98: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x99: Call2 0x332

0x9a: Pop(1)
0x9b: GOTO 0x92

0x9c: GOTO 0xab

0x9d: Push("all")
0x9e: Push("idle")
0x9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ WaitForAnimEnd()
0xa2: Pop(0)
0xa3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa5: GOTO 0xab

0xa6: Push("all")
0xa7: Push("idle")
0xa8: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xa1

0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Call2 0x5aa

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(0)

0xb6: PushEmpty(string, bool)
0xb7: Stack[-2] = Stack[-3]
0xb8: Push("")
0xb9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-1] = (bool) 0
0xbc: GOTO 0xbe

0xbd: Stack[-1] = (bool) 1
0xbe: Call2 0x342

0xbf: Pop(2)
0xc0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 1)
0xc4: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xc5: PushEmpty()
0xc6: Call2 0x35c

0xc7: Pop(0)
0xc8: Push((int) 21712)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0xac

0xce: Pop(1)
0xcf: Push((int) 520509)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 524384)
0xd5: Push((int) 25709)
0xd6: Push((int) 25708)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 520510)
0xda: Push((int) -1)
0xdb: Push((int) 21713)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 25709)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0xac

0xe5: Pop(1)
0xe6: Push((int) 524385)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 524387)
0xec: Push((int) -1)
0xed: Push((int) 25711)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 524386)
0xf1: Push((int) -1)
0xf2: Push((int) 25710)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x5aa

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xc3

0x102: Return(); Pop(0)

0x103: Stack[11 + Tasks[-1].StackPointer] = (int)-1
0x104: PushEmpty()
0x105: Call2 0x14d

0x106: Pop(0)
0x107: PushEmpty(bool)
0x108: Call2 0x29d

0x109: Pop(0)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: @ Hold()
0x10d: Pop(0)
0x10e: Push((bool) 1)
0x10f: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x110: PushEmpty(float, float)
0x111: Stack[-2] = (int) 300
0x112: Stack[-1] = (int) 100
0x113: Call2 0x1e4

0x114: Pop(2)
0x115: GOTO 0x10e

0x116: Return(); Pop(0)

0x117: PushEmpty()
0x118: Call2 0x225

0x119: Pop(0)
0x11a: @ Hold()
0x11b: Pop(0)
0x11c: Return(); Pop(0)

0x11d: @ StopGroup0()
0x11e: Pop(0)
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: PushEmpty(float, object)
0x122: Stack[-1] = Stack[-3]
0x123: Call2 0x5ac

0x124: Pop(1)
0x125: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] > Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x127: PushEmpty(int, object)
0x128: Stack[-1] = Stack[-3]
0x129: Push(-2, 1); TaskCall(1)
0x12a: Call2 0x28

0x12b: Pop(-2, 1); TaskReturn
0x12c: Pop(2)
0x12d: Return(); Pop(0)

0x12e: PushEmpty(int)
0x12f: Call2 0x3bd

0x130: Pop(0)
0x131: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] != Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x133: Push("Updating salesman")
0x134: @ Trace(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(int)
0x137: Call2 0x3bd

0x138: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x139: Pop(1)
0x13a: PushEmpty()
0x13b: Call2 0x1a4

0x13c: Pop(0)
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[-3]
0x13f: Call2 0x2f7

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[-2]
0x144: Push(-1, 1); TaskCall(0)
0x145: Call2 0x0

0x146: Pop(-1, 1); TaskReturn
0x147: Pop(1)
0x148: PushEmpty(object)
0x149: Stack[-1] = Stack[-2]
0x14a: Call2 0x32e

0x14b: Pop(1)
0x14c: Return(); Pop(0)

0x14d: PushEmpty(int, int, int, int, int, float, int, int, int, int, int, float)
0x14e: PushEmpty(bool, object, string)
0x14f: PushEmpty(object)
0x150: Call2 0x3a8

0x151: Stack[-3] = Stack[-1]
0x152: Pop(1)
0x153: Stack[-1] = "clothes"
0x154: Call2 0x291

0x155: Pop(2)
0x156: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x157: Push("clothes")
0x158: @ GetProperty(Stack[-1], Stack[-7])
0x159: Pop(1)
0x15a: PushEmpty(bool, object, string)
0x15b: PushEmpty(object)
0x15c: Call2 0x3a8

0x15d: Stack[-3] = Stack[-1]
0x15e: Pop(1)
0x15f: Stack[-1] = "weapon"
0x160: Call2 0x291

0x161: Pop(2)
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: Push("weapon")
0x164: @ GetProperty(Stack[-1], Stack[-6])
0x165: Pop(1)
0x166: PushEmpty(bool, object, string)
0x167: PushEmpty(object)
0x168: Call2 0x3a8

0x169: Stack[-3] = Stack[-1]
0x16a: Pop(1)
0x16b: Stack[-1] = "food"
0x16c: Call2 0x291

0x16d: Pop(2)
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: Push("food")
0x170: @ GetProperty(Stack[-1], Stack[-5])
0x171: Pop(1)
0x172: PushEmpty(bool, object, string)
0x173: PushEmpty(object)
0x174: Call2 0x3a8

0x175: Stack[-3] = Stack[-1]
0x176: Pop(1)
0x177: Stack[-1] = "medcine"
0x178: Call2 0x291

0x179: Pop(2)
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: Push("medcine")
0x17c: @ GetProperty(Stack[-1], Stack[-4])
0x17d: Pop(1)
0x17e: PushEmpty(bool, object, string)
0x17f: PushEmpty(object)
0x180: Call2 0x3a8

0x181: Stack[-3] = Stack[-1]
0x182: Pop(1)
0x183: Stack[-1] = "other"
0x184: Call2 0x291

0x185: Pop(2)
0x186: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x187: Push("other")
0x188: @ GetProperty(Stack[-1], Stack[-3])
0x189: Pop(1)
0x18a: PushEmpty(bool, object, string)
0x18b: PushEmpty(object)
0x18c: Call2 0x3a8

0x18d: Stack[-3] = Stack[-1]
0x18e: Pop(1)
0x18f: Stack[-1] = "rep_threshold"
0x190: Call2 0x291

0x191: Pop(2)
0x192: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x193: Push("rep_threshold")
0x194: @ GetProperty(Stack[-1], Stack[-2])
0x195: Pop(1)
0x196: GOTO 0x198

0x197: Stack[-1] = (float) 0.33
0x198: Push((int) 0)
0x199: Stack[5 + Tasks[-1].StackPointer] = Stack[-7] != Stack[-1]; Pop(1);
0x19a: Push((int) 0)
0x19b: Stack[6 + Tasks[-1].StackPointer] = Stack[-6] != Stack[-1]; Pop(1);
0x19c: Push((int) 0)
0x19d: Stack[7 + Tasks[-1].StackPointer] = Stack[-5] != Stack[-1]; Pop(1);
0x19e: Push((int) 0)
0x19f: Stack[8 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x1a0: Push((int) 0)
0x1a1: Stack[9 + Tasks[-1].StackPointer] = Stack[-3] != Stack[-1]; Pop(1);
0x1a2: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(12)

0x1a4: PushEmpty(int, int)
0x1a5: PushEmpty(int)
0x1a6: Call2 0x3bd

0x1a7: Stack[-2] = Stack[-1]
0x1a8: Pop(1)
0x1a9: Push((int) 0)
0x1aa: @ ClearSubContainer(Stack[-1])
0x1ab: Pop(1)
0x1ac: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1ae: PushEmpty(bool, object, int, int)
0x1af: PushEmpty(object)
0x1b0: Call2 0x3a8

0x1b1: Stack[-4] = Stack[-1]
0x1b2: Pop(1)
0x1b3: Stack[-2] = Stack[-5]
0x1b4: Stack[-1] = (int) 1
0x1b5: Call2 0x3c6

0x1b6: Pop(4)
0x1b7: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b9: PushEmpty(bool, object, int, int)
0x1ba: PushEmpty(object)
0x1bb: Call2 0x3a8

0x1bc: Stack[-4] = Stack[-1]
0x1bd: Pop(1)
0x1be: Stack[-2] = Stack[-5]
0x1bf: Stack[-1] = (int) 0
0x1c0: Call2 0x3c6

0x1c1: Pop(4)
0x1c2: Push( Stack[7 + Tasks[-1].StackPointer] )
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c4: PushEmpty(bool, object, int, int)
0x1c5: PushEmpty(object)
0x1c6: Call2 0x3a8

0x1c7: Stack[-4] = Stack[-1]
0x1c8: Pop(1)
0x1c9: Stack[-2] = Stack[-5]
0x1ca: Stack[-1] = (int) 3
0x1cb: Call2 0x3c6

0x1cc: Pop(4)
0x1cd: Push( Stack[8 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1cf: PushEmpty(bool, object, int, int)
0x1d0: PushEmpty(object)
0x1d1: Call2 0x3a8

0x1d2: Stack[-4] = Stack[-1]
0x1d3: Pop(1)
0x1d4: Stack[-2] = Stack[-5]
0x1d5: Stack[-1] = (int) 2
0x1d6: Call2 0x3c6

0x1d7: Pop(4)
0x1d8: Push( Stack[9 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1da: PushEmpty(bool, object, int, int)
0x1db: PushEmpty(object)
0x1dc: Call2 0x3a8

0x1dd: Stack[-4] = Stack[-1]
0x1de: Pop(1)
0x1df: Stack[-2] = Stack[-5]
0x1e0: Stack[-1] = (int) 4
0x1e1: Call2 0x3c6

0x1e2: Pop(4)
0x1e3: Return(); Pop(2)

0x1e4: PushEmpty()
0x1e5: PushEmpty(bool)
0x1e6: Call2 0x29d

0x1e7: Pop(0)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(0)

0x1eb: Push("player")
0x1ec: @ FindActor(Stack[-4], Stack[-1])
0x1ed: Pop(1)
0x1ee: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1ef: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f0: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f2: Push((int) 10)
0x1f3: Push((float)1.0)
0x1f4: @ SetTimer(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: PushEmpty()
0x1f7: Call2 0x233

0x1f8: Pop(0)
0x1f9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fb: Push((int) 10)
0x1fc: @ KillTimer(Stack[-1])
0x1fd: Pop(1)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty(float, float)
0x200: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-3] = (bool) 0
0x203: Return(); Pop(2)

0x204: PushEmpty(float, object)
0x205: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x206: Call2 0x289

0x207: Pop(1)
0x208: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x209: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20c: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20d: Return(); Pop(2)

0x20e: PushEmpty()
0x20f: Push((int) 10)
0x210: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x212: PushEmpty(bool)
0x213: Call2 0x1ff

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x216: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: PushEmpty(object)
0x219: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21a: Call2 0x351

0x21b: Pop(1)
0x21c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21d: GOTO 0x224

0x21e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x220: Push("head")
0x221: @ UnlookAsync(Stack[-1])
0x222: Pop(1)
0x223: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: Call2 0x284

0x227: Pop(0)
0x228: Push((int) 10)
0x229: @ KillTimer(Stack[-1])
0x22a: Pop(1)
0x22b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: Push("head")
0x22e: @ UnlookAsync(Stack[-1])
0x22f: Pop(1)
0x230: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x231: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x232: Return(); Pop(0)

0x233: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x234: @ WaitForAnimEnd()
0x235: Pop(0)
0x236: PushEmpty(bool)
0x237: Call2 0x29d

0x238: Pop(0)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Return(); Pop(14)

0x23c: PushEmpty(int)
0x23d: Call2 0x591

0x23e: Stack[-8] = Stack[-1]
0x23f: Pop(1)
0x240: Stack[-6] = (int) 0
0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: Push((int) 5)
0x244: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: PushEmpty(bool)
0x247: Call2 0x29d

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: Stack[-1] = (bool) 1
0x24b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x24c: Push((int) 3)
0x24d: @ irand(Stack[-6], Stack[-1])
0x24e: Pop(1)
0x24f: Push((int) 0)
0x250: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x252: Push(Stack[-7])
0x253: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x254: @ irand(Stack[-4], Stack[-7])
0x255: Pop(0)
0x256: Push("all")
0x257: PushEmpty(string, int)
0x258: Stack[-1] = Stack[-7]
0x259: Call2 0x58a

0x25a: Pop(1)
0x25b: @ PlayAnimation(Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: @ WaitForAnimEnd(Stack[-3])
0x25e: Pop(0)
0x25f: Pop(0); Push((bool) Stack[-3] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x27f

0x262: GOTO 0x274

0x263: Push((int) 1)
0x264: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x266: Push((int) 4)
0x267: @ rand(Stack[-3], Stack[-1])
0x268: Pop(1)
0x269: Push((int) 1)
0x26a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26b: @ Sleep(Stack[-1], Stack[-2])
0x26c: Pop(1)
0x26d: Pop(0); Push((bool) Stack[-1] == 0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x27f

0x270: GOTO 0x274

0x271: Push(Stack[-6])
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x27f

0x274: PushEmpty(bool)
0x275: Call2 0x282

0x276: Pop(0)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x27f

0x27a: @ ResetAAS()
0x27b: Pop(0)
0x27c: Push((int) 1)
0x27d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27e: GOTO 0x241

0x27f: @ ResetAAS()
0x280: Pop(0)
0x281: Return(); Pop(14)

0x282: Stack[-1] = (bool) 1
0x283: Return(); Pop(0)

0x284: @ StopAnimation()
0x285: Pop(0)
0x286: @ StopGroup0()
0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28a: @ GetPosition(Stack[-3])
0x28b: Pop(0)
0x28c: @@ GetPosition(Stack[-2])
0x28d: Pop(0)
0x28e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x28f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x290: Return(); Pop(6)

0x291: PushEmpty(bool, bool)
0x292: Push("HasProperty")
0x293: Push((int) 2)
0x294: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: Stack[-5] = (bool) 0
0x298: Return(); Pop(2)

0x299: @@ HasProperty(Stack[-3], Stack[-1])
0x29a: Pop(0)
0x29b: Stack[-5] = Stack[-1]
0x29c: Return(); Pop(2)

0x29d: PushEmpty(bool, bool)
0x29e: @ IsLoaded(Stack[-1])
0x29f: Pop(0)
0x2a0: Stack[-3] = Stack[-1]
0x2a1: Return(); Pop(2)

0x2a2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a3: @@ GetPosition(Stack[-8])
0x2a4: Pop(0)
0x2a5: @@ GetEyesHeight(Stack[-9])
0x2a6: Pop(0)
0x2a7: Push(CvectorIndex(Stack[-8], 1))
0x2a8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2aa: @ GetPosition(Stack[-7])
0x2ab: Pop(0)
0x2ac: @ GetEyesHeight(Stack[-9])
0x2ad: Pop(0)
0x2ae: Push(CvectorIndex(Stack[-7], 1))
0x2af: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b2: Push(CvectorIndex(Stack[-6], 1))
0x2b3: Stack[-1] = (int) 0
0x2b4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2b6: Pop(1); Push(Sqrt(Stack[-1]))
0x2b7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b8: Stack[-5] = -Stack[-6]; Pop(0);
0x2b9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2ba: PushEmpty(cvector, cvector)
0x2bb: Push(CVector(0.0, 1.0, 0.0))
0x2bc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2bd: Call2 0x3ae

0x2be: Pop(1)
0x2bf: Push((int) 25)
0x2c0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c2: Push(CVector(0.0, 10.0, 0.0))
0x2c3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2c4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2c5: @ IsOverrideActive(Stack[-2])
0x2c6: Pop(0)
0x2c7: Push(Stack[-2])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-21] = (bool) 0
0x2ca: Return(); Pop(18)

0x2cb: @ StopWorld()
0x2cc: Pop(0)
0x2cd: @ CameraTransit(Stack[-3], Stack[-5])
0x2ce: Pop(0)
0x2cf: Push(CvectorIndex(Stack[-4], 0))
0x2d0: Push(CvectorIndex(Stack[-5], 2))
0x2d1: @ Rotate(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: PushEmpty(bool)
0x2d4: Call2 0x5aa

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2e0

0x2d8: Push("head")
0x2d9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Push(Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2dd: Push("head")
0x2de: @ LookAsyncCamera(Stack[-1])
0x2df: Pop(1)
0x2e0: @ CameraWaitForPlayFinish()
0x2e1: Pop(0)
0x2e2: @ ResumeWorld()
0x2e3: Pop(0)
0x2e4: Stack[-21] = (bool) 1
0x2e5: Return(); Pop(18)

0x2e6: PushEmpty(bool, bool)
0x2e7: @ CameraSwitchToNormal()
0x2e8: Pop(0)
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x5aa

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2f6

0x2ee: Push("head")
0x2ef: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f0: Pop(1)
0x2f1: Push(Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push("head")
0x2f4: @ UnlookAsync(Stack[-1])
0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty()
0x2f8: PushEmpty(bool, object, float)
0x2f9: Stack[-2] = Stack[-4]
0x2fa: Stack[-1] = (int) 70
0x2fb: Call2 0x2ff

0x2fc: Stack[-5] = Stack[-3]
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x300: @@ GetPosition(Stack[-7])
0x301: Pop(0)
0x302: @@ GetEyesHeight(Stack[-8])
0x303: Pop(0)
0x304: Push(CvectorIndex(Stack[-7], 1))
0x305: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x306: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x307: @ GetPosition(Stack[-6])
0x308: Pop(0)
0x309: @ GetEyesHeight(Stack[-8])
0x30a: Pop(0)
0x30b: Push(CvectorIndex(Stack[-6], 1))
0x30c: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x30d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x30e: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x30f: Push(CvectorIndex(Stack[-5], 1))
0x310: Stack[-1] = (int) 0
0x311: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x312: Pop(0); Push(Stack[-5] | Stack[-5]);
0x313: Pop(1); Push(Sqrt(Stack[-1]))
0x314: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x315: Stack[-4] = -Stack[-5]; Pop(0);
0x316: Pop(0); Push(Stack[-5] * Stack[-17]);
0x317: Push(CVector(0.0, 10.0, 0.0))
0x318: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x319: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x31a: @ IsOverrideActive(Stack[-1])
0x31b: Pop(0)
0x31c: Push(Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-19] = (bool) 0
0x31f: Return(); Pop(16)

0x320: @ StopWorld()
0x321: Pop(0)
0x322: @ CameraTransit(Stack[-2], Stack[-4])
0x323: Pop(0)
0x324: Push(CvectorIndex(Stack[-3], 0))
0x325: Push(CvectorIndex(Stack[-4], 2))
0x326: @ Rotate(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: @ CameraWaitForPlayFinish()
0x329: Pop(0)
0x32a: @ ResumeWorld()
0x32b: Pop(0)
0x32c: Stack[-19] = (bool) 1
0x32d: Return(); Pop(16)

0x32e: PushEmpty()
0x32f: @ CameraSwitchToNormal()
0x330: Pop(0)
0x331: Return(); Pop(0)

0x332: PushEmpty(bool, float, float, bool, float, float)
0x333: @ lshHasAnimation(Stack[-3], Stack[-7])
0x334: Pop(0)
0x335: Push(Stack[-3])
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x338: Pop(0)
0x339: Push((bool) 0)
0x33a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(1)
0x33c: GOTO 0x341

0x33d: Push("Can't find lsh animation : ")
0x33e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x33f: @ Trace(Stack[-1])
0x340: Pop(1)
0x341: Return(); Pop(6)

0x342: PushEmpty(bool, float, float, bool, float, float)
0x343: @ lshHasAnimation(Stack[-3], Stack[-8])
0x344: Pop(0)
0x345: Push(Stack[-3])
0x346: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x347: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x348: Pop(0)
0x349: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x34a: Pop(0)
0x34b: GOTO 0x350

0x34c: Push("Can't find lsh animation : ")
0x34d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x34e: @ Trace(Stack[-1])
0x34f: Pop(1)
0x350: Return(); Pop(6)

0x351: PushEmpty(float, cvector, float, cvector)
0x352: @@ GetEyesHeight(Stack[-2])
0x353: Pop(0)
0x354: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x355: Push(CvectorIndex(Stack[-1], 1))
0x356: Stack[-1] = Stack[-3]
0x357: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x358: Push("head")
0x359: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x35a: Pop(1)
0x35b: Return(); Pop(4)

0x35c: PushEmpty(bool)
0x35d: Call2 0x5aa

0x35e: Pop(0)
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: @ lshStopSpeech()
0x361: Pop(0)
0x362: Return(); Pop(0)

0x363: PushEmpty(bool, bool)
0x364: PushEmpty(bool, int, int)
0x365: Stack[-2] = Stack[-7]
0x366: Stack[-1] = Stack[-6]
0x367: Call2 0x3b8

0x368: Pop(2)
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: Push((int) 0)
0x36b: @@ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x36c: Pop(1)
0x36d: Return(); Pop(2)

0x36e: PushEmpty(int, bool, int, bool)
0x36f: PushEmpty(bool, int, int)
0x370: Stack[-2] = Stack[-10]
0x371: Stack[-1] = Stack[-9]
0x372: Call2 0x3b8

0x373: Pop(2)
0x374: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x375: @ irand(Stack[-2], Stack[-5])
0x376: Pop(0)
0x377: Push((int) 0)
0x378: Push((int) 1)
0x379: Pop(1); Push(Stack[-7] + Stack[-1]);
0x37a: @@ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: Return(); Pop(4)

0x37d: PushEmpty(bool, bool)
0x37e: PushEmpty(bool, int, int)
0x37f: Stack[-2] = Stack[-7]
0x380: Stack[-1] = Stack[-6]
0x381: Call2 0x3b8

0x382: Pop(2)
0x383: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x384: Push((int) 0)
0x385: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x386: Pop(1)
0x387: Return(); Pop(2)

0x388: PushEmpty(int, bool, int, bool)
0x389: PushEmpty(bool, int, int)
0x38a: Stack[-2] = Stack[-10]
0x38b: Stack[-1] = Stack[-9]
0x38c: Call2 0x3b8

0x38d: Pop(2)
0x38e: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38f: @ irand(Stack[-2], Stack[-5])
0x390: Pop(0)
0x391: Push((int) 0)
0x392: Push((int) 1)
0x393: Pop(1); Push(Stack[-4] + Stack[-1]);
0x394: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: Return(); Pop(4)

0x397: PushEmpty(int, bool, int, bool)
0x398: PushEmpty(bool, int, int)
0x399: Stack[-2] = Stack[-11]
0x39a: Stack[-1] = Stack[-10]
0x39b: Call2 0x3b8

0x39c: Pop(2)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x39e: Pop(0); Push(Stack[-5] - Stack[-6]);
0x39f: Push((int) 1)
0x3a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a1: @ irand(Stack[-3], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push((int) 0)
0x3a4: Pop(0); Push(Stack[-3] + Stack[-7]);
0x3a5: @ AddItem(Stack[-3], Stack[-11], Stack[-2], Stack[-1])
0x3a6: Pop(2)
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty(object, object)
0x3a9: @ self(Stack[-1])
0x3aa: Pop(0)
0x3ab: Stack[-3] = Stack[-1]
0x3ac: Return(); Pop(2)

0x3ad: Stack[-1] = 0
0x3ae: PushEmpty(float, float)
0x3af: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b1: Push((float)0.0)
0x3b2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3b5: Return(); Pop(2)

0x3b6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3b7: Return(); Pop(2)

0x3b8: PushEmpty(int, int)
0x3b9: @ irand(Stack[-1], Stack[-3])
0x3ba: Pop(0)
0x3bb: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x3bc: Return(); Pop(2)

0x3bd: PushEmpty(float, float)
0x3be: @ GetGameTime(Stack[-1])
0x3bf: Pop(0)
0x3c0: Push((int) 1)
0x3c1: PushEmpty(int)
0x3c2: Push((int) 24)
0x3c3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3c4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty()
0x3c7: Push((int) 0)
0x3c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ca: PushEmpty(bool, object, int)
0x3cb: Stack[-2] = Stack[-6]
0x3cc: Stack[-1] = Stack[-5]
0x3cd: Call2 0x3f9

0x3ce: Stack[-7] = Stack[-3]
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: GOTO 0x3f2

0x3d2: Push((int) 1)
0x3d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d5: PushEmpty(bool, object, int)
0x3d6: Stack[-2] = Stack[-6]
0x3d7: Stack[-1] = Stack[-5]
0x3d8: Call2 0x3fc

0x3d9: Stack[-7] = Stack[-3]
0x3da: Pop(3)
0x3db: Return(); Pop(0)

0x3dc: GOTO 0x3f2

0x3dd: Push((int) 2)
0x3de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e0: PushEmpty(bool, object, int)
0x3e1: Stack[-2] = Stack[-6]
0x3e2: Stack[-1] = Stack[-5]
0x3e3: Call2 0x459

0x3e4: Stack[-7] = Stack[-3]
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: GOTO 0x3f2

0x3e8: Push((int) 3)
0x3e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3eb: PushEmpty(bool, object, int)
0x3ec: Stack[-2] = Stack[-6]
0x3ed: Stack[-1] = Stack[-5]
0x3ee: Call2 0x4d2

0x3ef: Stack[-7] = Stack[-3]
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: PushEmpty(bool, object, int)
0x3f3: Stack[-2] = Stack[-6]
0x3f4: Stack[-1] = Stack[-5]
0x3f5: Call2 0x557

0x3f6: Stack[-7] = Stack[-3]
0x3f7: Pop(3)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: Stack[-3] = (bool) 1
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty()
0x3fd: PushEmpty(string, int, int)
0x3fe: Stack[-3] = "drapery"
0x3ff: Stack[-2] = (int) 1
0x400: Stack[-1] = (int) 2
0x401: Call2 0x37d

0x402: Pop(3)
0x403: Push((int) 2)
0x404: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x406: PushEmpty(string, int, int)
0x407: Stack[-3] = "halfboot_repel"
0x408: Stack[-2] = (int) 1
0x409: Stack[-1] = (int) 3
0x40a: Call2 0x37d

0x40b: Pop(3)
0x40c: PushEmpty(string, int, int)
0x40d: Stack[-3] = "glove_disp"
0x40e: Stack[-2] = (int) 1
0x40f: Stack[-1] = (int) 3
0x410: Call2 0x37d

0x411: Pop(3)
0x412: PushEmpty(string, int, int)
0x413: Stack[-3] = "drapery"
0x414: Stack[-2] = (int) 1
0x415: Stack[-1] = (int) 3
0x416: Call2 0x37d

0x417: Pop(3)
0x418: Push((int) 4)
0x419: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x41b: PushEmpty(string, int, int)
0x41c: Stack[-3] = "glove"
0x41d: Stack[-2] = (int) 1
0x41e: Stack[-1] = (int) 4
0x41f: Call2 0x37d

0x420: Pop(3)
0x421: PushEmpty(string, int, int)
0x422: Stack[-3] = "cloak_repel"
0x423: Stack[-2] = (int) 1
0x424: Stack[-1] = (int) 4
0x425: Call2 0x37d

0x426: Pop(3)
0x427: Push((int) 5)
0x428: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x42a: PushEmpty(string, int, int)
0x42b: Stack[-3] = "mask"
0x42c: Stack[-2] = (int) 1
0x42d: Stack[-1] = (int) 8
0x42e: Call2 0x37d

0x42f: Pop(3)
0x430: PushEmpty(string, int, int)
0x431: Stack[-3] = "boot_repel"
0x432: Stack[-2] = (int) 1
0x433: Stack[-1] = (int) 4
0x434: Call2 0x37d

0x435: Pop(3)
0x436: Push((int) 7)
0x437: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x439: PushEmpty(string, int, int)
0x43a: Stack[-3] = "raincoat_repel"
0x43b: Stack[-2] = (int) 1
0x43c: Stack[-1] = (int) 4
0x43d: Call2 0x37d

0x43e: Pop(3)
0x43f: Push((int) 9)
0x440: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x442: PushEmpty(string, int, int)
0x443: Stack[-3] = "glove_army"
0x444: Stack[-2] = (int) 1
0x445: Stack[-1] = (int) 5
0x446: Call2 0x37d

0x447: Pop(3)
0x448: PushEmpty(string, int, int)
0x449: Stack[-3] = "boot_army"
0x44a: Stack[-2] = (int) 1
0x44b: Stack[-1] = (int) 5
0x44c: Call2 0x37d

0x44d: Pop(3)
0x44e: Push((int) 10)
0x44f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x451: PushEmpty(string, int, int)
0x452: Stack[-3] = "balahon"
0x453: Stack[-2] = (int) 1
0x454: Stack[-1] = (int) 9
0x455: Call2 0x37d

0x456: Pop(3)
0x457: Stack[-3] = (bool) 1
0x458: Return(); Pop(0)

0x459: PushEmpty(bool, bool)
0x45a: PushEmpty(object, string, int, int, int)
0x45b: Stack[-5] = Stack[-9]
0x45c: Stack[-4] = "tourniquet"
0x45d: Stack[-3] = (int) 1
0x45e: Stack[-2] = (int) 2
0x45f: Stack[-1] = (int) 10
0x460: Call2 0x36e

0x461: Pop(5)
0x462: PushEmpty(object, string, int, int, int)
0x463: Stack[-5] = Stack[-9]
0x464: Stack[-4] = "alpha_pills"
0x465: Stack[-3] = (int) 1
0x466: Stack[-2] = (int) 1
0x467: Stack[-1] = (int) 10
0x468: Call2 0x36e

0x469: Pop(5)
0x46a: PushEmpty(object, string, int, int, int)
0x46b: Stack[-5] = Stack[-9]
0x46c: Stack[-4] = "meradorm"
0x46d: Stack[-3] = (int) 1
0x46e: Stack[-2] = (int) 1
0x46f: Stack[-1] = (int) 2
0x470: Call2 0x36e

0x471: Pop(5)
0x472: Push((int) 3)
0x473: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x475: PushEmpty(object, string, int, int, int)
0x476: Stack[-5] = Stack[-9]
0x477: Stack[-4] = "neomicin"
0x478: Stack[-3] = (int) 1
0x479: Stack[-2] = (int) 1
0x47a: Stack[-1] = (int) 2
0x47b: Call2 0x36e

0x47c: Pop(5)
0x47d: Push((int) 4)
0x47e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x480: PushEmpty(object, string, int, int)
0x481: Stack[-4] = Stack[-8]
0x482: Stack[-3] = "novocaine"
0x483: Stack[-2] = (int) 1
0x484: Stack[-1] = (int) 2
0x485: Call2 0x363

0x486: Pop(4)
0x487: PushEmpty(object, string, int, int, int)
0x488: Stack[-5] = Stack[-9]
0x489: Stack[-4] = "gamma_pills"
0x48a: Stack[-3] = (int) 1
0x48b: Stack[-2] = (int) 2
0x48c: Stack[-1] = (int) 2
0x48d: Call2 0x36e

0x48e: Pop(5)
0x48f: PushEmpty(object, string, int, int, int)
0x490: Stack[-5] = Stack[-9]
0x491: Stack[-4] = "beta_pills"
0x492: Stack[-3] = (int) 1
0x493: Stack[-2] = (int) 2
0x494: Stack[-1] = (int) 2
0x495: Call2 0x36e

0x496: Pop(5)
0x497: Push((int) 6)
0x498: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x49a: PushEmpty(object, string, int, int)
0x49b: Stack[-4] = Stack[-8]
0x49c: Stack[-3] = "packet"
0x49d: Stack[-2] = (int) 1
0x49e: Stack[-1] = (int) 4
0x49f: Call2 0x363

0x4a0: Pop(4)
0x4a1: PushEmpty(object, string, int, int)
0x4a2: Stack[-4] = Stack[-8]
0x4a3: Stack[-3] = "morfin"
0x4a4: Stack[-2] = (int) 1
0x4a5: Stack[-1] = (int) 2
0x4a6: Call2 0x363

0x4a7: Pop(4)
0x4a8: PushEmpty(object, string, int, int)
0x4a9: Stack[-4] = Stack[-8]
0x4aa: Stack[-3] = "Scalpel"
0x4ab: Stack[-2] = (int) 1
0x4ac: Stack[-1] = (int) 8
0x4ad: Call2 0x363

0x4ae: Pop(4)
0x4af: PushEmpty(object, string, int, int, int)
0x4b0: Stack[-5] = Stack[-9]
0x4b1: Stack[-4] = "monomicin"
0x4b2: Stack[-3] = (int) 1
0x4b3: Stack[-2] = (int) 2
0x4b4: Stack[-1] = (int) 2
0x4b5: Call2 0x36e

0x4b6: Pop(5)
0x4b7: Push((int) 9)
0x4b8: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ba: PushEmpty(object, string, int, int)
0x4bb: Stack[-4] = Stack[-8]
0x4bc: Stack[-3] = "etorfin"
0x4bd: Stack[-2] = (int) 1
0x4be: Stack[-1] = (int) 2
0x4bf: Call2 0x363

0x4c0: Pop(4)
0x4c1: PushEmpty(object, string, int, int)
0x4c2: Stack[-4] = Stack[-8]
0x4c3: Stack[-3] = "feromicin"
0x4c4: Stack[-2] = (int) 1
0x4c5: Stack[-1] = (int) 2
0x4c6: Call2 0x363

0x4c7: Pop(4)
0x4c8: PushEmpty(object, string, int, int, int)
0x4c9: Stack[-5] = Stack[-9]
0x4ca: Stack[-4] = "delta_pills"
0x4cb: Stack[-3] = (int) 1
0x4cc: Stack[-2] = (int) 2
0x4cd: Stack[-1] = (int) 2
0x4ce: Call2 0x36e

0x4cf: Pop(5)
0x4d0: Stack[-5] = (bool) 1
0x4d1: Return(); Pop(2)

0x4d2: PushEmpty(bool, int, int, bool, int, int)
0x4d3: Push((int) 3)
0x4d4: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-1] = (int) 2
0x4d7: GOTO 0x4e8

0x4d8: Push((int) 5)
0x4d9: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-1] = (int) 3
0x4dc: GOTO 0x4e8

0x4dd: Push((int) 7)
0x4de: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e0: Stack[-1] = (int) 3
0x4e1: GOTO 0x4e8

0x4e2: Push((int) 7)
0x4e3: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-1] = (int) 4
0x4e6: GOTO 0x4e8

0x4e7: Stack[-1] = (int) 5
0x4e8: PushEmpty(string, int, int)
0x4e9: Stack[-3] = "lemon"
0x4ea: Stack[-2] = (int) 1
0x4eb: Stack[-1] = Stack[-4]
0x4ec: Call2 0x37d

0x4ed: Pop(3)
0x4ee: PushEmpty(string, int, int)
0x4ef: Stack[-3] = "rusk"
0x4f0: Stack[-2] = (int) 1
0x4f1: Stack[-1] = Stack[-4]
0x4f2: Call2 0x37d

0x4f3: Pop(3)
0x4f4: Push((int) 2)
0x4f5: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x4f7: PushEmpty(string, int, int, int)
0x4f8: Stack[-4] = "dried_fish"
0x4f9: Stack[-3] = (int) 1
0x4fa: Stack[-2] = (int) 1
0x4fb: Stack[-1] = (int) 2
0x4fc: Call2 0x388

0x4fd: Pop(4)
0x4fe: PushEmpty(string, int, int, int)
0x4ff: Stack[-4] = "smoked_meat"
0x500: Stack[-3] = (int) 1
0x501: Stack[-2] = (int) 1
0x502: Stack[-1] = (int) 2
0x503: Call2 0x388

0x504: Pop(4)
0x505: PushEmpty(string, int, int, int)
0x506: Stack[-4] = "bread"
0x507: Stack[-3] = (int) 1
0x508: Stack[-2] = (int) 1
0x509: Stack[-1] = (int) 2
0x50a: Call2 0x388

0x50b: Pop(4)
0x50c: GOTO 0x51f

0x50d: PushEmpty(string, int, int)
0x50e: Stack[-3] = "dried_fish"
0x50f: Stack[-2] = (int) 1
0x510: Stack[-1] = Stack[-4]
0x511: Call2 0x37d

0x512: Pop(3)
0x513: PushEmpty(string, int, int)
0x514: Stack[-3] = "smoked_meat"
0x515: Stack[-2] = (int) 1
0x516: Stack[-1] = Stack[-4]
0x517: Call2 0x37d

0x518: Pop(3)
0x519: PushEmpty(string, int, int)
0x51a: Stack[-3] = "bread"
0x51b: Stack[-2] = (int) 1
0x51c: Stack[-1] = Stack[-4]
0x51d: Call2 0x37d

0x51e: Pop(3)
0x51f: PushEmpty(string, int, int)
0x520: Stack[-3] = "egg"
0x521: Stack[-2] = (int) 1
0x522: Stack[-1] = Stack[-4]
0x523: Call2 0x37d

0x524: Pop(3)
0x525: PushEmpty(string, int, int)
0x526: Stack[-3] = "vegetables"
0x527: Stack[-2] = (int) 1
0x528: Stack[-1] = Stack[-4]
0x529: Call2 0x37d

0x52a: Pop(3)
0x52b: PushEmpty(string, int, int)
0x52c: Stack[-3] = "milk"
0x52d: Stack[-2] = (int) 1
0x52e: Stack[-1] = Stack[-4]
0x52f: Call2 0x37d

0x530: Pop(3)
0x531: PushEmpty(string, int, int)
0x532: Stack[-3] = "dried_meat"
0x533: Stack[-2] = (int) 1
0x534: Stack[-1] = Stack[-4]
0x535: Call2 0x37d

0x536: Pop(3)
0x537: PushEmpty(string, int, int)
0x538: Stack[-3] = "fresh_fish"
0x539: Stack[-2] = (int) 1
0x53a: Stack[-1] = Stack[-4]
0x53b: Call2 0x37d

0x53c: Pop(3)
0x53d: PushEmpty(string, int, int)
0x53e: Stack[-3] = "fresh_meat"
0x53f: Stack[-2] = (int) 1
0x540: Stack[-1] = Stack[-4]
0x541: Call2 0x37d

0x542: Pop(3)
0x543: PushEmpty(string, int, int)
0x544: Stack[-3] = "funduk"
0x545: Stack[-2] = (int) 1
0x546: Stack[-1] = (int) 20
0x547: Call2 0x37d

0x548: Pop(3)
0x549: PushEmpty(string, int, int)
0x54a: Stack[-3] = "peanut"
0x54b: Stack[-2] = (int) 1
0x54c: Stack[-1] = (int) 20
0x54d: Call2 0x37d

0x54e: Pop(3)
0x54f: PushEmpty(string, int, int)
0x550: Stack[-3] = "walnut"
0x551: Stack[-2] = (int) 1
0x552: Stack[-1] = (int) 20
0x553: Call2 0x37d

0x554: Pop(3)
0x555: Stack[-9] = (bool) 1
0x556: Return(); Pop(6)

0x557: PushEmpty()
0x558: PushEmpty(string, int, int)
0x559: Stack[-3] = "hook"
0x55a: Stack[-2] = (int) 1
0x55b: Stack[-1] = (int) 5
0x55c: Call2 0x37d

0x55d: Pop(3)
0x55e: PushEmpty(string, int, int, int)
0x55f: Stack[-4] = "needle"
0x560: Stack[-3] = (int) 2
0x561: Stack[-2] = (int) 3
0x562: Stack[-1] = (int) 3
0x563: Call2 0x388

0x564: Pop(4)
0x565: PushEmpty(string, int, int, int, int)
0x566: Stack[-5] = "kerosene"
0x567: Stack[-4] = (int) 9
0x568: Stack[-3] = (int) 10
0x569: Stack[-2] = (int) 4
0x56a: Stack[-1] = (int) 20
0x56b: Call2 0x397

0x56c: Pop(5)
0x56d: Push((int) 9)
0x56e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x570: PushEmpty(string, int, int, int)
0x571: Stack[-4] = "rifle_ammo"
0x572: Stack[-3] = (int) 1
0x573: Stack[-2] = (int) 2
0x574: Stack[-1] = (int) 5
0x575: Call2 0x388

0x576: Pop(4)
0x577: Stack[-3] = (bool) 1
0x578: Return(); Pop(0)

0x579: PushEmpty(int, int)
0x57a: Push("branch")
0x57b: @ GetVariable(Stack[-1], Stack[-2])
0x57c: Pop(1)
0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x580: Stack[-3] = (int) 1
0x581: Return(); Pop(2)

0x582: GOTO 0x588

0x583: Push((int) 1)
0x584: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-3] = (int) 2
0x587: Return(); Pop(2)

0x588: Stack[-3] = (int) 3
0x589: Return(); Pop(2)

0x58a: PushEmpty(string, string)
0x58b: Stack[-1] = "idle"
0x58c: Push(Stack[-3])
0x58d: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x58f: Stack[-4] = Stack[-1]
0x590: Return(); Pop(2)

0x591: PushEmpty(int, bool, int, bool)
0x592: Stack[-2] = (int) 0
0x593: Push("all")
0x594: PushEmpty(string, int)
0x595: Stack[-1] = Stack[-5]
0x596: Call2 0x58a

0x597: Pop(1)
0x598: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(2)
0x59a: Pop(0); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: GOTO 0x5a0

0x59d: Push((int) 1)
0x59e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x59f: GOTO 0x593

0x5a0: Stack[-5] = Stack[-2]
0x5a1: Return(); Pop(4)

0x5a2: Stack[-1] = (int) 531557
0x5a3: Return(); Pop(0)

0x5a4: Stack[-1] = (int) 531556
0x5a5: Return(); Pop(0)

0x5a6: Stack[-1] = "ui/NPC_Citizen1.png"
0x5a7: Return(); Pop(0)

0x5a8: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x5a9: Return(); Pop(0)

0x5aa: Stack[-1] = (bool) 0
0x5ab: Return(); Pop(0)

0x5ac: PushEmpty(float, float)
0x5ad: Push("reputation")
0x5ae: @@ GetProperty(Stack[-1], Stack[-2])
0x5af: Pop(1)
0x5b0: Stack[-4] = Stack[-1]
0x5b1: Return(); Pop(2)

