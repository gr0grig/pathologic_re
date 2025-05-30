GlobalVarCount = 3
	G_VAR_0 string 
	G_VAR_1 bool 
	G_VAR_2 object 

Strings:
	Neutral
	all
	idle
	player
	ptidle
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
	GetLocator
	loc
	walk_stopl
	walk_stopr
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	pt_
	cleanup
	restore
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	playsound
	giveitem
	SetReturnValue
	oob1Gorbun1
	oob1Gorbun2
	b1q02
	health
	GetProperty
	SetProperty
	blood is given
	b1q02_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	tourniquet
	bandage
	branch
	mt_gorbun

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	WaitForAnimEnd (1 args)
	Rotate (3 args)
	IsOverrideActive (1 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Stop (0 args)
	Sleep (1 args)
	HasProperty (2 args)
	GetProperty (2 args)
	irand (2 args)
	HasAnimation (3 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	SetTimeEvent (2 args)
	SensePlayerOnly (1 args)
	GetScene (1 args)
	GetHeight (1 args)
	CanReachByPF (2 args)
	GetAnimationOffset (3 args)
	GetPosition (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	AddItem (4 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	ClearSubContainer (1 args)

RunOp = 0x594
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 1
		EVENT_11 Op = 0x27 Vars = (int)
	GTASK_2 Vars = (bool) Params = 3
		EVENT_6 Op = 0x60 Vars = ()
		EVENT_0 Op = 0x6d Vars = (object)
		EVENT_10 Op = 0x81 Vars = (object)
		EVENT_7 Op = 0x95 Vars = (int)
	GTASK_3  Params = 1
		EVENT_6 Op = 0xca Vars = ()
		EVENT_0 Op = 0xd6 Vars = (object)
	GTASK_4  Params = 1
		EVENT_6 Op = 0x11f Vars = ()
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x26b Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x494 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x55d Vars = (int, int)
	GTASK_11 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x629 Vars = ()
		EVENT_0 Op = 0x632 Vars = (object)

Events:
EVENT_26 Op = 0x7bf Vars = (string)
EVENT_6 Op = 0x7d7 Vars = ()
EVENT_9 Op = 0x8ad Vars = (int, float)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x66d

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: @ DoTrade()
0xf: Pop(0)
0x10: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11: PushEmpty(bool)
0x12: Call2 0x7e7

0x13: Pop(0)
0x14: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x15: PushEmpty(string)
0x16: Stack[-1] = "Neutral"
0x17: Call2 0x6fe

0x18: Pop(1)
0x19: @ lshWaitForAnimEnd()
0x1a: Pop(0)
0x1b: GOTO 0x22

0x1c: @ WaitForAnimEnd()
0x1d: Pop(0)
0x1e: Push("all")
0x1f: Push("idle")
0x20: @ PlayAnimation(Stack[-2], Stack[-1])
0x21: Pop(2)
0x22: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Return(); Pop(0)

0x25: GOTO 0x11

0x26: Return(); Pop(0)

0x27: PushEmpty()
0x28: PushEmpty(bool)
0x29: Call2 0x7e7

0x2a: Pop(0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2c: @ lshStopAnimation()
0x2d: Pop(0)
0x2e: GOTO 0x31

0x2f: @ StopAnimation()
0x30: Pop(0)
0x31: @ StopTrade()
0x32: Pop(0)
0x33: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x34: Return(); Pop(0)

0x35: PushEmpty(bool, bool)
0x36: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x37: Push((int) 21)
0x38: Push((float)0.5)
0x39: @ SetTimer(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: PushEmpty(bool, cvector)
0x3c: Stack[-1] = Stack[-6]
0x3d: Call2 0x64f

0x3e: Pop(1)
0x3f: Pop(1); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: GOTO 0x3b

0x42: Push((bool) 0)
0x43: @ MovePoint(Stack[-5], Stack[-1], Stack[-2])
0x44: Pop(1)
0x45: Push(Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: GOTO 0x49

0x48: GOTO 0x3b

0x49: Push((int) 20)
0x4a: @ KillTimer(Stack[-1])
0x4b: Pop(1)
0x4c: Push((int) 21)
0x4d: @ KillTimer(Stack[-1])
0x4e: Pop(1)
0x4f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x50: @ WaitForAnimEnd(Stack[-1])
0x51: Pop(0)
0x52: Pop(0); Push((bool) Stack[-1] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x54: Stack[-5] = (bool) 0
0x55: Return(); Pop(2)

0x56: Push(CvectorIndex(Stack[-3], 0))
0x57: Push(CvectorIndex(Stack[-4], 2))
0x58: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x59: Pop(2)
0x5a: Pop(0); Push((bool) Stack[-1] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5c: Stack[-5] = (bool) 0
0x5d: Return(); Pop(2)

0x5e: Stack[-5] = (bool) 1
0x5f: Return(); Pop(2)

0x60: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x61: PushEmpty()
0x62: Call2 0xb9

0x63: Pop(0)
0x64: PushEmpty()
0x65: Call2 0x7d7

0x66: Pop(0)
0x67: PushEmpty()
0x68: Push(-0, 0); TaskCall(0)
0x69: Call2 0x0

0x6a: Pop(-0, 0); TaskReturn
0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: PushEmpty(bool, bool)
0x6e: @ IsOverrideActive(Stack[-1])
0x6f: Pop(0)
0x70: Pop(0); Push((bool) Stack[-1] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x72: PushEmpty()
0x73: Call2 0xb9

0x74: Pop(0)
0x75: EventDisable(0)
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[-5]
0x78: Call2 0x659

0x79: Pop(2)
0x7a: EventEnable(0)
0x7b: PushEmpty(object)
0x7c: Stack[-1] = Stack[-4]
0x7d: Call2 0x8bd

0x7e: Pop(1)
0x7f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x80: Return(); Pop(2)

0x81: PushEmpty(bool, bool)
0x82: @ IsPlayerActor(Stack[-3], Stack[-1])
0x83: Pop(0)
0x84: Push(Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x86: PushEmpty()
0x87: Call2 0xb9

0x88: Pop(0)
0x89: PushEmpty(object)
0x8a: Stack[-1] = Stack[-4]
0x8b: Push(-1, 0); TaskCall(3)
0x8c: Call2 0xbc

0x8d: Pop(-1, 0); TaskReturn
0x8e: Pop(1)
0x8f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x90: Push((int) 20)
0x91: Push((float)10.0)
0x92: @ SetTimer(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: Return(); Pop(2)

0x95: PushEmpty(object, object)
0x96: Push((int) 20)
0x97: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x99: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x9a: Push((int) 20)
0x9b: @ KillTimer(Stack[-1])
0x9c: Pop(1)
0x9d: GOTO 0xb8

0x9e: Push((int) 21)
0x9f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xa1: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xa3: Push("player")
0xa4: @ FindActor(Stack[-2], Stack[-1])
0xa5: Pop(1)
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 0
0xa8: Push(Stack[-2])
0xa9: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xaa: PushEmpty(float, object)
0xab: Stack[-1] = Stack[-4]
0xac: Call2 0x647

0xad: Pop(1)
0xae: Push((float)62500.0)
0xaf: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Stack[-1] = (bool) 1
0xb2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb3: PushEmpty(object)
0xb4: Stack[-1] = Stack[-2]
0xb5: Call2 0x81

0xb6: Pop(1)
0xb7: Stack[-1] = 0
0xb8: Return(); Pop(2)

0xb9: @ Stop()
0xba: Pop(0)
0xbb: Return(); Pop(0)

0xbc: PushEmpty(bool, bool)
0xbd: @ WaitForAnimEnd(Stack[-1])
0xbe: Pop(0)
0xbf: Pop(0); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(2)

0xc2: PushEmpty(object)
0xc3: Stack[-1] = Stack[-4]
0xc4: Call2 0x662

0xc5: Pop(1)
0xc6: Push((int) 6)
0xc7: @ Sleep(Stack[-1])
0xc8: Pop(1)
0xc9: Return(); Pop(2)

0xca: PushEmpty()
0xcb: Call2 0xe9

0xcc: Pop(0)
0xcd: PushEmpty()
0xce: Call2 0x7d7

0xcf: Pop(0)
0xd0: PushEmpty()
0xd1: Push(-0, 0); TaskCall(0)
0xd2: Call2 0x0

0xd3: Pop(-0, 0); TaskReturn
0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: PushEmpty(bool, bool)
0xd7: @ IsOverrideActive(Stack[-1])
0xd8: Pop(0)
0xd9: Pop(0); Push((bool) Stack[-1] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xdb: PushEmpty()
0xdc: Call2 0xe9

0xdd: Pop(0)
0xde: EventDisable(0)
0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[-5]
0xe1: Call2 0x659

0xe2: Pop(2)
0xe3: EventEnable(0)
0xe4: PushEmpty(object)
0xe5: Stack[-1] = Stack[-4]
0xe6: Call2 0x8bd

0xe7: Pop(1)
0xe8: Return(); Pop(2)

0xe9: @ StopGroup0()
0xea: Pop(0)
0xeb: @ StopAnimation()
0xec: Pop(0)
0xed: Return(); Pop(0)

0xee: PushEmpty(string, bool, string, int, int, int, int, string, bool, string, int, int, int, int)
0xef: Push(Stack[-15])
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: Push("ptidle")
0xf2: Stack[-8] = Stack[-1] + Stack[-16]; Pop(1);
0xf3: GOTO 0xf5

0xf4: Stack[-7] = "ptidle"
0xf5: @ HasProperty(Stack[-7], Stack[-6])
0xf6: Pop(0)
0xf7: Push(Stack[-6])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: @ GetProperty(Stack[-7], Stack[-5])
0xfa: Pop(0)
0xfb: PushEmpty(int, string)
0xfc: Stack[-1] = Stack[-7]
0xfd: Call2 0x130

0xfe: Stack[-6] = Stack[-2]
0xff: Pop(2)
0x100: @ irand(Stack[-3], Stack[-4])
0x101: Pop(0)
0x102: Push("all")
0x103: PushEmpty(string, string, int)
0x104: Stack[-2] = Stack[-9]
0x105: Stack[-1] = Stack[-7]
0x106: Call2 0x128

0x107: Pop(2)
0x108: @ PlayAnimation(Stack[-2], Stack[-1])
0x109: Pop(2)
0x10a: @ WaitForAnimEnd()
0x10b: Pop(0)
0x10c: GOTO 0x11e

0x10d: PushEmpty(int)
0x10e: Call2 0x7a1

0x10f: Stack[-3] = Stack[-1]
0x110: Pop(1)
0x111: Push(Stack[-2])
0x112: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x113: @ irand(Stack[-1], Stack[-2])
0x114: Pop(0)
0x115: Push("all")
0x116: PushEmpty(string, int)
0x117: Stack[-1] = Stack[-4]
0x118: Call2 0x79a

0x119: Pop(1)
0x11a: @ PlayAnimation(Stack[-2], Stack[-1])
0x11b: Pop(2)
0x11c: @ WaitForAnimEnd()
0x11d: Pop(0)
0x11e: Return(); Pop(14)

0x11f: PushEmpty()
0x120: Call2 0x7d7

0x121: Pop(0)
0x122: PushEmpty()
0x123: Push(-0, 0); TaskCall(0)
0x124: Call2 0x0

0x125: Pop(-0, 0); TaskReturn
0x126: Pop(0)
0x127: Return(); Pop(0)

0x128: PushEmpty()
0x129: Push((int) 0)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12c: Stack[-3] = Stack[-2]
0x12d: GOTO 0x12f

0x12e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(0);
0x12f: Return(); Pop(0)

0x130: PushEmpty(int, bool, int, bool)
0x131: Stack[-2] = (int) 0
0x132: Push("all")
0x133: PushEmpty(string, string, int)
0x134: Stack[-2] = Stack[-9]
0x135: Stack[-1] = Stack[-6]
0x136: Call2 0x128

0x137: Pop(2)
0x138: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: Pop(0); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: GOTO 0x140

0x13d: Push((int) 1)
0x13e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13f: GOTO 0x132

0x140: Stack[-6] = Stack[-2]
0x141: Return(); Pop(4)

0x142: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x143: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x144: PushEmpty(bool, object, float)
0x145: Stack[-2] = Stack[-12]
0x146: Stack[-1] = (float) 100.0
0x147: Call2 0x672

0x148: Pop(2)
0x149: Pop(1); Push((bool) Stack[-1] == 0)
0x14a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14b: Stack[-10] = (int) -2
0x14c: Return(); Pop(8)

0x14d: @ CreateDialog(Stack[-4])
0x14e: Pop(0)
0x14f: PushEmpty(int)
0x150: Call2 0x7e1

0x151: Pop(0)
0x152: @@ SetNPCName(Stack[-1])
0x153: Pop(1)
0x154: PushEmpty(int)
0x155: Call2 0x7df

0x156: Pop(0)
0x157: @@ SetNPCDescription(Stack[-1])
0x158: Pop(1)
0x159: PushEmpty(string)
0x15a: Call2 0x7e3

0x15b: Pop(0)
0x15c: @@ SetPhoto(Stack[-1])
0x15d: Pop(1)
0x15e: PushEmpty(string)
0x15f: Call2 0x7e5

0x160: Pop(0)
0x161: @@ SetPhoto2(Stack[-1])
0x162: Pop(1)
0x163: PushEmpty(int)
0x164: Call2 0x89c

0x165: Pop(0)
0x166: @@ SetPlayerName(Stack[-1])
0x167: Pop(1)
0x168: Stack[-2] = (int) -1
0x169: @ IsOverrideActive(Stack[-3])
0x16a: Pop(0)
0x16b: Push(Stack[-3])
0x16c: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16d: Stack[-10] = (int) -2
0x16e: Return(); Pop(8)

0x16f: @ DoDialog(Stack[-4])
0x170: Pop(0)
0x171: PushEmpty(object, object)
0x172: Stack[-2] = Stack[-11]
0x173: Stack[-1] = Stack[-6]
0x174: Push(-2, 4); TaskCall(6)
0x175: Call2 0x18c

0x176: Pop(-2, 4); TaskReturn
0x177: Pop(2)
0x178: @@ IsDialogEnd(Stack[-1])
0x179: Pop(0)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: @ sync()
0x17d: Pop(0)
0x17e: @@ IsDialogEnd(Stack[-1])
0x17f: Pop(0)
0x180: GOTO 0x17a

0x181: PushEmpty(object)
0x182: Stack[-1] = Stack[-10]
0x183: Call2 0x6b7

0x184: Pop(1)
0x185: @ StopDialog(Stack[-4])
0x186: Pop(0)
0x187: @@ GetReturnValue(Stack[-2])
0x188: Pop(0)
0x189: Stack[-10] = Stack[-2]
0x18a: Return(); Pop(8)

0x18b: Stack[-4] = 0
0x18c: PushEmpty()
0x18d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x190: Push((int) 1)
0x191: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0x81a

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x824

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x830

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 1
0x1a8: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1a9: PushEmpty(object, object)
0x1aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ac: Call2 0x7f4

0x1ad: Pop(2)
0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0x255

0x1b1: Pop(1)
0x1b2: Push((int) 517910)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 520406)
0x1b8: Push((int) 21615)
0x1b9: Push((int) 21614)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 517911)
0x1bd: Push((int) 19050)
0x1be: Push((int) 19049)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: GOTO 0x237

0x1c2: PushEmpty(bool)
0x1c3: Stack[-1] = (bool) 0
0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x81a

0x1c9: Pop(1)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: PushEmpty(bool, object)
0x1cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Call2 0x824

0x1cf: Pop(1)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 1
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call2 0x83c

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = (bool) 1
0x1d9: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call2 0x7fa

0x1de: Pop(2)
0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0x255

0x1e2: Pop(1)
0x1e3: Push((int) 517915)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 517916)
0x1e9: Push((int) 19055)
0x1ea: Push((int) 19054)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Push((int) 520410)
0x1ee: Push((int) 21620)
0x1ef: Push((int) 21619)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: GOTO 0x237

0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0x824

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Neutral"
0x1fa: Call2 0x255

0x1fb: Pop(1)
0x1fc: Push((int) 517919)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: PushEmpty(bool, object)
0x202: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x203: Call2 0x81a

0x204: Pop(1)
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Push((int) 517920)
0x207: Push((int) 19061)
0x208: Push((int) 19058)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20d: Call2 0x81a

0x20e: Pop(1)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x211: Push((int) 517921)
0x212: Push((int) 19063)
0x213: Push((int) 19059)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 541718)
0x217: Push((int) -1)
0x218: Push((int) 43908)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 517922)
0x21c: Push((int) -1)
0x21d: Push((int) 19060)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: GOTO 0x237

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0x255

0x224: Pop(1)
0x225: Push((int) 517927)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 518197)
0x22b: Push((int) -1)
0x22c: Push((int) 19310)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 517928)
0x230: Push((int) -1)
0x231: Push((int) 19066)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: GOTO 0x237

0x235: Return(); Pop(0)

0x236: GOTO 0x190

0x237: PushEmpty(bool)
0x238: Call2 0x7e7

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23b: @ lshWaitForAnimEnd()
0x23c: Pop(0)
0x23d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x245

0x240: PushEmpty(string)
0x241: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x242: Call2 0x6fe

0x243: Pop(1)
0x244: GOTO 0x23b

0x245: GOTO 0x254

0x246: Push("all")
0x247: Push("idle")
0x248: @ PlayAnimation(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: @ WaitForAnimEnd()
0x24b: Pop(0)
0x24c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: GOTO 0x254

0x24f: Push("all")
0x250: Push("idle")
0x251: @ PlayAnimation(Stack[-2], Stack[-1])
0x252: Pop(2)
0x253: GOTO 0x24a

0x254: Return(); Pop(0)

0x255: PushEmpty()
0x256: PushEmpty(bool)
0x257: Call2 0x7e7

0x258: Pop(0)
0x259: Pop(1); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25b: Return(); Pop(0)

0x25c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Return(); Pop(0)

0x25f: PushEmpty(string, bool)
0x260: Stack[-2] = Stack[-3]
0x261: Push("")
0x262: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-1] = (bool) 0
0x265: GOTO 0x267

0x266: Stack[-1] = (bool) 1
0x267: Call2 0x70e

0x268: Pop(2)
0x269: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x26a: Return(); Pop(0)

0x26b: PushEmpty()
0x26c: Push((int) 1)
0x26d: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x26e: PushEmpty()
0x26f: Call2 0x71d

0x270: Pop(0)
0x271: Push((int) 19051)
0x272: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0x800

0x278: Pop(2)
0x279: PushEmpty(object, object)
0x27a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27c: Call2 0x7e9

0x27d: Pop(2)
0x27e: Push((int) 19062)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: PushEmpty(object, object)
0x282: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x800

0x285: Pop(2)
0x286: Push((int) 43908)
0x287: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(object, object)
0x28a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28c: Call2 0x7ef

0x28d: Pop(2)
0x28e: Push((int) 19310)
0x28f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: PushEmpty(object, object)
0x292: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call2 0x7ef

0x295: Pop(2)
0x296: Push((int) 19048)
0x297: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 0
0x29b: PushEmpty(bool)
0x29c: Stack[-1] = (bool) 0
0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x81a

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x824

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Call2 0x830

0x2ac: Pop(1)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2b0: PushEmpty(object, object)
0x2b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b3: Call2 0x7f4

0x2b4: Pop(2)
0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call2 0x255

0x2b8: Pop(1)
0x2b9: Push((int) 517910)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 520406)
0x2bf: Push((int) 21615)
0x2c0: Push((int) 21614)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Push((int) 517911)
0x2c4: Push((int) 19050)
0x2c5: Push((int) 19049)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(bool)
0x2ca: Stack[-1] = (bool) 0
0x2cb: PushEmpty(bool)
0x2cc: Stack[-1] = (bool) 0
0x2cd: PushEmpty(bool, object)
0x2ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Call2 0x81a

0x2d0: Pop(1)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d5: Call2 0x824

0x2d6: Pop(1)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: Stack[-1] = (bool) 1
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dc: Call2 0x83c

0x2dd: Pop(1)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = (bool) 1
0x2e0: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e1: PushEmpty(object, object)
0x2e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e4: Call2 0x7fa

0x2e5: Pop(2)
0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral"
0x2e8: Call2 0x255

0x2e9: Pop(1)
0x2ea: Push((int) 517915)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 517916)
0x2f0: Push((int) 19055)
0x2f1: Push((int) 19054)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 520410)
0x2f5: Push((int) 21620)
0x2f6: Push((int) 21619)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Call2 0x824

0x2fd: Pop(1)
0x2fe: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x2ff: PushEmpty(string)
0x300: Stack[-1] = "Neutral"
0x301: Call2 0x255

0x302: Pop(1)
0x303: Push((int) 517919)
0x304: @@ SetMessage(Stack[-1])
0x305: Pop(1)
0x306: @@ ClearReplies()
0x307: Pop(0)
0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Call2 0x81a

0x30b: Pop(1)
0x30c: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30d: Push((int) 517920)
0x30e: Push((int) 19061)
0x30f: Push((int) 19058)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: PushEmpty(bool, object)
0x313: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x314: Call2 0x81a

0x315: Pop(1)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x318: Push((int) 517921)
0x319: Push((int) 19063)
0x31a: Push((int) 19059)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 541718)
0x31e: Push((int) -1)
0x31f: Push((int) 43908)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Push((int) 517922)
0x323: Push((int) -1)
0x324: Push((int) 19060)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: PushEmpty(string)
0x329: Stack[-1] = "Neutral"
0x32a: Call2 0x255

0x32b: Pop(1)
0x32c: Push((int) 517927)
0x32d: @@ SetMessage(Stack[-1])
0x32e: Pop(1)
0x32f: @@ ClearReplies()
0x330: Pop(0)
0x331: Push((int) 518197)
0x332: Push((int) -1)
0x333: Push((int) 19310)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Push((int) 517928)
0x337: Push((int) -1)
0x338: Push((int) 19066)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Return(); Pop(0)

0x33c: Push((int) 19063)
0x33d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33f: PushEmpty(string)
0x340: Stack[-1] = "Neutral"
0x341: Call2 0x255

0x342: Pop(1)
0x343: Push((int) 517925)
0x344: @@ SetMessage(Stack[-1])
0x345: Pop(1)
0x346: @@ ClearReplies()
0x347: Pop(0)
0x348: Push((int) 517926)
0x349: Push((int) -1)
0x34a: Push((int) 19064)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 19061)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call2 0x255

0x354: Pop(1)
0x355: Push((int) 517923)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 517924)
0x35b: Push((int) -1)
0x35c: Push((int) 19062)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Return(); Pop(0)

0x360: Push((int) 21620)
0x361: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x363: PushEmpty(string)
0x364: Stack[-1] = "Neutral"
0x365: Call2 0x255

0x366: Pop(1)
0x367: Push((int) 520411)
0x368: @@ SetMessage(Stack[-1])
0x369: Pop(1)
0x36a: @@ ClearReplies()
0x36b: Pop(0)
0x36c: Push((int) 520412)
0x36d: Push((int) 19055)
0x36e: Push((int) 21621)
0x36f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x370: Pop(3)
0x371: Return(); Pop(0)

0x372: Push((int) 19055)
0x373: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call2 0x255

0x378: Pop(1)
0x379: Push((int) 517917)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 517918)
0x37f: Push((int) 21618)
0x380: Push((int) 19056)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 21618)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Neutral"
0x389: Call2 0x255

0x38a: Pop(1)
0x38b: Push((int) 520409)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 520413)
0x391: Push((int) 21624)
0x392: Push((int) 21623)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Push((int) 520418)
0x396: Push((int) -1)
0x397: Push((int) 21628)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Return(); Pop(0)

0x39b: Push((int) 21624)
0x39c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Neutral"
0x3a0: Call2 0x255

0x3a1: Pop(1)
0x3a2: Push((int) 520414)
0x3a3: @@ SetMessage(Stack[-1])
0x3a4: Pop(1)
0x3a5: @@ ClearReplies()
0x3a6: Pop(0)
0x3a7: Push((int) 520415)
0x3a8: Push((int) 21626)
0x3a9: Push((int) 21625)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Push((int) 520419)
0x3ad: Push((int) -1)
0x3ae: Push((int) 21629)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Return(); Pop(0)

0x3b2: Push((int) 21626)
0x3b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "Neutral"
0x3b7: Call2 0x255

0x3b8: Pop(1)
0x3b9: Push((int) 520416)
0x3ba: @@ SetMessage(Stack[-1])
0x3bb: Pop(1)
0x3bc: @@ ClearReplies()
0x3bd: Pop(0)
0x3be: Push((int) 520417)
0x3bf: Push((int) -1)
0x3c0: Push((int) 21627)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Return(); Pop(0)

0x3c4: Push((int) 19050)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral"
0x3c9: Call2 0x255

0x3ca: Pop(1)
0x3cb: Push((int) 517912)
0x3cc: @@ SetMessage(Stack[-1])
0x3cd: Pop(1)
0x3ce: @@ ClearReplies()
0x3cf: Pop(0)
0x3d0: Push((int) 517913)
0x3d1: Push((int) -1)
0x3d2: Push((int) 19051)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Push((int) 517914)
0x3d6: Push((int) -1)
0x3d7: Push((int) 19052)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Return(); Pop(0)

0x3db: Push((int) 21615)
0x3dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Neutral"
0x3e0: Call2 0x255

0x3e1: Pop(1)
0x3e2: Push((int) 520407)
0x3e3: @@ SetMessage(Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ ClearReplies()
0x3e6: Pop(0)
0x3e7: Push((int) 520408)
0x3e8: Push((int) 19050)
0x3e9: Push((int) 21616)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3ee: PushEmpty(bool)
0x3ef: Call2 0x7e7

0x3f0: Pop(0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f2: @ lshStopAnimation()
0x3f3: Pop(0)
0x3f4: GOTO 0x3f7

0x3f5: @ StopAnimation()
0x3f6: Pop(0)
0x3f7: Return(); Pop(0)

0x3f8: GOTO 0x26c

0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3fc: PushEmpty(bool, object, float)
0x3fd: Stack[-2] = Stack[-12]
0x3fe: Stack[-1] = (float) 100.0
0x3ff: Call2 0x672

0x400: Pop(2)
0x401: Pop(1); Push((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-10] = (int) -2
0x404: Return(); Pop(8)

0x405: @ CreateDialog(Stack[-4])
0x406: Pop(0)
0x407: PushEmpty(int)
0x408: Call2 0x7e1

0x409: Pop(0)
0x40a: @@ SetNPCName(Stack[-1])
0x40b: Pop(1)
0x40c: PushEmpty(int)
0x40d: Call2 0x7df

0x40e: Pop(0)
0x40f: @@ SetNPCDescription(Stack[-1])
0x410: Pop(1)
0x411: PushEmpty(string)
0x412: Call2 0x7e3

0x413: Pop(0)
0x414: @@ SetPhoto(Stack[-1])
0x415: Pop(1)
0x416: PushEmpty(string)
0x417: Call2 0x7e5

0x418: Pop(0)
0x419: @@ SetPhoto2(Stack[-1])
0x41a: Pop(1)
0x41b: PushEmpty(int)
0x41c: Call2 0x89c

0x41d: Pop(0)
0x41e: @@ SetPlayerName(Stack[-1])
0x41f: Pop(1)
0x420: Stack[-2] = (int) -1
0x421: @ IsOverrideActive(Stack[-3])
0x422: Pop(0)
0x423: Push(Stack[-3])
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-10] = (int) -2
0x426: Return(); Pop(8)

0x427: @ DoDialog(Stack[-4])
0x428: Pop(0)
0x429: PushEmpty(object, object)
0x42a: Stack[-2] = Stack[-11]
0x42b: Stack[-1] = Stack[-6]
0x42c: Push(-2, 4); TaskCall(8)
0x42d: Call2 0x444

0x42e: Pop(-2, 4); TaskReturn
0x42f: Pop(2)
0x430: @@ IsDialogEnd(Stack[-1])
0x431: Pop(0)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x434: @ sync()
0x435: Pop(0)
0x436: @@ IsDialogEnd(Stack[-1])
0x437: Pop(0)
0x438: GOTO 0x432

0x439: PushEmpty(object)
0x43a: Stack[-1] = Stack[-10]
0x43b: Call2 0x6b7

0x43c: Pop(1)
0x43d: @ StopDialog(Stack[-4])
0x43e: Pop(0)
0x43f: @@ GetReturnValue(Stack[-2])
0x440: Pop(0)
0x441: Stack[-10] = Stack[-2]
0x442: Return(); Pop(8)

0x443: Stack[-4] = 0
0x444: PushEmpty()
0x445: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x446: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x447: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x448: Push((int) 1)
0x449: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x44a: PushEmpty(string)
0x44b: Stack[-1] = "Neutral"
0x44c: Call2 0x47e

0x44d: Pop(1)
0x44e: Push((int) 520726)
0x44f: @@ SetMessage(Stack[-1])
0x450: Pop(1)
0x451: @@ ClearReplies()
0x452: Pop(0)
0x453: Push((int) 520727)
0x454: Push((int) -1)
0x455: Push((int) 21938)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Push((int) 520728)
0x459: Push((int) -1)
0x45a: Push((int) 21939)
0x45b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45c: Pop(3)
0x45d: GOTO 0x460

0x45e: Return(); Pop(0)

0x45f: GOTO 0x448

0x460: PushEmpty(bool)
0x461: Call2 0x7e7

0x462: Pop(0)
0x463: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x464: @ lshWaitForAnimEnd()
0x465: Pop(0)
0x466: Push( Stack[3 + Tasks[-1].StackPointer] )
0x467: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x468: GOTO 0x46e

0x469: PushEmpty(string)
0x46a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x46b: Call2 0x6fe

0x46c: Pop(1)
0x46d: GOTO 0x464

0x46e: GOTO 0x47d

0x46f: Push("all")
0x470: Push("idle")
0x471: @ PlayAnimation(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: @ WaitForAnimEnd()
0x474: Pop(0)
0x475: Push( Stack[3 + Tasks[-1].StackPointer] )
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: GOTO 0x47d

0x478: Push("all")
0x479: Push("idle")
0x47a: @ PlayAnimation(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: GOTO 0x473

0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: PushEmpty(bool)
0x480: Call2 0x7e7

0x481: Pop(0)
0x482: Pop(1); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: Return(); Pop(0)

0x485: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: Return(); Pop(0)

0x488: PushEmpty(string, bool)
0x489: Stack[-2] = Stack[-3]
0x48a: Push("")
0x48b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-1] = (bool) 0
0x48e: GOTO 0x490

0x48f: Stack[-1] = (bool) 1
0x490: Call2 0x70e

0x491: Pop(2)
0x492: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: Push((int) 1)
0x496: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x497: PushEmpty()
0x498: Call2 0x71d

0x499: Pop(0)
0x49a: Push((int) 21937)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral"
0x49f: Call2 0x47e

0x4a0: Pop(1)
0x4a1: Push((int) 520726)
0x4a2: @@ SetMessage(Stack[-1])
0x4a3: Pop(1)
0x4a4: @@ ClearReplies()
0x4a5: Pop(0)
0x4a6: Push((int) 520727)
0x4a7: Push((int) -1)
0x4a8: Push((int) 21938)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Push((int) 520728)
0x4ac: Push((int) -1)
0x4ad: Push((int) 21939)
0x4ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(3)
0x4b0: Return(); Pop(0)

0x4b1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b2: PushEmpty(bool)
0x4b3: Call2 0x7e7

0x4b4: Pop(0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b6: @ lshStopAnimation()
0x4b7: Pop(0)
0x4b8: GOTO 0x4bb

0x4b9: @ StopAnimation()
0x4ba: Pop(0)
0x4bb: Return(); Pop(0)

0x4bc: GOTO 0x495

0x4bd: Return(); Pop(0)

0x4be: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4bf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4c0: PushEmpty(bool, object, float)
0x4c1: Stack[-2] = Stack[-12]
0x4c2: Stack[-1] = (float) 100.0
0x4c3: Call2 0x672

0x4c4: Pop(2)
0x4c5: Pop(1); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-10] = (int) -2
0x4c8: Return(); Pop(8)

0x4c9: @ CreateDialog(Stack[-4])
0x4ca: Pop(0)
0x4cb: PushEmpty(int)
0x4cc: Call2 0x7e1

0x4cd: Pop(0)
0x4ce: @@ SetNPCName(Stack[-1])
0x4cf: Pop(1)
0x4d0: PushEmpty(int)
0x4d1: Call2 0x7df

0x4d2: Pop(0)
0x4d3: @@ SetNPCDescription(Stack[-1])
0x4d4: Pop(1)
0x4d5: PushEmpty(string)
0x4d6: Call2 0x7e3

0x4d7: Pop(0)
0x4d8: @@ SetPhoto(Stack[-1])
0x4d9: Pop(1)
0x4da: PushEmpty(string)
0x4db: Call2 0x7e5

0x4dc: Pop(0)
0x4dd: @@ SetPhoto2(Stack[-1])
0x4de: Pop(1)
0x4df: PushEmpty(int)
0x4e0: Call2 0x89c

0x4e1: Pop(0)
0x4e2: @@ SetPlayerName(Stack[-1])
0x4e3: Pop(1)
0x4e4: Stack[-2] = (int) -1
0x4e5: @ IsOverrideActive(Stack[-3])
0x4e6: Pop(0)
0x4e7: Push(Stack[-3])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-10] = (int) -2
0x4ea: Return(); Pop(8)

0x4eb: @ DoDialog(Stack[-4])
0x4ec: Pop(0)
0x4ed: PushEmpty(object, object)
0x4ee: Stack[-2] = Stack[-11]
0x4ef: Stack[-1] = Stack[-6]
0x4f0: Push(-2, 4); TaskCall(10)
0x4f1: Call2 0x508

0x4f2: Pop(-2, 4); TaskReturn
0x4f3: Pop(2)
0x4f4: @@ IsDialogEnd(Stack[-1])
0x4f5: Pop(0)
0x4f6: Pop(0); Push((bool) Stack[-1] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f8: @ sync()
0x4f9: Pop(0)
0x4fa: @@ IsDialogEnd(Stack[-1])
0x4fb: Pop(0)
0x4fc: GOTO 0x4f6

0x4fd: PushEmpty(object)
0x4fe: Stack[-1] = Stack[-10]
0x4ff: Call2 0x6b7

0x500: Pop(1)
0x501: @ StopDialog(Stack[-4])
0x502: Pop(0)
0x503: @@ GetReturnValue(Stack[-2])
0x504: Pop(0)
0x505: Stack[-10] = Stack[-2]
0x506: Return(); Pop(8)

0x507: Stack[-4] = 0
0x508: PushEmpty()
0x509: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x50a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x50b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x50c: Push((int) 1)
0x50d: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Neutral"
0x510: Call2 0x547

0x511: Pop(1)
0x512: Push((int) 541715)
0x513: @@ SetMessage(Stack[-1])
0x514: Pop(1)
0x515: @@ ClearReplies()
0x516: Pop(0)
0x517: Push((int) 541716)
0x518: Push((int) -1)
0x519: Push((int) 43906)
0x51a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51b: Pop(3)
0x51c: Push((int) 541717)
0x51d: Push((int) -1)
0x51e: Push((int) 43907)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Push((int) 541742)
0x522: Push((int) -1)
0x523: Push((int) 43939)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: GOTO 0x529

0x527: Return(); Pop(0)

0x528: GOTO 0x50c

0x529: PushEmpty(bool)
0x52a: Call2 0x7e7

0x52b: Pop(0)
0x52c: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x52d: @ lshWaitForAnimEnd()
0x52e: Pop(0)
0x52f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x530: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x531: GOTO 0x537

0x532: PushEmpty(string)
0x533: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x534: Call2 0x6fe

0x535: Pop(1)
0x536: GOTO 0x52d

0x537: GOTO 0x546

0x538: Push("all")
0x539: Push("idle")
0x53a: @ PlayAnimation(Stack[-2], Stack[-1])
0x53b: Pop(2)
0x53c: @ WaitForAnimEnd()
0x53d: Pop(0)
0x53e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x53f: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x540: GOTO 0x546

0x541: Push("all")
0x542: Push("idle")
0x543: @ PlayAnimation(Stack[-2], Stack[-1])
0x544: Pop(2)
0x545: GOTO 0x53c

0x546: Return(); Pop(0)

0x547: PushEmpty()
0x548: PushEmpty(bool)
0x549: Call2 0x7e7

0x54a: Pop(0)
0x54b: Pop(1); Push((bool) Stack[-1] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54d: Return(); Pop(0)

0x54e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x54f: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x550: Return(); Pop(0)

0x551: PushEmpty(string, bool)
0x552: Stack[-2] = Stack[-3]
0x553: Push("")
0x554: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-1] = (bool) 0
0x557: GOTO 0x559

0x558: Stack[-1] = (bool) 1
0x559: Call2 0x70e

0x55a: Pop(2)
0x55b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x55c: Return(); Pop(0)

0x55d: PushEmpty()
0x55e: Push((int) 1)
0x55f: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x560: PushEmpty()
0x561: Call2 0x71d

0x562: Pop(0)
0x563: Push((int) 43906)
0x564: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x566: PushEmpty(object, object)
0x567: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x568: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x569: Call2 0x7ef

0x56a: Pop(2)
0x56b: Push((int) 43905)
0x56c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Neutral"
0x570: Call2 0x547

0x571: Pop(1)
0x572: Push((int) 541715)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 541716)
0x578: Push((int) -1)
0x579: Push((int) 43906)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Push((int) 541717)
0x57d: Push((int) -1)
0x57e: Push((int) 43907)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Push((int) 541742)
0x582: Push((int) -1)
0x583: Push((int) 43939)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: Return(); Pop(0)

0x587: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x588: PushEmpty(bool)
0x589: Call2 0x7e7

0x58a: Pop(0)
0x58b: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58c: @ lshStopAnimation()
0x58d: Pop(0)
0x58e: GOTO 0x591

0x58f: @ StopAnimation()
0x590: Pop(0)
0x591: Return(); Pop(0)

0x592: GOTO 0x55e

0x593: Return(); Pop(0)

0x594: PushEmpty()
0x595: Call2 0x885

0x596: Pop(0)
0x597: Push((int) 0)
0x598: Push((int) 144)
0x599: @ SetTimeEvent(Stack[-2], Stack[-1])
0x59a: Pop(2)
0x59b: Push((int) 1)
0x59c: Push((int) 24)
0x59d: @ SetTimeEvent(Stack[-2], Stack[-1])
0x59e: Pop(2)
0x59f: Push((int) 1)
0x5a0: Push((int) 48)
0x5a1: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5a2: Pop(2)
0x5a3: Push((int) 1)
0x5a4: Push((int) 72)
0x5a5: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5a6: Pop(2)
0x5a7: Push((int) 1)
0x5a8: Push((int) 96)
0x5a9: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5aa: Pop(2)
0x5ab: Push((int) 1)
0x5ac: Push((int) 120)
0x5ad: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5ae: Pop(2)
0x5af: PushEmpty()
0x5b0: Call2 0x5b3

0x5b1: Pop(0)
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x5b4: Push((bool) 1)
0x5b5: @ SensePlayerOnly(Stack[-1])
0x5b6: Pop(1)
0x5b7: PushEmpty()
0x5b8: Call2 0x60b

0x5b9: Pop(0)
0x5ba: @ GetScene(Stack[-11])
0x5bb: Pop(0)
0x5bc: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x5bd: PushEmpty(string, int)
0x5be: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5bf: Call2 0x7b2

0x5c0: Pop(1)
0x5c1: @@ GetLocator(Stack[-1], Stack[-11])
0x5c2: Pop(1)
0x5c3: Pop(0); Push((bool) Stack[-10] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: GOTO 0x5c9

0x5c6: Push((int) 1)
0x5c7: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5c8: GOTO 0x5bd

0x5c9: PushEmpty(bool)
0x5ca: Call2 0x66d

0x5cb: Pop(0)
0x5cc: Pop(1); Push((bool) Stack[-1] == 0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5ce: PushEmpty()
0x5cf: Push(-0, 0); TaskCall(0)
0x5d0: Call2 0x0

0x5d1: Pop(-0, 0); TaskReturn
0x5d2: Pop(0)
0x5d3: PushEmpty()
0x5d4: Call2 0x613

0x5d5: Pop(0)
0x5d6: @ irand(Stack[-9], Stack[-2])
0x5d7: Pop(0)
0x5d8: PushEmpty(string, int)
0x5d9: Stack[-1] = Stack[-11]
0x5da: Call2 0x7b2

0x5db: Pop(1)
0x5dc: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x5dd: Pop(1)
0x5de: PushEmpty(cvector)
0x5df: Call2 0x642

0x5e0: Pop(0)
0x5e1: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x5e2: PushEmpty(float, cvector)
0x5e3: Stack[-1] = Stack[-7]
0x5e4: Call2 0x750

0x5e5: Pop(1)
0x5e6: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x5e7: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5e8: @ GetHeight(Stack[-4])
0x5e9: Pop(0)
0x5ea: Stack[-3] = Stack[-7]
0x5eb: Push(CvectorIndex(Stack[-3], 1))
0x5ec: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x5ed: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x5ee: @ CanReachByPF(Stack[-2], Stack[-3])
0x5ef: Pop(0)
0x5f0: Push(Stack[-2])
0x5f1: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f2: Pop(0); Push(Stack[-5] | Stack[-5]);
0x5f3: Pop(1); Push(Sqrt(Stack[-1]))
0x5f4: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x5f5: Pop(1); Push(Stack[-6] * Stack[-1]);
0x5f6: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x5f7: PushEmpty(bool, cvector, cvector)
0x5f8: Stack[-2] = Stack[-4]
0x5f9: Stack[-1] = Stack[-9]
0x5fa: Push(-3, 1); TaskCall(2)
0x5fb: Call2 0x35

0x5fc: Pop(-3, 1); TaskReturn
0x5fd: Pop(2)
0x5fe: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5ff: PushEmpty(int)
0x600: Stack[-1] = Stack[-10]
0x601: Push(-1, 0); TaskCall(4)
0x602: Call2 0xee

0x603: Pop(-1, 0); TaskReturn
0x604: Pop(1)
0x605: Push((int) 1)
0x606: @ Sleep(Stack[-1])
0x607: Pop(1)
0x608: GOTO 0x5d6

0x609: Return(); Pop(22)

0x60a: Stack[-11] = 0
0x60b: PushEmpty(string, string)
0x60c: Push("loc")
0x60d: @ GetProperty(Stack[-1], Stack[-2])
0x60e: Pop(1)
0x60f: Push(GlobalVars[0])
0x610: Stack[-1] = Stack[-2]
0x611: GlobalVars[0] = Stack[-1]; Pop(1)
0x612: Return(); Pop(2)

0x613: PushEmpty(cvector, cvector, cvector, cvector)
0x614: Push("all")
0x615: Push("walk_stopl")
0x616: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x617: Pop(2)
0x618: Push("all")
0x619: Push("walk_stopr")
0x61a: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(2)
0x61c: Push(CvectorIndex(Stack[-2], 2))
0x61d: Push(CvectorIndex(Stack[-2], 2))
0x61e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x61f: Push((float)2.0)
0x620: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x621: PushEmpty(float, float)
0x622: Push(CvectorIndex(Stack[-4], 2))
0x623: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x624: Call2 0x743

0x625: Pop(1)
0x626: Push((int) 40)
0x627: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x628: Return(); Pop(4)

0x629: PushEmpty()
0x62a: Call2 0x7d7

0x62b: Pop(0)
0x62c: PushEmpty()
0x62d: Push(-0, 0); TaskCall(0)
0x62e: Call2 0x0

0x62f: Pop(-0, 0); TaskReturn
0x630: Pop(0)
0x631: Return(); Pop(0)

0x632: PushEmpty(bool, bool)
0x633: @ IsOverrideActive(Stack[-1])
0x634: Pop(0)
0x635: Pop(0); Push((bool) Stack[-1] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x637: EventDisable(0)
0x638: PushEmpty(bool, object)
0x639: Stack[-1] = Stack[-5]
0x63a: Call2 0x659

0x63b: Pop(2)
0x63c: EventEnable(0)
0x63d: PushEmpty(object)
0x63e: Stack[-1] = Stack[-4]
0x63f: Call2 0x8bd

0x640: Pop(1)
0x641: Return(); Pop(2)

0x642: PushEmpty(cvector, cvector)
0x643: @ GetPosition(Stack[-1])
0x644: Pop(0)
0x645: Stack[-3] = Stack[-1]
0x646: Return(); Pop(2)

0x647: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x648: @ GetPosition(Stack[-3])
0x649: Pop(0)
0x64a: @@ GetPosition(Stack[-2])
0x64b: Pop(0)
0x64c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x64d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x64e: Return(); Pop(6)

0x64f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x650: @ GetPosition(Stack[-3])
0x651: Pop(0)
0x652: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x653: Push(CvectorIndex(Stack[-2], 0))
0x654: Push(CvectorIndex(Stack[-3], 2))
0x655: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x656: Pop(2)
0x657: Stack[-8] = Stack[-1]
0x658: Return(); Pop(6)

0x659: PushEmpty(cvector, cvector)
0x65a: @@ GetPosition(Stack[-1])
0x65b: Pop(0)
0x65c: PushEmpty(bool, cvector)
0x65d: Stack[-1] = Stack[-3]
0x65e: Call2 0x64f

0x65f: Stack[-6] = Stack[-2]
0x660: Pop(2)
0x661: Return(); Pop(2)

0x662: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x663: @@ GetPosition(Stack[-3])
0x664: Pop(0)
0x665: @ GetPosition(Stack[-2])
0x666: Pop(0)
0x667: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x668: Push(CvectorIndex(Stack[-1], 0))
0x669: Push(CvectorIndex(Stack[-2], 2))
0x66a: @ RotateAsync(Stack[-2], Stack[-1])
0x66b: Pop(2)
0x66c: Return(); Pop(6)

0x66d: PushEmpty(bool, bool)
0x66e: @ IsLoaded(Stack[-1])
0x66f: Pop(0)
0x670: Stack[-3] = Stack[-1]
0x671: Return(); Pop(2)

0x672: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x673: @@ GetPosition(Stack[-8])
0x674: Pop(0)
0x675: @@ GetEyesHeight(Stack[-9])
0x676: Pop(0)
0x677: Push(CvectorIndex(Stack[-8], 1))
0x678: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x679: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x67a: @ GetPosition(Stack[-7])
0x67b: Pop(0)
0x67c: @ GetEyesHeight(Stack[-9])
0x67d: Pop(0)
0x67e: Push(CvectorIndex(Stack[-7], 1))
0x67f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x680: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x681: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x682: Push(CvectorIndex(Stack[-6], 1))
0x683: Stack[-1] = (int) 0
0x684: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x685: Pop(0); Push(Stack[-6] | Stack[-6]);
0x686: Pop(1); Push(Sqrt(Stack[-1]))
0x687: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x688: Stack[-5] = -Stack[-6]; Pop(0);
0x689: Pop(0); Push(Stack[-6] * Stack[-19]);
0x68a: PushEmpty(cvector, cvector)
0x68b: Push(CVector(0.0, 1.0, 0.0))
0x68c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x68d: Call2 0x739

0x68e: Pop(1)
0x68f: Push((int) 25)
0x690: Pop(2); Push(Stack[-2] * Stack[-1]);
0x691: Pop(2); Push(Stack[-2] + Stack[-1]);
0x692: Push(CVector(0.0, 10.0, 0.0))
0x693: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x694: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x695: @ IsOverrideActive(Stack[-2])
0x696: Pop(0)
0x697: Push(Stack[-2])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-21] = (bool) 0
0x69a: Return(); Pop(18)

0x69b: @ StopWorld()
0x69c: Pop(0)
0x69d: Push((bool) 1)
0x69e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x69f: Pop(1)
0x6a0: Push(CvectorIndex(Stack[-4], 0))
0x6a1: Push(CvectorIndex(Stack[-5], 2))
0x6a2: @ Rotate(Stack[-2], Stack[-1])
0x6a3: Pop(2)
0x6a4: PushEmpty(bool)
0x6a5: Call2 0x7e7

0x6a6: Pop(0)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: GOTO 0x6b1

0x6a9: Push("head")
0x6aa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6ab: Pop(1)
0x6ac: Push(Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ae: Push("head")
0x6af: @ LookAsyncCamera(Stack[-1])
0x6b0: Pop(1)
0x6b1: @ CameraWaitForPlayFinish()
0x6b2: Pop(0)
0x6b3: @ ResumeWorld()
0x6b4: Pop(0)
0x6b5: Stack[-21] = (bool) 1
0x6b6: Return(); Pop(18)

0x6b7: PushEmpty(bool, bool)
0x6b8: Push((bool) 1)
0x6b9: @ CameraSwitchToNormal(Stack[-1])
0x6ba: Pop(1)
0x6bb: PushEmpty(bool)
0x6bc: Call2 0x7e7

0x6bd: Pop(0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: GOTO 0x6c8

0x6c0: Push("head")
0x6c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6c2: Pop(1)
0x6c3: Push(Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c5: Push("head")
0x6c6: @ UnlookAsync(Stack[-1])
0x6c7: Pop(1)
0x6c8: Return(); Pop(2)

0x6c9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x6ca: @@ GetPosition(Stack[-7])
0x6cb: Pop(0)
0x6cc: @@ GetEyesHeight(Stack[-8])
0x6cd: Pop(0)
0x6ce: Push(CvectorIndex(Stack[-7], 1))
0x6cf: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6d0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6d1: @ GetPosition(Stack[-6])
0x6d2: Pop(0)
0x6d3: @ GetEyesHeight(Stack[-8])
0x6d4: Pop(0)
0x6d5: Push(CvectorIndex(Stack[-6], 1))
0x6d6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6d7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6d8: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x6d9: Push(CvectorIndex(Stack[-5], 1))
0x6da: Stack[-1] = (int) 0
0x6db: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x6dc: Pop(0); Push(Stack[-5] | Stack[-5]);
0x6dd: Pop(1); Push(Sqrt(Stack[-1]))
0x6de: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x6df: Stack[-4] = -Stack[-5]; Pop(0);
0x6e0: Pop(0); Push(Stack[-5] * Stack[-17]);
0x6e1: Push(CVector(0.0, 10.0, 0.0))
0x6e2: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x6e3: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x6e4: @ IsOverrideActive(Stack[-1])
0x6e5: Pop(0)
0x6e6: Push(Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: Stack[-19] = (bool) 0
0x6e9: Return(); Pop(16)

0x6ea: @ StopWorld()
0x6eb: Pop(0)
0x6ec: Push((bool) 1)
0x6ed: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x6ee: Pop(1)
0x6ef: Push(CvectorIndex(Stack[-3], 0))
0x6f0: Push(CvectorIndex(Stack[-4], 2))
0x6f1: @ Rotate(Stack[-2], Stack[-1])
0x6f2: Pop(2)
0x6f3: @ CameraWaitForPlayFinish()
0x6f4: Pop(0)
0x6f5: @ ResumeWorld()
0x6f6: Pop(0)
0x6f7: Stack[-19] = (bool) 1
0x6f8: Return(); Pop(16)

0x6f9: PushEmpty()
0x6fa: Push((bool) 1)
0x6fb: @ CameraSwitchToNormal(Stack[-1])
0x6fc: Pop(1)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty(bool, float, float, bool, float, float)
0x6ff: @ lshHasAnimation(Stack[-3], Stack[-7])
0x700: Pop(0)
0x701: Push(Stack[-3])
0x702: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x703: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x704: Pop(0)
0x705: Push((bool) 0)
0x706: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x707: Pop(1)
0x708: GOTO 0x70d

0x709: Push("Can't find lsh animation : ")
0x70a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x70b: @ Trace(Stack[-1])
0x70c: Pop(1)
0x70d: Return(); Pop(6)

0x70e: PushEmpty(bool, float, float, bool, float, float)
0x70f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x710: Pop(0)
0x711: Push(Stack[-3])
0x712: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x713: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x714: Pop(0)
0x715: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x716: Pop(0)
0x717: GOTO 0x71c

0x718: Push("Can't find lsh animation : ")
0x719: Pop(1); Push(Stack[-1] + Stack[-9]);
0x71a: @ Trace(Stack[-1])
0x71b: Pop(1)
0x71c: Return(); Pop(6)

0x71d: PushEmpty(bool)
0x71e: Call2 0x7e7

0x71f: Pop(0)
0x720: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x721: @ lshStopSpeech()
0x722: Pop(0)
0x723: Return(); Pop(0)

0x724: PushEmpty(int, bool, int, bool)
0x725: PushEmpty(bool, int, int)
0x726: Stack[-2] = Stack[-10]
0x727: Stack[-1] = Stack[-9]
0x728: Call2 0x74b

0x729: Pop(2)
0x72a: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72b: @ irand(Stack[-2], Stack[-5])
0x72c: Pop(0)
0x72d: Push((int) 0)
0x72e: Push((int) 1)
0x72f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x730: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x731: Pop(2)
0x732: Return(); Pop(4)

0x733: PushEmpty(object, object)
0x734: @ self(Stack[-1])
0x735: Pop(0)
0x736: Stack[-3] = Stack[-1]
0x737: Return(); Pop(2)

0x738: Stack[-1] = 0
0x739: PushEmpty(float, float)
0x73a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x73b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x73c: Push((float)0.0)
0x73d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x740: Return(); Pop(2)

0x741: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x742: Return(); Pop(2)

0x743: PushEmpty()
0x744: Push((int) 0)
0x745: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x747: Stack[-2] = -Stack[-1]; Pop(0);
0x748: GOTO 0x74a

0x749: Stack[-2] = Stack[-1]
0x74a: Return(); Pop(0)

0x74b: PushEmpty(int, int)
0x74c: @ irand(Stack[-1], Stack[-3])
0x74d: Pop(0)
0x74e: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x74f: Return(); Pop(2)

0x750: PushEmpty()
0x751: Push(CvectorIndex(Stack[-1], 0))
0x752: Push(CvectorIndex(Stack[-2], 0))
0x753: Pop(2); Push(Stack[-2] * Stack[-1]);
0x754: Push(CvectorIndex(Stack[-2], 2))
0x755: Push(CvectorIndex(Stack[-3], 2))
0x756: Pop(2); Push(Stack[-2] * Stack[-1]);
0x757: Pop(2); Push(Stack[-2] + Stack[-1]);
0x758: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x759: Return(); Pop(0)

0x75a: PushEmpty(int, int)
0x75b: @ GetVariable(Stack[-3], Stack[-1])
0x75c: Pop(0)
0x75d: Stack[-4] = Stack[-1]
0x75e: Return(); Pop(2)

0x75f: PushEmpty(object, object)
0x760: @ CreateIntVector(Stack[-1])
0x761: Pop(0)
0x762: @@ add(Stack[-4])
0x763: Pop(0)
0x764: @@ add(Stack[-3])
0x765: Pop(0)
0x766: Push((int) 3)
0x767: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x768: Pop(1)
0x769: Return(); Pop(2)

0x76a: Stack[-1] = 0
0x76b: PushEmpty(int, int, bool, int, int, bool)
0x76c: @@ GetItemID(Stack[-3])
0x76d: Pop(0)
0x76e: Push("Category")
0x76f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x770: Pop(1)
0x771: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x772: Pop(0)
0x773: Pop(0); Push((bool) Stack[-1] == 0)
0x774: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x775: @@ DropItems(Stack[-8], Stack[-7])
0x776: Pop(0)
0x777: GOTO 0x77d

0x778: PushEmpty(int, int)
0x779: Stack[-2] = Stack[-5]
0x77a: Stack[-1] = Stack[-9]
0x77b: Call2 0x75f

0x77c: Pop(2)
0x77d: Return(); Pop(6)

0x77e: PushEmpty(object, object)
0x77f: @ CreateInvItem(Stack[-1])
0x780: Pop(0)
0x781: @@ SetItemName(Stack[-4])
0x782: Pop(0)
0x783: PushEmpty(object, object, int)
0x784: Stack[-3] = Stack[-8]
0x785: Stack[-2] = Stack[-4]
0x786: Stack[-1] = Stack[-6]
0x787: Call2 0x76b

0x788: Pop(3)
0x789: Return(); Pop(2)

0x78a: Stack[-1] = 0
0x78b: PushEmpty(float, float)
0x78c: @ GetGameTime(Stack[-1])
0x78d: Pop(0)
0x78e: Push((int) 1)
0x78f: PushEmpty(int)
0x790: Push((int) 24)
0x791: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x792: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x793: Return(); Pop(2)

0x794: PushEmpty()
0x795: PushEmpty(int)
0x796: Call2 0x78b

0x797: Pop(0)
0x798: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x799: Return(); Pop(0)

0x79a: PushEmpty(string, string)
0x79b: Stack[-1] = "idle"
0x79c: Push(Stack[-3])
0x79d: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x79f: Stack[-4] = Stack[-1]
0x7a0: Return(); Pop(2)

0x7a1: PushEmpty(int, bool, int, bool)
0x7a2: Stack[-2] = (int) 0
0x7a3: Push("all")
0x7a4: PushEmpty(string, int)
0x7a5: Stack[-1] = Stack[-5]
0x7a6: Call2 0x79a

0x7a7: Pop(1)
0x7a8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a9: Pop(2)
0x7aa: Pop(0); Push((bool) Stack[-1] == 0)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: GOTO 0x7b0

0x7ad: Push((int) 1)
0x7ae: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7af: GOTO 0x7a3

0x7b0: Stack[-5] = Stack[-2]
0x7b1: Return(); Pop(4)

0x7b2: PushEmpty()
0x7b3: Push((int) 0)
0x7b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b6: Push("pt_")
0x7b7: Push(GlobalVars[0])
0x7b8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x7b9: GOTO 0x7be

0x7ba: Push("pt_")
0x7bb: Push(GlobalVars[0])
0x7bc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7bd: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x7be: Return(); Pop(0)

0x7bf: PushEmpty(bool, bool)
0x7c0: Push("cleanup")
0x7c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7c3: Push(GlobalVars[1])
0x7c4: Stack[-1] = (bool) 1
0x7c5: GlobalVars[1] = Stack[-1]; Pop(1)
0x7c6: @ IsLoaded(Stack[-1])
0x7c7: Pop(0)
0x7c8: Pop(0); Push((bool) Stack[-1] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ca: PushEmpty(object)
0x7cb: Call2 0x733

0x7cc: Pop(0)
0x7cd: @ RemoveActor(Stack[-1])
0x7ce: Pop(1)
0x7cf: GOTO 0x7d6

0x7d0: Push("restore")
0x7d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d3: Push(GlobalVars[1])
0x7d4: Stack[-1] = (bool) 0
0x7d5: GlobalVars[1] = Stack[-1]; Pop(1)
0x7d6: Return(); Pop(2)

0x7d7: Push(GlobalVars[1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d9: PushEmpty(object)
0x7da: Call2 0x733

0x7db: Pop(0)
0x7dc: @ RemoveActor(Stack[-1])
0x7dd: Pop(1)
0x7de: Return(); Pop(0)

0x7df: Stack[-1] = (int) 515594
0x7e0: Return(); Pop(0)

0x7e1: Stack[-1] = (int) 512583
0x7e2: Return(); Pop(0)

0x7e3: Stack[-1] = "ui/NPC_Citizen3.png"
0x7e4: Return(); Pop(0)

0x7e5: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x7e6: Return(); Pop(0)

0x7e7: Stack[-1] = (bool) 0
0x7e8: Return(); Pop(0)

0x7e9: PushEmpty()
0x7ea: Push("playsound")
0x7eb: Push("giveitem")
0x7ec: @ TriggerWorld(Stack[-2], Stack[-1])
0x7ed: Pop(2)
0x7ee: Return(); Pop(0)

0x7ef: PushEmpty()
0x7f0: Push((int) 1000)
0x7f1: @@ SetReturnValue(Stack[-1])
0x7f2: Pop(1)
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty()
0x7f5: Push("oob1Gorbun1")
0x7f6: Push((int) 1)
0x7f7: @ SetVariable(Stack[-2], Stack[-1])
0x7f8: Pop(2)
0x7f9: Return(); Pop(0)

0x7fa: PushEmpty()
0x7fb: Push("oob1Gorbun2")
0x7fc: Push((int) 1)
0x7fd: @ SetVariable(Stack[-2], Stack[-1])
0x7fe: Pop(2)
0x7ff: Return(); Pop(0)

0x800: PushEmpty(float, float)
0x801: Push("b1q02")
0x802: Push((int) 2)
0x803: @ SetVariable(Stack[-2], Stack[-1])
0x804: Pop(2)
0x805: PushEmpty()
0x806: Call2 0x84f

0x807: Pop(0)
0x808: Push("health")
0x809: @@ GetProperty(Stack[-1], Stack[-2])
0x80a: Pop(1)
0x80b: Push((float)0.3)
0x80c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x80d: Push("health")
0x80e: @@ SetProperty(Stack[-1], Stack[-2])
0x80f: Pop(1)
0x810: Push("blood is given")
0x811: @ Trace(Stack[-1])
0x812: Pop(1)
0x813: PushEmpty(object, string, int)
0x814: Stack[-3] = Stack[-7]
0x815: Stack[-2] = "b1q02_blood"
0x816: Stack[-1] = (int) 1
0x817: Call2 0x77e

0x818: Pop(3)
0x819: Return(); Pop(2)

0x81a: PushEmpty()
0x81b: PushEmpty(bool, object)
0x81c: Stack[-1] = Stack[-3]
0x81d: Call2 0x848

0x81e: Pop(1)
0x81f: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x820: Stack[-2] = (bool) 1
0x821: Return(); Pop(0)

0x822: Stack[-2] = (bool) 0
0x823: Return(); Pop(0)

0x824: PushEmpty()
0x825: PushEmpty(int, string)
0x826: Stack[-1] = "b1q02"
0x827: Call2 0x75a

0x828: Pop(1)
0x829: Push((int) 1)
0x82a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82c: Stack[-2] = (bool) 1
0x82d: Return(); Pop(0)

0x82e: Stack[-2] = (bool) 0
0x82f: Return(); Pop(0)

0x830: PushEmpty()
0x831: PushEmpty(int, string)
0x832: Stack[-1] = "oob1Gorbun1"
0x833: Call2 0x75a

0x834: Pop(1)
0x835: Push((int) 0)
0x836: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-2] = (bool) 1
0x839: Return(); Pop(0)

0x83a: Stack[-2] = (bool) 0
0x83b: Return(); Pop(0)

0x83c: PushEmpty()
0x83d: PushEmpty(int, string)
0x83e: Stack[-1] = "oob1Gorbun2"
0x83f: Call2 0x75a

0x840: Pop(1)
0x841: Push((int) 0)
0x842: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: Stack[-2] = (bool) 1
0x845: Return(); Pop(0)

0x846: Stack[-2] = (bool) 0
0x847: Return(); Pop(0)

0x848: PushEmpty(float, float)
0x849: Push("health")
0x84a: @@ GetProperty(Stack[-1], Stack[-2])
0x84b: Pop(1)
0x84c: Push((float)0.4)
0x84d: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x84e: Return(); Pop(2)

0x84f: PushEmpty(object, object)
0x850: Push((int) 202)
0x851: Push((int) 2)
0x852: Push((int) 517942)
0x853: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: PushEmpty(bool, object, int)
0x856: Stack[-2] = Stack[-4]
0x857: Stack[-1] = (int) 200
0x858: Call2 0x869

0x859: Pop(3)
0x85a: Return(); Pop(2)

0x85b: Stack[-1] = 0
0x85c: PushEmpty(object, object)
0x85d: @ GetDiaryRoot(Stack[-1])
0x85e: Pop(0)
0x85f: Pop(0); Push((bool) Stack[-1] == 0)
0x860: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x861: Push("Can't retrieve diary root")
0x862: @ Trace(Stack[-1])
0x863: Pop(1)
0x864: Stack[-3] = (bool) 0
0x865: Return(); Pop(2)

0x866: Stack[-3] = Stack[-1]
0x867: Return(); Pop(2)

0x868: Stack[-1] = 0
0x869: PushEmpty(object, object, int, object, object, int)
0x86a: PushEmpty(object)
0x86b: Call2 0x85c

0x86c: Stack[-4] = Stack[-1]
0x86d: Pop(1)
0x86e: @@ Find(Stack[-7], Stack[-2])
0x86f: Pop(0)
0x870: Pop(0); Push((bool) Stack[-2] == 0)
0x871: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x872: Push("Can't find diary parent with id: ")
0x873: Pop(1); Push(Stack[-1] + Stack[-8]);
0x874: @ Trace(Stack[-1])
0x875: Pop(1)
0x876: Stack[-9] = (bool) 0
0x877: Return(); Pop(6)

0x878: @@ AddChild(Stack[-8])
0x879: Pop(0)
0x87a: Push((int) 7)
0x87b: @ SendWorldWndMessage(Stack[-1])
0x87c: Pop(1)
0x87d: @@ GetCategory(Stack[-1])
0x87e: Pop(0)
0x87f: @ SetDiarySection(Stack[-1])
0x880: Pop(0)
0x881: Stack[-9] = (bool) 0
0x882: Return(); Pop(6)

0x883: Stack[-2] = 0
0x884: Stack[-3] = 0
0x885: PushEmpty(int, int)
0x886: Push((int) 0)
0x887: @ ClearSubContainer(Stack[-1])
0x888: Pop(1)
0x889: PushEmpty(int)
0x88a: Call2 0x78b

0x88b: Stack[-2] = Stack[-1]
0x88c: Pop(1)
0x88d: PushEmpty(string, int, int, int)
0x88e: Stack[-4] = "tourniquet"
0x88f: Stack[-3] = (int) 1
0x890: Stack[-2] = (int) 1
0x891: Stack[-1] = (int) 5
0x892: Call2 0x724

0x893: Pop(4)
0x894: PushEmpty(string, int, int, int)
0x895: Stack[-4] = "bandage"
0x896: Stack[-3] = (int) 1
0x897: Stack[-2] = (int) 1
0x898: Stack[-1] = (int) 5
0x899: Call2 0x724

0x89a: Pop(4)
0x89b: Return(); Pop(2)

0x89c: PushEmpty(int, int)
0x89d: Push("branch")
0x89e: @ GetVariable(Stack[-1], Stack[-2])
0x89f: Pop(1)
0x8a0: Push((int) 0)
0x8a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a3: Stack[-3] = (int) 1
0x8a4: Return(); Pop(2)

0x8a5: GOTO 0x8ab

0x8a6: Push((int) 1)
0x8a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a9: Stack[-3] = (int) 2
0x8aa: Return(); Pop(2)

0x8ab: Stack[-3] = (int) 3
0x8ac: Return(); Pop(2)

0x8ad: PushEmpty()
0x8ae: Push((int) 0)
0x8af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b1: PushEmpty(string)
0x8b2: Stack[-1] = "cleanup"
0x8b3: Call2 0x7bf

0x8b4: Pop(1)
0x8b5: GOTO 0x8bc

0x8b6: Push((int) 1)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b9: PushEmpty()
0x8ba: Call2 0x885

0x8bb: Pop(0)
0x8bc: Return(); Pop(0)

0x8bd: PushEmpty(int, int)
0x8be: Push("mt_gorbun")
0x8bf: @ GetVariable(Stack[-1], Stack[-2])
0x8c0: Pop(1)
0x8c1: Pop(0); Push((bool) Stack[-1] == 0)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8c3: PushEmpty(int, object)
0x8c4: Stack[-1] = Stack[-5]
0x8c5: Push(-2, 1); TaskCall(7)
0x8c6: Call2 0x3fa

0x8c7: Pop(-2, 1); TaskReturn
0x8c8: Pop(2)
0x8c9: Push("mt_gorbun")
0x8ca: Push((int) 1)
0x8cb: @ SetVariable(Stack[-2], Stack[-1])
0x8cc: Pop(2)
0x8cd: PushEmpty(bool, int)
0x8ce: Stack[-1] = (int) 1
0x8cf: Call2 0x794

0x8d0: Pop(1)
0x8d1: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8d2: Push((int) 1000)
0x8d3: PushEmpty(int, object)
0x8d4: Stack[-1] = Stack[-6]
0x8d5: Push(-2, 1); TaskCall(5)
0x8d6: Call2 0x142

0x8d7: Pop(-2, 1); TaskReturn
0x8d8: Pop(1)
0x8d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8db: PushEmpty(bool, object, float)
0x8dc: Stack[-2] = Stack[-6]
0x8dd: Stack[-1] = (int) 110
0x8de: Call2 0x6c9

0x8df: Pop(2)
0x8e0: Pop(1); Push((bool) Stack[-1] == 0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Return(); Pop(2)

0x8e3: PushEmpty(object)
0x8e4: Stack[-1] = Stack[-4]
0x8e5: Push(-1, 1); TaskCall(1)
0x8e6: Call2 0xd

0x8e7: Pop(-1, 1); TaskReturn
0x8e8: Pop(1)
0x8e9: PushEmpty(object)
0x8ea: Stack[-1] = Stack[-4]
0x8eb: Call2 0x6f9

0x8ec: Pop(1)
0x8ed: Return(); Pop(2)

0x8ee: Push((int) 1000)
0x8ef: PushEmpty(int, object)
0x8f0: Stack[-1] = Stack[-6]
0x8f1: Push(-2, 1); TaskCall(9)
0x8f2: Call2 0x4be

0x8f3: Pop(-2, 1); TaskReturn
0x8f4: Pop(1)
0x8f5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x909; Pop(1)

0x8f7: PushEmpty(bool, object, float)
0x8f8: Stack[-2] = Stack[-6]
0x8f9: Stack[-1] = (int) 110
0x8fa: Call2 0x6c9

0x8fb: Pop(2)
0x8fc: Pop(1); Push((bool) Stack[-1] == 0)
0x8fd: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fe: Return(); Pop(2)

0x8ff: PushEmpty(object)
0x900: Stack[-1] = Stack[-4]
0x901: Push(-1, 1); TaskCall(1)
0x902: Call2 0xd

0x903: Pop(-1, 1); TaskReturn
0x904: Pop(1)
0x905: PushEmpty(object)
0x906: Stack[-1] = Stack[-4]
0x907: Call2 0x6f9

0x908: Pop(1)
0x909: Return(); Pop(2)

