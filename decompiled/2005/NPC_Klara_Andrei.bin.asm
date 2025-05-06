GlobalVarCount = 1
	G_VAR_0 object 

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
	Smile
	Untrust
	Grin
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Andrei.png
	ui/NPC_Andrei_b.png
	k2q04
	k5q02
	SetReturnValue
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	grass_combination
	SetItemName
	im_inc
	SetProperty
	hl_inc
	branch
	tr_andrei
	mt_andrei

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
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	ClearSubContainer (1 args)
	CreateInvItem (1 args)
	AddItem (3 args)

RunOp = 0x6f6
RunTask = 13

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x200 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2f1 Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4d2 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5d0 Vars = (int, int)
	GTASK_11 Vars = (object) Params = 2
	GTASK_12 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6a0 Vars = (int, int)
	GTASK_13 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x73f Vars = (int)
		EVENT_6 Op = 0x765 Vars = ()
		EVENT_5 Op = 0x774 Vars = ()
		EVENT_45 Op = 0x781 Vars = (bool)
		EVENT_0 Op = 0x78d Vars = (object)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x9a9

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x930

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
0x1c: Call2 0x9a9

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
0x2d: Call2 0x816

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x9a3

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x9a1

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x9a5

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x9a7

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0xa49

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
0x57: PushEmpty(bool, object)
0x58: PushEmpty(object)
0x59: Call2 0x965

0x5a: Stack[-2] = Stack[-1]
0x5b: Pop(1)
0x5c: Call2 0x86b

0x5d: Pop(2)
0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[-11]
0x60: Stack[-1] = Stack[-6]
0x61: Push(-2, 4); TaskCall(2)
0x62: Call2 0x79

0x63: Pop(-2, 4); TaskReturn
0x64: Pop(2)
0x65: @@ IsDialogEnd(Stack[-1])
0x66: Pop(0)
0x67: Pop(0); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x69: @ sync()
0x6a: Pop(0)
0x6b: @@ IsDialogEnd(Stack[-1])
0x6c: Pop(0)
0x6d: GOTO 0x67

0x6e: PushEmpty(object)
0x6f: Stack[-1] = Stack[-10]
0x70: Call2 0x85a

0x71: Pop(1)
0x72: @ StopDialog(Stack[-4])
0x73: Pop(0)
0x74: @@ GetReturnValue(Stack[-2])
0x75: Pop(0)
0x76: Stack[-10] = Stack[-2]
0x77: Return(); Pop(8)

0x78: Stack[-4] = 0
0x79: PushEmpty()
0x7a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7d: Push((int) 1)
0x7e: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral"
0x81: Call2 0xbd

0x82: Pop(1)
0x83: Push((int) 525362)
0x84: @@ SetMessage(Stack[-1])
0x85: Pop(1)
0x86: @@ ClearReplies()
0x87: Pop(0)
0x88: Push((int) 525363)
0x89: Push((int) -1)
0x8a: Push((int) 26731)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x9c2

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 525364)
0x93: Push((int) 26733)
0x94: Push((int) 26732)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: Push((int) 525368)
0x98: Push((int) -1)
0x99: Push((int) 26736)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0x9f

0x9d: Return(); Pop(0)

0x9e: GOTO 0x7d

0x9f: PushEmpty(bool)
0xa0: Call2 0x9a9

0xa1: Pop(0)
0xa2: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa3: @ lshWaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa: Call2 0x930

0xab: Pop(1)
0xac: GOTO 0xa3

0xad: GOTO 0xbc

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: @ WaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0xb2

0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(bool)
0xbf: Call2 0x9a9

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(0)

0xc4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = Stack[-3]
0xc9: Push("")
0xca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-1] = (bool) 0
0xcd: GOTO 0xcf

0xce: Stack[-1] = (bool) 1
0xcf: Call2 0x940

0xd0: Pop(2)
0xd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: Push((int) 1)
0xd5: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0x95e

0xd8: Pop(0)
0xd9: Push((int) 26731)
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x9bd

0xe0: Pop(2)
0xe1: Push((int) 26734)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0x9ab

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0x9bd

0xed: Pop(2)
0xee: Push((int) 26735)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x9ab

0xf5: Pop(2)
0xf6: Push((int) 26730)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0xbd

0xfc: Pop(1)
0xfd: Push((int) 525362)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 525363)
0x103: Push((int) -1)
0x104: Push((int) 26731)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0x9c2

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: Push((int) 525364)
0x10d: Push((int) 26733)
0x10e: Push((int) 26732)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 525368)
0x112: Push((int) -1)
0x113: Push((int) 26736)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 26733)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Smile"
0x11c: Call2 0xbd

0x11d: Pop(1)
0x11e: Push((int) 525365)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 529141)
0x124: Push((int) 30588)
0x125: Push((int) 30587)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 30588)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Smile"
0x12e: Call2 0xbd

0x12f: Pop(1)
0x130: Push((int) 529142)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 529143)
0x136: Push((int) 30590)
0x137: Push((int) 30589)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 30590)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Untrust"
0x140: Call2 0xbd

0x141: Pop(1)
0x142: Push((int) 529144)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 525366)
0x148: Push((int) -1)
0x149: Push((int) 26734)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Push((int) 525367)
0x14d: Push((int) -1)
0x14e: Push((int) 26735)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Return(); Pop(0)

0x152: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x153: PushEmpty(bool)
0x154: Call2 0x9a9

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x157: @ lshStopAnimation()
0x158: Pop(0)
0x159: GOTO 0x15c

0x15a: @ StopAnimation()
0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: GOTO 0xd4

0x15e: Return(); Pop(0)

0x15f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x160: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x161: PushEmpty(bool, object, float)
0x162: Stack[-2] = Stack[-12]
0x163: Stack[-1] = (float) 70.0
0x164: Call2 0x816

0x165: Pop(2)
0x166: Pop(1); Push((bool) Stack[-1] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x168: Stack[-10] = (int) -2
0x169: Return(); Pop(8)

0x16a: @ CreateDialog(Stack[-4])
0x16b: Pop(0)
0x16c: PushEmpty(int)
0x16d: Call2 0x9a3

0x16e: Pop(0)
0x16f: @@ SetNPCName(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty(int)
0x172: Call2 0x9a1

0x173: Pop(0)
0x174: @@ SetNPCDescription(Stack[-1])
0x175: Pop(1)
0x176: PushEmpty(string)
0x177: Call2 0x9a5

0x178: Pop(0)
0x179: @@ SetPhoto(Stack[-1])
0x17a: Pop(1)
0x17b: PushEmpty(string)
0x17c: Call2 0x9a7

0x17d: Pop(0)
0x17e: @@ SetPhoto2(Stack[-1])
0x17f: Pop(1)
0x180: PushEmpty(int)
0x181: Call2 0xa49

0x182: Pop(0)
0x183: @@ SetPlayerName(Stack[-1])
0x184: Pop(1)
0x185: Stack[-2] = (int) -1
0x186: @ IsOverrideActive(Stack[-3])
0x187: Pop(0)
0x188: Push(Stack[-3])
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: Stack[-10] = (int) -2
0x18b: Return(); Pop(8)

0x18c: @ DoDialog(Stack[-4])
0x18d: Pop(0)
0x18e: PushEmpty(bool, object)
0x18f: PushEmpty(object)
0x190: Call2 0x965

0x191: Stack[-2] = Stack[-1]
0x192: Pop(1)
0x193: Call2 0x86b

0x194: Pop(2)
0x195: PushEmpty(object, object)
0x196: Stack[-2] = Stack[-11]
0x197: Stack[-1] = Stack[-6]
0x198: Push(-2, 4); TaskCall(4)
0x199: Call2 0x1b0

0x19a: Pop(-2, 4); TaskReturn
0x19b: Pop(2)
0x19c: @@ IsDialogEnd(Stack[-1])
0x19d: Pop(0)
0x19e: Pop(0); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a0: @ sync()
0x1a1: Pop(0)
0x1a2: @@ IsDialogEnd(Stack[-1])
0x1a3: Pop(0)
0x1a4: GOTO 0x19e

0x1a5: PushEmpty(object)
0x1a6: Stack[-1] = Stack[-10]
0x1a7: Call2 0x85a

0x1a8: Pop(1)
0x1a9: @ StopDialog(Stack[-4])
0x1aa: Pop(0)
0x1ab: @@ GetReturnValue(Stack[-2])
0x1ac: Pop(0)
0x1ad: Stack[-10] = Stack[-2]
0x1ae: Return(); Pop(8)

0x1af: Stack[-4] = 0
0x1b0: PushEmpty()
0x1b1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1b2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1b3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b4: Push((int) 1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call2 0x1ea

0x1b9: Pop(1)
0x1ba: Push((int) 525462)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 529295)
0x1c0: Push((int) 30750)
0x1c1: Push((int) 30749)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 525463)
0x1c5: Push((int) -1)
0x1c6: Push((int) 26819)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: GOTO 0x1cc

0x1ca: Return(); Pop(0)

0x1cb: GOTO 0x1b4

0x1cc: PushEmpty(bool)
0x1cd: Call2 0x9a9

0x1ce: Pop(0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d0: @ lshWaitForAnimEnd()
0x1d1: Pop(0)
0x1d2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: GOTO 0x1da

0x1d5: PushEmpty(string)
0x1d6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1d7: Call2 0x930

0x1d8: Pop(1)
0x1d9: GOTO 0x1d0

0x1da: GOTO 0x1e9

0x1db: Push("all")
0x1dc: Push("idle")
0x1dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: @ WaitForAnimEnd()
0x1e0: Pop(0)
0x1e1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: GOTO 0x1e9

0x1e4: Push("all")
0x1e5: Push("idle")
0x1e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: GOTO 0x1df

0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x9a9

0x1ed: Pop(0)
0x1ee: Pop(1); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Return(); Pop(0)

0x1f1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Return(); Pop(0)

0x1f4: PushEmpty(string, bool)
0x1f5: Stack[-2] = Stack[-3]
0x1f6: Push("")
0x1f7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f9: Stack[-1] = (bool) 0
0x1fa: GOTO 0x1fc

0x1fb: Stack[-1] = (bool) 1
0x1fc: Call2 0x940

0x1fd: Pop(2)
0x1fe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: Push((int) 1)
0x202: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x203: PushEmpty()
0x204: Call2 0x95e

0x205: Pop(0)
0x206: Push((int) 26818)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral"
0x20b: Call2 0x1ea

0x20c: Pop(1)
0x20d: Push((int) 525462)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 529295)
0x213: Push((int) 30750)
0x214: Push((int) 30749)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 525463)
0x218: Push((int) -1)
0x219: Push((int) 26819)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 30750)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral"
0x222: Call2 0x1ea

0x223: Pop(1)
0x224: Push((int) 529296)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 529297)
0x22a: Push((int) -1)
0x22b: Push((int) 30751)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 529298)
0x22f: Push((int) -1)
0x230: Push((int) 30752)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x235: PushEmpty(bool)
0x236: Call2 0x9a9

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x239: @ lshStopAnimation()
0x23a: Pop(0)
0x23b: GOTO 0x23e

0x23c: @ StopAnimation()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: GOTO 0x201

0x240: Return(); Pop(0)

0x241: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x242: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x243: PushEmpty(bool, object, float)
0x244: Stack[-2] = Stack[-12]
0x245: Stack[-1] = (float) 70.0
0x246: Call2 0x816

0x247: Pop(2)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: Stack[-10] = (int) -2
0x24b: Return(); Pop(8)

0x24c: @ CreateDialog(Stack[-4])
0x24d: Pop(0)
0x24e: PushEmpty(int)
0x24f: Call2 0x9a3

0x250: Pop(0)
0x251: @@ SetNPCName(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(int)
0x254: Call2 0x9a1

0x255: Pop(0)
0x256: @@ SetNPCDescription(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(string)
0x259: Call2 0x9a5

0x25a: Pop(0)
0x25b: @@ SetPhoto(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty(string)
0x25e: Call2 0x9a7

0x25f: Pop(0)
0x260: @@ SetPhoto2(Stack[-1])
0x261: Pop(1)
0x262: PushEmpty(int)
0x263: Call2 0xa49

0x264: Pop(0)
0x265: @@ SetPlayerName(Stack[-1])
0x266: Pop(1)
0x267: Stack[-2] = (int) -1
0x268: @ IsOverrideActive(Stack[-3])
0x269: Pop(0)
0x26a: Push(Stack[-3])
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-10] = (int) -2
0x26d: Return(); Pop(8)

0x26e: @ DoDialog(Stack[-4])
0x26f: Pop(0)
0x270: PushEmpty(bool, object)
0x271: PushEmpty(object)
0x272: Call2 0x965

0x273: Stack[-2] = Stack[-1]
0x274: Pop(1)
0x275: Call2 0x86b

0x276: Pop(2)
0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[-11]
0x279: Stack[-1] = Stack[-6]
0x27a: Push(-2, 4); TaskCall(6)
0x27b: Call2 0x292

0x27c: Pop(-2, 4); TaskReturn
0x27d: Pop(2)
0x27e: @@ IsDialogEnd(Stack[-1])
0x27f: Pop(0)
0x280: Pop(0); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: @ sync()
0x283: Pop(0)
0x284: @@ IsDialogEnd(Stack[-1])
0x285: Pop(0)
0x286: GOTO 0x280

0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[-10]
0x289: Call2 0x85a

0x28a: Pop(1)
0x28b: @ StopDialog(Stack[-4])
0x28c: Pop(0)
0x28d: @@ GetReturnValue(Stack[-2])
0x28e: Pop(0)
0x28f: Stack[-10] = Stack[-2]
0x290: Return(); Pop(8)

0x291: Stack[-4] = 0
0x292: PushEmpty()
0x293: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x294: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x295: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x296: Push((int) 1)
0x297: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Grin"
0x29a: Call2 0x2db

0x29b: Pop(1)
0x29c: Push((int) 525919)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: PushEmpty(bool, object)
0x2a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a3: Call2 0x9ce

0x2a4: Pop(1)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: Push((int) 525920)
0x2a7: Push((int) 42995)
0x2a8: Push((int) 27212)
0x2a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2aa: Pop(3)
0x2ab: Push((int) 529685)
0x2ac: Push((int) -1)
0x2ad: Push((int) 31148)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Push((int) 525923)
0x2b1: Push((int) -1)
0x2b2: Push((int) 27215)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: Push((int) 529057)
0x2b6: Push((int) -1)
0x2b7: Push((int) 30499)
0x2b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b9: Pop(3)
0x2ba: GOTO 0x2bd

0x2bb: Return(); Pop(0)

0x2bc: GOTO 0x296

0x2bd: PushEmpty(bool)
0x2be: Call2 0x9a9

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c1: @ lshWaitForAnimEnd()
0x2c2: Pop(0)
0x2c3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x2cb

0x2c6: PushEmpty(string)
0x2c7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c8: Call2 0x930

0x2c9: Pop(1)
0x2ca: GOTO 0x2c1

0x2cb: GOTO 0x2da

0x2cc: Push("all")
0x2cd: Push("idle")
0x2ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: @ WaitForAnimEnd()
0x2d1: Pop(0)
0x2d2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: GOTO 0x2da

0x2d5: Push("all")
0x2d6: Push("idle")
0x2d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: GOTO 0x2d0

0x2da: Return(); Pop(0)

0x2db: PushEmpty()
0x2dc: PushEmpty(bool)
0x2dd: Call2 0x9a9

0x2de: Pop(0)
0x2df: Pop(1); Push((bool) Stack[-1] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: Return(); Pop(0)

0x2e2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Return(); Pop(0)

0x2e5: PushEmpty(string, bool)
0x2e6: Stack[-2] = Stack[-3]
0x2e7: Push("")
0x2e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2ea: Stack[-1] = (bool) 0
0x2eb: GOTO 0x2ed

0x2ec: Stack[-1] = (bool) 1
0x2ed: Call2 0x940

0x2ee: Pop(2)
0x2ef: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: Push((int) 1)
0x2f3: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x2f4: PushEmpty()
0x2f5: Call2 0x95e

0x2f6: Pop(0)
0x2f7: Push((int) 27214)
0x2f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(object, object)
0x2fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x9b4

0x2fe: Pop(2)
0x2ff: Push((int) 43013)
0x300: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x302: PushEmpty(object, object)
0x303: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x304: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x305: Call2 0x9b4

0x306: Pop(2)
0x307: Push((int) 43010)
0x308: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: PushEmpty(object, object)
0x30b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30d: Call2 0x9b4

0x30e: Pop(2)
0x30f: Push((int) 43005)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x312: PushEmpty(object, object)
0x313: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x314: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x315: Call2 0x9b4

0x316: Pop(2)
0x317: Push((int) 43002)
0x318: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: PushEmpty(object, object)
0x31b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x9b4

0x31e: Pop(2)
0x31f: Push((int) 43000)
0x320: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(object, object)
0x323: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x324: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x325: Call2 0x9b4

0x326: Pop(2)
0x327: Push((int) 31148)
0x328: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32a: PushEmpty(object, object)
0x32b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Call2 0x9bd

0x32e: Pop(2)
0x32f: Push((int) 27211)
0x330: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x332: PushEmpty(string)
0x333: Stack[-1] = "Grin"
0x334: Call2 0x2db

0x335: Pop(1)
0x336: Push((int) 525919)
0x337: @@ SetMessage(Stack[-1])
0x338: Pop(1)
0x339: @@ ClearReplies()
0x33a: Pop(0)
0x33b: PushEmpty(bool, object)
0x33c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33d: Call2 0x9ce

0x33e: Pop(1)
0x33f: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x340: Push((int) 525920)
0x341: Push((int) 42995)
0x342: Push((int) 27212)
0x343: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(3)
0x345: Push((int) 529685)
0x346: Push((int) -1)
0x347: Push((int) 31148)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: Push((int) 525923)
0x34b: Push((int) -1)
0x34c: Push((int) 27215)
0x34d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34e: Pop(3)
0x34f: Push((int) 529057)
0x350: Push((int) -1)
0x351: Push((int) 30499)
0x352: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x353: Pop(3)
0x354: Return(); Pop(0)

0x355: Push((int) 42995)
0x356: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x358: PushEmpty(string)
0x359: Stack[-1] = "Untrust"
0x35a: Call2 0x2db

0x35b: Pop(1)
0x35c: Push((int) 540917)
0x35d: @@ SetMessage(Stack[-1])
0x35e: Pop(1)
0x35f: @@ ClearReplies()
0x360: Pop(0)
0x361: Push((int) 540918)
0x362: Push((int) 27213)
0x363: Push((int) 42996)
0x364: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x365: Pop(3)
0x366: Push((int) 540919)
0x367: Push((int) 42998)
0x368: Push((int) 42997)
0x369: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: Push((int) 42998)
0x36d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Smile"
0x371: Call2 0x2db

0x372: Pop(1)
0x373: Push((int) 540920)
0x374: @@ SetMessage(Stack[-1])
0x375: Pop(1)
0x376: @@ ClearReplies()
0x377: Pop(0)
0x378: Push((int) 540921)
0x379: Push((int) 30501)
0x37a: Push((int) 42999)
0x37b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(3)
0x37d: Push((int) 540922)
0x37e: Push((int) -1)
0x37f: Push((int) 43000)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: Return(); Pop(0)

0x383: Push((int) 27213)
0x384: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x386: PushEmpty(string)
0x387: Stack[-1] = "Neutral"
0x388: Call2 0x2db

0x389: Pop(1)
0x38a: Push((int) 525921)
0x38b: @@ SetMessage(Stack[-1])
0x38c: Pop(1)
0x38d: @@ ClearReplies()
0x38e: Pop(0)
0x38f: Push((int) 529058)
0x390: Push((int) 30501)
0x391: Push((int) 30500)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Push((int) 529062)
0x395: Push((int) 30503)
0x396: Push((int) 30504)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: Return(); Pop(0)

0x39a: Push((int) 30501)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Smile"
0x39f: Call2 0x2db

0x3a0: Pop(1)
0x3a1: Push((int) 529059)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 529060)
0x3a7: Push((int) 30503)
0x3a8: Push((int) 30502)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Push((int) 540923)
0x3ac: Push((int) -1)
0x3ad: Push((int) 43002)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 30503)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Untrust"
0x3b6: Call2 0x2db

0x3b7: Pop(1)
0x3b8: Push((int) 529061)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 540924)
0x3be: Push((int) 43004)
0x3bf: Push((int) 43003)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 43004)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "Untrust"
0x3c8: Call2 0x2db

0x3c9: Pop(1)
0x3ca: Push((int) 540925)
0x3cb: @@ SetMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ ClearReplies()
0x3ce: Pop(0)
0x3cf: Push((int) 529063)
0x3d0: Push((int) 30507)
0x3d1: Push((int) 30506)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Push((int) 540926)
0x3d5: Push((int) -1)
0x3d6: Push((int) 43005)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Return(); Pop(0)

0x3da: Push((int) 30507)
0x3db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3dd: PushEmpty(string)
0x3de: Stack[-1] = "Smile"
0x3df: Call2 0x2db

0x3e0: Pop(1)
0x3e1: Push((int) 529064)
0x3e2: @@ SetMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ ClearReplies()
0x3e5: Pop(0)
0x3e6: Push((int) 540927)
0x3e7: Push((int) 43007)
0x3e8: Push((int) 43006)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Push((int) 540931)
0x3ec: Push((int) -1)
0x3ed: Push((int) 43010)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: Return(); Pop(0)

0x3f1: Push((int) 43007)
0x3f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Untrust"
0x3f6: Call2 0x2db

0x3f7: Pop(1)
0x3f8: Push((int) 540928)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 540929)
0x3fe: Push((int) 43009)
0x3ff: Push((int) 43008)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 540932)
0x403: Push((int) 43009)
0x404: Push((int) 43011)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Return(); Pop(0)

0x408: Push((int) 43009)
0x409: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x40b: PushEmpty(string)
0x40c: Stack[-1] = "Neutral"
0x40d: Call2 0x2db

0x40e: Pop(1)
0x40f: Push((int) 540930)
0x410: @@ SetMessage(Stack[-1])
0x411: Pop(1)
0x412: @@ ClearReplies()
0x413: Pop(0)
0x414: Push((int) 525922)
0x415: Push((int) -1)
0x416: Push((int) 27214)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: Push((int) 540933)
0x41a: Push((int) -1)
0x41b: Push((int) 43013)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x420: PushEmpty(bool)
0x421: Call2 0x9a9

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: @ lshStopAnimation()
0x425: Pop(0)
0x426: GOTO 0x429

0x427: @ StopAnimation()
0x428: Pop(0)
0x429: Return(); Pop(0)

0x42a: GOTO 0x2f2

0x42b: Return(); Pop(0)

0x42c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x42d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x42e: PushEmpty(bool, object, float)
0x42f: Stack[-2] = Stack[-12]
0x430: Stack[-1] = (float) 70.0
0x431: Call2 0x816

0x432: Pop(2)
0x433: Pop(1); Push((bool) Stack[-1] == 0)
0x434: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x435: Stack[-10] = (int) -2
0x436: Return(); Pop(8)

0x437: @ CreateDialog(Stack[-4])
0x438: Pop(0)
0x439: PushEmpty(int)
0x43a: Call2 0x9a3

0x43b: Pop(0)
0x43c: @@ SetNPCName(Stack[-1])
0x43d: Pop(1)
0x43e: PushEmpty(int)
0x43f: Call2 0x9a1

0x440: Pop(0)
0x441: @@ SetNPCDescription(Stack[-1])
0x442: Pop(1)
0x443: PushEmpty(string)
0x444: Call2 0x9a5

0x445: Pop(0)
0x446: @@ SetPhoto(Stack[-1])
0x447: Pop(1)
0x448: PushEmpty(string)
0x449: Call2 0x9a7

0x44a: Pop(0)
0x44b: @@ SetPhoto2(Stack[-1])
0x44c: Pop(1)
0x44d: PushEmpty(int)
0x44e: Call2 0xa49

0x44f: Pop(0)
0x450: @@ SetPlayerName(Stack[-1])
0x451: Pop(1)
0x452: Stack[-2] = (int) -1
0x453: @ IsOverrideActive(Stack[-3])
0x454: Pop(0)
0x455: Push(Stack[-3])
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-10] = (int) -2
0x458: Return(); Pop(8)

0x459: @ DoDialog(Stack[-4])
0x45a: Pop(0)
0x45b: PushEmpty(bool, object)
0x45c: PushEmpty(object)
0x45d: Call2 0x965

0x45e: Stack[-2] = Stack[-1]
0x45f: Pop(1)
0x460: Call2 0x86b

0x461: Pop(2)
0x462: PushEmpty(object, object)
0x463: Stack[-2] = Stack[-11]
0x464: Stack[-1] = Stack[-6]
0x465: Push(-2, 4); TaskCall(8)
0x466: Call2 0x47d

0x467: Pop(-2, 4); TaskReturn
0x468: Pop(2)
0x469: @@ IsDialogEnd(Stack[-1])
0x46a: Pop(0)
0x46b: Pop(0); Push((bool) Stack[-1] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46d: @ sync()
0x46e: Pop(0)
0x46f: @@ IsDialogEnd(Stack[-1])
0x470: Pop(0)
0x471: GOTO 0x46b

0x472: PushEmpty(object)
0x473: Stack[-1] = Stack[-10]
0x474: Call2 0x85a

0x475: Pop(1)
0x476: @ StopDialog(Stack[-4])
0x477: Pop(0)
0x478: @@ GetReturnValue(Stack[-2])
0x479: Pop(0)
0x47a: Stack[-10] = Stack[-2]
0x47b: Return(); Pop(8)

0x47c: Stack[-4] = 0
0x47d: PushEmpty()
0x47e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x47f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x480: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x481: Push((int) 1)
0x482: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x483: PushEmpty(string)
0x484: Stack[-1] = "Neutral"
0x485: Call2 0x4bc

0x486: Pop(1)
0x487: Push((int) 535231)
0x488: @@ SetMessage(Stack[-1])
0x489: Pop(1)
0x48a: @@ ClearReplies()
0x48b: Pop(0)
0x48c: Push((int) 535232)
0x48d: Push((int) 36953)
0x48e: Push((int) 36907)
0x48f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: Push((int) 535233)
0x492: Push((int) -1)
0x493: Push((int) 36908)
0x494: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x495: Pop(3)
0x496: Push((int) 535280)
0x497: Push((int) -1)
0x498: Push((int) 36956)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: GOTO 0x49e

0x49c: Return(); Pop(0)

0x49d: GOTO 0x481

0x49e: PushEmpty(bool)
0x49f: Call2 0x9a9

0x4a0: Pop(0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a2: @ lshWaitForAnimEnd()
0x4a3: Pop(0)
0x4a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: GOTO 0x4ac

0x4a7: PushEmpty(string)
0x4a8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4a9: Call2 0x930

0x4aa: Pop(1)
0x4ab: GOTO 0x4a2

0x4ac: GOTO 0x4bb

0x4ad: Push("all")
0x4ae: Push("idle")
0x4af: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: @ WaitForAnimEnd()
0x4b2: Pop(0)
0x4b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: GOTO 0x4bb

0x4b6: Push("all")
0x4b7: Push("idle")
0x4b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b9: Pop(2)
0x4ba: GOTO 0x4b1

0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: PushEmpty(bool)
0x4be: Call2 0x9a9

0x4bf: Pop(0)
0x4c0: Pop(1); Push((bool) Stack[-1] == 0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4c2: Return(); Pop(0)

0x4c3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Return(); Pop(0)

0x4c6: PushEmpty(string, bool)
0x4c7: Stack[-2] = Stack[-3]
0x4c8: Push("")
0x4c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-1] = (bool) 0
0x4cc: GOTO 0x4ce

0x4cd: Stack[-1] = (bool) 1
0x4ce: Call2 0x940

0x4cf: Pop(2)
0x4d0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d1: Return(); Pop(0)

0x4d2: PushEmpty()
0x4d3: Push((int) 1)
0x4d4: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x4d5: PushEmpty()
0x4d6: Call2 0x95e

0x4d7: Pop(0)
0x4d8: Push((int) 36906)
0x4d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4db: PushEmpty(string)
0x4dc: Stack[-1] = "Neutral"
0x4dd: Call2 0x4bc

0x4de: Pop(1)
0x4df: Push((int) 535231)
0x4e0: @@ SetMessage(Stack[-1])
0x4e1: Pop(1)
0x4e2: @@ ClearReplies()
0x4e3: Pop(0)
0x4e4: Push((int) 535232)
0x4e5: Push((int) 36953)
0x4e6: Push((int) 36907)
0x4e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: Push((int) 535233)
0x4ea: Push((int) -1)
0x4eb: Push((int) 36908)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Push((int) 535280)
0x4ef: Push((int) -1)
0x4f0: Push((int) 36956)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Return(); Pop(0)

0x4f4: Push((int) 36953)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Neutral"
0x4f9: Call2 0x4bc

0x4fa: Pop(1)
0x4fb: Push((int) 535277)
0x4fc: @@ SetMessage(Stack[-1])
0x4fd: Pop(1)
0x4fe: @@ ClearReplies()
0x4ff: Pop(0)
0x500: Push((int) 535278)
0x501: Push((int) 36957)
0x502: Push((int) 36954)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: Push((int) 535279)
0x506: Push((int) 36957)
0x507: Push((int) 36955)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Return(); Pop(0)

0x50b: Push((int) 36957)
0x50c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x50e: PushEmpty(string)
0x50f: Stack[-1] = "Neutral"
0x510: Call2 0x4bc

0x511: Pop(1)
0x512: Push((int) 535281)
0x513: @@ SetMessage(Stack[-1])
0x514: Pop(1)
0x515: @@ ClearReplies()
0x516: Pop(0)
0x517: Push((int) 535282)
0x518: Push((int) -1)
0x519: Push((int) 36958)
0x51a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51b: Pop(3)
0x51c: Push((int) 535283)
0x51d: Push((int) -1)
0x51e: Push((int) 36959)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Return(); Pop(0)

0x522: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x523: PushEmpty(bool)
0x524: Call2 0x9a9

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: @ lshStopAnimation()
0x528: Pop(0)
0x529: GOTO 0x52c

0x52a: @ StopAnimation()
0x52b: Pop(0)
0x52c: Return(); Pop(0)

0x52d: GOTO 0x4d3

0x52e: Return(); Pop(0)

0x52f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x530: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x531: PushEmpty(bool, object, float)
0x532: Stack[-2] = Stack[-12]
0x533: Stack[-1] = (float) 70.0
0x534: Call2 0x816

0x535: Pop(2)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-10] = (int) -2
0x539: Return(); Pop(8)

0x53a: @ CreateDialog(Stack[-4])
0x53b: Pop(0)
0x53c: PushEmpty(int)
0x53d: Call2 0x9a3

0x53e: Pop(0)
0x53f: @@ SetNPCName(Stack[-1])
0x540: Pop(1)
0x541: PushEmpty(int)
0x542: Call2 0x9a1

0x543: Pop(0)
0x544: @@ SetNPCDescription(Stack[-1])
0x545: Pop(1)
0x546: PushEmpty(string)
0x547: Call2 0x9a5

0x548: Pop(0)
0x549: @@ SetPhoto(Stack[-1])
0x54a: Pop(1)
0x54b: PushEmpty(string)
0x54c: Call2 0x9a7

0x54d: Pop(0)
0x54e: @@ SetPhoto2(Stack[-1])
0x54f: Pop(1)
0x550: PushEmpty(int)
0x551: Call2 0xa49

0x552: Pop(0)
0x553: @@ SetPlayerName(Stack[-1])
0x554: Pop(1)
0x555: Stack[-2] = (int) -1
0x556: @ IsOverrideActive(Stack[-3])
0x557: Pop(0)
0x558: Push(Stack[-3])
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-10] = (int) -2
0x55b: Return(); Pop(8)

0x55c: @ DoDialog(Stack[-4])
0x55d: Pop(0)
0x55e: PushEmpty(bool, object)
0x55f: PushEmpty(object)
0x560: Call2 0x965

0x561: Stack[-2] = Stack[-1]
0x562: Pop(1)
0x563: Call2 0x86b

0x564: Pop(2)
0x565: PushEmpty(object, object)
0x566: Stack[-2] = Stack[-11]
0x567: Stack[-1] = Stack[-6]
0x568: Push(-2, 4); TaskCall(10)
0x569: Call2 0x580

0x56a: Pop(-2, 4); TaskReturn
0x56b: Pop(2)
0x56c: @@ IsDialogEnd(Stack[-1])
0x56d: Pop(0)
0x56e: Pop(0); Push((bool) Stack[-1] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x570: @ sync()
0x571: Pop(0)
0x572: @@ IsDialogEnd(Stack[-1])
0x573: Pop(0)
0x574: GOTO 0x56e

0x575: PushEmpty(object)
0x576: Stack[-1] = Stack[-10]
0x577: Call2 0x85a

0x578: Pop(1)
0x579: @ StopDialog(Stack[-4])
0x57a: Pop(0)
0x57b: @@ GetReturnValue(Stack[-2])
0x57c: Pop(0)
0x57d: Stack[-10] = Stack[-2]
0x57e: Return(); Pop(8)

0x57f: Stack[-4] = 0
0x580: PushEmpty()
0x581: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x582: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x583: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x584: Push((int) 1)
0x585: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x586: PushEmpty(string)
0x587: Stack[-1] = "Neutral"
0x588: Call2 0x5ba

0x589: Pop(1)
0x58a: Push((int) 540545)
0x58b: @@ SetMessage(Stack[-1])
0x58c: Pop(1)
0x58d: @@ ClearReplies()
0x58e: Pop(0)
0x58f: Push((int) 540546)
0x590: Push((int) -1)
0x591: Push((int) 42555)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: Push((int) 540798)
0x595: Push((int) -1)
0x596: Push((int) 42847)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: GOTO 0x59c

0x59a: Return(); Pop(0)

0x59b: GOTO 0x584

0x59c: PushEmpty(bool)
0x59d: Call2 0x9a9

0x59e: Pop(0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a0: @ lshWaitForAnimEnd()
0x5a1: Pop(0)
0x5a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a4: GOTO 0x5aa

0x5a5: PushEmpty(string)
0x5a6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5a7: Call2 0x930

0x5a8: Pop(1)
0x5a9: GOTO 0x5a0

0x5aa: GOTO 0x5b9

0x5ab: Push("all")
0x5ac: Push("idle")
0x5ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ae: Pop(2)
0x5af: @ WaitForAnimEnd()
0x5b0: Pop(0)
0x5b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: GOTO 0x5b9

0x5b4: Push("all")
0x5b5: Push("idle")
0x5b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b7: Pop(2)
0x5b8: GOTO 0x5af

0x5b9: Return(); Pop(0)

0x5ba: PushEmpty()
0x5bb: PushEmpty(bool)
0x5bc: Call2 0x9a9

0x5bd: Pop(0)
0x5be: Pop(1); Push((bool) Stack[-1] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5c0: Return(); Pop(0)

0x5c1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: Return(); Pop(0)

0x5c4: PushEmpty(string, bool)
0x5c5: Stack[-2] = Stack[-3]
0x5c6: Push("")
0x5c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-1] = (bool) 0
0x5ca: GOTO 0x5cc

0x5cb: Stack[-1] = (bool) 1
0x5cc: Call2 0x940

0x5cd: Pop(2)
0x5ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: Push((int) 1)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5d3: PushEmpty()
0x5d4: Call2 0x95e

0x5d5: Pop(0)
0x5d6: Push((int) 42554)
0x5d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5d9: PushEmpty(string)
0x5da: Stack[-1] = "Neutral"
0x5db: Call2 0x5ba

0x5dc: Pop(1)
0x5dd: Push((int) 540545)
0x5de: @@ SetMessage(Stack[-1])
0x5df: Pop(1)
0x5e0: @@ ClearReplies()
0x5e1: Pop(0)
0x5e2: Push((int) 540546)
0x5e3: Push((int) -1)
0x5e4: Push((int) 42555)
0x5e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e6: Pop(3)
0x5e7: Push((int) 540798)
0x5e8: Push((int) -1)
0x5e9: Push((int) 42847)
0x5ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5eb: Pop(3)
0x5ec: Return(); Pop(0)

0x5ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5ee: PushEmpty(bool)
0x5ef: Call2 0x9a9

0x5f0: Pop(0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f2: @ lshStopAnimation()
0x5f3: Pop(0)
0x5f4: GOTO 0x5f7

0x5f5: @ StopAnimation()
0x5f6: Pop(0)
0x5f7: Return(); Pop(0)

0x5f8: GOTO 0x5d1

0x5f9: Return(); Pop(0)

0x5fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5fc: PushEmpty(bool, object, float)
0x5fd: Stack[-2] = Stack[-12]
0x5fe: Stack[-1] = (float) 70.0
0x5ff: Call2 0x816

0x600: Pop(2)
0x601: Pop(1); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-10] = (int) -2
0x604: Return(); Pop(8)

0x605: @ CreateDialog(Stack[-4])
0x606: Pop(0)
0x607: PushEmpty(int)
0x608: Call2 0x9a3

0x609: Pop(0)
0x60a: @@ SetNPCName(Stack[-1])
0x60b: Pop(1)
0x60c: PushEmpty(int)
0x60d: Call2 0x9a1

0x60e: Pop(0)
0x60f: @@ SetNPCDescription(Stack[-1])
0x610: Pop(1)
0x611: PushEmpty(string)
0x612: Call2 0x9a5

0x613: Pop(0)
0x614: @@ SetPhoto(Stack[-1])
0x615: Pop(1)
0x616: PushEmpty(string)
0x617: Call2 0x9a7

0x618: Pop(0)
0x619: @@ SetPhoto2(Stack[-1])
0x61a: Pop(1)
0x61b: PushEmpty(int)
0x61c: Call2 0xa49

0x61d: Pop(0)
0x61e: @@ SetPlayerName(Stack[-1])
0x61f: Pop(1)
0x620: Stack[-2] = (int) -1
0x621: @ IsOverrideActive(Stack[-3])
0x622: Pop(0)
0x623: Push(Stack[-3])
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-10] = (int) -2
0x626: Return(); Pop(8)

0x627: @ DoDialog(Stack[-4])
0x628: Pop(0)
0x629: PushEmpty(bool, object)
0x62a: PushEmpty(object)
0x62b: Call2 0x965

0x62c: Stack[-2] = Stack[-1]
0x62d: Pop(1)
0x62e: Call2 0x86b

0x62f: Pop(2)
0x630: PushEmpty(object, object)
0x631: Stack[-2] = Stack[-11]
0x632: Stack[-1] = Stack[-6]
0x633: Push(-2, 4); TaskCall(12)
0x634: Call2 0x64b

0x635: Pop(-2, 4); TaskReturn
0x636: Pop(2)
0x637: @@ IsDialogEnd(Stack[-1])
0x638: Pop(0)
0x639: Pop(0); Push((bool) Stack[-1] == 0)
0x63a: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63b: @ sync()
0x63c: Pop(0)
0x63d: @@ IsDialogEnd(Stack[-1])
0x63e: Pop(0)
0x63f: GOTO 0x639

0x640: PushEmpty(object)
0x641: Stack[-1] = Stack[-10]
0x642: Call2 0x85a

0x643: Pop(1)
0x644: @ StopDialog(Stack[-4])
0x645: Pop(0)
0x646: @@ GetReturnValue(Stack[-2])
0x647: Pop(0)
0x648: Stack[-10] = Stack[-2]
0x649: Return(); Pop(8)

0x64a: Stack[-4] = 0
0x64b: PushEmpty()
0x64c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x64d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x64e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x64f: Push((int) 1)
0x650: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Neutral"
0x653: Call2 0x68a

0x654: Pop(1)
0x655: Push((int) 542099)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: Push((int) 542100)
0x65b: Push((int) 44405)
0x65c: Push((int) 44402)
0x65d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65e: Pop(3)
0x65f: Push((int) 542101)
0x660: Push((int) -1)
0x661: Push((int) 44403)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: Push((int) 542102)
0x665: Push((int) -1)
0x666: Push((int) 44404)
0x667: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(3)
0x669: GOTO 0x66c

0x66a: Return(); Pop(0)

0x66b: GOTO 0x64f

0x66c: PushEmpty(bool)
0x66d: Call2 0x9a9

0x66e: Pop(0)
0x66f: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x670: @ lshWaitForAnimEnd()
0x671: Pop(0)
0x672: Push( Stack[3 + Tasks[-1].StackPointer] )
0x673: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x674: GOTO 0x67a

0x675: PushEmpty(string)
0x676: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x677: Call2 0x930

0x678: Pop(1)
0x679: GOTO 0x670

0x67a: GOTO 0x689

0x67b: Push("all")
0x67c: Push("idle")
0x67d: @ PlayAnimation(Stack[-2], Stack[-1])
0x67e: Pop(2)
0x67f: @ WaitForAnimEnd()
0x680: Pop(0)
0x681: Push( Stack[3 + Tasks[-1].StackPointer] )
0x682: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x683: GOTO 0x689

0x684: Push("all")
0x685: Push("idle")
0x686: @ PlayAnimation(Stack[-2], Stack[-1])
0x687: Pop(2)
0x688: GOTO 0x67f

0x689: Return(); Pop(0)

0x68a: PushEmpty()
0x68b: PushEmpty(bool)
0x68c: Call2 0x9a9

0x68d: Pop(0)
0x68e: Pop(1); Push((bool) Stack[-1] == 0)
0x68f: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x690: Return(); Pop(0)

0x691: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x692: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x693: Return(); Pop(0)

0x694: PushEmpty(string, bool)
0x695: Stack[-2] = Stack[-3]
0x696: Push("")
0x697: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-1] = (bool) 0
0x69a: GOTO 0x69c

0x69b: Stack[-1] = (bool) 1
0x69c: Call2 0x940

0x69d: Pop(2)
0x69e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x69f: Return(); Pop(0)

0x6a0: PushEmpty()
0x6a1: Push((int) 1)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6a3: PushEmpty()
0x6a4: Call2 0x95e

0x6a5: Pop(0)
0x6a6: Push((int) 44406)
0x6a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a9: PushEmpty(object, object)
0x6aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ac: Call2 0x9bd

0x6ad: Pop(2)
0x6ae: Push((int) 44407)
0x6af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b1: PushEmpty(object, object)
0x6b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b4: Call2 0x9bd

0x6b5: Pop(2)
0x6b6: Push((int) 44401)
0x6b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6b9: PushEmpty(string)
0x6ba: Stack[-1] = "Neutral"
0x6bb: Call2 0x68a

0x6bc: Pop(1)
0x6bd: Push((int) 542099)
0x6be: @@ SetMessage(Stack[-1])
0x6bf: Pop(1)
0x6c0: @@ ClearReplies()
0x6c1: Pop(0)
0x6c2: Push((int) 542100)
0x6c3: Push((int) 44405)
0x6c4: Push((int) 44402)
0x6c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c6: Pop(3)
0x6c7: Push((int) 542101)
0x6c8: Push((int) -1)
0x6c9: Push((int) 44403)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Push((int) 542102)
0x6cd: Push((int) -1)
0x6ce: Push((int) 44404)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Return(); Pop(0)

0x6d2: Push((int) 44405)
0x6d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6d5: PushEmpty(string)
0x6d6: Stack[-1] = "Neutral"
0x6d7: Call2 0x68a

0x6d8: Pop(1)
0x6d9: Push((int) 542103)
0x6da: @@ SetMessage(Stack[-1])
0x6db: Pop(1)
0x6dc: @@ ClearReplies()
0x6dd: Pop(0)
0x6de: Push((int) 542104)
0x6df: Push((int) -1)
0x6e0: Push((int) 44406)
0x6e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e2: Pop(3)
0x6e3: Push((int) 542105)
0x6e4: Push((int) -1)
0x6e5: Push((int) 44407)
0x6e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e7: Pop(3)
0x6e8: Return(); Pop(0)

0x6e9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6ea: PushEmpty(bool)
0x6eb: Call2 0x9a9

0x6ec: Pop(0)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ee: @ lshStopAnimation()
0x6ef: Pop(0)
0x6f0: GOTO 0x6f3

0x6f1: @ StopAnimation()
0x6f2: Pop(0)
0x6f3: Return(); Pop(0)

0x6f4: GOTO 0x6a1

0x6f5: Return(); Pop(0)

0x6f6: PushEmpty()
0x6f7: Call2 0x6fa

0x6f8: Pop(0)
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty(bool)
0x6fb: Call2 0x811

0x6fc: Pop(0)
0x6fd: Pop(1); Push((bool) Stack[-1] == 0)
0x6fe: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6ff: @ Hold()
0x700: Pop(0)
0x701: @ GetDirection(Stack[-0])
0x702: Pop(0)
0x703: PushEmpty()
0x704: Call2 0x7aa

0x705: Pop(0)
0x706: GOTO 0x703

0x707: Return(); Pop(0)

0x708: PushEmpty(object, object)
0x709: Push("player")
0x70a: @ FindActor(Stack[-2], Stack[-1])
0x70b: Pop(1)
0x70c: Pop(0); Push((bool) Stack[-1] == 0)
0x70d: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70e: Stack[-3] = (bool) 0
0x70f: Return(); Pop(2)

0x710: PushEmpty(bool, object)
0x711: Stack[-1] = Stack[-3]
0x712: Call2 0x808

0x713: Stack[-5] = Stack[-2]
0x714: Pop(2)
0x715: Return(); Pop(2)

0x716: Stack[-1] = 0
0x717: Push(CvectorIndex(Stack[-0], 0))
0x718: Push(CvectorIndex(Stack[-0], 2))
0x719: @ RotateAsync(Stack[-2], Stack[-1])
0x71a: Pop(2)
0x71b: Return(); Pop(0)

0x71c: PushEmpty(object, bool, object, bool)
0x71d: Push("player")
0x71e: @ FindActor(Stack[-3], Stack[-1])
0x71f: Pop(1)
0x720: Pop(0); Push((bool) Stack[-2] == 0)
0x721: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x722: Stack[-5] = (bool) 0
0x723: Return(); Pop(4)

0x724: PushEmpty(float, object)
0x725: Stack[-1] = Stack[-4]
0x726: Call2 0x7f6

0x727: Pop(1)
0x728: Push((float)90000.0)
0x729: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72b: Stack[-5] = (bool) 0
0x72c: Return(); Pop(4)

0x72d: @ CanSee(Stack[-1], Stack[-2])
0x72e: Pop(0)
0x72f: Stack[-5] = Stack[-1]
0x730: Return(); Pop(4)

0x731: Stack[-2] = 0
0x732: PushEmpty(float, float)
0x733: Push((int) 8)
0x734: Push((int) 16)
0x735: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(2)
0x737: Push((int) 10)
0x738: @ SetTimer(Stack[-1], Stack[-2])
0x739: Pop(1)
0x73a: Return(); Pop(2)

0x73b: Push((int) 10)
0x73c: @ KillTimer(Stack[-1])
0x73d: Pop(1)
0x73e: Return(); Pop(0)

0x73f: PushEmpty()
0x740: Push((int) 10)
0x741: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x743: PushEmpty()
0x744: Call2 0x73b

0x745: Pop(0)
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 0
0x748: PushEmpty(bool)
0x749: Call2 0x811

0x74a: Pop(0)
0x74b: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74c: PushEmpty(bool)
0x74d: Call2 0x71c

0x74e: Pop(0)
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 1
0x751: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x752: PushEmpty(bool)
0x753: Call2 0x708

0x754: Pop(0)
0x755: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x756: PushEmpty(bool, object)
0x757: PushEmpty(object)
0x758: Call2 0x965

0x759: Stack[-2] = Stack[-1]
0x75a: Pop(1)
0x75b: Call2 0x8a5

0x75c: Pop(2)
0x75d: GOTO 0x764

0x75e: PushEmpty()
0x75f: Call2 0x717

0x760: Pop(0)
0x761: PushEmpty()
0x762: Call2 0x732

0x763: Pop(0)
0x764: Return(); Pop(0)

0x765: PushEmpty()
0x766: Call2 0x7f1

0x767: Pop(0)
0x768: PushEmpty()
0x769: Call2 0x73b

0x76a: Pop(0)
0x76b: @ lshStopSpeech()
0x76c: Pop(0)
0x76d: @ lshStopAnimation()
0x76e: Pop(0)
0x76f: @ StopAsync()
0x770: Pop(0)
0x771: @ Hold()
0x772: Pop(0)
0x773: Return(); Pop(0)

0x774: @ StopGroup0()
0x775: Pop(0)
0x776: PushEmpty()
0x777: Call2 0x73b

0x778: Pop(0)
0x779: PushEmpty(string)
0x77a: Stack[-1] = "Neutral"
0x77b: Call2 0x930

0x77c: Pop(1)
0x77d: PushEmpty()
0x77e: Call2 0x732

0x77f: Pop(0)
0x780: Return(); Pop(0)

0x781: PushEmpty()
0x782: Push(Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x784: PushEmpty()
0x785: Call2 0x732

0x786: Pop(0)
0x787: GOTO 0x78c

0x788: PushEmpty(string)
0x789: Stack[-1] = "Neutral"
0x78a: Call2 0x930

0x78b: Pop(1)
0x78c: Return(); Pop(0)

0x78d: PushEmpty(bool, bool)
0x78e: @ IsOverrideActive(Stack[-1])
0x78f: Pop(0)
0x790: Pop(0); Push((bool) Stack[-1] == 0)
0x791: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x792: EventDisable(0)
0x793: PushEmpty()
0x794: Call2 0x7f1

0x795: Pop(0)
0x796: PushEmpty(bool, object)
0x797: Stack[-1] = Stack[-5]
0x798: Call2 0x808

0x799: Pop(2)
0x79a: EventEnable(0)
0x79b: PushEmpty(object)
0x79c: Stack[-1] = Stack[-4]
0x79d: Call2 0xa5a

0x79e: Pop(1)
0x79f: PushEmpty(string)
0x7a0: Stack[-1] = "Neutral"
0x7a1: Call2 0x930

0x7a2: Pop(1)
0x7a3: PushEmpty()
0x7a4: Call2 0x73b

0x7a5: Pop(0)
0x7a6: PushEmpty()
0x7a7: Call2 0x732

0x7a8: Pop(0)
0x7a9: Return(); Pop(2)

0x7aa: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x7ab: @ WaitForAnimEnd()
0x7ac: Pop(0)
0x7ad: PushEmpty(bool)
0x7ae: Call2 0x811

0x7af: Pop(0)
0x7b0: Pop(1); Push((bool) Stack[-1] == 0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b2: Return(); Pop(12)

0x7b3: PushEmpty(int)
0x7b4: Call2 0x990

0x7b5: Stack[-7] = Stack[-1]
0x7b6: Pop(1)
0x7b7: Stack[-5] = (int) 0
0x7b8: PushEmpty(bool)
0x7b9: Stack[-1] = (bool) 0
0x7ba: Push((int) 5)
0x7bb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bd: PushEmpty(bool)
0x7be: Call2 0x811

0x7bf: Pop(0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c1: Stack[-1] = (bool) 1
0x7c2: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7c3: Pop(0); Push((bool) Stack[-6] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c5: Push((int) 3)
0x7c6: @ Sleep(Stack[-1], Stack[-5])
0x7c7: Pop(1)
0x7c8: Pop(0); Push((bool) Stack[-4] == 0)
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7ca: GOTO 0x7ec

0x7cb: GOTO 0x7e1

0x7cc: @ irand(Stack[-3], Stack[-6])
0x7cd: Pop(0)
0x7ce: Push((int) 5)
0x7cf: @ irand(Stack[-3], Stack[-1])
0x7d0: Pop(1)
0x7d1: Push((int) 0)
0x7d2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: Stack[-3] = (int) 0
0x7d5: Push("all")
0x7d6: PushEmpty(string, int)
0x7d7: Stack[-1] = Stack[-6]
0x7d8: Call2 0x989

0x7d9: Pop(1)
0x7da: @ PlayAnimation(Stack[-2], Stack[-1])
0x7db: Pop(2)
0x7dc: @ WaitForAnimEnd(Stack[-1])
0x7dd: Pop(0)
0x7de: Pop(0); Push((bool) Stack[-1] == 0)
0x7df: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7e0: GOTO 0x7ec

0x7e1: PushEmpty(bool)
0x7e2: Call2 0x7ef

0x7e3: Pop(0)
0x7e4: Pop(1); Push((bool) Stack[-1] == 0)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: GOTO 0x7ec

0x7e7: @ ResetAAS()
0x7e8: Pop(0)
0x7e9: Push((int) 1)
0x7ea: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x7eb: GOTO 0x7b8

0x7ec: @ ResetAAS()
0x7ed: Pop(0)
0x7ee: Return(); Pop(12)

0x7ef: Stack[-1] = (bool) 1
0x7f0: Return(); Pop(0)

0x7f1: @ StopAnimation()
0x7f2: Pop(0)
0x7f3: @ StopGroup0()
0x7f4: Pop(0)
0x7f5: Return(); Pop(0)

0x7f6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7f7: @ GetPosition(Stack[-3])
0x7f8: Pop(0)
0x7f9: @@ GetPosition(Stack[-2])
0x7fa: Pop(0)
0x7fb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7fc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7fd: Return(); Pop(6)

0x7fe: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7ff: @ GetPosition(Stack[-3])
0x800: Pop(0)
0x801: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x802: Push(CvectorIndex(Stack[-2], 0))
0x803: Push(CvectorIndex(Stack[-3], 2))
0x804: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x805: Pop(2)
0x806: Stack[-8] = Stack[-1]
0x807: Return(); Pop(6)

0x808: PushEmpty(cvector, cvector)
0x809: @@ GetPosition(Stack[-1])
0x80a: Pop(0)
0x80b: PushEmpty(bool, cvector)
0x80c: Stack[-1] = Stack[-3]
0x80d: Call2 0x7fe

0x80e: Stack[-6] = Stack[-2]
0x80f: Pop(2)
0x810: Return(); Pop(2)

0x811: PushEmpty(bool, bool)
0x812: @ IsLoaded(Stack[-1])
0x813: Pop(0)
0x814: Stack[-3] = Stack[-1]
0x815: Return(); Pop(2)

0x816: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x817: @@ GetPosition(Stack[-8])
0x818: Pop(0)
0x819: @@ GetEyesHeight(Stack[-9])
0x81a: Pop(0)
0x81b: Push(CvectorIndex(Stack[-8], 1))
0x81c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x81d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x81e: @ GetPosition(Stack[-7])
0x81f: Pop(0)
0x820: @ GetEyesHeight(Stack[-9])
0x821: Pop(0)
0x822: Push(CvectorIndex(Stack[-7], 1))
0x823: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x824: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x825: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x826: Push(CvectorIndex(Stack[-6], 1))
0x827: Stack[-1] = (int) 0
0x828: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x829: Pop(0); Push(Stack[-6] | Stack[-6]);
0x82a: Pop(1); Push(Sqrt(Stack[-1]))
0x82b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x82c: Stack[-5] = -Stack[-6]; Pop(0);
0x82d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x82e: PushEmpty(cvector, cvector)
0x82f: Push(CVector(0.0, 1.0, 0.0))
0x830: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x831: Call2 0x96b

0x832: Pop(1)
0x833: Push((int) 25)
0x834: Pop(2); Push(Stack[-2] * Stack[-1]);
0x835: Pop(2); Push(Stack[-2] + Stack[-1]);
0x836: Push(CVector(0.0, 10.0, 0.0))
0x837: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x838: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x839: @ IsOverrideActive(Stack[-2])
0x83a: Pop(0)
0x83b: Push(Stack[-2])
0x83c: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83d: Stack[-21] = (bool) 0
0x83e: Return(); Pop(18)

0x83f: @ StopWorld()
0x840: Pop(0)
0x841: @ CameraTransit(Stack[-3], Stack[-5])
0x842: Pop(0)
0x843: Push(CvectorIndex(Stack[-4], 0))
0x844: Push(CvectorIndex(Stack[-5], 2))
0x845: @ Rotate(Stack[-2], Stack[-1])
0x846: Pop(2)
0x847: PushEmpty(bool)
0x848: Call2 0x9a9

0x849: Pop(0)
0x84a: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84b: GOTO 0x854

0x84c: Push("head")
0x84d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x84e: Pop(1)
0x84f: Push(Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x851: Push("head")
0x852: @ LookAsyncCamera(Stack[-1])
0x853: Pop(1)
0x854: @ CameraWaitForPlayFinish()
0x855: Pop(0)
0x856: @ ResumeWorld()
0x857: Pop(0)
0x858: Stack[-21] = (bool) 1
0x859: Return(); Pop(18)

0x85a: PushEmpty(bool, bool)
0x85b: @ CameraSwitchToNormal()
0x85c: Pop(0)
0x85d: PushEmpty(bool)
0x85e: Call2 0x9a9

0x85f: Pop(0)
0x860: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x861: GOTO 0x86a

0x862: Push("head")
0x863: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x864: Pop(1)
0x865: Push(Stack[-1])
0x866: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x867: Push("head")
0x868: @ UnlookAsync(Stack[-1])
0x869: Pop(1)
0x86a: Return(); Pop(2)

0x86b: PushEmpty(int, int, int, int)
0x86c: Push("voice_common")
0x86d: @ GetVariable(Stack[-1], Stack[-3])
0x86e: Pop(1)
0x86f: Push(Stack[-2])
0x870: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[-7]
0x873: Call2 0x8a5

0x874: Pop(1)
0x875: Pop(1); Push((bool) Stack[-1] == 0)
0x876: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x877: PushEmpty(bool, object)
0x878: Stack[-1] = Stack[-7]
0x879: Call2 0x8ca

0x87a: Pop(1)
0x87b: Pop(1); Push((bool) Stack[-1] == 0)
0x87c: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87d: Stack[-6] = (bool) 0
0x87e: Return(); Pop(4)

0x87f: Push((int) 2)
0x880: @ irand(Stack[-2], Stack[-1])
0x881: Pop(1)
0x882: Push(Stack[-1])
0x883: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x884: Push("voice_common")
0x885: Push((int) 1)
0x886: Pop(1); Push(Stack[-4] + Stack[-1]);
0x887: Push((int) 3)
0x888: Pop(2); Push(Stack[-2] % Stack[-1]);
0x889: @ SetVariable(Stack[-2], Stack[-1])
0x88a: Pop(2)
0x88b: GOTO 0x890

0x88c: Push("voice_common")
0x88d: Push((int) 0)
0x88e: @ SetVariable(Stack[-2], Stack[-1])
0x88f: Pop(2)
0x890: GOTO 0x8a3

0x891: PushEmpty(bool, object)
0x892: Stack[-1] = Stack[-7]
0x893: Call2 0x8ca

0x894: Pop(1)
0x895: Pop(1); Push((bool) Stack[-1] == 0)
0x896: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x897: PushEmpty(bool, object)
0x898: Stack[-1] = Stack[-7]
0x899: Call2 0x8a5

0x89a: Pop(1)
0x89b: Pop(1); Push((bool) Stack[-1] == 0)
0x89c: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89d: Stack[-6] = (bool) 0
0x89e: Return(); Pop(4)

0x89f: Push("voice_common")
0x8a0: Push((int) 1)
0x8a1: @ SetVariable(Stack[-2], Stack[-1])
0x8a2: Pop(2)
0x8a3: Stack[-6] = (bool) 1
0x8a4: Return(); Pop(4)

0x8a5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x8a6: Stack[-5] = "c"
0x8a7: Stack[-4] = (int) 0
0x8a8: Push((int) 1)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8aa: Push((int) 1)
0x8ab: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8ad: @@ HasProperty(Stack[-1], Stack[-4])
0x8ae: Pop(1)
0x8af: Pop(0); Push((bool) Stack[-3] == 0)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8b1: GOTO 0x8b5

0x8b2: Push((int) 1)
0x8b3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8b4: GOTO 0x8a8

0x8b5: Pop(0); Push((bool) Stack[-4] == 0)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b7: Stack[-12] = (bool) 0
0x8b8: Return(); Pop(10)

0x8b9: Stack[-2] = (int) 0
0x8ba: Push((int) 1)
0x8bb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bd: @ irand(Stack[-2], Stack[-4])
0x8be: Pop(0)
0x8bf: Push((int) 1)
0x8c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8c2: @@ GetProperty(Stack[-1], Stack[-2])
0x8c3: Pop(1)
0x8c4: PushEmpty(bool, string)
0x8c5: Stack[-1] = Stack[-3]
0x8c6: Call2 0x94f

0x8c7: Stack[-14] = Stack[-2]
0x8c8: Pop(2)
0x8c9: Return(); Pop(10)

0x8ca: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x8cb: Push("d")
0x8cc: PushEmpty(int)
0x8cd: Call2 0x97a

0x8ce: Pop(0)
0x8cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8d0: Push("m")
0x8d1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x8d2: Stack[-4] = (int) 0
0x8d3: Push((int) 1)
0x8d4: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8d5: Push((int) 1)
0x8d6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8d8: @@ HasProperty(Stack[-1], Stack[-4])
0x8d9: Pop(1)
0x8da: Pop(0); Push((bool) Stack[-3] == 0)
0x8db: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8dc: GOTO 0x8e0

0x8dd: Push((int) 1)
0x8de: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8df: GOTO 0x8d3

0x8e0: Pop(0); Push((bool) Stack[-4] == 0)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e2: Stack[-12] = (bool) 0
0x8e3: Return(); Pop(10)

0x8e4: Stack[-2] = (int) 0
0x8e5: Push((int) 1)
0x8e6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: @ irand(Stack[-2], Stack[-4])
0x8e9: Pop(0)
0x8ea: Push((int) 1)
0x8eb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x8ec: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8ed: @@ GetProperty(Stack[-1], Stack[-2])
0x8ee: Pop(1)
0x8ef: PushEmpty(bool, string)
0x8f0: Stack[-1] = Stack[-3]
0x8f1: Call2 0x94f

0x8f2: Stack[-14] = Stack[-2]
0x8f3: Pop(2)
0x8f4: Return(); Pop(10)

0x8f5: PushEmpty()
0x8f6: PushEmpty(bool, object, float)
0x8f7: Stack[-2] = Stack[-4]
0x8f8: Stack[-1] = (int) 70
0x8f9: Call2 0x8fd

0x8fa: Stack[-5] = Stack[-3]
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x8fe: @@ GetPosition(Stack[-7])
0x8ff: Pop(0)
0x900: @@ GetEyesHeight(Stack[-8])
0x901: Pop(0)
0x902: Push(CvectorIndex(Stack[-7], 1))
0x903: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x904: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x905: @ GetPosition(Stack[-6])
0x906: Pop(0)
0x907: @ GetEyesHeight(Stack[-8])
0x908: Pop(0)
0x909: Push(CvectorIndex(Stack[-6], 1))
0x90a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x90b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x90c: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x90d: Push(CvectorIndex(Stack[-5], 1))
0x90e: Stack[-1] = (int) 0
0x90f: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x910: Pop(0); Push(Stack[-5] | Stack[-5]);
0x911: Pop(1); Push(Sqrt(Stack[-1]))
0x912: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x913: Stack[-4] = -Stack[-5]; Pop(0);
0x914: Pop(0); Push(Stack[-5] * Stack[-17]);
0x915: Push(CVector(0.0, 10.0, 0.0))
0x916: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x917: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x918: @ IsOverrideActive(Stack[-1])
0x919: Pop(0)
0x91a: Push(Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91c: Stack[-19] = (bool) 0
0x91d: Return(); Pop(16)

0x91e: @ StopWorld()
0x91f: Pop(0)
0x920: @ CameraTransit(Stack[-2], Stack[-4])
0x921: Pop(0)
0x922: Push(CvectorIndex(Stack[-3], 0))
0x923: Push(CvectorIndex(Stack[-4], 2))
0x924: @ Rotate(Stack[-2], Stack[-1])
0x925: Pop(2)
0x926: @ CameraWaitForPlayFinish()
0x927: Pop(0)
0x928: @ ResumeWorld()
0x929: Pop(0)
0x92a: Stack[-19] = (bool) 1
0x92b: Return(); Pop(16)

0x92c: PushEmpty()
0x92d: @ CameraSwitchToNormal()
0x92e: Pop(0)
0x92f: Return(); Pop(0)

0x930: PushEmpty(bool, float, float, bool, float, float)
0x931: @ lshHasAnimation(Stack[-3], Stack[-7])
0x932: Pop(0)
0x933: Push(Stack[-3])
0x934: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x935: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x936: Pop(0)
0x937: Push((bool) 0)
0x938: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x939: Pop(1)
0x93a: GOTO 0x93f

0x93b: Push("Can't find lsh animation : ")
0x93c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x93d: @ Trace(Stack[-1])
0x93e: Pop(1)
0x93f: Return(); Pop(6)

0x940: PushEmpty(bool, float, float, bool, float, float)
0x941: @ lshHasAnimation(Stack[-3], Stack[-8])
0x942: Pop(0)
0x943: Push(Stack[-3])
0x944: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x945: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x946: Pop(0)
0x947: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x948: Pop(0)
0x949: GOTO 0x94e

0x94a: Push("Can't find lsh animation : ")
0x94b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x94c: @ Trace(Stack[-1])
0x94d: Pop(1)
0x94e: Return(); Pop(6)

0x94f: PushEmpty(bool, bool)
0x950: PushEmpty(bool)
0x951: Call2 0x9a9

0x952: Pop(0)
0x953: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x954: @ lshHasSpeech(Stack[-1], Stack[-3])
0x955: Pop(0)
0x956: Push(Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x958: @ lshPlaySpeech(Stack[-3])
0x959: Pop(0)
0x95a: Stack[-4] = (bool) 1
0x95b: Return(); Pop(2)

0x95c: Stack[-4] = (bool) 0
0x95d: Return(); Pop(2)

0x95e: PushEmpty(bool)
0x95f: Call2 0x9a9

0x960: Pop(0)
0x961: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x962: @ lshStopSpeech()
0x963: Pop(0)
0x964: Return(); Pop(0)

0x965: PushEmpty(object, object)
0x966: @ self(Stack[-1])
0x967: Pop(0)
0x968: Stack[-3] = Stack[-1]
0x969: Return(); Pop(2)

0x96a: Stack[-1] = 0
0x96b: PushEmpty(float, float)
0x96c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x96d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x96e: Push((float)0.0)
0x96f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x971: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x972: Return(); Pop(2)

0x973: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x974: Return(); Pop(2)

0x975: PushEmpty(int, int)
0x976: @ GetVariable(Stack[-3], Stack[-1])
0x977: Pop(0)
0x978: Stack[-4] = Stack[-1]
0x979: Return(); Pop(2)

0x97a: PushEmpty(float, float)
0x97b: @ GetGameTime(Stack[-1])
0x97c: Pop(0)
0x97d: Push((int) 1)
0x97e: PushEmpty(int)
0x97f: Push((int) 24)
0x980: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x981: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x982: Return(); Pop(2)

0x983: PushEmpty()
0x984: PushEmpty(int)
0x985: Call2 0x97a

0x986: Pop(0)
0x987: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x988: Return(); Pop(0)

0x989: PushEmpty(string, string)
0x98a: Stack[-1] = "idle"
0x98b: Push(Stack[-3])
0x98c: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x98e: Stack[-4] = Stack[-1]
0x98f: Return(); Pop(2)

0x990: PushEmpty(int, bool, int, bool)
0x991: Stack[-2] = (int) 0
0x992: Push("all")
0x993: PushEmpty(string, int)
0x994: Stack[-1] = Stack[-5]
0x995: Call2 0x989

0x996: Pop(1)
0x997: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(2)
0x999: Pop(0); Push((bool) Stack[-1] == 0)
0x99a: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99b: GOTO 0x99f

0x99c: Push((int) 1)
0x99d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x99e: GOTO 0x992

0x99f: Stack[-5] = Stack[-2]
0x9a0: Return(); Pop(4)

0x9a1: Stack[-1] = (int) 515529
0x9a2: Return(); Pop(0)

0x9a3: Stack[-1] = (int) 502855
0x9a4: Return(); Pop(0)

0x9a5: Stack[-1] = "ui/NPC_Andrei.png"
0x9a6: Return(); Pop(0)

0x9a7: Stack[-1] = "ui/NPC_Andrei_b.png"
0x9a8: Return(); Pop(0)

0x9a9: Stack[-1] = (bool) 1
0x9aa: Return(); Pop(0)

0x9ab: PushEmpty()
0x9ac: Push("k2q04")
0x9ad: Push((int) 3)
0x9ae: @ SetVariable(Stack[-2], Stack[-1])
0x9af: Pop(2)
0x9b0: PushEmpty()
0x9b1: Call2 0x9da

0x9b2: Pop(0)
0x9b3: Return(); Pop(0)

0x9b4: PushEmpty()
0x9b5: Push("k5q02")
0x9b6: Push((int) 5)
0x9b7: @ SetVariable(Stack[-2], Stack[-1])
0x9b8: Pop(2)
0x9b9: PushEmpty()
0x9ba: Call2 0x9e7

0x9bb: Pop(0)
0x9bc: Return(); Pop(0)

0x9bd: PushEmpty()
0x9be: Push((int) 1000)
0x9bf: @@ SetReturnValue(Stack[-1])
0x9c0: Pop(1)
0x9c1: Return(); Pop(0)

0x9c2: PushEmpty()
0x9c3: PushEmpty(int, string)
0x9c4: Stack[-1] = "k2q04"
0x9c5: Call2 0x975

0x9c6: Pop(1)
0x9c7: Push((int) 2)
0x9c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9ca: Stack[-2] = (bool) 1
0x9cb: Return(); Pop(0)

0x9cc: Stack[-2] = (bool) 0
0x9cd: Return(); Pop(0)

0x9ce: PushEmpty()
0x9cf: PushEmpty(int, string)
0x9d0: Stack[-1] = "k5q02"
0x9d1: Call2 0x975

0x9d2: Pop(1)
0x9d3: Push((int) 4)
0x9d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d6: Stack[-2] = (bool) 1
0x9d7: Return(); Pop(0)

0x9d8: Stack[-2] = (bool) 0
0x9d9: Return(); Pop(0)

0x9da: PushEmpty(object, object)
0x9db: Push((int) 512)
0x9dc: Push((int) 2)
0x9dd: Push((int) 529711)
0x9de: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9df: Pop(3)
0x9e0: PushEmpty(bool, object, int)
0x9e1: Stack[-2] = Stack[-4]
0x9e2: Stack[-1] = (int) 507
0x9e3: Call2 0xa01

0x9e4: Pop(3)
0x9e5: Return(); Pop(2)

0x9e6: Stack[-1] = 0
0x9e7: PushEmpty(object, object)
0x9e8: Push((int) 402)
0x9e9: Push((int) 2)
0x9ea: Push((int) 525940)
0x9eb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: PushEmpty(bool, object, int)
0x9ee: Stack[-2] = Stack[-4]
0x9ef: Stack[-1] = (int) 397
0x9f0: Call2 0xa01

0x9f1: Pop(3)
0x9f2: Return(); Pop(2)

0x9f3: Stack[-1] = 0
0x9f4: PushEmpty(object, object)
0x9f5: @ GetDiaryRoot(Stack[-1])
0x9f6: Pop(0)
0x9f7: Pop(0); Push((bool) Stack[-1] == 0)
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f9: Push("Can't retrieve diary root")
0x9fa: @ Trace(Stack[-1])
0x9fb: Pop(1)
0x9fc: Stack[-3] = (bool) 0
0x9fd: Return(); Pop(2)

0x9fe: Stack[-3] = Stack[-1]
0x9ff: Return(); Pop(2)

0xa00: Stack[-1] = 0
0xa01: PushEmpty(object, object, int, object, object, int)
0xa02: PushEmpty(object)
0xa03: Call2 0x9f4

0xa04: Stack[-4] = Stack[-1]
0xa05: Pop(1)
0xa06: @@ Find(Stack[-7], Stack[-2])
0xa07: Pop(0)
0xa08: Pop(0); Push((bool) Stack[-2] == 0)
0xa09: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa0a: Push("Can't find diary parent with id: ")
0xa0b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa0c: @ Trace(Stack[-1])
0xa0d: Pop(1)
0xa0e: Stack[-9] = (bool) 0
0xa0f: Return(); Pop(6)

0xa10: @@ AddChild(Stack[-8])
0xa11: Pop(0)
0xa12: Push((int) 7)
0xa13: @ SendWorldWndMessage(Stack[-1])
0xa14: Pop(1)
0xa15: @@ GetCategory(Stack[-1])
0xa16: Pop(0)
0xa17: @ SetDiarySection(Stack[-1])
0xa18: Pop(0)
0xa19: Stack[-9] = (bool) 0
0xa1a: Return(); Pop(6)

0xa1b: Stack[-2] = 0
0xa1c: Stack[-3] = 0
0xa1d: PushEmpty(int, bool, int, int, object, int, bool, int, bool, int, int, object, int, bool)
0xa1e: Push((int) 0)
0xa1f: @ ClearSubContainer(Stack[-1])
0xa20: Pop(1)
0xa21: Push((int) 8)
0xa22: @ irand(Stack[-6], Stack[-1])
0xa23: Pop(1)
0xa24: Push((int) 2)
0xa25: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa26: Stack[-4] = (int) 0
0xa27: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xa28: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa29: @ CreateInvItem(Stack[-3])
0xa2a: Pop(0)
0xa2b: Push("grass_combination")
0xa2c: @@ SetItemName(Stack[-1])
0xa2d: Pop(1)
0xa2e: Push((int) 50)
0xa2f: @ irand(Stack[-3], Stack[-1])
0xa30: Pop(1)
0xa31: Push((int) 30)
0xa32: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa33: Push("im_inc")
0xa34: Push((float)100.0)
0xa35: Pop(1); Push(Stack[-4] / Stack[-1]);
0xa36: @@ SetProperty(Stack[-2], Stack[-1])
0xa37: Pop(2)
0xa38: Push((int) 40)
0xa39: @ irand(Stack[-3], Stack[-1])
0xa3a: Pop(1)
0xa3b: Push("hl_inc")
0xa3c: Push((float)100.0)
0xa3d: Pop(1); Push(Stack[-4] / Stack[-1]);
0xa3e: Pop(1); Push(( -Stack[-1])
0xa3f: @@ SetProperty(Stack[-2], Stack[-1])
0xa40: Pop(2)
0xa41: Push((int) 0)
0xa42: @ AddItem(Stack[-2], Stack[-4], Stack[-1])
0xa43: Pop(1)
0xa44: Stack[-3] = 0
0xa45: Push((int) 1)
0xa46: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa47: GOTO 0xa27

0xa48: Return(); Pop(14)

0xa49: PushEmpty(int, int)
0xa4a: Push("branch")
0xa4b: @ GetVariable(Stack[-1], Stack[-2])
0xa4c: Pop(1)
0xa4d: Push((int) 0)
0xa4e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa50: Stack[-3] = (int) 1
0xa51: Return(); Pop(2)

0xa52: GOTO 0xa58

0xa53: Push((int) 1)
0xa54: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa55: IF (Stack[-1] == 0) GOTO 0xa58; Pop(1)

0xa56: Stack[-3] = (int) 2
0xa57: Return(); Pop(2)

0xa58: Stack[-3] = (int) 3
0xa59: Return(); Pop(2)

0xa5a: PushEmpty(int, int, int, int)
0xa5b: Push("tr_andrei")
0xa5c: @ GetVariable(Stack[-1], Stack[-3])
0xa5d: Pop(1)
0xa5e: PushEmpty(int)
0xa5f: Call2 0x97a

0xa60: Pop(0)
0xa61: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa63: PushEmpty()
0xa64: Call2 0xa1d

0xa65: Pop(0)
0xa66: Push("tr_andrei")
0xa67: PushEmpty(int)
0xa68: Call2 0x97a

0xa69: Pop(0)
0xa6a: @ SetVariable(Stack[-2], Stack[-1])
0xa6b: Pop(2)
0xa6c: Push("mt_andrei")
0xa6d: @ GetVariable(Stack[-1], Stack[-2])
0xa6e: Pop(1)
0xa6f: Pop(0); Push((bool) Stack[-1] == 0)
0xa70: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa71: PushEmpty(int, object)
0xa72: Stack[-1] = Stack[-7]
0xa73: Push(-2, 1); TaskCall(3)
0xa74: Call2 0x15f

0xa75: Pop(-2, 1); TaskReturn
0xa76: Pop(2)
0xa77: Push("mt_andrei")
0xa78: Push((int) 1)
0xa79: @ SetVariable(Stack[-2], Stack[-1])
0xa7a: Pop(2)
0xa7b: PushEmpty(bool, int)
0xa7c: Stack[-1] = (int) 2
0xa7d: Call2 0x983

0xa7e: Pop(1)
0xa7f: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa80: Push((int) 1000)
0xa81: PushEmpty(int, object)
0xa82: Stack[-1] = Stack[-8]
0xa83: Push(-2, 1); TaskCall(1)
0xa84: Call2 0x28

0xa85: Pop(-2, 1); TaskReturn
0xa86: Pop(1)
0xa87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa88: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa89: PushEmpty(bool, object)
0xa8a: Stack[-1] = Stack[-7]
0xa8b: Call2 0x8f5

0xa8c: Pop(1)
0xa8d: Pop(1); Push((bool) Stack[-1] == 0)
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Return(); Pop(4)

0xa90: PushEmpty(object)
0xa91: Stack[-1] = Stack[-6]
0xa92: Push(-1, 1); TaskCall(0)
0xa93: Call2 0x0

0xa94: Pop(-1, 1); TaskReturn
0xa95: Pop(1)
0xa96: PushEmpty(object)
0xa97: Stack[-1] = Stack[-6]
0xa98: Call2 0x92c

0xa99: Pop(1)
0xa9a: Return(); Pop(4)

0xa9b: PushEmpty(bool, int)
0xa9c: Stack[-1] = (int) 5
0xa9d: Call2 0x983

0xa9e: Pop(1)
0xa9f: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xaa0: Push((int) 1000)
0xaa1: PushEmpty(int, object)
0xaa2: Stack[-1] = Stack[-8]
0xaa3: Push(-2, 1); TaskCall(5)
0xaa4: Call2 0x241

0xaa5: Pop(-2, 1); TaskReturn
0xaa6: Pop(1)
0xaa7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaa8: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xaa9: PushEmpty(bool, object)
0xaaa: Stack[-1] = Stack[-7]
0xaab: Call2 0x8f5

0xaac: Pop(1)
0xaad: Pop(1); Push((bool) Stack[-1] == 0)
0xaae: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaaf: Return(); Pop(4)

0xab0: PushEmpty(object)
0xab1: Stack[-1] = Stack[-6]
0xab2: Push(-1, 1); TaskCall(0)
0xab3: Call2 0x0

0xab4: Pop(-1, 1); TaskReturn
0xab5: Pop(1)
0xab6: PushEmpty(object)
0xab7: Stack[-1] = Stack[-6]
0xab8: Call2 0x92c

0xab9: Pop(1)
0xaba: Return(); Pop(4)

0xabb: PushEmpty(bool)
0xabc: Stack[-1] = (bool) 1
0xabd: PushEmpty(bool)
0xabe: Stack[-1] = (bool) 1
0xabf: PushEmpty(bool)
0xac0: Stack[-1] = (bool) 1
0xac1: PushEmpty(bool)
0xac2: Stack[-1] = (bool) 1
0xac3: PushEmpty(bool)
0xac4: Stack[-1] = (bool) 1
0xac5: PushEmpty(bool)
0xac6: Stack[-1] = (bool) 1
0xac7: PushEmpty(bool, int)
0xac8: Stack[-1] = (int) 3
0xac9: Call2 0x983

0xaca: Pop(1)
0xacb: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xacc: PushEmpty(bool, int)
0xacd: Stack[-1] = (int) 4
0xace: Call2 0x983

0xacf: Pop(1)
0xad0: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xad1: Stack[-1] = (bool) 0
0xad2: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad3: PushEmpty(bool, int)
0xad4: Stack[-1] = (int) 6
0xad5: Call2 0x983

0xad6: Pop(1)
0xad7: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad8: Stack[-1] = (bool) 0
0xad9: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xada: PushEmpty(bool, int)
0xadb: Stack[-1] = (int) 7
0xadc: Call2 0x983

0xadd: Pop(1)
0xade: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadf: Stack[-1] = (bool) 0
0xae0: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae1: PushEmpty(bool, int)
0xae2: Stack[-1] = (int) 8
0xae3: Call2 0x983

0xae4: Pop(1)
0xae5: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae6: Stack[-1] = (bool) 0
0xae7: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xae8: PushEmpty(bool, int)
0xae9: Stack[-1] = (int) 9
0xaea: Call2 0x983

0xaeb: Pop(1)
0xaec: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaed: Stack[-1] = (bool) 0
0xaee: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaef: PushEmpty(bool, int)
0xaf0: Stack[-1] = (int) 10
0xaf1: Call2 0x983

0xaf2: Pop(1)
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaf4: Stack[-1] = (bool) 0
0xaf5: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xaf6: Push((int) 1000)
0xaf7: PushEmpty(int, object)
0xaf8: Stack[-1] = Stack[-8]
0xaf9: Push(-2, 1); TaskCall(11)
0xafa: Call2 0x5fa

0xafb: Pop(-2, 1); TaskReturn
0xafc: Pop(1)
0xafd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xafe: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xaff: PushEmpty(bool, object)
0xb00: Stack[-1] = Stack[-7]
0xb01: Call2 0x8f5

0xb02: Pop(1)
0xb03: Pop(1); Push((bool) Stack[-1] == 0)
0xb04: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb05: Return(); Pop(4)

0xb06: PushEmpty(object)
0xb07: Stack[-1] = Stack[-6]
0xb08: Push(-1, 1); TaskCall(0)
0xb09: Call2 0x0

0xb0a: Pop(-1, 1); TaskReturn
0xb0b: Pop(1)
0xb0c: PushEmpty(object)
0xb0d: Stack[-1] = Stack[-6]
0xb0e: Call2 0x92c

0xb0f: Pop(1)
0xb10: Return(); Pop(4)

0xb11: PushEmpty(bool, int)
0xb12: Stack[-1] = (int) 12
0xb13: Call2 0x983

0xb14: Pop(1)
0xb15: IF (Stack[-1] == 0) GOTO 0xb1d; Pop(1)

0xb16: PushEmpty(int, object)
0xb17: Stack[-1] = Stack[-7]
0xb18: Push(-2, 1); TaskCall(7)
0xb19: Call2 0x42c

0xb1a: Pop(-2, 1); TaskReturn
0xb1b: Pop(2)
0xb1c: Return(); Pop(4)

0xb1d: PushEmpty(int, object)
0xb1e: Stack[-1] = Stack[-7]
0xb1f: Push(-2, 1); TaskCall(9)
0xb20: Call2 0x52f

0xb21: Pop(-2, 1); TaskReturn
0xb22: Pop(2)
0xb23: Return(); Pop(4)

