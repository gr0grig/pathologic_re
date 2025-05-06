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

RunOp = 0x57b
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
		EVENT_11 Op = 0x266 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x47b Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x544 Vars = (int, int)
	GTASK_11 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x610 Vars = ()
		EVENT_0 Op = 0x619 Vars = (object)

Events:
EVENT_26 Op = 0x7a2 Vars = (string)
EVENT_6 Op = 0x7ba Vars = ()
EVENT_9 Op = 0x890 Vars = (int, float)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x654

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
0x12: Call2 0x7ca

0x13: Pop(0)
0x14: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x15: PushEmpty(string)
0x16: Stack[-1] = "Neutral"
0x17: Call2 0x6e1

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
0x29: Call2 0x7ca

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
0x3d: Call2 0x636

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
0x65: Call2 0x7ba

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
0x78: Call2 0x640

0x79: Pop(2)
0x7a: EventEnable(0)
0x7b: PushEmpty(object)
0x7c: Stack[-1] = Stack[-4]
0x7d: Call2 0x8a0

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
0xac: Call2 0x62e

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
0xc4: Call2 0x649

0xc5: Pop(1)
0xc6: Push((int) 6)
0xc7: @ Sleep(Stack[-1])
0xc8: Pop(1)
0xc9: Return(); Pop(2)

0xca: PushEmpty()
0xcb: Call2 0xe9

0xcc: Pop(0)
0xcd: PushEmpty()
0xce: Call2 0x7ba

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
0xe1: Call2 0x640

0xe2: Pop(2)
0xe3: EventEnable(0)
0xe4: PushEmpty(object)
0xe5: Stack[-1] = Stack[-4]
0xe6: Call2 0x8a0

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
0x10e: Call2 0x784

0x10f: Stack[-3] = Stack[-1]
0x110: Pop(1)
0x111: Push(Stack[-2])
0x112: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x113: @ irand(Stack[-1], Stack[-2])
0x114: Pop(0)
0x115: Push("all")
0x116: PushEmpty(string, int)
0x117: Stack[-1] = Stack[-4]
0x118: Call2 0x77d

0x119: Pop(1)
0x11a: @ PlayAnimation(Stack[-2], Stack[-1])
0x11b: Pop(2)
0x11c: @ WaitForAnimEnd()
0x11d: Pop(0)
0x11e: Return(); Pop(14)

0x11f: PushEmpty()
0x120: Call2 0x7ba

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
0x147: Call2 0x659

0x148: Pop(2)
0x149: Pop(1); Push((bool) Stack[-1] == 0)
0x14a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14b: Stack[-10] = (int) -2
0x14c: Return(); Pop(8)

0x14d: @ CreateDialog(Stack[-4])
0x14e: Pop(0)
0x14f: PushEmpty(int)
0x150: Call2 0x7c4

0x151: Pop(0)
0x152: @@ SetNPCName(Stack[-1])
0x153: Pop(1)
0x154: PushEmpty(int)
0x155: Call2 0x7c2

0x156: Pop(0)
0x157: @@ SetNPCDescription(Stack[-1])
0x158: Pop(1)
0x159: PushEmpty(string)
0x15a: Call2 0x7c6

0x15b: Pop(0)
0x15c: @@ SetPhoto(Stack[-1])
0x15d: Pop(1)
0x15e: PushEmpty(string)
0x15f: Call2 0x7c8

0x160: Pop(0)
0x161: @@ SetPhoto2(Stack[-1])
0x162: Pop(1)
0x163: PushEmpty(int)
0x164: Call2 0x87f

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
0x183: Call2 0x69d

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
0x191: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 0
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0x7fd

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x807

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x813

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 1
0x1a8: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1a9: PushEmpty(object, object)
0x1aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ac: Call2 0x7d7

0x1ad: Pop(2)
0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0x250

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
0x1c1: GOTO 0x232

0x1c2: PushEmpty(bool)
0x1c3: Stack[-1] = (bool) 0
0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x7fd

0x1c9: Pop(1)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: PushEmpty(bool, object)
0x1cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Call2 0x807

0x1cf: Pop(1)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 1
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call2 0x81f

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = (bool) 1
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(object, object)
0x1db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dd: Call2 0x7dd

0x1de: Pop(2)
0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0x250

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
0x1ed: GOTO 0x232

0x1ee: PushEmpty(bool, object)
0x1ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Call2 0x807

0x1f1: Pop(1)
0x1f2: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0x250

0x1f6: Pop(1)
0x1f7: Push((int) 517919)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Call2 0x7fd

0x1ff: Pop(1)
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: Push((int) 517920)
0x202: Push((int) 19061)
0x203: Push((int) 19058)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call2 0x7fd

0x209: Pop(1)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 517921)
0x20d: Push((int) 19063)
0x20e: Push((int) 19059)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Push((int) 541718)
0x212: Push((int) -1)
0x213: Push((int) 43908)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 517922)
0x217: Push((int) -1)
0x218: Push((int) 19060)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: GOTO 0x232

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral"
0x21e: Call2 0x250

0x21f: Pop(1)
0x220: Push((int) 517927)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 518197)
0x226: Push((int) -1)
0x227: Push((int) 19310)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Push((int) 517928)
0x22b: Push((int) -1)
0x22c: Push((int) 19066)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: GOTO 0x232

0x230: Return(); Pop(0)

0x231: GOTO 0x190

0x232: PushEmpty(bool)
0x233: Call2 0x7ca

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x236: @ lshWaitForAnimEnd()
0x237: Pop(0)
0x238: Push( Stack[3 + Tasks[-1].StackPointer] )
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x240

0x23b: PushEmpty(string)
0x23c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x23d: Call2 0x6e1

0x23e: Pop(1)
0x23f: GOTO 0x236

0x240: GOTO 0x24f

0x241: Push("all")
0x242: Push("idle")
0x243: @ PlayAnimation(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: @ WaitForAnimEnd()
0x246: Pop(0)
0x247: Push( Stack[3 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x24f

0x24a: Push("all")
0x24b: Push("idle")
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: GOTO 0x245

0x24f: Return(); Pop(0)

0x250: PushEmpty()
0x251: PushEmpty(bool)
0x252: Call2 0x7ca

0x253: Pop(0)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Return(); Pop(0)

0x257: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(0)

0x25a: PushEmpty(string, bool)
0x25b: Stack[-2] = Stack[-3]
0x25c: Push("")
0x25d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: Stack[-1] = (bool) 0
0x260: GOTO 0x262

0x261: Stack[-1] = (bool) 1
0x262: Call2 0x6f1

0x263: Pop(2)
0x264: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x265: Return(); Pop(0)

0x266: PushEmpty()
0x267: Push((int) 1)
0x268: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x269: PushEmpty()
0x26a: Call2 0x700

0x26b: Pop(0)
0x26c: Push((int) 19051)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0x7e3

0x273: Pop(2)
0x274: PushEmpty(object, object)
0x275: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0x7cc

0x278: Pop(2)
0x279: Push((int) 19062)
0x27a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27c: PushEmpty(object, object)
0x27d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27f: Call2 0x7e3

0x280: Pop(2)
0x281: Push((int) 43908)
0x282: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object, object)
0x285: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x286: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x287: Call2 0x7d2

0x288: Pop(2)
0x289: Push((int) 19310)
0x28a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28c: PushEmpty(object, object)
0x28d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28f: Call2 0x7d2

0x290: Pop(2)
0x291: Push((int) 19048)
0x292: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x294: PushEmpty(bool)
0x295: Stack[-1] = (bool) 0
0x296: PushEmpty(bool)
0x297: Stack[-1] = (bool) 0
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29a: Call2 0x7fd

0x29b: Pop(1)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x807

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Stack[-1] = (bool) 1
0x2a3: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Call2 0x813

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-1] = (bool) 1
0x2aa: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2ab: PushEmpty(object, object)
0x2ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call2 0x7d7

0x2af: Pop(2)
0x2b0: PushEmpty(string)
0x2b1: Stack[-1] = "Neutral"
0x2b2: Call2 0x250

0x2b3: Pop(1)
0x2b4: Push((int) 517910)
0x2b5: @@ SetMessage(Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ ClearReplies()
0x2b8: Pop(0)
0x2b9: Push((int) 520406)
0x2ba: Push((int) 21615)
0x2bb: Push((int) 21614)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 517911)
0x2bf: Push((int) 19050)
0x2c0: Push((int) 19049)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(bool)
0x2c5: Stack[-1] = (bool) 0
0x2c6: PushEmpty(bool)
0x2c7: Stack[-1] = (bool) 0
0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Call2 0x7fd

0x2cb: Pop(1)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d0: Call2 0x807

0x2d1: Pop(1)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-1] = (bool) 1
0x2d4: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Call2 0x81f

0x2d8: Pop(1)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Stack[-1] = (bool) 1
0x2db: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2dc: PushEmpty(object, object)
0x2dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2df: Call2 0x7dd

0x2e0: Pop(2)
0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x250

0x2e4: Pop(1)
0x2e5: Push((int) 517915)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 517916)
0x2eb: Push((int) 19055)
0x2ec: Push((int) 19054)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call2 0x807

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Neutral"
0x2f7: Call2 0x250

0x2f8: Pop(1)
0x2f9: Push((int) 517919)
0x2fa: @@ SetMessage(Stack[-1])
0x2fb: Pop(1)
0x2fc: @@ ClearReplies()
0x2fd: Pop(0)
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call2 0x7fd

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: Push((int) 517920)
0x304: Push((int) 19061)
0x305: Push((int) 19058)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30a: Call2 0x7fd

0x30b: Pop(1)
0x30c: Pop(1); Push((bool) Stack[-1] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30e: Push((int) 517921)
0x30f: Push((int) 19063)
0x310: Push((int) 19059)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Push((int) 541718)
0x314: Push((int) -1)
0x315: Push((int) 43908)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Push((int) 517922)
0x319: Push((int) -1)
0x31a: Push((int) 19060)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(string)
0x31f: Stack[-1] = "Neutral"
0x320: Call2 0x250

0x321: Pop(1)
0x322: Push((int) 517927)
0x323: @@ SetMessage(Stack[-1])
0x324: Pop(1)
0x325: @@ ClearReplies()
0x326: Pop(0)
0x327: Push((int) 518197)
0x328: Push((int) -1)
0x329: Push((int) 19310)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 517928)
0x32d: Push((int) -1)
0x32e: Push((int) 19066)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Return(); Pop(0)

0x332: Push((int) 19063)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral"
0x337: Call2 0x250

0x338: Pop(1)
0x339: Push((int) 517925)
0x33a: @@ SetMessage(Stack[-1])
0x33b: Pop(1)
0x33c: @@ ClearReplies()
0x33d: Pop(0)
0x33e: Push((int) 517926)
0x33f: Push((int) -1)
0x340: Push((int) 19064)
0x341: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x342: Pop(3)
0x343: Return(); Pop(0)

0x344: Push((int) 19061)
0x345: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x347: PushEmpty(string)
0x348: Stack[-1] = "Neutral"
0x349: Call2 0x250

0x34a: Pop(1)
0x34b: Push((int) 517923)
0x34c: @@ SetMessage(Stack[-1])
0x34d: Pop(1)
0x34e: @@ ClearReplies()
0x34f: Pop(0)
0x350: Push((int) 517924)
0x351: Push((int) -1)
0x352: Push((int) 19062)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 21620)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x359: Push((int) 19055)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Neutral"
0x35e: Call2 0x250

0x35f: Pop(1)
0x360: Push((int) 517917)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 517918)
0x366: Push((int) 21618)
0x367: Push((int) 19056)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 21618)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x250

0x371: Pop(1)
0x372: Push((int) 520409)
0x373: @@ SetMessage(Stack[-1])
0x374: Pop(1)
0x375: @@ ClearReplies()
0x376: Pop(0)
0x377: Push((int) 520413)
0x378: Push((int) 21624)
0x379: Push((int) 21623)
0x37a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: Push((int) 520418)
0x37d: Push((int) -1)
0x37e: Push((int) 21628)
0x37f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Return(); Pop(0)

0x382: Push((int) 21624)
0x383: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x250

0x388: Pop(1)
0x389: Push((int) 520414)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 520415)
0x38f: Push((int) 21626)
0x390: Push((int) 21625)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: Push((int) 520419)
0x394: Push((int) -1)
0x395: Push((int) 21629)
0x396: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x397: Pop(3)
0x398: Return(); Pop(0)

0x399: Push((int) 21626)
0x39a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral"
0x39e: Call2 0x250

0x39f: Pop(1)
0x3a0: Push((int) 520416)
0x3a1: @@ SetMessage(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ ClearReplies()
0x3a4: Pop(0)
0x3a5: Push((int) 520417)
0x3a6: Push((int) -1)
0x3a7: Push((int) 21627)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Return(); Pop(0)

0x3ab: Push((int) 19050)
0x3ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3ae: PushEmpty(string)
0x3af: Stack[-1] = "Neutral"
0x3b0: Call2 0x250

0x3b1: Pop(1)
0x3b2: Push((int) 517912)
0x3b3: @@ SetMessage(Stack[-1])
0x3b4: Pop(1)
0x3b5: @@ ClearReplies()
0x3b6: Pop(0)
0x3b7: Push((int) 517913)
0x3b8: Push((int) -1)
0x3b9: Push((int) 19051)
0x3ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: Push((int) 517914)
0x3bd: Push((int) -1)
0x3be: Push((int) 19052)
0x3bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c0: Pop(3)
0x3c1: Return(); Pop(0)

0x3c2: Push((int) 21615)
0x3c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = "Neutral"
0x3c7: Call2 0x250

0x3c8: Pop(1)
0x3c9: Push((int) 520407)
0x3ca: @@ SetMessage(Stack[-1])
0x3cb: Pop(1)
0x3cc: @@ ClearReplies()
0x3cd: Pop(0)
0x3ce: Push((int) 520408)
0x3cf: Push((int) 19050)
0x3d0: Push((int) 21616)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Return(); Pop(0)

0x3d4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d5: PushEmpty(bool)
0x3d6: Call2 0x7ca

0x3d7: Pop(0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d9: @ lshStopAnimation()
0x3da: Pop(0)
0x3db: GOTO 0x3de

0x3dc: @ StopAnimation()
0x3dd: Pop(0)
0x3de: Return(); Pop(0)

0x3df: GOTO 0x267

0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3e2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3e3: PushEmpty(bool, object, float)
0x3e4: Stack[-2] = Stack[-12]
0x3e5: Stack[-1] = (float) 100.0
0x3e6: Call2 0x659

0x3e7: Pop(2)
0x3e8: Pop(1); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-10] = (int) -2
0x3eb: Return(); Pop(8)

0x3ec: @ CreateDialog(Stack[-4])
0x3ed: Pop(0)
0x3ee: PushEmpty(int)
0x3ef: Call2 0x7c4

0x3f0: Pop(0)
0x3f1: @@ SetNPCName(Stack[-1])
0x3f2: Pop(1)
0x3f3: PushEmpty(int)
0x3f4: Call2 0x7c2

0x3f5: Pop(0)
0x3f6: @@ SetNPCDescription(Stack[-1])
0x3f7: Pop(1)
0x3f8: PushEmpty(string)
0x3f9: Call2 0x7c6

0x3fa: Pop(0)
0x3fb: @@ SetPhoto(Stack[-1])
0x3fc: Pop(1)
0x3fd: PushEmpty(string)
0x3fe: Call2 0x7c8

0x3ff: Pop(0)
0x400: @@ SetPhoto2(Stack[-1])
0x401: Pop(1)
0x402: PushEmpty(int)
0x403: Call2 0x87f

0x404: Pop(0)
0x405: @@ SetPlayerName(Stack[-1])
0x406: Pop(1)
0x407: Stack[-2] = (int) -1
0x408: @ IsOverrideActive(Stack[-3])
0x409: Pop(0)
0x40a: Push(Stack[-3])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-10] = (int) -2
0x40d: Return(); Pop(8)

0x40e: @ DoDialog(Stack[-4])
0x40f: Pop(0)
0x410: PushEmpty(object, object)
0x411: Stack[-2] = Stack[-11]
0x412: Stack[-1] = Stack[-6]
0x413: Push(-2, 4); TaskCall(8)
0x414: Call2 0x42b

0x415: Pop(-2, 4); TaskReturn
0x416: Pop(2)
0x417: @@ IsDialogEnd(Stack[-1])
0x418: Pop(0)
0x419: Pop(0); Push((bool) Stack[-1] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41b: @ sync()
0x41c: Pop(0)
0x41d: @@ IsDialogEnd(Stack[-1])
0x41e: Pop(0)
0x41f: GOTO 0x419

0x420: PushEmpty(object)
0x421: Stack[-1] = Stack[-10]
0x422: Call2 0x69d

0x423: Pop(1)
0x424: @ StopDialog(Stack[-4])
0x425: Pop(0)
0x426: @@ GetReturnValue(Stack[-2])
0x427: Pop(0)
0x428: Stack[-10] = Stack[-2]
0x429: Return(); Pop(8)

0x42a: Stack[-4] = 0
0x42b: PushEmpty()
0x42c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x42d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x42f: Push((int) 1)
0x430: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Neutral"
0x433: Call2 0x465

0x434: Pop(1)
0x435: Push((int) 520726)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 520727)
0x43b: Push((int) -1)
0x43c: Push((int) 21938)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Push((int) 520728)
0x440: Push((int) -1)
0x441: Push((int) 21939)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: GOTO 0x447

0x445: Return(); Pop(0)

0x446: GOTO 0x42f

0x447: PushEmpty(bool)
0x448: Call2 0x7ca

0x449: Pop(0)
0x44a: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x44b: @ lshWaitForAnimEnd()
0x44c: Pop(0)
0x44d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: GOTO 0x455

0x450: PushEmpty(string)
0x451: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x452: Call2 0x6e1

0x453: Pop(1)
0x454: GOTO 0x44b

0x455: GOTO 0x464

0x456: Push("all")
0x457: Push("idle")
0x458: @ PlayAnimation(Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: @ WaitForAnimEnd()
0x45b: Pop(0)
0x45c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x45d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45e: GOTO 0x464

0x45f: Push("all")
0x460: Push("idle")
0x461: @ PlayAnimation(Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: GOTO 0x45a

0x464: Return(); Pop(0)

0x465: PushEmpty()
0x466: PushEmpty(bool)
0x467: Call2 0x7ca

0x468: Pop(0)
0x469: Pop(1); Push((bool) Stack[-1] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: Return(); Pop(0)

0x46c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Return(); Pop(0)

0x46f: PushEmpty(string, bool)
0x470: Stack[-2] = Stack[-3]
0x471: Push("")
0x472: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-1] = (bool) 0
0x475: GOTO 0x477

0x476: Stack[-1] = (bool) 1
0x477: Call2 0x6f1

0x478: Pop(2)
0x479: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x47a: Return(); Pop(0)

0x47b: PushEmpty()
0x47c: Push((int) 1)
0x47d: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x47e: PushEmpty()
0x47f: Call2 0x700

0x480: Pop(0)
0x481: Push((int) 21937)
0x482: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x484: PushEmpty(string)
0x485: Stack[-1] = "Neutral"
0x486: Call2 0x465

0x487: Pop(1)
0x488: Push((int) 520726)
0x489: @@ SetMessage(Stack[-1])
0x48a: Pop(1)
0x48b: @@ ClearReplies()
0x48c: Pop(0)
0x48d: Push((int) 520727)
0x48e: Push((int) -1)
0x48f: Push((int) 21938)
0x490: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x491: Pop(3)
0x492: Push((int) 520728)
0x493: Push((int) -1)
0x494: Push((int) 21939)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Return(); Pop(0)

0x498: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x499: PushEmpty(bool)
0x49a: Call2 0x7ca

0x49b: Pop(0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49d: @ lshStopAnimation()
0x49e: Pop(0)
0x49f: GOTO 0x4a2

0x4a0: @ StopAnimation()
0x4a1: Pop(0)
0x4a2: Return(); Pop(0)

0x4a3: GOTO 0x47c

0x4a4: Return(); Pop(0)

0x4a5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4a6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4a7: PushEmpty(bool, object, float)
0x4a8: Stack[-2] = Stack[-12]
0x4a9: Stack[-1] = (float) 100.0
0x4aa: Call2 0x659

0x4ab: Pop(2)
0x4ac: Pop(1); Push((bool) Stack[-1] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-10] = (int) -2
0x4af: Return(); Pop(8)

0x4b0: @ CreateDialog(Stack[-4])
0x4b1: Pop(0)
0x4b2: PushEmpty(int)
0x4b3: Call2 0x7c4

0x4b4: Pop(0)
0x4b5: @@ SetNPCName(Stack[-1])
0x4b6: Pop(1)
0x4b7: PushEmpty(int)
0x4b8: Call2 0x7c2

0x4b9: Pop(0)
0x4ba: @@ SetNPCDescription(Stack[-1])
0x4bb: Pop(1)
0x4bc: PushEmpty(string)
0x4bd: Call2 0x7c6

0x4be: Pop(0)
0x4bf: @@ SetPhoto(Stack[-1])
0x4c0: Pop(1)
0x4c1: PushEmpty(string)
0x4c2: Call2 0x7c8

0x4c3: Pop(0)
0x4c4: @@ SetPhoto2(Stack[-1])
0x4c5: Pop(1)
0x4c6: PushEmpty(int)
0x4c7: Call2 0x87f

0x4c8: Pop(0)
0x4c9: @@ SetPlayerName(Stack[-1])
0x4ca: Pop(1)
0x4cb: Stack[-2] = (int) -1
0x4cc: @ IsOverrideActive(Stack[-3])
0x4cd: Pop(0)
0x4ce: Push(Stack[-3])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-10] = (int) -2
0x4d1: Return(); Pop(8)

0x4d2: @ DoDialog(Stack[-4])
0x4d3: Pop(0)
0x4d4: PushEmpty(object, object)
0x4d5: Stack[-2] = Stack[-11]
0x4d6: Stack[-1] = Stack[-6]
0x4d7: Push(-2, 4); TaskCall(10)
0x4d8: Call2 0x4ef

0x4d9: Pop(-2, 4); TaskReturn
0x4da: Pop(2)
0x4db: @@ IsDialogEnd(Stack[-1])
0x4dc: Pop(0)
0x4dd: Pop(0); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4df: @ sync()
0x4e0: Pop(0)
0x4e1: @@ IsDialogEnd(Stack[-1])
0x4e2: Pop(0)
0x4e3: GOTO 0x4dd

0x4e4: PushEmpty(object)
0x4e5: Stack[-1] = Stack[-10]
0x4e6: Call2 0x69d

0x4e7: Pop(1)
0x4e8: @ StopDialog(Stack[-4])
0x4e9: Pop(0)
0x4ea: @@ GetReturnValue(Stack[-2])
0x4eb: Pop(0)
0x4ec: Stack[-10] = Stack[-2]
0x4ed: Return(); Pop(8)

0x4ee: Stack[-4] = 0
0x4ef: PushEmpty()
0x4f0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4f2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4f3: Push((int) 1)
0x4f4: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4f5: PushEmpty(string)
0x4f6: Stack[-1] = "Neutral"
0x4f7: Call2 0x52e

0x4f8: Pop(1)
0x4f9: Push((int) 541715)
0x4fa: @@ SetMessage(Stack[-1])
0x4fb: Pop(1)
0x4fc: @@ ClearReplies()
0x4fd: Pop(0)
0x4fe: Push((int) 541716)
0x4ff: Push((int) -1)
0x500: Push((int) 43906)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Push((int) 541717)
0x504: Push((int) -1)
0x505: Push((int) 43907)
0x506: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x507: Pop(3)
0x508: Push((int) 541742)
0x509: Push((int) -1)
0x50a: Push((int) 43939)
0x50b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50c: Pop(3)
0x50d: GOTO 0x510

0x50e: Return(); Pop(0)

0x50f: GOTO 0x4f3

0x510: PushEmpty(bool)
0x511: Call2 0x7ca

0x512: Pop(0)
0x513: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x514: @ lshWaitForAnimEnd()
0x515: Pop(0)
0x516: Push( Stack[3 + Tasks[-1].StackPointer] )
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: GOTO 0x51e

0x519: PushEmpty(string)
0x51a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x51b: Call2 0x6e1

0x51c: Pop(1)
0x51d: GOTO 0x514

0x51e: GOTO 0x52d

0x51f: Push("all")
0x520: Push("idle")
0x521: @ PlayAnimation(Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: @ WaitForAnimEnd()
0x524: Pop(0)
0x525: Push( Stack[3 + Tasks[-1].StackPointer] )
0x526: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x527: GOTO 0x52d

0x528: Push("all")
0x529: Push("idle")
0x52a: @ PlayAnimation(Stack[-2], Stack[-1])
0x52b: Pop(2)
0x52c: GOTO 0x523

0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: PushEmpty(bool)
0x530: Call2 0x7ca

0x531: Pop(0)
0x532: Pop(1); Push((bool) Stack[-1] == 0)
0x533: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x534: Return(); Pop(0)

0x535: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x536: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x537: Return(); Pop(0)

0x538: PushEmpty(string, bool)
0x539: Stack[-2] = Stack[-3]
0x53a: Push("")
0x53b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-1] = (bool) 0
0x53e: GOTO 0x540

0x53f: Stack[-1] = (bool) 1
0x540: Call2 0x6f1

0x541: Pop(2)
0x542: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x543: Return(); Pop(0)

0x544: PushEmpty()
0x545: Push((int) 1)
0x546: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x547: PushEmpty()
0x548: Call2 0x700

0x549: Pop(0)
0x54a: Push((int) 43906)
0x54b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54d: PushEmpty(object, object)
0x54e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x550: Call2 0x7d2

0x551: Pop(2)
0x552: Push((int) 43905)
0x553: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x555: PushEmpty(string)
0x556: Stack[-1] = "Neutral"
0x557: Call2 0x52e

0x558: Pop(1)
0x559: Push((int) 541715)
0x55a: @@ SetMessage(Stack[-1])
0x55b: Pop(1)
0x55c: @@ ClearReplies()
0x55d: Pop(0)
0x55e: Push((int) 541716)
0x55f: Push((int) -1)
0x560: Push((int) 43906)
0x561: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x562: Pop(3)
0x563: Push((int) 541717)
0x564: Push((int) -1)
0x565: Push((int) 43907)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Push((int) 541742)
0x569: Push((int) -1)
0x56a: Push((int) 43939)
0x56b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56c: Pop(3)
0x56d: Return(); Pop(0)

0x56e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x56f: PushEmpty(bool)
0x570: Call2 0x7ca

0x571: Pop(0)
0x572: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x573: @ lshStopAnimation()
0x574: Pop(0)
0x575: GOTO 0x578

0x576: @ StopAnimation()
0x577: Pop(0)
0x578: Return(); Pop(0)

0x579: GOTO 0x545

0x57a: Return(); Pop(0)

0x57b: PushEmpty()
0x57c: Call2 0x868

0x57d: Pop(0)
0x57e: Push((int) 0)
0x57f: Push((int) 144)
0x580: @ SetTimeEvent(Stack[-2], Stack[-1])
0x581: Pop(2)
0x582: Push((int) 1)
0x583: Push((int) 24)
0x584: @ SetTimeEvent(Stack[-2], Stack[-1])
0x585: Pop(2)
0x586: Push((int) 1)
0x587: Push((int) 48)
0x588: @ SetTimeEvent(Stack[-2], Stack[-1])
0x589: Pop(2)
0x58a: Push((int) 1)
0x58b: Push((int) 72)
0x58c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x58d: Pop(2)
0x58e: Push((int) 1)
0x58f: Push((int) 96)
0x590: @ SetTimeEvent(Stack[-2], Stack[-1])
0x591: Pop(2)
0x592: Push((int) 1)
0x593: Push((int) 120)
0x594: @ SetTimeEvent(Stack[-2], Stack[-1])
0x595: Pop(2)
0x596: PushEmpty()
0x597: Call2 0x59a

0x598: Pop(0)
0x599: Return(); Pop(0)

0x59a: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x59b: Push((bool) 1)
0x59c: @ SensePlayerOnly(Stack[-1])
0x59d: Pop(1)
0x59e: PushEmpty()
0x59f: Call2 0x5f2

0x5a0: Pop(0)
0x5a1: @ GetScene(Stack[-11])
0x5a2: Pop(0)
0x5a3: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x5a4: PushEmpty(string, int)
0x5a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5a6: Call2 0x795

0x5a7: Pop(1)
0x5a8: @@ GetLocator(Stack[-1], Stack[-11])
0x5a9: Pop(1)
0x5aa: Pop(0); Push((bool) Stack[-10] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: GOTO 0x5b0

0x5ad: Push((int) 1)
0x5ae: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5af: GOTO 0x5a4

0x5b0: PushEmpty(bool)
0x5b1: Call2 0x654

0x5b2: Pop(0)
0x5b3: Pop(1); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b5: PushEmpty()
0x5b6: Push(-0, 0); TaskCall(0)
0x5b7: Call2 0x0

0x5b8: Pop(-0, 0); TaskReturn
0x5b9: Pop(0)
0x5ba: PushEmpty()
0x5bb: Call2 0x5fa

0x5bc: Pop(0)
0x5bd: @ irand(Stack[-9], Stack[-2])
0x5be: Pop(0)
0x5bf: PushEmpty(string, int)
0x5c0: Stack[-1] = Stack[-11]
0x5c1: Call2 0x795

0x5c2: Pop(1)
0x5c3: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x5c4: Pop(1)
0x5c5: PushEmpty(cvector)
0x5c6: Call2 0x629

0x5c7: Pop(0)
0x5c8: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x5c9: PushEmpty(float, cvector)
0x5ca: Stack[-1] = Stack[-7]
0x5cb: Call2 0x733

0x5cc: Pop(1)
0x5cd: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5cf: @ GetHeight(Stack[-4])
0x5d0: Pop(0)
0x5d1: Stack[-3] = Stack[-7]
0x5d2: Push(CvectorIndex(Stack[-3], 1))
0x5d3: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x5d4: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x5d5: @ CanReachByPF(Stack[-2], Stack[-3])
0x5d6: Pop(0)
0x5d7: Push(Stack[-2])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5d9: Pop(0); Push(Stack[-5] | Stack[-5]);
0x5da: Pop(1); Push(Sqrt(Stack[-1]))
0x5db: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x5dc: Pop(1); Push(Stack[-6] * Stack[-1]);
0x5dd: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x5de: PushEmpty(bool, cvector, cvector)
0x5df: Stack[-2] = Stack[-4]
0x5e0: Stack[-1] = Stack[-9]
0x5e1: Push(-3, 1); TaskCall(2)
0x5e2: Call2 0x35

0x5e3: Pop(-3, 1); TaskReturn
0x5e4: Pop(2)
0x5e5: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e6: PushEmpty(int)
0x5e7: Stack[-1] = Stack[-10]
0x5e8: Push(-1, 0); TaskCall(4)
0x5e9: Call2 0xee

0x5ea: Pop(-1, 0); TaskReturn
0x5eb: Pop(1)
0x5ec: Push((int) 1)
0x5ed: @ Sleep(Stack[-1])
0x5ee: Pop(1)
0x5ef: GOTO 0x5bd

0x5f0: Return(); Pop(22)

0x5f1: Stack[-11] = 0
0x5f2: PushEmpty(string, string)
0x5f3: Push("loc")
0x5f4: @ GetProperty(Stack[-1], Stack[-2])
0x5f5: Pop(1)
0x5f6: Push(GlobalVars[0])
0x5f7: Stack[-1] = Stack[-2]
0x5f8: GlobalVars[0] = Stack[-1]; Pop(1)
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(cvector, cvector, cvector, cvector)
0x5fb: Push("all")
0x5fc: Push("walk_stopl")
0x5fd: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x5fe: Pop(2)
0x5ff: Push("all")
0x600: Push("walk_stopr")
0x601: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(2)
0x603: Push(CvectorIndex(Stack[-2], 2))
0x604: Push(CvectorIndex(Stack[-2], 2))
0x605: Pop(2); Push(Stack[-2] + Stack[-1]);
0x606: Push((float)2.0)
0x607: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x608: PushEmpty(float, float)
0x609: Push(CvectorIndex(Stack[-4], 2))
0x60a: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x60b: Call2 0x726

0x60c: Pop(1)
0x60d: Push((int) 40)
0x60e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x60f: Return(); Pop(4)

0x610: PushEmpty()
0x611: Call2 0x7ba

0x612: Pop(0)
0x613: PushEmpty()
0x614: Push(-0, 0); TaskCall(0)
0x615: Call2 0x0

0x616: Pop(-0, 0); TaskReturn
0x617: Pop(0)
0x618: Return(); Pop(0)

0x619: PushEmpty(bool, bool)
0x61a: @ IsOverrideActive(Stack[-1])
0x61b: Pop(0)
0x61c: Pop(0); Push((bool) Stack[-1] == 0)
0x61d: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x61e: EventDisable(0)
0x61f: PushEmpty(bool, object)
0x620: Stack[-1] = Stack[-5]
0x621: Call2 0x640

0x622: Pop(2)
0x623: EventEnable(0)
0x624: PushEmpty(object)
0x625: Stack[-1] = Stack[-4]
0x626: Call2 0x8a0

0x627: Pop(1)
0x628: Return(); Pop(2)

0x629: PushEmpty(cvector, cvector)
0x62a: @ GetPosition(Stack[-1])
0x62b: Pop(0)
0x62c: Stack[-3] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x62f: @ GetPosition(Stack[-3])
0x630: Pop(0)
0x631: @@ GetPosition(Stack[-2])
0x632: Pop(0)
0x633: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x634: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x635: Return(); Pop(6)

0x636: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x637: @ GetPosition(Stack[-3])
0x638: Pop(0)
0x639: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x63a: Push(CvectorIndex(Stack[-2], 0))
0x63b: Push(CvectorIndex(Stack[-3], 2))
0x63c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x63d: Pop(2)
0x63e: Stack[-8] = Stack[-1]
0x63f: Return(); Pop(6)

0x640: PushEmpty(cvector, cvector)
0x641: @@ GetPosition(Stack[-1])
0x642: Pop(0)
0x643: PushEmpty(bool, cvector)
0x644: Stack[-1] = Stack[-3]
0x645: Call2 0x636

0x646: Stack[-6] = Stack[-2]
0x647: Pop(2)
0x648: Return(); Pop(2)

0x649: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x64a: @@ GetPosition(Stack[-3])
0x64b: Pop(0)
0x64c: @ GetPosition(Stack[-2])
0x64d: Pop(0)
0x64e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x64f: Push(CvectorIndex(Stack[-1], 0))
0x650: Push(CvectorIndex(Stack[-2], 2))
0x651: @ RotateAsync(Stack[-2], Stack[-1])
0x652: Pop(2)
0x653: Return(); Pop(6)

0x654: PushEmpty(bool, bool)
0x655: @ IsLoaded(Stack[-1])
0x656: Pop(0)
0x657: Stack[-3] = Stack[-1]
0x658: Return(); Pop(2)

0x659: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x65a: @@ GetPosition(Stack[-8])
0x65b: Pop(0)
0x65c: @@ GetEyesHeight(Stack[-9])
0x65d: Pop(0)
0x65e: Push(CvectorIndex(Stack[-8], 1))
0x65f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x660: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x661: @ GetPosition(Stack[-7])
0x662: Pop(0)
0x663: @ GetEyesHeight(Stack[-9])
0x664: Pop(0)
0x665: Push(CvectorIndex(Stack[-7], 1))
0x666: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x667: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x668: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x669: Push(CvectorIndex(Stack[-6], 1))
0x66a: Stack[-1] = (int) 0
0x66b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x66c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x66d: Pop(1); Push(Sqrt(Stack[-1]))
0x66e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x66f: Stack[-5] = -Stack[-6]; Pop(0);
0x670: Pop(0); Push(Stack[-6] * Stack[-19]);
0x671: PushEmpty(cvector, cvector)
0x672: Push(CVector(0.0, 1.0, 0.0))
0x673: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x674: Call2 0x71c

0x675: Pop(1)
0x676: Push((int) 25)
0x677: Pop(2); Push(Stack[-2] * Stack[-1]);
0x678: Pop(2); Push(Stack[-2] + Stack[-1]);
0x679: Push(CVector(0.0, 10.0, 0.0))
0x67a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x67b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x67c: @ IsOverrideActive(Stack[-2])
0x67d: Pop(0)
0x67e: Push(Stack[-2])
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-21] = (bool) 0
0x681: Return(); Pop(18)

0x682: @ StopWorld()
0x683: Pop(0)
0x684: @ CameraTransit(Stack[-3], Stack[-5])
0x685: Pop(0)
0x686: Push(CvectorIndex(Stack[-4], 0))
0x687: Push(CvectorIndex(Stack[-5], 2))
0x688: @ Rotate(Stack[-2], Stack[-1])
0x689: Pop(2)
0x68a: PushEmpty(bool)
0x68b: Call2 0x7ca

0x68c: Pop(0)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: GOTO 0x697

0x68f: Push("head")
0x690: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x691: Pop(1)
0x692: Push(Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x694: Push("head")
0x695: @ LookAsyncCamera(Stack[-1])
0x696: Pop(1)
0x697: @ CameraWaitForPlayFinish()
0x698: Pop(0)
0x699: @ ResumeWorld()
0x69a: Pop(0)
0x69b: Stack[-21] = (bool) 1
0x69c: Return(); Pop(18)

0x69d: PushEmpty(bool, bool)
0x69e: @ CameraSwitchToNormal()
0x69f: Pop(0)
0x6a0: PushEmpty(bool)
0x6a1: Call2 0x7ca

0x6a2: Pop(0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a4: GOTO 0x6ad

0x6a5: Push("head")
0x6a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6a7: Pop(1)
0x6a8: Push(Stack[-1])
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6aa: Push("head")
0x6ab: @ UnlookAsync(Stack[-1])
0x6ac: Pop(1)
0x6ad: Return(); Pop(2)

0x6ae: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x6af: @@ GetPosition(Stack[-7])
0x6b0: Pop(0)
0x6b1: @@ GetEyesHeight(Stack[-8])
0x6b2: Pop(0)
0x6b3: Push(CvectorIndex(Stack[-7], 1))
0x6b4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6b5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6b6: @ GetPosition(Stack[-6])
0x6b7: Pop(0)
0x6b8: @ GetEyesHeight(Stack[-8])
0x6b9: Pop(0)
0x6ba: Push(CvectorIndex(Stack[-6], 1))
0x6bb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x6bc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6bd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x6be: Push(CvectorIndex(Stack[-5], 1))
0x6bf: Stack[-1] = (int) 0
0x6c0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x6c1: Pop(0); Push(Stack[-5] | Stack[-5]);
0x6c2: Pop(1); Push(Sqrt(Stack[-1]))
0x6c3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x6c4: Stack[-4] = -Stack[-5]; Pop(0);
0x6c5: Pop(0); Push(Stack[-5] * Stack[-17]);
0x6c6: Push(CVector(0.0, 10.0, 0.0))
0x6c7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x6c8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x6c9: @ IsOverrideActive(Stack[-1])
0x6ca: Pop(0)
0x6cb: Push(Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-19] = (bool) 0
0x6ce: Return(); Pop(16)

0x6cf: @ StopWorld()
0x6d0: Pop(0)
0x6d1: @ CameraTransit(Stack[-2], Stack[-4])
0x6d2: Pop(0)
0x6d3: Push(CvectorIndex(Stack[-3], 0))
0x6d4: Push(CvectorIndex(Stack[-4], 2))
0x6d5: @ Rotate(Stack[-2], Stack[-1])
0x6d6: Pop(2)
0x6d7: @ CameraWaitForPlayFinish()
0x6d8: Pop(0)
0x6d9: @ ResumeWorld()
0x6da: Pop(0)
0x6db: Stack[-19] = (bool) 1
0x6dc: Return(); Pop(16)

0x6dd: PushEmpty()
0x6de: @ CameraSwitchToNormal()
0x6df: Pop(0)
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty(bool, float, float, bool, float, float)
0x6e2: @ lshHasAnimation(Stack[-3], Stack[-7])
0x6e3: Pop(0)
0x6e4: Push(Stack[-3])
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e6: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x6e7: Pop(0)
0x6e8: Push((bool) 0)
0x6e9: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6ea: Pop(1)
0x6eb: GOTO 0x6f0

0x6ec: Push("Can't find lsh animation : ")
0x6ed: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6ee: @ Trace(Stack[-1])
0x6ef: Pop(1)
0x6f0: Return(); Pop(6)

0x6f1: PushEmpty(bool, float, float, bool, float, float)
0x6f2: @ lshHasAnimation(Stack[-3], Stack[-8])
0x6f3: Pop(0)
0x6f4: Push(Stack[-3])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f6: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x6f7: Pop(0)
0x6f8: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x6f9: Pop(0)
0x6fa: GOTO 0x6ff

0x6fb: Push("Can't find lsh animation : ")
0x6fc: Pop(1); Push(Stack[-1] + Stack[-9]);
0x6fd: @ Trace(Stack[-1])
0x6fe: Pop(1)
0x6ff: Return(); Pop(6)

0x700: PushEmpty(bool)
0x701: Call2 0x7ca

0x702: Pop(0)
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: @ lshStopSpeech()
0x705: Pop(0)
0x706: Return(); Pop(0)

0x707: PushEmpty(int, bool, int, bool)
0x708: PushEmpty(bool, int, int)
0x709: Stack[-2] = Stack[-10]
0x70a: Stack[-1] = Stack[-9]
0x70b: Call2 0x72e

0x70c: Pop(2)
0x70d: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x70e: @ irand(Stack[-2], Stack[-5])
0x70f: Pop(0)
0x710: Push((int) 0)
0x711: Push((int) 1)
0x712: Pop(1); Push(Stack[-4] + Stack[-1]);
0x713: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x714: Pop(2)
0x715: Return(); Pop(4)

0x716: PushEmpty(object, object)
0x717: @ self(Stack[-1])
0x718: Pop(0)
0x719: Stack[-3] = Stack[-1]
0x71a: Return(); Pop(2)

0x71b: Stack[-1] = 0
0x71c: PushEmpty(float, float)
0x71d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x71e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x71f: Push((float)0.0)
0x720: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x722: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x723: Return(); Pop(2)

0x724: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x725: Return(); Pop(2)

0x726: PushEmpty()
0x727: Push((int) 0)
0x728: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-2] = -Stack[-1]; Pop(0);
0x72b: GOTO 0x72d

0x72c: Stack[-2] = Stack[-1]
0x72d: Return(); Pop(0)

0x72e: PushEmpty(int, int)
0x72f: @ irand(Stack[-1], Stack[-3])
0x730: Pop(0)
0x731: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x732: Return(); Pop(2)

0x733: PushEmpty()
0x734: Push(CvectorIndex(Stack[-1], 0))
0x735: Push(CvectorIndex(Stack[-2], 0))
0x736: Pop(2); Push(Stack[-2] * Stack[-1]);
0x737: Push(CvectorIndex(Stack[-2], 2))
0x738: Push(CvectorIndex(Stack[-3], 2))
0x739: Pop(2); Push(Stack[-2] * Stack[-1]);
0x73a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x73b: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x73c: Return(); Pop(0)

0x73d: PushEmpty(int, int)
0x73e: @ GetVariable(Stack[-3], Stack[-1])
0x73f: Pop(0)
0x740: Stack[-4] = Stack[-1]
0x741: Return(); Pop(2)

0x742: PushEmpty(object, object)
0x743: @ CreateIntVector(Stack[-1])
0x744: Pop(0)
0x745: @@ add(Stack[-4])
0x746: Pop(0)
0x747: @@ add(Stack[-3])
0x748: Pop(0)
0x749: Push((int) 3)
0x74a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x74b: Pop(1)
0x74c: Return(); Pop(2)

0x74d: Stack[-1] = 0
0x74e: PushEmpty(int, int, bool, int, int, bool)
0x74f: @@ GetItemID(Stack[-3])
0x750: Pop(0)
0x751: Push("Category")
0x752: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x753: Pop(1)
0x754: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x755: Pop(0)
0x756: Pop(0); Push((bool) Stack[-1] == 0)
0x757: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x758: @@ DropItems(Stack[-8], Stack[-7])
0x759: Pop(0)
0x75a: GOTO 0x760

0x75b: PushEmpty(int, int)
0x75c: Stack[-2] = Stack[-5]
0x75d: Stack[-1] = Stack[-9]
0x75e: Call2 0x742

0x75f: Pop(2)
0x760: Return(); Pop(6)

0x761: PushEmpty(object, object)
0x762: @ CreateInvItem(Stack[-1])
0x763: Pop(0)
0x764: @@ SetItemName(Stack[-4])
0x765: Pop(0)
0x766: PushEmpty(object, object, int)
0x767: Stack[-3] = Stack[-8]
0x768: Stack[-2] = Stack[-4]
0x769: Stack[-1] = Stack[-6]
0x76a: Call2 0x74e

0x76b: Pop(3)
0x76c: Return(); Pop(2)

0x76d: Stack[-1] = 0
0x76e: PushEmpty(float, float)
0x76f: @ GetGameTime(Stack[-1])
0x770: Pop(0)
0x771: Push((int) 1)
0x772: PushEmpty(int)
0x773: Push((int) 24)
0x774: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x775: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x776: Return(); Pop(2)

0x777: PushEmpty()
0x778: PushEmpty(int)
0x779: Call2 0x76e

0x77a: Pop(0)
0x77b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x77c: Return(); Pop(0)

0x77d: PushEmpty(string, string)
0x77e: Stack[-1] = "idle"
0x77f: Push(Stack[-3])
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x782: Stack[-4] = Stack[-1]
0x783: Return(); Pop(2)

0x784: PushEmpty(int, bool, int, bool)
0x785: Stack[-2] = (int) 0
0x786: Push("all")
0x787: PushEmpty(string, int)
0x788: Stack[-1] = Stack[-5]
0x789: Call2 0x77d

0x78a: Pop(1)
0x78b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(2)
0x78d: Pop(0); Push((bool) Stack[-1] == 0)
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: GOTO 0x793

0x790: Push((int) 1)
0x791: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x792: GOTO 0x786

0x793: Stack[-5] = Stack[-2]
0x794: Return(); Pop(4)

0x795: PushEmpty()
0x796: Push((int) 0)
0x797: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x799: Push("pt_")
0x79a: Push(GlobalVars[0])
0x79b: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x79c: GOTO 0x7a1

0x79d: Push("pt_")
0x79e: Push(GlobalVars[0])
0x79f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a0: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty(bool, bool)
0x7a3: Push("cleanup")
0x7a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7a6: Push(GlobalVars[1])
0x7a7: Stack[-1] = (bool) 1
0x7a8: GlobalVars[1] = Stack[-1]; Pop(1)
0x7a9: @ IsLoaded(Stack[-1])
0x7aa: Pop(0)
0x7ab: Pop(0); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ad: PushEmpty(object)
0x7ae: Call2 0x716

0x7af: Pop(0)
0x7b0: @ RemoveActor(Stack[-1])
0x7b1: Pop(1)
0x7b2: GOTO 0x7b9

0x7b3: Push("restore")
0x7b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b6: Push(GlobalVars[1])
0x7b7: Stack[-1] = (bool) 0
0x7b8: GlobalVars[1] = Stack[-1]; Pop(1)
0x7b9: Return(); Pop(2)

0x7ba: Push(GlobalVars[1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bc: PushEmpty(object)
0x7bd: Call2 0x716

0x7be: Pop(0)
0x7bf: @ RemoveActor(Stack[-1])
0x7c0: Pop(1)
0x7c1: Return(); Pop(0)

0x7c2: Stack[-1] = (int) 515594
0x7c3: Return(); Pop(0)

0x7c4: Stack[-1] = (int) 512583
0x7c5: Return(); Pop(0)

0x7c6: Stack[-1] = "ui/NPC_Citizen3.png"
0x7c7: Return(); Pop(0)

0x7c8: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x7c9: Return(); Pop(0)

0x7ca: Stack[-1] = (bool) 0
0x7cb: Return(); Pop(0)

0x7cc: PushEmpty()
0x7cd: Push("playsound")
0x7ce: Push("giveitem")
0x7cf: @ TriggerWorld(Stack[-2], Stack[-1])
0x7d0: Pop(2)
0x7d1: Return(); Pop(0)

0x7d2: PushEmpty()
0x7d3: Push((int) 1000)
0x7d4: @@ SetReturnValue(Stack[-1])
0x7d5: Pop(1)
0x7d6: Return(); Pop(0)

0x7d7: PushEmpty()
0x7d8: Push("oob1Gorbun1")
0x7d9: Push((int) 1)
0x7da: @ SetVariable(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: Return(); Pop(0)

0x7dd: PushEmpty()
0x7de: Push("oob1Gorbun2")
0x7df: Push((int) 1)
0x7e0: @ SetVariable(Stack[-2], Stack[-1])
0x7e1: Pop(2)
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty(float, float)
0x7e4: Push("b1q02")
0x7e5: Push((int) 2)
0x7e6: @ SetVariable(Stack[-2], Stack[-1])
0x7e7: Pop(2)
0x7e8: PushEmpty()
0x7e9: Call2 0x832

0x7ea: Pop(0)
0x7eb: Push("health")
0x7ec: @@ GetProperty(Stack[-1], Stack[-2])
0x7ed: Pop(1)
0x7ee: Push((float)0.3)
0x7ef: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x7f0: Push("health")
0x7f1: @@ SetProperty(Stack[-1], Stack[-2])
0x7f2: Pop(1)
0x7f3: Push("blood is given")
0x7f4: @ Trace(Stack[-1])
0x7f5: Pop(1)
0x7f6: PushEmpty(object, string, int)
0x7f7: Stack[-3] = Stack[-7]
0x7f8: Stack[-2] = "b1q02_blood"
0x7f9: Stack[-1] = (int) 1
0x7fa: Call2 0x761

0x7fb: Pop(3)
0x7fc: Return(); Pop(2)

0x7fd: PushEmpty()
0x7fe: PushEmpty(bool, object)
0x7ff: Stack[-1] = Stack[-3]
0x800: Call2 0x82b

0x801: Pop(1)
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-2] = (bool) 1
0x804: Return(); Pop(0)

0x805: Stack[-2] = (bool) 0
0x806: Return(); Pop(0)

0x807: PushEmpty()
0x808: PushEmpty(int, string)
0x809: Stack[-1] = "b1q02"
0x80a: Call2 0x73d

0x80b: Pop(1)
0x80c: Push((int) 1)
0x80d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x80e: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80f: Stack[-2] = (bool) 1
0x810: Return(); Pop(0)

0x811: Stack[-2] = (bool) 0
0x812: Return(); Pop(0)

0x813: PushEmpty()
0x814: PushEmpty(int, string)
0x815: Stack[-1] = "oob1Gorbun1"
0x816: Call2 0x73d

0x817: Pop(1)
0x818: Push((int) 0)
0x819: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-2] = (bool) 1
0x81c: Return(); Pop(0)

0x81d: Stack[-2] = (bool) 0
0x81e: Return(); Pop(0)

0x81f: PushEmpty()
0x820: PushEmpty(int, string)
0x821: Stack[-1] = "oob1Gorbun2"
0x822: Call2 0x73d

0x823: Pop(1)
0x824: Push((int) 0)
0x825: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x827: Stack[-2] = (bool) 1
0x828: Return(); Pop(0)

0x829: Stack[-2] = (bool) 0
0x82a: Return(); Pop(0)

0x82b: PushEmpty(float, float)
0x82c: Push("health")
0x82d: @@ GetProperty(Stack[-1], Stack[-2])
0x82e: Pop(1)
0x82f: Push((float)0.4)
0x830: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x831: Return(); Pop(2)

0x832: PushEmpty(object, object)
0x833: Push((int) 202)
0x834: Push((int) 2)
0x835: Push((int) 517942)
0x836: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x837: Pop(3)
0x838: PushEmpty(bool, object, int)
0x839: Stack[-2] = Stack[-4]
0x83a: Stack[-1] = (int) 200
0x83b: Call2 0x84c

0x83c: Pop(3)
0x83d: Return(); Pop(2)

0x83e: Stack[-1] = 0
0x83f: PushEmpty(object, object)
0x840: @ GetDiaryRoot(Stack[-1])
0x841: Pop(0)
0x842: Pop(0); Push((bool) Stack[-1] == 0)
0x843: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x844: Push("Can't retrieve diary root")
0x845: @ Trace(Stack[-1])
0x846: Pop(1)
0x847: Stack[-3] = (bool) 0
0x848: Return(); Pop(2)

0x849: Stack[-3] = Stack[-1]
0x84a: Return(); Pop(2)

0x84b: Stack[-1] = 0
0x84c: PushEmpty(object, object, int, object, object, int)
0x84d: PushEmpty(object)
0x84e: Call2 0x83f

0x84f: Stack[-4] = Stack[-1]
0x850: Pop(1)
0x851: @@ Find(Stack[-7], Stack[-2])
0x852: Pop(0)
0x853: Pop(0); Push((bool) Stack[-2] == 0)
0x854: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x855: Push("Can't find diary parent with id: ")
0x856: Pop(1); Push(Stack[-1] + Stack[-8]);
0x857: @ Trace(Stack[-1])
0x858: Pop(1)
0x859: Stack[-9] = (bool) 0
0x85a: Return(); Pop(6)

0x85b: @@ AddChild(Stack[-8])
0x85c: Pop(0)
0x85d: Push((int) 7)
0x85e: @ SendWorldWndMessage(Stack[-1])
0x85f: Pop(1)
0x860: @@ GetCategory(Stack[-1])
0x861: Pop(0)
0x862: @ SetDiarySection(Stack[-1])
0x863: Pop(0)
0x864: Stack[-9] = (bool) 0
0x865: Return(); Pop(6)

0x866: Stack[-2] = 0
0x867: Stack[-3] = 0
0x868: PushEmpty(int, int)
0x869: Push((int) 0)
0x86a: @ ClearSubContainer(Stack[-1])
0x86b: Pop(1)
0x86c: PushEmpty(int)
0x86d: Call2 0x76e

0x86e: Stack[-2] = Stack[-1]
0x86f: Pop(1)
0x870: PushEmpty(string, int, int, int)
0x871: Stack[-4] = "tourniquet"
0x872: Stack[-3] = (int) 1
0x873: Stack[-2] = (int) 1
0x874: Stack[-1] = (int) 5
0x875: Call2 0x707

0x876: Pop(4)
0x877: PushEmpty(string, int, int, int)
0x878: Stack[-4] = "bandage"
0x879: Stack[-3] = (int) 1
0x87a: Stack[-2] = (int) 1
0x87b: Stack[-1] = (int) 5
0x87c: Call2 0x707

0x87d: Pop(4)
0x87e: Return(); Pop(2)

0x87f: PushEmpty(int, int)
0x880: Push("branch")
0x881: @ GetVariable(Stack[-1], Stack[-2])
0x882: Pop(1)
0x883: Push((int) 0)
0x884: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x886: Stack[-3] = (int) 1
0x887: Return(); Pop(2)

0x888: GOTO 0x88e

0x889: Push((int) 1)
0x88a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88b: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88c: Stack[-3] = (int) 2
0x88d: Return(); Pop(2)

0x88e: Stack[-3] = (int) 3
0x88f: Return(); Pop(2)

0x890: PushEmpty()
0x891: Push((int) 0)
0x892: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x893: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x894: PushEmpty(string)
0x895: Stack[-1] = "cleanup"
0x896: Call2 0x7a2

0x897: Pop(1)
0x898: GOTO 0x89f

0x899: Push((int) 1)
0x89a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89c: PushEmpty()
0x89d: Call2 0x868

0x89e: Pop(0)
0x89f: Return(); Pop(0)

0x8a0: PushEmpty(int, int)
0x8a1: Push("mt_gorbun")
0x8a2: @ GetVariable(Stack[-1], Stack[-2])
0x8a3: Pop(1)
0x8a4: Pop(0); Push((bool) Stack[-1] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8a6: PushEmpty(int, object)
0x8a7: Stack[-1] = Stack[-5]
0x8a8: Push(-2, 1); TaskCall(7)
0x8a9: Call2 0x3e1

0x8aa: Pop(-2, 1); TaskReturn
0x8ab: Pop(2)
0x8ac: Push("mt_gorbun")
0x8ad: Push((int) 1)
0x8ae: @ SetVariable(Stack[-2], Stack[-1])
0x8af: Pop(2)
0x8b0: PushEmpty(bool, int)
0x8b1: Stack[-1] = (int) 1
0x8b2: Call2 0x777

0x8b3: Pop(1)
0x8b4: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8b5: Push((int) 1000)
0x8b6: PushEmpty(int, object)
0x8b7: Stack[-1] = Stack[-6]
0x8b8: Push(-2, 1); TaskCall(5)
0x8b9: Call2 0x142

0x8ba: Pop(-2, 1); TaskReturn
0x8bb: Pop(1)
0x8bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8be: PushEmpty(bool, object, float)
0x8bf: Stack[-2] = Stack[-6]
0x8c0: Stack[-1] = (int) 110
0x8c1: Call2 0x6ae

0x8c2: Pop(2)
0x8c3: Pop(1); Push((bool) Stack[-1] == 0)
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: Return(); Pop(2)

0x8c6: PushEmpty(object)
0x8c7: Stack[-1] = Stack[-4]
0x8c8: Push(-1, 1); TaskCall(1)
0x8c9: Call2 0xd

0x8ca: Pop(-1, 1); TaskReturn
0x8cb: Pop(1)
0x8cc: PushEmpty(object)
0x8cd: Stack[-1] = Stack[-4]
0x8ce: Call2 0x6dd

0x8cf: Pop(1)
0x8d0: Return(); Pop(2)

0x8d1: Push((int) 1000)
0x8d2: PushEmpty(int, object)
0x8d3: Stack[-1] = Stack[-6]
0x8d4: Push(-2, 1); TaskCall(9)
0x8d5: Call2 0x4a5

0x8d6: Pop(-2, 1); TaskReturn
0x8d7: Pop(1)
0x8d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8da: PushEmpty(bool, object, float)
0x8db: Stack[-2] = Stack[-6]
0x8dc: Stack[-1] = (int) 110
0x8dd: Call2 0x6ae

0x8de: Pop(2)
0x8df: Pop(1); Push((bool) Stack[-1] == 0)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e1: Return(); Pop(2)

0x8e2: PushEmpty(object)
0x8e3: Stack[-1] = Stack[-4]
0x8e4: Push(-1, 1); TaskCall(1)
0x8e5: Call2 0xd

0x8e6: Pop(-1, 1); TaskReturn
0x8e7: Pop(1)
0x8e8: PushEmpty(object)
0x8e9: Stack[-1] = Stack[-4]
0x8ea: Call2 0x6dd

0x8eb: Pop(1)
0x8ec: Return(); Pop(2)

