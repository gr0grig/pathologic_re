GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	playsound
	giveitem
	oob1Worker3
	Knife is given
	Knife
	SetItemName
	durability
	SetProperty
	oob1Worker1
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateInvItem (1 args)

RunOp = 0x17f
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x192 Vars = (object)
		EVENT_9 Op = 0x19d Vars = (int, float)
		EVENT_26 Op = 0x1cc Vars = (string)
		EVENT_5 Op = 0x1d4 Vars = ()
		EVENT_6 Op = 0x1d9 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x246

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x30f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x30d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x311

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x313

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x356

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x28a

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x34a

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x338

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 517930)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 519691)
0x64: Push((int) 20850)
0x65: Push((int) 20849)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x84

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xa2

0x6c: Pop(1)
0x6d: Push((int) 517932)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x33e

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 519710)
0x78: Push((int) 20870)
0x79: Push((int) 20869)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 519709)
0x7d: Push((int) -1)
0x7e: Push((int) 20868)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x315

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x29b

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x315

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x2ab

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x2ba

0xbd: Pop(0)
0xbe: Push((int) 19069)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x317

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0x323

0xca: Pop(2)
0xcb: Push((int) 20869)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x31d

0xd2: Pop(2)
0xd3: Push((int) 19068)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0x34a

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x338

0xdf: Pop(2)
0xe0: PushEmpty(string)
0xe1: Stack[-1] = "Neutral"
0xe2: Call2 0xa2

0xe3: Pop(1)
0xe4: Push((int) 517930)
0xe5: @@ SetMessage(Stack[-1])
0xe6: Pop(1)
0xe7: @@ ClearReplies()
0xe8: Pop(0)
0xe9: Push((int) 519691)
0xea: Push((int) 20850)
0xeb: Push((int) 20849)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0xa2

0xf2: Pop(1)
0xf3: Push((int) 517932)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x33e

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 519710)
0xfe: Push((int) 20870)
0xff: Push((int) 20869)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 519709)
0x103: Push((int) -1)
0x104: Push((int) 20868)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 20870)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0xa2

0x10e: Pop(1)
0x10f: Push((int) 519711)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 519712)
0x115: Push((int) -1)
0x116: Push((int) 20871)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 20861)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11d: Push((int) 20865)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0xa2

0x123: Pop(1)
0x124: Push((int) 519707)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 519708)
0x12a: Push((int) -1)
0x12b: Push((int) 20866)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 20850)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0xa2

0x135: Pop(1)
0x136: Push((int) 519692)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 519693)
0x13c: Push((int) 20852)
0x13d: Push((int) 20851)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Push((int) 517931)
0x141: Push((int) -1)
0x142: Push((int) 19069)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Return(); Pop(0)

0x146: Push((int) 20852)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Neutral"
0x14b: Call2 0xa2

0x14c: Pop(1)
0x14d: Push((int) 519694)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: Push((int) 519695)
0x153: Push((int) 20854)
0x154: Push((int) 20853)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 20856)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15b: Push((int) 20854)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0xa2

0x161: Pop(1)
0x162: Push((int) 519696)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 519700)
0x168: Push((int) -1)
0x169: Push((int) 20858)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 519701)
0x16d: Push((int) -1)
0x16e: Push((int) 20859)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x173: PushEmpty(bool)
0x174: Call2 0x315

0x175: Pop(0)
0x176: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x177: @ lshStopAnimation()
0x178: Pop(0)
0x179: GOTO 0x17c

0x17a: @ StopAnimation()
0x17b: Pop(0)
0x17c: Return(); Pop(0)

0x17d: GOTO 0xb9

0x17e: Return(); Pop(0)

0x17f: PushEmpty(float, float)
0x180: @ GetGameTime(Stack[-1])
0x181: Pop(0)
0x182: Push((int) 24)
0x183: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "cleanup"
0x187: Call2 0x1cc

0x188: Pop(1)
0x189: GOTO 0x18e

0x18a: Push((int) 0)
0x18b: Push((int) 24)
0x18c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: PushEmpty()
0x18f: Call2 0x1a3

0x190: Pop(0)
0x191: Return(); Pop(2)

0x192: PushEmpty()
0x193: PushEmpty()
0x194: Call2 0x23c

0x195: Pop(0)
0x196: PushEmpty(int, object)
0x197: Stack[-1] = Stack[-3]
0x198: Push(-2, 1); TaskCall(0)
0x199: Call2 0x0

0x19a: Pop(-2, 1); TaskReturn
0x19b: Pop(2)
0x19c: Return(); Pop(0)

0x19d: PushEmpty()
0x19e: PushEmpty(string)
0x19f: Stack[-1] = "cleanup"
0x1a0: Call2 0x1cc

0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty(float, float)
0x1a4: PushEmpty(bool)
0x1a5: Call2 0x241

0x1a6: Pop(0)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a9: @ Hold()
0x1aa: Pop(0)
0x1ab: GOTO 0x1a4

0x1ac: Push((int) 3)
0x1ad: @ rand(Stack[-2], Stack[-1])
0x1ae: Pop(1)
0x1af: Push((int) 3)
0x1b0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1b1: @ Sleep(Stack[-1])
0x1b2: Pop(1)
0x1b3: PushEmpty()
0x1b4: Call2 0x1eb

0x1b5: Pop(0)
0x1b6: GOTO 0x1a4

0x1b7: Return(); Pop(2)

0x1b8: PushEmpty(bool, bool)
0x1b9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ba: @ IsLoaded(Stack[-1])
0x1bb: Pop(0)
0x1bc: PushEmpty(bool)
0x1bd: Stack[-1] = (bool) 0
0x1be: Pop(0); Push((bool) Stack[-2] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c0: PushEmpty(bool)
0x1c1: Call2 0x1e9

0x1c2: Pop(0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c6: PushEmpty(object)
0x1c7: Call2 0x2c1

0x1c8: Pop(0)
0x1c9: @ RemoveActor(Stack[-1])
0x1ca: Pop(1)
0x1cb: Return(); Pop(2)

0x1cc: PushEmpty()
0x1cd: Push("cleanup")
0x1ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d0: PushEmpty()
0x1d1: Call2 0x1b8

0x1d2: Pop(0)
0x1d3: Return(); Pop(0)

0x1d4: @ StopGroup0()
0x1d5: Pop(0)
0x1d6: @ sync()
0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Call2 0x1e9

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Stack[-1] = (bool) 1
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object)
0x1e4: Call2 0x2c1

0x1e5: Pop(0)
0x1e6: @ RemoveActor(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: Stack[-1] = (bool) 1
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ec: @ WaitForAnimEnd()
0x1ed: Pop(0)
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x241

0x1f0: Pop(0)
0x1f1: Pop(1); Push((bool) Stack[-1] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Return(); Pop(14)

0x1f4: PushEmpty(int)
0x1f5: Call2 0x2fc

0x1f6: Stack[-8] = Stack[-1]
0x1f7: Pop(1)
0x1f8: Stack[-6] = (int) 0
0x1f9: PushEmpty(bool)
0x1fa: Stack[-1] = (bool) 0
0x1fb: Push((int) 5)
0x1fc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x241

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x202: Stack[-1] = (bool) 1
0x203: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x204: Push((int) 3)
0x205: @ irand(Stack[-6], Stack[-1])
0x206: Pop(1)
0x207: Push((int) 0)
0x208: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x20a: Push(Stack[-7])
0x20b: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20c: @ irand(Stack[-4], Stack[-7])
0x20d: Pop(0)
0x20e: Push("all")
0x20f: PushEmpty(string, int)
0x210: Stack[-1] = Stack[-7]
0x211: Call2 0x2f5

0x212: Pop(1)
0x213: @ PlayAnimation(Stack[-2], Stack[-1])
0x214: Pop(2)
0x215: @ WaitForAnimEnd(Stack[-3])
0x216: Pop(0)
0x217: Pop(0); Push((bool) Stack[-3] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: GOTO 0x237

0x21a: GOTO 0x22c

0x21b: Push((int) 1)
0x21c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21e: Push((int) 4)
0x21f: @ rand(Stack[-3], Stack[-1])
0x220: Pop(1)
0x221: Push((int) 1)
0x222: Pop(1); Push(Stack[-3] + Stack[-1]);
0x223: @ Sleep(Stack[-1], Stack[-2])
0x224: Pop(1)
0x225: Pop(0); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: GOTO 0x237

0x228: GOTO 0x22c

0x229: Push(Stack[-6])
0x22a: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22b: GOTO 0x237

0x22c: PushEmpty(bool)
0x22d: Call2 0x23a

0x22e: Pop(0)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x237

0x232: @ ResetAAS()
0x233: Pop(0)
0x234: Push((int) 1)
0x235: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x236: GOTO 0x1f9

0x237: @ ResetAAS()
0x238: Pop(0)
0x239: Return(); Pop(14)

0x23a: Stack[-1] = (bool) 1
0x23b: Return(); Pop(0)

0x23c: @ StopAnimation()
0x23d: Pop(0)
0x23e: @ StopGroup0()
0x23f: Pop(0)
0x240: Return(); Pop(0)

0x241: PushEmpty(bool, bool)
0x242: @ IsLoaded(Stack[-1])
0x243: Pop(0)
0x244: Stack[-3] = Stack[-1]
0x245: Return(); Pop(2)

0x246: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x247: @@ GetPosition(Stack[-8])
0x248: Pop(0)
0x249: @@ GetEyesHeight(Stack[-9])
0x24a: Pop(0)
0x24b: Push(CvectorIndex(Stack[-8], 1))
0x24c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x24e: @ GetPosition(Stack[-7])
0x24f: Pop(0)
0x250: @ GetEyesHeight(Stack[-9])
0x251: Pop(0)
0x252: Push(CvectorIndex(Stack[-7], 1))
0x253: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x254: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x255: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x256: Push(CvectorIndex(Stack[-6], 1))
0x257: Stack[-1] = (int) 0
0x258: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x259: Pop(0); Push(Stack[-6] | Stack[-6]);
0x25a: Pop(1); Push(Sqrt(Stack[-1]))
0x25b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x25c: Stack[-5] = -Stack[-6]; Pop(0);
0x25d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x25e: PushEmpty(cvector, cvector)
0x25f: Push(CVector(0.0, 1.0, 0.0))
0x260: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x261: Call2 0x2c7

0x262: Pop(1)
0x263: Push((int) 25)
0x264: Pop(2); Push(Stack[-2] * Stack[-1]);
0x265: Pop(2); Push(Stack[-2] + Stack[-1]);
0x266: Push(CVector(0.0, 10.0, 0.0))
0x267: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x268: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x269: @ IsOverrideActive(Stack[-2])
0x26a: Pop(0)
0x26b: Push(Stack[-2])
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: Stack[-21] = (bool) 0
0x26e: Return(); Pop(18)

0x26f: @ StopWorld()
0x270: Pop(0)
0x271: @ CameraTransit(Stack[-3], Stack[-5])
0x272: Pop(0)
0x273: Push(CvectorIndex(Stack[-4], 0))
0x274: Push(CvectorIndex(Stack[-5], 2))
0x275: @ Rotate(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: PushEmpty(bool)
0x278: Call2 0x315

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x284

0x27c: Push("head")
0x27d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x27e: Pop(1)
0x27f: Push(Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x281: Push("head")
0x282: @ LookAsyncCamera(Stack[-1])
0x283: Pop(1)
0x284: @ CameraWaitForPlayFinish()
0x285: Pop(0)
0x286: @ ResumeWorld()
0x287: Pop(0)
0x288: Stack[-21] = (bool) 1
0x289: Return(); Pop(18)

0x28a: PushEmpty(bool, bool)
0x28b: @ CameraSwitchToNormal()
0x28c: Pop(0)
0x28d: PushEmpty(bool)
0x28e: Call2 0x315

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x29a

0x292: Push("head")
0x293: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x294: Pop(1)
0x295: Push(Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x297: Push("head")
0x298: @ UnlookAsync(Stack[-1])
0x299: Pop(1)
0x29a: Return(); Pop(2)

0x29b: PushEmpty(bool, float, float, bool, float, float)
0x29c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x29d: Pop(0)
0x29e: Push(Stack[-3])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2a1: Pop(0)
0x2a2: Push((bool) 0)
0x2a3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(1)
0x2a5: GOTO 0x2aa

0x2a6: Push("Can't find lsh animation : ")
0x2a7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2a8: @ Trace(Stack[-1])
0x2a9: Pop(1)
0x2aa: Return(); Pop(6)

0x2ab: PushEmpty(bool, float, float, bool, float, float)
0x2ac: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ad: Pop(0)
0x2ae: Push(Stack[-3])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2b1: Pop(0)
0x2b2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2b3: Pop(0)
0x2b4: GOTO 0x2b9

0x2b5: Push("Can't find lsh animation : ")
0x2b6: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2b7: @ Trace(Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(6)

0x2ba: PushEmpty(bool)
0x2bb: Call2 0x315

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: @ lshStopSpeech()
0x2bf: Pop(0)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty(object, object)
0x2c2: @ self(Stack[-1])
0x2c3: Pop(0)
0x2c4: Stack[-3] = Stack[-1]
0x2c5: Return(); Pop(2)

0x2c6: Stack[-1] = 0
0x2c7: PushEmpty(float, float)
0x2c8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2c9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ca: Push((float)0.0)
0x2cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2ce: Return(); Pop(2)

0x2cf: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d0: Return(); Pop(2)

0x2d1: PushEmpty(int, int)
0x2d2: @ GetVariable(Stack[-3], Stack[-1])
0x2d3: Pop(0)
0x2d4: Stack[-4] = Stack[-1]
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty(object, object)
0x2d7: @ CreateIntVector(Stack[-1])
0x2d8: Pop(0)
0x2d9: @@ add(Stack[-4])
0x2da: Pop(0)
0x2db: @@ add(Stack[-3])
0x2dc: Pop(0)
0x2dd: Push((int) 3)
0x2de: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2df: Pop(1)
0x2e0: Return(); Pop(2)

0x2e1: Stack[-1] = 0
0x2e2: PushEmpty(int, int, bool, int, int, bool)
0x2e3: @@ GetItemID(Stack[-3])
0x2e4: Pop(0)
0x2e5: Push("Category")
0x2e6: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ec: @@ DropItems(Stack[-8], Stack[-7])
0x2ed: Pop(0)
0x2ee: GOTO 0x2f4

0x2ef: PushEmpty(int, int)
0x2f0: Stack[-2] = Stack[-5]
0x2f1: Stack[-1] = Stack[-9]
0x2f2: Call2 0x2d6

0x2f3: Pop(2)
0x2f4: Return(); Pop(6)

0x2f5: PushEmpty(string, string)
0x2f6: Stack[-1] = "idle"
0x2f7: Push(Stack[-3])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2fa: Stack[-4] = Stack[-1]
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(int, bool, int, bool)
0x2fd: Stack[-2] = (int) 0
0x2fe: Push("all")
0x2ff: PushEmpty(string, int)
0x300: Stack[-1] = Stack[-5]
0x301: Call2 0x2f5

0x302: Pop(1)
0x303: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Pop(0); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x30b

0x308: Push((int) 1)
0x309: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x30a: GOTO 0x2fe

0x30b: Stack[-5] = Stack[-2]
0x30c: Return(); Pop(4)

0x30d: Stack[-1] = (int) 515568
0x30e: Return(); Pop(0)

0x30f: Stack[-1] = (int) 503353
0x310: Return(); Pop(0)

0x311: Stack[-1] = "ui/NPC_Citizen1.png"
0x312: Return(); Pop(0)

0x313: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x314: Return(); Pop(0)

0x315: Stack[-1] = (bool) 0
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Push("playsound")
0x319: Push("giveitem")
0x31a: @ TriggerWorld(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: Push("oob1Worker3")
0x31f: Push((int) 1)
0x320: @ SetVariable(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: Return(); Pop(0)

0x323: PushEmpty(object, object)
0x324: Push("Knife is given")
0x325: @ Trace(Stack[-1])
0x326: Pop(1)
0x327: @ CreateInvItem(Stack[-1])
0x328: Pop(0)
0x329: Push("Knife")
0x32a: @@ SetItemName(Stack[-1])
0x32b: Pop(1)
0x32c: Push("durability")
0x32d: Push((int) 70)
0x32e: @@ SetProperty(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: PushEmpty(object, object, int)
0x331: Stack[-3] = Stack[-7]
0x332: Stack[-2] = Stack[-4]
0x333: Stack[-1] = (int) 1
0x334: Call2 0x2e2

0x335: Pop(3)
0x336: Return(); Pop(2)

0x337: Stack[-1] = 0
0x338: PushEmpty()
0x339: Push("oob1Worker1")
0x33a: Push((int) 1)
0x33b: @ SetVariable(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Return(); Pop(0)

0x33e: PushEmpty()
0x33f: PushEmpty(int, string)
0x340: Stack[-1] = "oob1Worker3"
0x341: Call2 0x2d1

0x342: Pop(1)
0x343: Push((int) 0)
0x344: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x346: Stack[-2] = (bool) 1
0x347: Return(); Pop(0)

0x348: Stack[-2] = (bool) 0
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: PushEmpty(int, string)
0x34c: Stack[-1] = "oob1Worker1"
0x34d: Call2 0x2d1

0x34e: Pop(1)
0x34f: Push((int) 0)
0x350: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x352: Stack[-2] = (bool) 1
0x353: Return(); Pop(0)

0x354: Stack[-2] = (bool) 0
0x355: Return(); Pop(0)

0x356: PushEmpty(int, int)
0x357: Push("branch")
0x358: @ GetVariable(Stack[-1], Stack[-2])
0x359: Pop(1)
0x35a: Push((int) 0)
0x35b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35d: Stack[-3] = (int) 1
0x35e: Return(); Pop(2)

0x35f: GOTO 0x365

0x360: Push((int) 1)
0x361: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-3] = (int) 2
0x364: Return(); Pop(2)

0x365: Stack[-3] = (int) 3
0x366: Return(); Pop(2)

