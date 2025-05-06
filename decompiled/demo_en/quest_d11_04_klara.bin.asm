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
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	d11q06KlaraRing
	d11q06KlaraRing is given
	d11q06KapellaRing
	d11q06
	ood11Klara2
	ood11Klara3
	ood11Klara1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x369
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe9 Vars = (int, int)
	GTASK_3 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x36d Vars = (string)
		EVENT_6 Op = 0x381 Vars = ()
		EVENT_5 Op = 0x38e Vars = ()
		EVENT_7 Op = 0x3db Vars = (int)
		EVENT_45 Op = 0x41c Vars = (bool)
		EVENT_0 Op = 0x428 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x4ac

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x5b3

0x12: Stack[-2] = Stack[-1]
0x13: Pop(1)
0x14: Call2 0x506

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-2] = Stack[-12]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x4b1

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x6da

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1])
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x6d8

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x6dc

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x6de

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1])
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x6c7

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1])
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-2] = Stack[-11]
0x45: Stack[-1] = Stack[-6]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1])
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1])
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-10]
0x55: Call2 0x4f5

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-10] = Stack[-2]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x678

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x69: PushEmpty(object, object)
0x6a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6c: Call2 0x64e

0x6d: Pop(2)
0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xd3

0x71: Pop(1)
0x72: Push((int) 514350)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 514351)
0x78: Push((int) 15575)
0x79: Push((int) 15574)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 538680)
0x7d: Push((int) 15575)
0x7e: Push((int) 40578)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0xb5

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral"
0x84: Call2 0xd3

0x85: Pop(1)
0x86: Push((int) 514514)
0x87: @@ SetMessage(Stack[-1])
0x88: Pop(1)
0x89: @@ ClearReplies()
0x8a: Pop(0)
0x8b: PushEmpty(bool)
0x8c: Stack[-1] = (bool) 0
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x654

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x660

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x99: Push((int) 534506)
0x9a: Push((int) 40595)
0x9b: Push((int) 36147)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x66c

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: Push((int) 538711)
0xa4: Push((int) 40619)
0xa5: Push((int) 40618)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: Push((int) 514515)
0xa9: Push((int) -1)
0xaa: Push((int) 15754)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: Push((int) 538691)
0xae: Push((int) -1)
0xaf: Push((int) 40594)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: GOTO 0xb5

0xb3: Return(); Pop(0)

0xb4: GOTO 0x62

0xb5: PushEmpty(bool)
0xb6: Call2 0x6e0

0xb7: Pop(0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xb9: @ lshWaitForAnimEnd()
0xba: Pop(0)
0xbb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: GOTO 0xc3

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc0: Call2 0x590

0xc1: Pop(1)
0xc2: GOTO 0xb9

0xc3: GOTO 0xd2

0xc4: Push("all")
0xc5: Push("idle")
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: @ WaitForAnimEnd()
0xc9: Pop(0)
0xca: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: GOTO 0xd2

0xcd: Push("all")
0xce: Push("idle")
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: GOTO 0xc8

0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: PushEmpty(bool)
0xd5: Call2 0x6e0

0xd6: Pop(0)
0xd7: Pop(1); Push((bool) Stack[-1] == 0)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Return(); Pop(0)

0xda: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Return(); Pop(0)

0xdd: PushEmpty(string, bool)
0xde: Stack[-2] = Stack[-3]
0xdf: Push("")
0xe0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe2: Stack[-1] = (bool) 0
0xe3: GOTO 0xe5

0xe4: Stack[-1] = (bool) 1
0xe5: Call2 0x597

0xe6: Pop(2)
0xe7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: Push((int) 1)
0xeb: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0xec: PushEmpty()
0xed: Call2 0x5ac

0xee: Pop(0)
0xef: Push((int) 36147)
0xf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x642

0xf6: Pop(2)
0xf7: Push((int) 36151)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x615

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x627

0x103: Pop(2)
0x104: Push((int) 40618)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x648

0x10b: Pop(2)
0x10c: Push((int) 15573)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x10f: PushEmpty(bool, object)
0x110: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111: Call2 0x678

0x112: Pop(1)
0x113: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x64e

0x118: Pop(2)
0x119: PushEmpty(string)
0x11a: Stack[-1] = "Neutral"
0x11b: Call2 0xd3

0x11c: Pop(1)
0x11d: Push((int) 514350)
0x11e: @@ SetMessage(Stack[-1])
0x11f: Pop(1)
0x120: @@ ClearReplies()
0x121: Pop(0)
0x122: Push((int) 514351)
0x123: Push((int) 15575)
0x124: Push((int) 15574)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Push((int) 538680)
0x128: Push((int) 15575)
0x129: Push((int) 40578)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Return(); Pop(0)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0xd3

0x130: Pop(1)
0x131: Push((int) 514514)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: PushEmpty(bool)
0x137: Stack[-1] = (bool) 0
0x138: PushEmpty(bool, object)
0x139: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Call2 0x654

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x660

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[-1] = (bool) 1
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: Push((int) 534506)
0x145: Push((int) 40595)
0x146: Push((int) 36147)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x66c

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 538711)
0x14f: Push((int) 40619)
0x150: Push((int) 40618)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Push((int) 514515)
0x154: Push((int) -1)
0x155: Push((int) 15754)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 538691)
0x159: Push((int) -1)
0x15a: Push((int) 40594)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Push((int) 40619)
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call2 0xd3

0x164: Pop(1)
0x165: Push((int) 538712)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 538714)
0x16b: Push((int) 40622)
0x16c: Push((int) 40621)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 538713)
0x170: Push((int) -1)
0x171: Push((int) 40620)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 40622)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call2 0xd3

0x17b: Pop(1)
0x17c: Push((int) 538715)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 538716)
0x182: Push((int) 40624)
0x183: Push((int) 40623)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: Push((int) 40624)
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Neutral"
0x18c: Call2 0xd3

0x18d: Pop(1)
0x18e: Push((int) 538717)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: Push((int) 538718)
0x194: Push((int) -1)
0x195: Push((int) 40625)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Push((int) 538719)
0x199: Push((int) -1)
0x19a: Push((int) 40626)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 40595)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Neutral"
0x1a3: Call2 0xd3

0x1a4: Pop(1)
0x1a5: Push((int) 538692)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: Push((int) 538693)
0x1ab: Push((int) 40616)
0x1ac: Push((int) 40596)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 538699)
0x1b0: Push((int) 40604)
0x1b1: Push((int) 40603)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 40604)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Neutral"
0x1ba: Call2 0xd3

0x1bb: Pop(1)
0x1bc: Push((int) 538700)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 538701)
0x1c2: Push((int) 40607)
0x1c3: Push((int) 40605)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Push((int) 538702)
0x1c7: Push((int) 40609)
0x1c8: Push((int) 40606)
0x1c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ca: Pop(3)
0x1cb: Return(); Pop(0)

0x1cc: Push((int) 40609)
0x1cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1cf: PushEmpty(string)
0x1d0: Stack[-1] = "Neutral"
0x1d1: Call2 0xd3

0x1d2: Pop(1)
0x1d3: Push((int) 538705)
0x1d4: @@ SetMessage(Stack[-1])
0x1d5: Pop(1)
0x1d6: @@ ClearReplies()
0x1d7: Pop(0)
0x1d8: Push((int) 538707)
0x1d9: Push((int) 40600)
0x1da: Push((int) 40612)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Push((int) 538708)
0x1de: Push((int) 40600)
0x1df: Push((int) 40613)
0x1e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e1: Pop(3)
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 40607)
0x1e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = "Neutral"
0x1e8: Call2 0xd3

0x1e9: Pop(1)
0x1ea: Push((int) 538703)
0x1eb: @@ SetMessage(Stack[-1])
0x1ec: Pop(1)
0x1ed: @@ ClearReplies()
0x1ee: Pop(0)
0x1ef: Push((int) 538704)
0x1f0: Push((int) -1)
0x1f1: Push((int) 40608)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Push((int) 538706)
0x1f5: Push((int) 40600)
0x1f6: Push((int) 40610)
0x1f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f8: Pop(3)
0x1f9: Return(); Pop(0)

0x1fa: Push((int) 40616)
0x1fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1fd: PushEmpty(string)
0x1fe: Stack[-1] = "Neutral"
0x1ff: Call2 0xd3

0x200: Pop(1)
0x201: Push((int) 538709)
0x202: @@ SetMessage(Stack[-1])
0x203: Pop(1)
0x204: @@ ClearReplies()
0x205: Pop(0)
0x206: Push((int) 538710)
0x207: Push((int) 40597)
0x208: Push((int) 40617)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 40597)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0xd3

0x212: Pop(1)
0x213: Push((int) 538694)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 538695)
0x219: Push((int) 40600)
0x21a: Push((int) 40598)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 538696)
0x21e: Push((int) 40600)
0x21f: Push((int) 40599)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: Push((int) 40600)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x226: PushEmpty(string)
0x227: Stack[-1] = "Neutral"
0x228: Call2 0xd3

0x229: Pop(1)
0x22a: Push((int) 538697)
0x22b: @@ SetMessage(Stack[-1])
0x22c: Pop(1)
0x22d: @@ ClearReplies()
0x22e: Pop(0)
0x22f: Push((int) 538698)
0x230: Push((int) 36148)
0x231: Push((int) 40602)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 36148)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Neutral"
0x23a: Call2 0xd3

0x23b: Pop(1)
0x23c: Push((int) 534507)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 534508)
0x242: Push((int) 36150)
0x243: Push((int) 36149)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 36150)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Neutral"
0x24c: Call2 0xd3

0x24d: Pop(1)
0x24e: Push((int) 534509)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 534510)
0x254: Push((int) -1)
0x255: Push((int) 36151)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Return(); Pop(0)

0x259: Push((int) 15575)
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Neutral"
0x25e: Call2 0xd3

0x25f: Pop(1)
0x260: Push((int) 514352)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 514353)
0x266: Push((int) 15577)
0x267: Push((int) 15576)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 538679)
0x26b: Push((int) 15579)
0x26c: Push((int) 40577)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Return(); Pop(0)

0x270: Push((int) 15577)
0x271: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x273: PushEmpty(string)
0x274: Stack[-1] = "Neutral"
0x275: Call2 0xd3

0x276: Pop(1)
0x277: Push((int) 514354)
0x278: @@ SetMessage(Stack[-1])
0x279: Pop(1)
0x27a: @@ ClearReplies()
0x27b: Pop(0)
0x27c: Push((int) 514355)
0x27d: Push((int) 15579)
0x27e: Push((int) 15578)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Push((int) 538681)
0x282: Push((int) 15581)
0x283: Push((int) 40581)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Return(); Pop(0)

0x287: Push((int) 15579)
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: PushEmpty(string)
0x28b: Stack[-1] = "Neutral"
0x28c: Call2 0xd3

0x28d: Pop(1)
0x28e: Push((int) 514356)
0x28f: @@ SetMessage(Stack[-1])
0x290: Pop(1)
0x291: @@ ClearReplies()
0x292: Pop(0)
0x293: Push((int) 514357)
0x294: Push((int) 15581)
0x295: Push((int) 15580)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 15581)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral"
0x29e: Call2 0xd3

0x29f: Pop(1)
0x2a0: Push((int) 514358)
0x2a1: @@ SetMessage(Stack[-1])
0x2a2: Pop(1)
0x2a3: @@ ClearReplies()
0x2a4: Pop(0)
0x2a5: Push((int) 514359)
0x2a6: Push((int) 15583)
0x2a7: Push((int) 15582)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 538682)
0x2ab: Push((int) 15587)
0x2ac: Push((int) 40583)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 15583)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Neutral"
0x2b5: Call2 0xd3

0x2b6: Pop(1)
0x2b7: Push((int) 514360)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 514361)
0x2bd: Push((int) 15585)
0x2be: Push((int) 15584)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: Push((int) 15585)
0x2c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2c5: PushEmpty(string)
0x2c6: Stack[-1] = "Neutral"
0x2c7: Call2 0xd3

0x2c8: Pop(1)
0x2c9: Push((int) 514362)
0x2ca: @@ SetMessage(Stack[-1])
0x2cb: Pop(1)
0x2cc: @@ ClearReplies()
0x2cd: Pop(0)
0x2ce: Push((int) 514363)
0x2cf: Push((int) 15587)
0x2d0: Push((int) 15586)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Return(); Pop(0)

0x2d4: Push((int) 15587)
0x2d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "Neutral"
0x2d9: Call2 0xd3

0x2da: Pop(1)
0x2db: Push((int) 514364)
0x2dc: @@ SetMessage(Stack[-1])
0x2dd: Pop(1)
0x2de: @@ ClearReplies()
0x2df: Pop(0)
0x2e0: Push((int) 514365)
0x2e1: Push((int) 15589)
0x2e2: Push((int) 15588)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Push((int) 538683)
0x2e6: Push((int) 40586)
0x2e7: Push((int) 40585)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Push((int) 539687)
0x2eb: Push((int) 41639)
0x2ec: Push((int) 41638)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 41639)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call2 0xd3

0x2f6: Pop(1)
0x2f7: Push((int) 539688)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 539689)
0x2fd: Push((int) 15589)
0x2fe: Push((int) 41640)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Push((int) 40586)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x305: PushEmpty(string)
0x306: Stack[-1] = "Neutral"
0x307: Call2 0xd3

0x308: Pop(1)
0x309: Push((int) 538684)
0x30a: @@ SetMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ ClearReplies()
0x30d: Pop(0)
0x30e: Push((int) 538686)
0x30f: Push((int) 40589)
0x310: Push((int) 40588)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 40589)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Neutral"
0x319: Call2 0xd3

0x31a: Pop(1)
0x31b: Push((int) 538687)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 538688)
0x321: Push((int) 40591)
0x322: Push((int) 40590)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 40591)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Neutral"
0x32b: Call2 0xd3

0x32c: Pop(1)
0x32d: Push((int) 538689)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 538690)
0x333: Push((int) 15589)
0x334: Push((int) 40592)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Push((int) 539690)
0x338: Push((int) -1)
0x339: Push((int) 41642)
0x33a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33b: Pop(3)
0x33c: Return(); Pop(0)

0x33d: Push((int) 15589)
0x33e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x340: PushEmpty(string)
0x341: Stack[-1] = "Neutral"
0x342: Call2 0xd3

0x343: Pop(1)
0x344: Push((int) 514366)
0x345: @@ SetMessage(Stack[-1])
0x346: Pop(1)
0x347: @@ ClearReplies()
0x348: Pop(0)
0x349: Push((int) 514367)
0x34a: Push((int) -1)
0x34b: Push((int) 15590)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Push((int) 538685)
0x34f: Push((int) -1)
0x350: Push((int) 40587)
0x351: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(3)
0x353: Return(); Pop(0)

0x354: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x355: PushEmpty(bool)
0x356: Call2 0x6e0

0x357: Pop(0)
0x358: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x359: @ lshStopAnimation()
0x35a: Pop(0)
0x35b: GOTO 0x35e

0x35c: @ StopAnimation()
0x35d: Pop(0)
0x35e: Return(); Pop(0)

0x35f: GOTO 0xea

0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: PushEmpty(int, object)
0x363: Stack[-1] = Stack[-3]
0x364: Push(-2, 1); TaskCall(1)
0x365: Call2 0xd

0x366: Pop(-2, 1); TaskReturn
0x367: Pop(2)
0x368: Return(); Pop(0)

0x369: PushEmpty()
0x36a: Call2 0x392

0x36b: Pop(0)
0x36c: Return(); Pop(0)

0x36d: PushEmpty(bool, bool)
0x36e: Push("cleanup")
0x36f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x371: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x372: @ IsLoaded(Stack[-1])
0x373: Pop(0)
0x374: Pop(0); Push((bool) Stack[-1] == 0)
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: PushEmpty(object)
0x377: Call2 0x5b3

0x378: Pop(0)
0x379: @ RemoveActor(Stack[-1])
0x37a: Pop(1)
0x37b: GOTO 0x380

0x37c: Push("restore")
0x37d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x380: Return(); Pop(2)

0x381: Push( Stack[1 + Tasks[-1].StackPointer] )
0x382: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x383: PushEmpty(object)
0x384: Call2 0x5b3

0x385: Pop(0)
0x386: @ RemoveActor(Stack[-1])
0x387: Pop(1)
0x388: @ Hold()
0x389: Pop(0)
0x38a: PushEmpty()
0x38b: Call2 0x400

0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: Call2 0x40f

0x390: Pop(0)
0x391: Return(); Pop(0)

0x392: PushEmpty(bool)
0x393: Call2 0x4ac

0x394: Pop(0)
0x395: Pop(1); Push((bool) Stack[-1] == 0)
0x396: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x397: PushEmpty()
0x398: Push(-0, 0); TaskCall(0)
0x399: Call2 0x0

0x39a: Pop(-0, 0); TaskReturn
0x39b: Pop(0)
0x39c: PushEmpty()
0x39d: Call2 0x38e

0x39e: Pop(0)
0x39f: @ GetDirection(Stack[-0])
0x3a0: Pop(0)
0x3a1: PushEmpty()
0x3a2: Call2 0x445

0x3a3: Pop(0)
0x3a4: GOTO 0x3a1

0x3a5: Return(); Pop(0)

0x3a6: PushEmpty(object, object)
0x3a7: Push("player")
0x3a8: @ FindActor(Stack[-2], Stack[-1])
0x3a9: Pop(1)
0x3aa: Pop(0); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Return(); Pop(2)

0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[-3]
0x3af: Call2 0x4a3

0x3b0: Pop(2)
0x3b1: Return(); Pop(2)

0x3b2: Stack[-1] = 0
0x3b3: Push(CvectorIndex(Stack[-0], 0))
0x3b4: Push(CvectorIndex(Stack[-0], 2))
0x3b5: @ RotateAsync(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty(object, bool, object, bool)
0x3b9: Push("player")
0x3ba: @ FindActor(Stack[-3], Stack[-1])
0x3bb: Pop(1)
0x3bc: Pop(0); Push((bool) Stack[-2] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-5] = (bool) 0
0x3bf: Return(); Pop(4)

0x3c0: PushEmpty(float, object)
0x3c1: Stack[-1] = Stack[-4]
0x3c2: Call2 0x491

0x3c3: Pop(1)
0x3c4: Push((float)90000.0)
0x3c5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-5] = (bool) 0
0x3c8: Return(); Pop(4)

0x3c9: @ CanSee(Stack[-1], Stack[-2])
0x3ca: Pop(0)
0x3cb: Stack[-5] = Stack[-1]
0x3cc: Return(); Pop(4)

0x3cd: Stack[-2] = 0
0x3ce: PushEmpty(float, float)
0x3cf: Push((int) 8)
0x3d0: Push((int) 16)
0x3d1: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: Push((int) 10)
0x3d4: @ SetTimer(Stack[-1], Stack[-2])
0x3d5: Pop(1)
0x3d6: Return(); Pop(2)

0x3d7: Push((int) 10)
0x3d8: @ KillTimer(Stack[-1])
0x3d9: Pop(1)
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: Push((int) 10)
0x3dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3df: PushEmpty()
0x3e0: Call2 0x3d7

0x3e1: Pop(0)
0x3e2: PushEmpty(bool)
0x3e3: Stack[-1] = (bool) 0
0x3e4: PushEmpty(bool)
0x3e5: Call2 0x4ac

0x3e6: Pop(0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e8: PushEmpty(bool)
0x3e9: Call2 0x3b8

0x3ea: Pop(0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: Stack[-1] = (bool) 1
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ee: PushEmpty()
0x3ef: Call2 0x3a6

0x3f0: Pop(0)
0x3f1: PushEmpty(bool, object)
0x3f2: PushEmpty(object)
0x3f3: Call2 0x5b3

0x3f4: Stack[-2] = Stack[-1]
0x3f5: Pop(1)
0x3f6: Call2 0x540

0x3f7: Pop(2)
0x3f8: GOTO 0x3ff

0x3f9: PushEmpty()
0x3fa: Call2 0x3b3

0x3fb: Pop(0)
0x3fc: PushEmpty()
0x3fd: Call2 0x3ce

0x3fe: Pop(0)
0x3ff: Return(); Pop(0)

0x400: PushEmpty()
0x401: Call2 0x48c

0x402: Pop(0)
0x403: PushEmpty()
0x404: Call2 0x3d7

0x405: Pop(0)
0x406: @ lshStopSpeech()
0x407: Pop(0)
0x408: @ lshStopAnimation()
0x409: Pop(0)
0x40a: @ StopAsync()
0x40b: Pop(0)
0x40c: @ Hold()
0x40d: Pop(0)
0x40e: Return(); Pop(0)

0x40f: @ StopGroup0()
0x410: Pop(0)
0x411: PushEmpty()
0x412: Call2 0x3d7

0x413: Pop(0)
0x414: PushEmpty(string)
0x415: Stack[-1] = "Neutral"
0x416: Call2 0x590

0x417: Pop(1)
0x418: PushEmpty()
0x419: Call2 0x3ce

0x41a: Pop(0)
0x41b: Return(); Pop(0)

0x41c: PushEmpty()
0x41d: Push(Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41f: PushEmpty()
0x420: Call2 0x3ce

0x421: Pop(0)
0x422: GOTO 0x427

0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral"
0x425: Call2 0x590

0x426: Pop(1)
0x427: Return(); Pop(0)

0x428: PushEmpty(bool, bool)
0x429: @ IsOverrideActive(Stack[-1])
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-1] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x42d: EventDisable(0)
0x42e: PushEmpty()
0x42f: Call2 0x48c

0x430: Pop(0)
0x431: PushEmpty(bool, object)
0x432: Stack[-1] = Stack[-5]
0x433: Call2 0x4a3

0x434: Pop(2)
0x435: EventEnable(0)
0x436: PushEmpty(object)
0x437: Stack[-1] = Stack[-4]
0x438: Call2 0x361

0x439: Pop(1)
0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x590

0x43d: Pop(1)
0x43e: PushEmpty()
0x43f: Call2 0x3d7

0x440: Pop(0)
0x441: PushEmpty()
0x442: Call2 0x3ce

0x443: Pop(0)
0x444: Return(); Pop(2)

0x445: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x446: @ WaitForAnimEnd()
0x447: Pop(0)
0x448: PushEmpty(bool)
0x449: Call2 0x4ac

0x44a: Pop(0)
0x44b: Pop(1); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Return(); Pop(12)

0x44e: PushEmpty(int)
0x44f: Call2 0x604

0x450: Stack[-7] = Stack[-1]
0x451: Pop(1)
0x452: Stack[-5] = (int) 0
0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 0
0x455: Push((int) 5)
0x456: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x458: PushEmpty(bool)
0x459: Call2 0x4ac

0x45a: Pop(0)
0x45b: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45c: Stack[-1] = (bool) 1
0x45d: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x45e: Pop(0); Push((bool) Stack[-6] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x460: Push((int) 3)
0x461: @ Sleep(Stack[-1], Stack[-5])
0x462: Pop(1)
0x463: Pop(0); Push((bool) Stack[-4] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: GOTO 0x487

0x466: GOTO 0x47c

0x467: @ irand(Stack[-3], Stack[-6])
0x468: Pop(0)
0x469: Push((int) 5)
0x46a: @ irand(Stack[-3], Stack[-1])
0x46b: Pop(1)
0x46c: Push((int) 0)
0x46d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: Stack[-3] = (int) 0
0x470: Push("all")
0x471: PushEmpty(string, int)
0x472: Stack[-1] = Stack[-6]
0x473: Call2 0x5fd

0x474: Pop(1)
0x475: @ PlayAnimation(Stack[-2], Stack[-1])
0x476: Pop(2)
0x477: @ WaitForAnimEnd(Stack[-1])
0x478: Pop(0)
0x479: Pop(0); Push((bool) Stack[-1] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: GOTO 0x487

0x47c: PushEmpty(bool)
0x47d: Call2 0x48a

0x47e: Pop(0)
0x47f: Pop(1); Push((bool) Stack[-1] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x481: GOTO 0x487

0x482: @ ResetAAS()
0x483: Pop(0)
0x484: Push((int) 1)
0x485: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x486: GOTO 0x453

0x487: @ ResetAAS()
0x488: Pop(0)
0x489: Return(); Pop(12)

0x48a: Stack[-1] = (bool) 1
0x48b: Return(); Pop(0)

0x48c: @ StopAnimation()
0x48d: Pop(0)
0x48e: @ StopGroup0()
0x48f: Pop(0)
0x490: Return(); Pop(0)

0x491: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x492: @ GetPosition(Stack[-3])
0x493: Pop(0)
0x494: @@ GetPosition(Stack[-2])
0x495: Pop(0)
0x496: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x497: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x498: Return(); Pop(6)

0x499: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x49a: @ GetPosition(Stack[-3])
0x49b: Pop(0)
0x49c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x49d: Push(CvectorIndex(Stack[-2], 0))
0x49e: Push(CvectorIndex(Stack[-3], 2))
0x49f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4a0: Pop(2)
0x4a1: Stack[-8] = Stack[-1]
0x4a2: Return(); Pop(6)

0x4a3: PushEmpty(cvector, cvector)
0x4a4: @@ GetPosition(Stack[-1])
0x4a5: Pop(0)
0x4a6: PushEmpty(bool, cvector)
0x4a7: Stack[-1] = Stack[-3]
0x4a8: Call2 0x499

0x4a9: Stack[-6] = Stack[-2]
0x4aa: Pop(2)
0x4ab: Return(); Pop(2)

0x4ac: PushEmpty(bool, bool)
0x4ad: @ IsLoaded(Stack[-1])
0x4ae: Pop(0)
0x4af: Stack[-3] = Stack[-1]
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4b2: @@ GetPosition(Stack[-8])
0x4b3: Pop(0)
0x4b4: @@ GetEyesHeight(Stack[-9])
0x4b5: Pop(0)
0x4b6: Push(CvectorIndex(Stack[-8], 1))
0x4b7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4b8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4b9: @ GetPosition(Stack[-7])
0x4ba: Pop(0)
0x4bb: @ GetEyesHeight(Stack[-9])
0x4bc: Pop(0)
0x4bd: Push(CvectorIndex(Stack[-7], 1))
0x4be: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4bf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4c0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4c1: Push(CvectorIndex(Stack[-6], 1))
0x4c2: Stack[-1] = (int) 0
0x4c3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4c4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4c5: Pop(1); Push(Sqrt(Stack[-1]))
0x4c6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4c7: Stack[-5] = -Stack[-6]; Pop(0);
0x4c8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4c9: PushEmpty(cvector, cvector)
0x4ca: Push(CVector(0.0, 1.0, 0.0))
0x4cb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4cc: Call2 0x5b9

0x4cd: Pop(1)
0x4ce: Push((int) 25)
0x4cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d1: Push(CVector(0.0, 10.0, 0.0))
0x4d2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4d3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4d4: @ IsOverrideActive(Stack[-2])
0x4d5: Pop(0)
0x4d6: Push(Stack[-2])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-21] = (bool) 0
0x4d9: Return(); Pop(18)

0x4da: @ StopWorld()
0x4db: Pop(0)
0x4dc: @ CameraTransit(Stack[-3], Stack[-5])
0x4dd: Pop(0)
0x4de: Push(CvectorIndex(Stack[-4], 0))
0x4df: Push(CvectorIndex(Stack[-5], 2))
0x4e0: @ Rotate(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: PushEmpty(bool)
0x4e3: Call2 0x6e0

0x4e4: Pop(0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e6: GOTO 0x4ef

0x4e7: Push("head")
0x4e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4e9: Pop(1)
0x4ea: Push(Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ec: Push("head")
0x4ed: @ LookAsyncCamera(Stack[-1])
0x4ee: Pop(1)
0x4ef: @ CameraWaitForPlayFinish()
0x4f0: Pop(0)
0x4f1: @ ResumeWorld()
0x4f2: Pop(0)
0x4f3: Stack[-21] = (bool) 1
0x4f4: Return(); Pop(18)

0x4f5: PushEmpty(bool, bool)
0x4f6: @ CameraSwitchToNormal()
0x4f7: Pop(0)
0x4f8: PushEmpty(bool)
0x4f9: Call2 0x6e0

0x4fa: Pop(0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: GOTO 0x505

0x4fd: Push("head")
0x4fe: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ff: Pop(1)
0x500: Push(Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x502: Push("head")
0x503: @ UnlookAsync(Stack[-1])
0x504: Pop(1)
0x505: Return(); Pop(2)

0x506: PushEmpty(int, int, int, int)
0x507: Push("voice_common")
0x508: @ GetVariable(Stack[-1], Stack[-3])
0x509: Pop(1)
0x50a: Push(Stack[-2])
0x50b: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x50c: PushEmpty(bool, object)
0x50d: Stack[-1] = Stack[-7]
0x50e: Call2 0x540

0x50f: Pop(1)
0x510: Pop(1); Push((bool) Stack[-1] == 0)
0x511: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[-7]
0x514: Call2 0x565

0x515: Pop(1)
0x516: Pop(1); Push((bool) Stack[-1] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x518: Stack[-6] = (bool) 0
0x519: Return(); Pop(4)

0x51a: Push((int) 2)
0x51b: @ irand(Stack[-2], Stack[-1])
0x51c: Pop(1)
0x51d: Push(Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x51f: Push("voice_common")
0x520: Push((int) 1)
0x521: Pop(1); Push(Stack[-4] + Stack[-1]);
0x522: Push((int) 3)
0x523: Pop(2); Push(Stack[-2] % Stack[-1]);
0x524: @ SetVariable(Stack[-2], Stack[-1])
0x525: Pop(2)
0x526: GOTO 0x52b

0x527: Push("voice_common")
0x528: Push((int) 0)
0x529: @ SetVariable(Stack[-2], Stack[-1])
0x52a: Pop(2)
0x52b: GOTO 0x53e

0x52c: PushEmpty(bool, object)
0x52d: Stack[-1] = Stack[-7]
0x52e: Call2 0x565

0x52f: Pop(1)
0x530: Pop(1); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x532: PushEmpty(bool, object)
0x533: Stack[-1] = Stack[-7]
0x534: Call2 0x540

0x535: Pop(1)
0x536: Pop(1); Push((bool) Stack[-1] == 0)
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-6] = (bool) 0
0x539: Return(); Pop(4)

0x53a: Push("voice_common")
0x53b: Push((int) 1)
0x53c: @ SetVariable(Stack[-2], Stack[-1])
0x53d: Pop(2)
0x53e: Stack[-6] = (bool) 1
0x53f: Return(); Pop(4)

0x540: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x541: Stack[-5] = "c"
0x542: Stack[-4] = (int) 0
0x543: Push((int) 1)
0x544: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x545: Push((int) 1)
0x546: Pop(1); Push(Stack[-5] + Stack[-1]);
0x547: Pop(1); Push(Stack[-6] + Stack[-1]);
0x548: @@ HasProperty(Stack[-1], Stack[-4])
0x549: Pop(1)
0x54a: Pop(0); Push((bool) Stack[-3] == 0)
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: GOTO 0x550

0x54d: Push((int) 1)
0x54e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x54f: GOTO 0x543

0x550: Pop(0); Push((bool) Stack[-4] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x552: Stack[-12] = (bool) 0
0x553: Return(); Pop(10)

0x554: Stack[-2] = (int) 0
0x555: Push((int) 1)
0x556: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: @ irand(Stack[-2], Stack[-4])
0x559: Pop(0)
0x55a: Push((int) 1)
0x55b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x55c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x55d: @@ GetProperty(Stack[-1], Stack[-2])
0x55e: Pop(1)
0x55f: PushEmpty(bool, string)
0x560: Stack[-1] = Stack[-3]
0x561: Call2 0x59d

0x562: Stack[-14] = Stack[-2]
0x563: Pop(2)
0x564: Return(); Pop(10)

0x565: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x566: Push("d")
0x567: PushEmpty(int)
0x568: Call2 0x5f4

0x569: Pop(0)
0x56a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56b: Push("m")
0x56c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x56d: Stack[-4] = (int) 0
0x56e: Push((int) 1)
0x56f: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x570: Push((int) 1)
0x571: Pop(1); Push(Stack[-5] + Stack[-1]);
0x572: Pop(1); Push(Stack[-6] + Stack[-1]);
0x573: @@ HasProperty(Stack[-1], Stack[-4])
0x574: Pop(1)
0x575: Pop(0); Push((bool) Stack[-3] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x577: GOTO 0x57b

0x578: Push((int) 1)
0x579: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x57a: GOTO 0x56e

0x57b: Pop(0); Push((bool) Stack[-4] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57d: Stack[-12] = (bool) 0
0x57e: Return(); Pop(10)

0x57f: Stack[-2] = (int) 0
0x580: Push((int) 1)
0x581: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: @ irand(Stack[-2], Stack[-4])
0x584: Pop(0)
0x585: Push((int) 1)
0x586: Pop(1); Push(Stack[-3] + Stack[-1]);
0x587: Pop(1); Push(Stack[-6] + Stack[-1]);
0x588: @@ GetProperty(Stack[-1], Stack[-2])
0x589: Pop(1)
0x58a: PushEmpty(bool, string)
0x58b: Stack[-1] = Stack[-3]
0x58c: Call2 0x59d

0x58d: Stack[-14] = Stack[-2]
0x58e: Pop(2)
0x58f: Return(); Pop(10)

0x590: PushEmpty(float, float, float, float)
0x591: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x592: Pop(0)
0x593: Push((bool) 0)
0x594: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x595: Pop(1)
0x596: Return(); Pop(4)

0x597: PushEmpty(float, float, float, float)
0x598: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x599: Pop(0)
0x59a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x59b: Pop(0)
0x59c: Return(); Pop(4)

0x59d: PushEmpty(bool, bool)
0x59e: PushEmpty(bool)
0x59f: Call2 0x6e0

0x5a0: Pop(0)
0x5a1: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a2: @ lshHasSpeech(Stack[-1], Stack[-3])
0x5a3: Pop(0)
0x5a4: Push(Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a6: @ lshPlaySpeech(Stack[-3])
0x5a7: Pop(0)
0x5a8: Stack[-4] = (bool) 1
0x5a9: Return(); Pop(2)

0x5aa: Stack[-4] = (bool) 0
0x5ab: Return(); Pop(2)

0x5ac: PushEmpty(bool)
0x5ad: Call2 0x6e0

0x5ae: Pop(0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b0: @ lshStopSpeech()
0x5b1: Pop(0)
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty(object, object)
0x5b4: @ self(Stack[-1])
0x5b5: Pop(0)
0x5b6: Stack[-3] = Stack[-1]
0x5b7: Return(); Pop(2)

0x5b8: Stack[-1] = 0
0x5b9: PushEmpty(float, float)
0x5ba: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5bc: Push((float)0.0)
0x5bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c0: Return(); Pop(2)

0x5c1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c2: Return(); Pop(2)

0x5c3: PushEmpty(int, int)
0x5c4: @ GetVariable(Stack[-3], Stack[-1])
0x5c5: Pop(0)
0x5c6: Stack[-4] = Stack[-1]
0x5c7: Return(); Pop(2)

0x5c8: PushEmpty(object, object)
0x5c9: @ CreateIntVector(Stack[-1])
0x5ca: Pop(0)
0x5cb: @@ add(Stack[-4])
0x5cc: Pop(0)
0x5cd: @@ add(Stack[-3])
0x5ce: Pop(0)
0x5cf: Push((int) 3)
0x5d0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5d1: Pop(1)
0x5d2: Return(); Pop(2)

0x5d3: Stack[-1] = 0
0x5d4: PushEmpty(int, int, bool, int, int, bool)
0x5d5: @@ GetItemID(Stack[-3])
0x5d6: Pop(0)
0x5d7: Push("Category")
0x5d8: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5d9: Pop(1)
0x5da: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x5db: Pop(0)
0x5dc: Pop(0); Push((bool) Stack[-1] == 0)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5de: @@ DropItems(Stack[-8], Stack[-7])
0x5df: Pop(0)
0x5e0: GOTO 0x5e6

0x5e1: PushEmpty(int, int)
0x5e2: Stack[-2] = Stack[-5]
0x5e3: Stack[-1] = Stack[-9]
0x5e4: Call2 0x5c8

0x5e5: Pop(2)
0x5e6: Return(); Pop(6)

0x5e7: PushEmpty(object, object)
0x5e8: @ CreateInvItem(Stack[-1])
0x5e9: Pop(0)
0x5ea: @@ SetItemName(Stack[-4])
0x5eb: Pop(0)
0x5ec: PushEmpty(object, object, int)
0x5ed: Stack[-3] = Stack[-8]
0x5ee: Stack[-2] = Stack[-4]
0x5ef: Stack[-1] = Stack[-6]
0x5f0: Call2 0x5d4

0x5f1: Pop(3)
0x5f2: Return(); Pop(2)

0x5f3: Stack[-1] = 0
0x5f4: PushEmpty(float, float)
0x5f5: @ GetGameTime(Stack[-1])
0x5f6: Pop(0)
0x5f7: Push((int) 1)
0x5f8: PushEmpty(int)
0x5f9: Push((int) 24)
0x5fa: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5fb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5fc: Return(); Pop(2)

0x5fd: PushEmpty(string, string)
0x5fe: Stack[-1] = "idle"
0x5ff: Push(Stack[-3])
0x600: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x601: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x602: Stack[-4] = Stack[-1]
0x603: Return(); Pop(2)

0x604: PushEmpty(int, bool, int, bool)
0x605: Stack[-2] = (int) 0
0x606: Push("all")
0x607: PushEmpty(string, int)
0x608: Stack[-1] = Stack[-5]
0x609: Call2 0x5fd

0x60a: Pop(1)
0x60b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60c: Pop(2)
0x60d: Pop(0); Push((bool) Stack[-1] == 0)
0x60e: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60f: GOTO 0x613

0x610: Push((int) 1)
0x611: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x612: GOTO 0x606

0x613: Stack[-5] = Stack[-2]
0x614: Return(); Pop(4)

0x615: PushEmpty()
0x616: Push("d11q06KlaraRing")
0x617: Push((int) 1)
0x618: @ SetVariable(Stack[-2], Stack[-1])
0x619: Pop(2)
0x61a: PushEmpty()
0x61b: Call2 0x691

0x61c: Pop(0)
0x61d: Push("d11q06KlaraRing is given")
0x61e: @ Trace(Stack[-1])
0x61f: Pop(1)
0x620: PushEmpty(object, string, int)
0x621: Stack[-3] = Stack[-5]
0x622: Stack[-2] = "d11q06KlaraRing"
0x623: Stack[-1] = (int) 1
0x624: Call2 0x5e7

0x625: Pop(3)
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: PushEmpty(bool)
0x629: Stack[-1] = (bool) 0
0x62a: PushEmpty(int, string)
0x62b: Stack[-1] = "d11q06KapellaRing"
0x62c: Call2 0x5c3

0x62d: Pop(1)
0x62e: Push((int) 0)
0x62f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x631: PushEmpty(int, string)
0x632: Stack[-1] = "d11q06KlaraRing"
0x633: Call2 0x5c3

0x634: Pop(1)
0x635: Push((int) 0)
0x636: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x638: Stack[-1] = (bool) 1
0x639: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63a: Push("d11q06")
0x63b: Push((int) 2)
0x63c: @ SetVariable(Stack[-2], Stack[-1])
0x63d: Pop(2)
0x63e: PushEmpty()
0x63f: Call2 0x684

0x640: Pop(0)
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: Push("ood11Klara2")
0x644: Push((int) 1)
0x645: @ SetVariable(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Return(); Pop(0)

0x648: PushEmpty()
0x649: Push("ood11Klara3")
0x64a: Push((int) 1)
0x64b: @ SetVariable(Stack[-2], Stack[-1])
0x64c: Pop(2)
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: Push("ood11Klara1")
0x650: Push((int) 1)
0x651: @ SetVariable(Stack[-2], Stack[-1])
0x652: Pop(2)
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: PushEmpty(int, string)
0x656: Stack[-1] = "d11q06"
0x657: Call2 0x5c3

0x658: Pop(1)
0x659: Push((int) 1)
0x65a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65c: Stack[-2] = (bool) 1
0x65d: Return(); Pop(0)

0x65e: Stack[-2] = (bool) 0
0x65f: Return(); Pop(0)

0x660: PushEmpty()
0x661: PushEmpty(int, string)
0x662: Stack[-1] = "ood11Klara2"
0x663: Call2 0x5c3

0x664: Pop(1)
0x665: Push((int) 0)
0x666: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-2] = (bool) 1
0x669: Return(); Pop(0)

0x66a: Stack[-2] = (bool) 0
0x66b: Return(); Pop(0)

0x66c: PushEmpty()
0x66d: PushEmpty(int, string)
0x66e: Stack[-1] = "ood11Klara3"
0x66f: Call2 0x5c3

0x670: Pop(1)
0x671: Push((int) 0)
0x672: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-2] = (bool) 1
0x675: Return(); Pop(0)

0x676: Stack[-2] = (bool) 0
0x677: Return(); Pop(0)

0x678: PushEmpty()
0x679: PushEmpty(int, string)
0x67a: Stack[-1] = "ood11Klara1"
0x67b: Call2 0x5c3

0x67c: Pop(1)
0x67d: Push((int) 0)
0x67e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-2] = (bool) 1
0x681: Return(); Pop(0)

0x682: Stack[-2] = (bool) 0
0x683: Return(); Pop(0)

0x684: PushEmpty(object, object)
0x685: Push((int) 690)
0x686: Push((int) 2)
0x687: Push((int) 534538)
0x688: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x689: Pop(3)
0x68a: PushEmpty(bool, object, int)
0x68b: Stack[-2] = Stack[-4]
0x68c: Stack[-1] = (int) 686
0x68d: Call2 0x6ab

0x68e: Pop(3)
0x68f: Return(); Pop(2)

0x690: Stack[-1] = 0
0x691: PushEmpty(object, object)
0x692: Push((int) 689)
0x693: Push((int) 2)
0x694: Push((int) 534537)
0x695: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: PushEmpty(bool, object, int)
0x698: Stack[-2] = Stack[-4]
0x699: Stack[-1] = (int) 686
0x69a: Call2 0x6ab

0x69b: Pop(3)
0x69c: Return(); Pop(2)

0x69d: Stack[-1] = 0
0x69e: PushEmpty(object, object)
0x69f: @ GetDiaryRoot(Stack[-1])
0x6a0: Pop(0)
0x6a1: Pop(0); Push((bool) Stack[-1] == 0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a3: Push("Can't retrieve diary root")
0x6a4: @ Trace(Stack[-1])
0x6a5: Pop(1)
0x6a6: Stack[-3] = (bool) 0
0x6a7: Return(); Pop(2)

0x6a8: Stack[-3] = Stack[-1]
0x6a9: Return(); Pop(2)

0x6aa: Stack[-1] = 0
0x6ab: PushEmpty(object, object, int, object, object, int)
0x6ac: PushEmpty(object)
0x6ad: Call2 0x69e

0x6ae: Stack[-4] = Stack[-1]
0x6af: Pop(1)
0x6b0: @@ Find(Stack[-7], Stack[-2])
0x6b1: Pop(0)
0x6b2: Pop(0); Push((bool) Stack[-2] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b4: Push("Can't find diary parent with id: ")
0x6b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6b6: @ Trace(Stack[-1])
0x6b7: Pop(1)
0x6b8: Stack[-9] = (bool) 0
0x6b9: Return(); Pop(6)

0x6ba: @@ AddChild(Stack[-8])
0x6bb: Pop(0)
0x6bc: Push((int) 7)
0x6bd: @ SendWorldWndMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ GetCategory(Stack[-1])
0x6c0: Pop(0)
0x6c1: @ SetDiarySection(Stack[-1])
0x6c2: Pop(0)
0x6c3: Stack[-9] = (bool) 0
0x6c4: Return(); Pop(6)

0x6c5: Stack[-2] = 0
0x6c6: Stack[-3] = 0
0x6c7: PushEmpty(int, int)
0x6c8: Push("branch")
0x6c9: @ GetVariable(Stack[-1], Stack[-2])
0x6ca: Pop(1)
0x6cb: Push((int) 0)
0x6cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6ce: Stack[-3] = (int) 1
0x6cf: Return(); Pop(2)

0x6d0: GOTO 0x6d6

0x6d1: Push((int) 1)
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: Stack[-3] = (int) 2
0x6d5: Return(); Pop(2)

0x6d6: Stack[-3] = (int) 3
0x6d7: Return(); Pop(2)

0x6d8: Stack[-1] = (int) 515540
0x6d9: Return(); Pop(0)

0x6da: Stack[-1] = (int) 502865
0x6db: Return(); Pop(0)

0x6dc: Stack[-1] = "ui/NPC_Klara.png"
0x6dd: Return(); Pop(0)

0x6de: Stack[-1] = "ui/NPC_Klara_b.png"
0x6df: Return(); Pop(0)

0x6e0: Stack[-1] = (bool) 1
0x6e1: Return(); Pop(0)

