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
	Autizm
	Disturbance
	Pain
	Welldie
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png
	playsound
	giveitem
	ood2Laska1
	ood11Laska1
	bandage is given
	bandage
	tourniquet is given
	tourniquet
	powder is given
	powder
	ood6Laska1
	d6q01
	d6q01LaskaGotoAlbinos
	pt_d6q03_albinos
	AddMark
	quest_d6_01
	albinos_klara
	eva_klara
	KnowLaska
	ood3Laska1
	Knife is given
	Knife
	durability
	d6q03AlbinosKilled
	d11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	mt_laska

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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x95a
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a9 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2be Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4c5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x605 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7c7 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x930 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x9a3 Vars = (int)
		EVENT_6 Op = 0x9c9 Vars = ()
		EVENT_5 Op = 0x9d8 Vars = ()
		EVENT_45 Op = 0x9e5 Vars = (bool)
		EVENT_0 Op = 0x9f1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xa9c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xc63

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xc61

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xc65

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xc67

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xd8e

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0xbb0

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xaf1

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0xae0

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535284)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535285)
0x61: Push((int) 36962)
0x62: Push((int) 36961)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535292)
0x66: Push((int) -1)
0x67: Push((int) 36968)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535293)
0x6b: Push((int) -1)
0x6c: Push((int) 36969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xc69

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xb7b

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0xc69

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0xb8b

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xba9

0xab: Pop(0)
0xac: Push((int) 36960)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535284)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535285)
0xb9: Push((int) 36962)
0xba: Push((int) 36961)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535292)
0xbe: Push((int) -1)
0xbf: Push((int) 36968)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535293)
0xc3: Push((int) -1)
0xc4: Push((int) 36969)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36962)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535286)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535287)
0xd5: Push((int) 36964)
0xd6: Push((int) 36963)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535291)
0xda: Push((int) -1)
0xdb: Push((int) 36967)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36964)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535288)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535289)
0xec: Push((int) -1)
0xed: Push((int) 36965)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535290)
0xf1: Push((int) -1)
0xf2: Push((int) 36966)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0xc69

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0xa9c

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0xc63

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0xc61

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0xc65

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0xc67

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0xd8e

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0xbb0

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0xaf1

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0xae0

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xcd2

0x15e: Pop(2)
0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x193

0x162: Pop(1)
0x163: Push((int) 500370)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 500371)
0x169: Push((int) 432)
0x16a: Push((int) 430)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 500372)
0x16e: Push((int) 437)
0x16f: Push((int) 431)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: GOTO 0x175

0x173: Return(); Pop(0)

0x174: GOTO 0x158

0x175: PushEmpty(bool)
0x176: Call2 0xc69

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x179: @ lshWaitForAnimEnd()
0x17a: Pop(0)
0x17b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: GOTO 0x183

0x17e: PushEmpty(string)
0x17f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x180: Call2 0xb7b

0x181: Pop(1)
0x182: GOTO 0x179

0x183: GOTO 0x192

0x184: Push("all")
0x185: Push("idle")
0x186: @ PlayAnimation(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: @ WaitForAnimEnd()
0x189: Pop(0)
0x18a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x192

0x18d: Push("all")
0x18e: Push("idle")
0x18f: @ PlayAnimation(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: GOTO 0x188

0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: PushEmpty(bool)
0x195: Call2 0xc69

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(0)

0x19a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Return(); Pop(0)

0x19d: PushEmpty(string, bool)
0x19e: Stack[-2] = Stack[-3]
0x19f: Push("")
0x1a0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a2: Stack[-1] = (bool) 0
0x1a3: GOTO 0x1a5

0x1a4: Stack[-1] = (bool) 1
0x1a5: Call2 0xb8b

0x1a6: Pop(2)
0x1a7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a8: Return(); Pop(0)

0x1a9: PushEmpty()
0x1aa: Push((int) 1)
0x1ab: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x1ac: PushEmpty()
0x1ad: Call2 0xba9

0x1ae: Pop(0)
0x1af: Push((int) 429)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0xcd2

0x1b6: Pop(2)
0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call2 0x193

0x1ba: Pop(1)
0x1bb: Push((int) 500370)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 500371)
0x1c1: Push((int) 432)
0x1c2: Push((int) 430)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 500372)
0x1c6: Push((int) 437)
0x1c7: Push((int) 431)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 437)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0x193

0x1d1: Pop(1)
0x1d2: Push((int) 500377)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 500378)
0x1d8: Push((int) 432)
0x1d9: Push((int) 438)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 432)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Neutral"
0x1e2: Call2 0x193

0x1e3: Pop(1)
0x1e4: Push((int) 500373)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 500374)
0x1ea: Push((int) 435)
0x1eb: Push((int) 433)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Push((int) 500375)
0x1ef: Push((int) 435)
0x1f0: Push((int) 434)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 435)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call2 0x193

0x1fa: Pop(1)
0x1fb: Push((int) 500376)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 500381)
0x201: Push((int) -1)
0x202: Push((int) 442)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Push((int) 500379)
0x206: Push((int) -1)
0x207: Push((int) 440)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x20c: PushEmpty(bool)
0x20d: Call2 0xc69

0x20e: Pop(0)
0x20f: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x210: @ lshStopAnimation()
0x211: Pop(0)
0x212: GOTO 0x215

0x213: @ StopAnimation()
0x214: Pop(0)
0x215: Return(); Pop(0)

0x216: GOTO 0x1aa

0x217: Return(); Pop(0)

0x218: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x219: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x21a: PushEmpty(bool, object, float)
0x21b: Stack[-2] = Stack[-12]
0x21c: Stack[-1] = (float) 70.0
0x21d: Call2 0xa9c

0x21e: Pop(2)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-10] = (int) -2
0x222: Return(); Pop(8)

0x223: @ CreateDialog(Stack[-4])
0x224: Pop(0)
0x225: PushEmpty(int)
0x226: Call2 0xc63

0x227: Pop(0)
0x228: @@ SetNPCName(Stack[-1])
0x229: Pop(1)
0x22a: PushEmpty(int)
0x22b: Call2 0xc61

0x22c: Pop(0)
0x22d: @@ SetNPCDescription(Stack[-1])
0x22e: Pop(1)
0x22f: PushEmpty(string)
0x230: Call2 0xc65

0x231: Pop(0)
0x232: @@ SetPhoto(Stack[-1])
0x233: Pop(1)
0x234: PushEmpty(string)
0x235: Call2 0xc67

0x236: Pop(0)
0x237: @@ SetPhoto2(Stack[-1])
0x238: Pop(1)
0x239: PushEmpty(int)
0x23a: Call2 0xd8e

0x23b: Pop(0)
0x23c: @@ SetPlayerName(Stack[-1])
0x23d: Pop(1)
0x23e: Stack[-2] = (int) -1
0x23f: @ IsOverrideActive(Stack[-3])
0x240: Pop(0)
0x241: Push(Stack[-3])
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: Stack[-10] = (int) -2
0x244: Return(); Pop(8)

0x245: @ DoDialog(Stack[-4])
0x246: Pop(0)
0x247: PushEmpty(bool, object)
0x248: PushEmpty(object)
0x249: Call2 0xbb0

0x24a: Stack[-2] = Stack[-1]
0x24b: Pop(1)
0x24c: Call2 0xaf1

0x24d: Pop(2)
0x24e: PushEmpty(object, object)
0x24f: Stack[-2] = Stack[-11]
0x250: Stack[-1] = Stack[-6]
0x251: Push(-2, 4); TaskCall(5)
0x252: Call2 0x269

0x253: Pop(-2, 4); TaskReturn
0x254: Pop(2)
0x255: @@ IsDialogEnd(Stack[-1])
0x256: Pop(0)
0x257: Pop(0); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x259: @ sync()
0x25a: Pop(0)
0x25b: @@ IsDialogEnd(Stack[-1])
0x25c: Pop(0)
0x25d: GOTO 0x257

0x25e: PushEmpty(object)
0x25f: Stack[-1] = Stack[-10]
0x260: Call2 0xae0

0x261: Pop(1)
0x262: @ StopDialog(Stack[-4])
0x263: Pop(0)
0x264: @@ GetReturnValue(Stack[-2])
0x265: Pop(0)
0x266: Stack[-10] = Stack[-2]
0x267: Return(); Pop(8)

0x268: Stack[-4] = 0
0x269: PushEmpty()
0x26a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x26b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x26c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x26d: Push((int) 1)
0x26e: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x26f: PushEmpty(string)
0x270: Stack[-1] = "Neutral"
0x271: Call2 0x2a8

0x272: Pop(1)
0x273: Push((int) 509473)
0x274: @@ SetMessage(Stack[-1])
0x275: Pop(1)
0x276: @@ ClearReplies()
0x277: Pop(0)
0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0xcf3

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27d: Push((int) 533914)
0x27e: Push((int) 35474)
0x27f: Push((int) 35473)
0x280: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(3)
0x282: Push((int) 509487)
0x283: Push((int) -1)
0x284: Push((int) 10429)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: GOTO 0x28a

0x288: Return(); Pop(0)

0x289: GOTO 0x26d

0x28a: PushEmpty(bool)
0x28b: Call2 0xc69

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28e: @ lshWaitForAnimEnd()
0x28f: Pop(0)
0x290: Push( Stack[3 + Tasks[-1].StackPointer] )
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x298

0x293: PushEmpty(string)
0x294: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x295: Call2 0xb7b

0x296: Pop(1)
0x297: GOTO 0x28e

0x298: GOTO 0x2a7

0x299: Push("all")
0x29a: Push("idle")
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: @ WaitForAnimEnd()
0x29e: Pop(0)
0x29f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2a7

0x2a2: Push("all")
0x2a3: Push("idle")
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: GOTO 0x29d

0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: PushEmpty(bool)
0x2aa: Call2 0xc69

0x2ab: Pop(0)
0x2ac: Pop(1); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Return(); Pop(0)

0x2af: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(string, bool)
0x2b3: Stack[-2] = Stack[-3]
0x2b4: Push("")
0x2b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-1] = (bool) 0
0x2b8: GOTO 0x2ba

0x2b9: Stack[-1] = (bool) 1
0x2ba: Call2 0xb8b

0x2bb: Pop(2)
0x2bc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2bd: Return(); Pop(0)

0x2be: PushEmpty()
0x2bf: Push((int) 1)
0x2c0: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x2c1: PushEmpty()
0x2c2: Call2 0xba9

0x2c3: Pop(0)
0x2c4: Push((int) 35473)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0xc71

0x2cb: Pop(2)
0x2cc: Push((int) 10415)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Neutral"
0x2d1: Call2 0x2a8

0x2d2: Pop(1)
0x2d3: Push((int) 509473)
0x2d4: @@ SetMessage(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ ClearReplies()
0x2d7: Pop(0)
0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Call2 0xcf3

0x2db: Pop(1)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: Push((int) 533914)
0x2de: Push((int) 35474)
0x2df: Push((int) 35473)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: Push((int) 509487)
0x2e3: Push((int) -1)
0x2e4: Push((int) 10429)
0x2e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: Push((int) 10417)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2eb: Push((int) 10424)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Autizm"
0x2f0: Call2 0x2a8

0x2f1: Pop(1)
0x2f2: Push((int) 509482)
0x2f3: @@ SetMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ ClearReplies()
0x2f6: Pop(0)
0x2f7: Push((int) 509483)
0x2f8: Push((int) 10426)
0x2f9: Push((int) 10425)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Return(); Pop(0)

0x2fd: Push((int) 10426)
0x2fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x300: PushEmpty(string)
0x301: Stack[-1] = "Autizm"
0x302: Call2 0x2a8

0x303: Pop(1)
0x304: Push((int) 509484)
0x305: @@ SetMessage(Stack[-1])
0x306: Pop(1)
0x307: @@ ClearReplies()
0x308: Pop(0)
0x309: Push((int) 509485)
0x30a: Push((int) -1)
0x30b: Push((int) 10427)
0x30c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30d: Pop(3)
0x30e: Push((int) 509486)
0x30f: Push((int) -1)
0x310: Push((int) 10428)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 10419)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Autizm"
0x319: Call2 0x2a8

0x31a: Pop(1)
0x31b: Push((int) 509477)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 509478)
0x321: Push((int) -1)
0x322: Push((int) 10420)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Push((int) 509479)
0x326: Push((int) -1)
0x327: Push((int) 10421)
0x328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x329: Pop(3)
0x32a: Push((int) 509480)
0x32b: Push((int) -1)
0x32c: Push((int) 10422)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Return(); Pop(0)

0x330: Push((int) 35474)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x333: PushEmpty(string)
0x334: Stack[-1] = "Disturbance"
0x335: Call2 0x2a8

0x336: Pop(1)
0x337: Push((int) 533915)
0x338: @@ SetMessage(Stack[-1])
0x339: Pop(1)
0x33a: @@ ClearReplies()
0x33b: Pop(0)
0x33c: Push((int) 533916)
0x33d: Push((int) 35476)
0x33e: Push((int) 35475)
0x33f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x340: Pop(3)
0x341: Push((int) 533923)
0x342: Push((int) 35483)
0x343: Push((int) 35482)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Return(); Pop(0)

0x347: Push((int) 35483)
0x348: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Disturbance"
0x34c: Call2 0x2a8

0x34d: Pop(1)
0x34e: Push((int) 533924)
0x34f: @@ SetMessage(Stack[-1])
0x350: Pop(1)
0x351: @@ ClearReplies()
0x352: Pop(0)
0x353: Push((int) 533925)
0x354: Push((int) 35478)
0x355: Push((int) 35484)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Return(); Pop(0)

0x359: Push((int) 35476)
0x35a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x35c: PushEmpty(string)
0x35d: Stack[-1] = "Disturbance"
0x35e: Call2 0x2a8

0x35f: Pop(1)
0x360: Push((int) 533917)
0x361: @@ SetMessage(Stack[-1])
0x362: Pop(1)
0x363: @@ ClearReplies()
0x364: Pop(0)
0x365: Push((int) 533918)
0x366: Push((int) 35478)
0x367: Push((int) 35477)
0x368: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x369: Pop(3)
0x36a: Return(); Pop(0)

0x36b: Push((int) 35499)
0x36c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36e: Push((int) 35504)
0x36f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Disturbance"
0x373: Call2 0x2a8

0x374: Pop(1)
0x375: Push((int) 533940)
0x376: @@ SetMessage(Stack[-1])
0x377: Pop(1)
0x378: @@ ClearReplies()
0x379: Pop(0)
0x37a: Push((int) 533941)
0x37b: Push((int) 35506)
0x37c: Push((int) 35505)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 35506)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Pain"
0x385: Call2 0x2a8

0x386: Pop(1)
0x387: Push((int) 533942)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 533943)
0x38d: Push((int) 35508)
0x38e: Push((int) 35507)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 533948)
0x392: Push((int) 35510)
0x393: Push((int) 35512)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 35510)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Pain"
0x39c: Call2 0x2a8

0x39d: Pop(1)
0x39e: Push((int) 533946)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 533947)
0x3a4: Push((int) -1)
0x3a5: Push((int) 35511)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 35508)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Pain"
0x3ae: Call2 0x2a8

0x3af: Pop(1)
0x3b0: Push((int) 533944)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 533945)
0x3b6: Push((int) -1)
0x3b7: Push((int) 35509)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 35478)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Disturbance"
0x3c0: Call2 0x2a8

0x3c1: Pop(1)
0x3c2: Push((int) 533919)
0x3c3: @@ SetMessage(Stack[-1])
0x3c4: Pop(1)
0x3c5: @@ ClearReplies()
0x3c6: Pop(0)
0x3c7: Push((int) 533922)
0x3c8: Push((int) 35485)
0x3c9: Push((int) 35481)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Push((int) 533930)
0x3cd: Push((int) 35490)
0x3ce: Push((int) 35489)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Return(); Pop(0)

0x3d2: Push((int) 35490)
0x3d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3d5: PushEmpty(string)
0x3d6: Stack[-1] = "Welldie"
0x3d7: Call2 0x2a8

0x3d8: Pop(1)
0x3d9: Push((int) 533931)
0x3da: @@ SetMessage(Stack[-1])
0x3db: Pop(1)
0x3dc: @@ ClearReplies()
0x3dd: Pop(0)
0x3de: Push((int) 533932)
0x3df: Push((int) 35493)
0x3e0: Push((int) 35491)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Push((int) 533934)
0x3e4: Push((int) 35485)
0x3e5: Push((int) 35494)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 35493)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Welldie"
0x3ee: Call2 0x2a8

0x3ef: Pop(1)
0x3f0: Push((int) 533933)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 533935)
0x3f6: Push((int) 35485)
0x3f7: Push((int) 35495)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 35485)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral"
0x400: Call2 0x2a8

0x401: Pop(1)
0x402: Push((int) 533926)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 533927)
0x408: Push((int) -1)
0x409: Push((int) 35486)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Push((int) 533928)
0x40d: Push((int) -1)
0x40e: Push((int) 35487)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: Return(); Pop(0)

0x412: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x413: PushEmpty(bool)
0x414: Call2 0xc69

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x417: @ lshStopAnimation()
0x418: Pop(0)
0x419: GOTO 0x41c

0x41a: @ StopAnimation()
0x41b: Pop(0)
0x41c: Return(); Pop(0)

0x41d: GOTO 0x2bf

0x41e: Return(); Pop(0)

0x41f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x420: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x421: PushEmpty(bool, object, float)
0x422: Stack[-2] = Stack[-12]
0x423: Stack[-1] = (float) 70.0
0x424: Call2 0xa9c

0x425: Pop(2)
0x426: Pop(1); Push((bool) Stack[-1] == 0)
0x427: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x428: Stack[-10] = (int) -2
0x429: Return(); Pop(8)

0x42a: @ CreateDialog(Stack[-4])
0x42b: Pop(0)
0x42c: PushEmpty(int)
0x42d: Call2 0xc63

0x42e: Pop(0)
0x42f: @@ SetNPCName(Stack[-1])
0x430: Pop(1)
0x431: PushEmpty(int)
0x432: Call2 0xc61

0x433: Pop(0)
0x434: @@ SetNPCDescription(Stack[-1])
0x435: Pop(1)
0x436: PushEmpty(string)
0x437: Call2 0xc65

0x438: Pop(0)
0x439: @@ SetPhoto(Stack[-1])
0x43a: Pop(1)
0x43b: PushEmpty(string)
0x43c: Call2 0xc67

0x43d: Pop(0)
0x43e: @@ SetPhoto2(Stack[-1])
0x43f: Pop(1)
0x440: PushEmpty(int)
0x441: Call2 0xd8e

0x442: Pop(0)
0x443: @@ SetPlayerName(Stack[-1])
0x444: Pop(1)
0x445: Stack[-2] = (int) -1
0x446: @ IsOverrideActive(Stack[-3])
0x447: Pop(0)
0x448: Push(Stack[-3])
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-10] = (int) -2
0x44b: Return(); Pop(8)

0x44c: @ DoDialog(Stack[-4])
0x44d: Pop(0)
0x44e: PushEmpty(bool, object)
0x44f: PushEmpty(object)
0x450: Call2 0xbb0

0x451: Stack[-2] = Stack[-1]
0x452: Pop(1)
0x453: Call2 0xaf1

0x454: Pop(2)
0x455: PushEmpty(object, object)
0x456: Stack[-2] = Stack[-11]
0x457: Stack[-1] = Stack[-6]
0x458: Push(-2, 4); TaskCall(7)
0x459: Call2 0x470

0x45a: Pop(-2, 4); TaskReturn
0x45b: Pop(2)
0x45c: @@ IsDialogEnd(Stack[-1])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x460: @ sync()
0x461: Pop(0)
0x462: @@ IsDialogEnd(Stack[-1])
0x463: Pop(0)
0x464: GOTO 0x45e

0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[-10]
0x467: Call2 0xae0

0x468: Pop(1)
0x469: @ StopDialog(Stack[-4])
0x46a: Pop(0)
0x46b: @@ GetReturnValue(Stack[-2])
0x46c: Pop(0)
0x46d: Stack[-10] = Stack[-2]
0x46e: Return(); Pop(8)

0x46f: Stack[-4] = 0
0x470: PushEmpty()
0x471: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x472: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x473: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x474: Push((int) 1)
0x475: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Pain"
0x478: Call2 0x4af

0x479: Pop(1)
0x47a: Push((int) 509951)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: PushEmpty(bool, object)
0x480: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x481: Call2 0xd3b

0x482: Pop(1)
0x483: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x484: Push((int) 509961)
0x485: Push((int) 10970)
0x486: Push((int) 10978)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Push((int) 509952)
0x48a: Push((int) -1)
0x48b: Push((int) 10969)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: GOTO 0x491

0x48f: Return(); Pop(0)

0x490: GOTO 0x474

0x491: PushEmpty(bool)
0x492: Call2 0xc69

0x493: Pop(0)
0x494: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x495: @ lshWaitForAnimEnd()
0x496: Pop(0)
0x497: Push( Stack[3 + Tasks[-1].StackPointer] )
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: GOTO 0x49f

0x49a: PushEmpty(string)
0x49b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x49c: Call2 0xb7b

0x49d: Pop(1)
0x49e: GOTO 0x495

0x49f: GOTO 0x4ae

0x4a0: Push("all")
0x4a1: Push("idle")
0x4a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a3: Pop(2)
0x4a4: @ WaitForAnimEnd()
0x4a5: Pop(0)
0x4a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: GOTO 0x4ae

0x4a9: Push("all")
0x4aa: Push("idle")
0x4ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ac: Pop(2)
0x4ad: GOTO 0x4a4

0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(bool)
0x4b1: Call2 0xc69

0x4b2: Pop(0)
0x4b3: Pop(1); Push((bool) Stack[-1] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b5: Return(); Pop(0)

0x4b6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(string, bool)
0x4ba: Stack[-2] = Stack[-3]
0x4bb: Push("")
0x4bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4be: Stack[-1] = (bool) 0
0x4bf: GOTO 0x4c1

0x4c0: Stack[-1] = (bool) 1
0x4c1: Call2 0xb8b

0x4c2: Pop(2)
0x4c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: Push((int) 1)
0x4c7: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x4c8: PushEmpty()
0x4c9: Call2 0xba9

0x4ca: Pop(0)
0x4cb: Push((int) 10978)
0x4cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4ce: PushEmpty(object, object)
0x4cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d1: Call2 0xcd8

0x4d2: Pop(2)
0x4d3: Push((int) 10976)
0x4d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4d6: PushEmpty(object, object)
0x4d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d9: Call2 0xc93

0x4da: Pop(2)
0x4db: PushEmpty(object, object)
0x4dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4de: Call2 0xc6b

0x4df: Pop(2)
0x4e0: Push((int) 10977)
0x4e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(object, object)
0x4e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e6: Call2 0xc9e

0x4e7: Pop(2)
0x4e8: Push((int) 10968)
0x4e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4eb: PushEmpty(string)
0x4ec: Stack[-1] = "Pain"
0x4ed: Call2 0x4af

0x4ee: Pop(1)
0x4ef: Push((int) 509951)
0x4f0: @@ SetMessage(Stack[-1])
0x4f1: Pop(1)
0x4f2: @@ ClearReplies()
0x4f3: Pop(0)
0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Call2 0xd3b

0x4f7: Pop(1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4f9: Push((int) 509961)
0x4fa: Push((int) 10970)
0x4fb: Push((int) 10978)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Push((int) 509952)
0x4ff: Push((int) -1)
0x500: Push((int) 10969)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: Return(); Pop(0)

0x504: Push((int) 10970)
0x505: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x507: PushEmpty(string)
0x508: Stack[-1] = "Pain"
0x509: Call2 0x4af

0x50a: Pop(1)
0x50b: Push((int) 509953)
0x50c: @@ SetMessage(Stack[-1])
0x50d: Pop(1)
0x50e: @@ ClearReplies()
0x50f: Pop(0)
0x510: Push((int) 509954)
0x511: Push((int) -1)
0x512: Push((int) 10971)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Push((int) 509955)
0x516: Push((int) 10973)
0x517: Push((int) 10972)
0x518: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x519: Pop(3)
0x51a: Return(); Pop(0)

0x51b: Push((int) 10973)
0x51c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x51e: PushEmpty(string)
0x51f: Stack[-1] = "Pain"
0x520: Call2 0x4af

0x521: Pop(1)
0x522: Push((int) 509956)
0x523: @@ SetMessage(Stack[-1])
0x524: Pop(1)
0x525: @@ ClearReplies()
0x526: Pop(0)
0x527: Push((int) 509957)
0x528: Push((int) 10975)
0x529: Push((int) 10974)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Push((int) 534181)
0x52d: Push((int) -1)
0x52e: Push((int) 35764)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: Return(); Pop(0)

0x532: Push((int) 10975)
0x533: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x535: PushEmpty(string)
0x536: Stack[-1] = "Welldie"
0x537: Call2 0x4af

0x538: Pop(1)
0x539: Push((int) 509958)
0x53a: @@ SetMessage(Stack[-1])
0x53b: Pop(1)
0x53c: @@ ClearReplies()
0x53d: Pop(0)
0x53e: Push((int) 509959)
0x53f: Push((int) -1)
0x540: Push((int) 10976)
0x541: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x542: Pop(3)
0x543: Push((int) 509960)
0x544: Push((int) -1)
0x545: Push((int) 10977)
0x546: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x547: Pop(3)
0x548: Return(); Pop(0)

0x549: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x54a: PushEmpty(bool)
0x54b: Call2 0xc69

0x54c: Pop(0)
0x54d: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54e: @ lshStopAnimation()
0x54f: Pop(0)
0x550: GOTO 0x553

0x551: @ StopAnimation()
0x552: Pop(0)
0x553: Return(); Pop(0)

0x554: GOTO 0x4c6

0x555: Return(); Pop(0)

0x556: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x557: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x558: PushEmpty(bool, object, float)
0x559: Stack[-2] = Stack[-12]
0x55a: Stack[-1] = (float) 70.0
0x55b: Call2 0xa9c

0x55c: Pop(2)
0x55d: Pop(1); Push((bool) Stack[-1] == 0)
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Stack[-10] = (int) -2
0x560: Return(); Pop(8)

0x561: @ CreateDialog(Stack[-4])
0x562: Pop(0)
0x563: PushEmpty(int)
0x564: Call2 0xc63

0x565: Pop(0)
0x566: @@ SetNPCName(Stack[-1])
0x567: Pop(1)
0x568: PushEmpty(int)
0x569: Call2 0xc61

0x56a: Pop(0)
0x56b: @@ SetNPCDescription(Stack[-1])
0x56c: Pop(1)
0x56d: PushEmpty(string)
0x56e: Call2 0xc65

0x56f: Pop(0)
0x570: @@ SetPhoto(Stack[-1])
0x571: Pop(1)
0x572: PushEmpty(string)
0x573: Call2 0xc67

0x574: Pop(0)
0x575: @@ SetPhoto2(Stack[-1])
0x576: Pop(1)
0x577: PushEmpty(int)
0x578: Call2 0xd8e

0x579: Pop(0)
0x57a: @@ SetPlayerName(Stack[-1])
0x57b: Pop(1)
0x57c: Stack[-2] = (int) -1
0x57d: @ IsOverrideActive(Stack[-3])
0x57e: Pop(0)
0x57f: Push(Stack[-3])
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-10] = (int) -2
0x582: Return(); Pop(8)

0x583: @ DoDialog(Stack[-4])
0x584: Pop(0)
0x585: PushEmpty(bool, object)
0x586: PushEmpty(object)
0x587: Call2 0xbb0

0x588: Stack[-2] = Stack[-1]
0x589: Pop(1)
0x58a: Call2 0xaf1

0x58b: Pop(2)
0x58c: PushEmpty(object, object)
0x58d: Stack[-2] = Stack[-11]
0x58e: Stack[-1] = Stack[-6]
0x58f: Push(-2, 4); TaskCall(9)
0x590: Call2 0x5a7

0x591: Pop(-2, 4); TaskReturn
0x592: Pop(2)
0x593: @@ IsDialogEnd(Stack[-1])
0x594: Pop(0)
0x595: Pop(0); Push((bool) Stack[-1] == 0)
0x596: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x597: @ sync()
0x598: Pop(0)
0x599: @@ IsDialogEnd(Stack[-1])
0x59a: Pop(0)
0x59b: GOTO 0x595

0x59c: PushEmpty(object)
0x59d: Stack[-1] = Stack[-10]
0x59e: Call2 0xae0

0x59f: Pop(1)
0x5a0: @ StopDialog(Stack[-4])
0x5a1: Pop(0)
0x5a2: @@ GetReturnValue(Stack[-2])
0x5a3: Pop(0)
0x5a4: Stack[-10] = Stack[-2]
0x5a5: Return(); Pop(8)

0x5a6: Stack[-4] = 0
0x5a7: PushEmpty()
0x5a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5aa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5ab: Push((int) 1)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5ad: PushEmpty(string)
0x5ae: Stack[-1] = "Neutral"
0x5af: Call2 0x5ef

0x5b0: Pop(1)
0x5b1: Push((int) 512815)
0x5b2: @@ SetMessage(Stack[-1])
0x5b3: Pop(1)
0x5b4: @@ ClearReplies()
0x5b5: Pop(0)
0x5b6: PushEmpty(bool)
0x5b7: Stack[-1] = (bool) 0
0x5b8: PushEmpty(bool, object)
0x5b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5ba: Call2 0xd17

0x5bb: Pop(1)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5bf: Call2 0xd23

0x5c0: Pop(1)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Stack[-1] = (bool) 1
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c4: Push((int) 512816)
0x5c5: Push((int) 14017)
0x5c6: Push((int) 14016)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Push((int) 512828)
0x5ca: Push((int) -1)
0x5cb: Push((int) 14028)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: GOTO 0x5d1

0x5cf: Return(); Pop(0)

0x5d0: GOTO 0x5ab

0x5d1: PushEmpty(bool)
0x5d2: Call2 0xc69

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5d5: @ lshWaitForAnimEnd()
0x5d6: Pop(0)
0x5d7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d8: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d9: GOTO 0x5df

0x5da: PushEmpty(string)
0x5db: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5dc: Call2 0xb7b

0x5dd: Pop(1)
0x5de: GOTO 0x5d5

0x5df: GOTO 0x5ee

0x5e0: Push("all")
0x5e1: Push("idle")
0x5e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e3: Pop(2)
0x5e4: @ WaitForAnimEnd()
0x5e5: Pop(0)
0x5e6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: GOTO 0x5ee

0x5e9: Push("all")
0x5ea: Push("idle")
0x5eb: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ec: Pop(2)
0x5ed: GOTO 0x5e4

0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: PushEmpty(bool)
0x5f1: Call2 0xc69

0x5f2: Pop(0)
0x5f3: Pop(1); Push((bool) Stack[-1] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: Return(); Pop(0)

0x5f6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f8: Return(); Pop(0)

0x5f9: PushEmpty(string, bool)
0x5fa: Stack[-2] = Stack[-3]
0x5fb: Push("")
0x5fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-1] = (bool) 0
0x5ff: GOTO 0x601

0x600: Stack[-1] = (bool) 1
0x601: Call2 0xb8b

0x602: Pop(2)
0x603: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Push((int) 1)
0x607: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x608: PushEmpty()
0x609: Call2 0xba9

0x60a: Pop(0)
0x60b: Push((int) 14233)
0x60c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x60e: PushEmpty(object, object)
0x60f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x610: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x611: Call2 0xca5

0x612: Pop(2)
0x613: PushEmpty(object, object)
0x614: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x615: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x616: Call2 0xcc7

0x617: Pop(2)
0x618: Push((int) 14234)
0x619: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x61b: PushEmpty(object, object)
0x61c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61e: Call2 0xca5

0x61f: Pop(2)
0x620: PushEmpty(object, object)
0x621: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x622: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x623: Call2 0xcc7

0x624: Pop(2)
0x625: Push((int) 14027)
0x626: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x628: PushEmpty(object, object)
0x629: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62b: Call2 0xca5

0x62c: Pop(2)
0x62d: PushEmpty(object, object)
0x62e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x630: Call2 0xcab

0x631: Pop(2)
0x632: Push((int) 14026)
0x633: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x635: PushEmpty(object, object)
0x636: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x637: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x638: Call2 0xca5

0x639: Pop(2)
0x63a: PushEmpty(object, object)
0x63b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63d: Call2 0xcab

0x63e: Pop(2)
0x63f: Push((int) 14015)
0x640: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call2 0x5ef

0x645: Pop(1)
0x646: Push((int) 512815)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: PushEmpty(bool)
0x64c: Stack[-1] = (bool) 0
0x64d: PushEmpty(bool, object)
0x64e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64f: Call2 0xd17

0x650: Pop(1)
0x651: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x652: PushEmpty(bool, object)
0x653: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x654: Call2 0xd23

0x655: Pop(1)
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[-1] = (bool) 1
0x658: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x659: Push((int) 512816)
0x65a: Push((int) 14017)
0x65b: Push((int) 14016)
0x65c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(3)
0x65e: Push((int) 512828)
0x65f: Push((int) -1)
0x660: Push((int) 14028)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Return(); Pop(0)

0x664: Push((int) 14017)
0x665: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x667: PushEmpty(bool, object)
0x668: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x669: Call2 0xd0b

0x66a: Pop(1)
0x66b: Pop(1); Push((bool) Stack[-1] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x66d: PushEmpty(string)
0x66e: Stack[-1] = "Disturbance"
0x66f: Call2 0x5ef

0x670: Pop(1)
0x671: Push((int) 512817)
0x672: @@ SetMessage(Stack[-1])
0x673: Pop(1)
0x674: @@ ClearReplies()
0x675: Pop(0)
0x676: Push((int) 513022)
0x677: Push((int) 14230)
0x678: Push((int) 14229)
0x679: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67a: Pop(3)
0x67b: Return(); Pop(0)

0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67e: Call2 0xd0b

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x681: PushEmpty(string)
0x682: Stack[-1] = "Welldie"
0x683: Call2 0x5ef

0x684: Pop(1)
0x685: Push((int) 513021)
0x686: @@ SetMessage(Stack[-1])
0x687: Pop(1)
0x688: @@ ClearReplies()
0x689: Pop(0)
0x68a: Push((int) 512818)
0x68b: Push((int) 14019)
0x68c: Push((int) 14018)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: Return(); Pop(0)

0x690: Push((int) 14019)
0x691: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x692: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x693: PushEmpty(string)
0x694: Stack[-1] = "Welldie"
0x695: Call2 0x5ef

0x696: Pop(1)
0x697: Push((int) 512819)
0x698: @@ SetMessage(Stack[-1])
0x699: Pop(1)
0x69a: @@ ClearReplies()
0x69b: Pop(0)
0x69c: Push((int) 512820)
0x69d: Push((int) 14021)
0x69e: Push((int) 14020)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: Return(); Pop(0)

0x6a2: Push((int) 14021)
0x6a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6a5: PushEmpty(string)
0x6a6: Stack[-1] = "Neutral"
0x6a7: Call2 0x5ef

0x6a8: Pop(1)
0x6a9: Push((int) 512821)
0x6aa: @@ SetMessage(Stack[-1])
0x6ab: Pop(1)
0x6ac: @@ ClearReplies()
0x6ad: Pop(0)
0x6ae: Push((int) 512822)
0x6af: Push((int) 14023)
0x6b0: Push((int) 14022)
0x6b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b2: Pop(3)
0x6b3: Return(); Pop(0)

0x6b4: Push((int) 14023)
0x6b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6b7: PushEmpty(string)
0x6b8: Stack[-1] = "Autizm"
0x6b9: Call2 0x5ef

0x6ba: Pop(1)
0x6bb: Push((int) 512823)
0x6bc: @@ SetMessage(Stack[-1])
0x6bd: Pop(1)
0x6be: @@ ClearReplies()
0x6bf: Pop(0)
0x6c0: Push((int) 512824)
0x6c1: Push((int) 14025)
0x6c2: Push((int) 14024)
0x6c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c4: Pop(3)
0x6c5: Push((int) 512826)
0x6c6: Push((int) -1)
0x6c7: Push((int) 14026)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Return(); Pop(0)

0x6cb: Push((int) 14025)
0x6cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6ce: PushEmpty(string)
0x6cf: Stack[-1] = "Autizm"
0x6d0: Call2 0x5ef

0x6d1: Pop(1)
0x6d2: Push((int) 512825)
0x6d3: @@ SetMessage(Stack[-1])
0x6d4: Pop(1)
0x6d5: @@ ClearReplies()
0x6d6: Pop(0)
0x6d7: Push((int) 512827)
0x6d8: Push((int) -1)
0x6d9: Push((int) 14027)
0x6da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6db: Pop(3)
0x6dc: Return(); Pop(0)

0x6dd: Push((int) 14230)
0x6de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6e0: PushEmpty(string)
0x6e1: Stack[-1] = "Disturbance"
0x6e2: Call2 0x5ef

0x6e3: Pop(1)
0x6e4: Push((int) 513023)
0x6e5: @@ SetMessage(Stack[-1])
0x6e6: Pop(1)
0x6e7: @@ ClearReplies()
0x6e8: Pop(0)
0x6e9: Push((int) 513024)
0x6ea: Push((int) 14232)
0x6eb: Push((int) 14231)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Push((int) 513027)
0x6ef: Push((int) -1)
0x6f0: Push((int) 14234)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Return(); Pop(0)

0x6f4: Push((int) 14232)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Autizm"
0x6f9: Call2 0x5ef

0x6fa: Pop(1)
0x6fb: Push((int) 513025)
0x6fc: @@ SetMessage(Stack[-1])
0x6fd: Pop(1)
0x6fe: @@ ClearReplies()
0x6ff: Pop(0)
0x700: Push((int) 513026)
0x701: Push((int) -1)
0x702: Push((int) 14233)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Return(); Pop(0)

0x706: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x707: PushEmpty(bool)
0x708: Call2 0xc69

0x709: Pop(0)
0x70a: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70b: @ lshStopAnimation()
0x70c: Pop(0)
0x70d: GOTO 0x710

0x70e: @ StopAnimation()
0x70f: Pop(0)
0x710: Return(); Pop(0)

0x711: GOTO 0x606

0x712: Return(); Pop(0)

0x713: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x714: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x715: PushEmpty(bool, object, float)
0x716: Stack[-2] = Stack[-12]
0x717: Stack[-1] = (float) 70.0
0x718: Call2 0xa9c

0x719: Pop(2)
0x71a: Pop(1); Push((bool) Stack[-1] == 0)
0x71b: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71c: Stack[-10] = (int) -2
0x71d: Return(); Pop(8)

0x71e: @ CreateDialog(Stack[-4])
0x71f: Pop(0)
0x720: PushEmpty(int)
0x721: Call2 0xc63

0x722: Pop(0)
0x723: @@ SetNPCName(Stack[-1])
0x724: Pop(1)
0x725: PushEmpty(int)
0x726: Call2 0xc61

0x727: Pop(0)
0x728: @@ SetNPCDescription(Stack[-1])
0x729: Pop(1)
0x72a: PushEmpty(string)
0x72b: Call2 0xc65

0x72c: Pop(0)
0x72d: @@ SetPhoto(Stack[-1])
0x72e: Pop(1)
0x72f: PushEmpty(string)
0x730: Call2 0xc67

0x731: Pop(0)
0x732: @@ SetPhoto2(Stack[-1])
0x733: Pop(1)
0x734: PushEmpty(int)
0x735: Call2 0xd8e

0x736: Pop(0)
0x737: @@ SetPlayerName(Stack[-1])
0x738: Pop(1)
0x739: Stack[-2] = (int) -1
0x73a: @ IsOverrideActive(Stack[-3])
0x73b: Pop(0)
0x73c: Push(Stack[-3])
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-10] = (int) -2
0x73f: Return(); Pop(8)

0x740: @ DoDialog(Stack[-4])
0x741: Pop(0)
0x742: PushEmpty(bool, object)
0x743: PushEmpty(object)
0x744: Call2 0xbb0

0x745: Stack[-2] = Stack[-1]
0x746: Pop(1)
0x747: Call2 0xaf1

0x748: Pop(2)
0x749: PushEmpty(object, object)
0x74a: Stack[-2] = Stack[-11]
0x74b: Stack[-1] = Stack[-6]
0x74c: Push(-2, 4); TaskCall(11)
0x74d: Call2 0x764

0x74e: Pop(-2, 4); TaskReturn
0x74f: Pop(2)
0x750: @@ IsDialogEnd(Stack[-1])
0x751: Pop(0)
0x752: Pop(0); Push((bool) Stack[-1] == 0)
0x753: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x754: @ sync()
0x755: Pop(0)
0x756: @@ IsDialogEnd(Stack[-1])
0x757: Pop(0)
0x758: GOTO 0x752

0x759: PushEmpty(object)
0x75a: Stack[-1] = Stack[-10]
0x75b: Call2 0xae0

0x75c: Pop(1)
0x75d: @ StopDialog(Stack[-4])
0x75e: Pop(0)
0x75f: @@ GetReturnValue(Stack[-2])
0x760: Pop(0)
0x761: Stack[-10] = Stack[-2]
0x762: Return(); Pop(8)

0x763: Stack[-4] = 0
0x764: PushEmpty()
0x765: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x766: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x767: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x768: Push((int) 1)
0x769: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x76a: PushEmpty(string)
0x76b: Stack[-1] = "Pain"
0x76c: Call2 0x7b1

0x76d: Pop(1)
0x76e: Push((int) 540043)
0x76f: @@ SetMessage(Stack[-1])
0x770: Pop(1)
0x771: @@ ClearReplies()
0x772: Pop(0)
0x773: PushEmpty(bool)
0x774: Stack[-1] = (bool) 0
0x775: PushEmpty(bool, object)
0x776: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x777: Call2 0xd2f

0x778: Pop(1)
0x779: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77a: PushEmpty(bool, object)
0x77b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77c: Call2 0xcff

0x77d: Pop(1)
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: Stack[-1] = (bool) 1
0x780: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x781: Push((int) 540045)
0x782: Push((int) 42013)
0x783: Push((int) 42012)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Push((int) 540044)
0x787: Push((int) -1)
0x788: Push((int) 42011)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Push((int) 540060)
0x78c: Push((int) -1)
0x78d: Push((int) 42029)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: GOTO 0x793

0x791: Return(); Pop(0)

0x792: GOTO 0x768

0x793: PushEmpty(bool)
0x794: Call2 0xc69

0x795: Pop(0)
0x796: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x797: @ lshWaitForAnimEnd()
0x798: Pop(0)
0x799: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79a: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79b: GOTO 0x7a1

0x79c: PushEmpty(string)
0x79d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x79e: Call2 0xb7b

0x79f: Pop(1)
0x7a0: GOTO 0x797

0x7a1: GOTO 0x7b0

0x7a2: Push("all")
0x7a3: Push("idle")
0x7a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a5: Pop(2)
0x7a6: @ WaitForAnimEnd()
0x7a7: Pop(0)
0x7a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7aa: GOTO 0x7b0

0x7ab: Push("all")
0x7ac: Push("idle")
0x7ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x7ae: Pop(2)
0x7af: GOTO 0x7a6

0x7b0: Return(); Pop(0)

0x7b1: PushEmpty()
0x7b2: PushEmpty(bool)
0x7b3: Call2 0xc69

0x7b4: Pop(0)
0x7b5: Pop(1); Push((bool) Stack[-1] == 0)
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b7: Return(); Pop(0)

0x7b8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7ba: Return(); Pop(0)

0x7bb: PushEmpty(string, bool)
0x7bc: Stack[-2] = Stack[-3]
0x7bd: Push("")
0x7be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-1] = (bool) 0
0x7c1: GOTO 0x7c3

0x7c2: Stack[-1] = (bool) 1
0x7c3: Call2 0xb8b

0x7c4: Pop(2)
0x7c5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7c6: Return(); Pop(0)

0x7c7: PushEmpty()
0x7c8: Push((int) 1)
0x7c9: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x7ca: PushEmpty()
0x7cb: Call2 0xba9

0x7cc: Pop(0)
0x7cd: Push((int) 42012)
0x7ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d0: PushEmpty(object, object)
0x7d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d3: Call2 0xc77

0x7d4: Pop(2)
0x7d5: Push((int) 42025)
0x7d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d8: PushEmpty(object, object)
0x7d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7db: Call2 0xcde

0x7dc: Pop(2)
0x7dd: Push((int) 42026)
0x7de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7e0: PushEmpty(object, object)
0x7e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e3: Call2 0xcde

0x7e4: Pop(2)
0x7e5: PushEmpty(object, object)
0x7e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e8: Call2 0xc88

0x7e9: Pop(2)
0x7ea: PushEmpty(object, object)
0x7eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ed: Call2 0xc7d

0x7ee: Pop(2)
0x7ef: Push((int) 42010)
0x7f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = "Pain"
0x7f4: Call2 0x7b1

0x7f5: Pop(1)
0x7f6: Push((int) 540043)
0x7f7: @@ SetMessage(Stack[-1])
0x7f8: Pop(1)
0x7f9: @@ ClearReplies()
0x7fa: Pop(0)
0x7fb: PushEmpty(bool)
0x7fc: Stack[-1] = (bool) 0
0x7fd: PushEmpty(bool, object)
0x7fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ff: Call2 0xd2f

0x800: Pop(1)
0x801: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x802: PushEmpty(bool, object)
0x803: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x804: Call2 0xcff

0x805: Pop(1)
0x806: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x807: Stack[-1] = (bool) 1
0x808: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x809: Push((int) 540045)
0x80a: Push((int) 42013)
0x80b: Push((int) 42012)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Push((int) 540044)
0x80f: Push((int) -1)
0x810: Push((int) 42011)
0x811: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x812: Pop(3)
0x813: Push((int) 540060)
0x814: Push((int) -1)
0x815: Push((int) 42029)
0x816: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(3)
0x818: Return(); Pop(0)

0x819: Push((int) 42013)
0x81a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x81c: PushEmpty(string)
0x81d: Stack[-1] = "Pain"
0x81e: Call2 0x7b1

0x81f: Pop(1)
0x820: Push((int) 540046)
0x821: @@ SetMessage(Stack[-1])
0x822: Pop(1)
0x823: @@ ClearReplies()
0x824: Pop(0)
0x825: Push((int) 540047)
0x826: Push((int) 42015)
0x827: Push((int) 42014)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: Push((int) 540052)
0x82b: Push((int) 42024)
0x82c: Push((int) 42019)
0x82d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82e: Pop(3)
0x82f: Return(); Pop(0)

0x830: Push((int) 42015)
0x831: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x832: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x833: PushEmpty(string)
0x834: Stack[-1] = "Pain"
0x835: Call2 0x7b1

0x836: Pop(1)
0x837: Push((int) 540048)
0x838: @@ SetMessage(Stack[-1])
0x839: Pop(1)
0x83a: @@ ClearReplies()
0x83b: Pop(0)
0x83c: Push((int) 540049)
0x83d: Push((int) 42017)
0x83e: Push((int) 42016)
0x83f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x840: Pop(3)
0x841: Return(); Pop(0)

0x842: Push((int) 42017)
0x843: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x845: PushEmpty(string)
0x846: Stack[-1] = "Welldie"
0x847: Call2 0x7b1

0x848: Pop(1)
0x849: Push((int) 540050)
0x84a: @@ SetMessage(Stack[-1])
0x84b: Pop(1)
0x84c: @@ ClearReplies()
0x84d: Pop(0)
0x84e: Push((int) 540051)
0x84f: Push((int) 42020)
0x850: Push((int) 42018)
0x851: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x852: Pop(3)
0x853: Push((int) 540056)
0x854: Push((int) 42024)
0x855: Push((int) 42023)
0x856: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x857: Pop(3)
0x858: Return(); Pop(0)

0x859: Push((int) 42020)
0x85a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x85c: PushEmpty(string)
0x85d: Stack[-1] = "Pain"
0x85e: Call2 0x7b1

0x85f: Pop(1)
0x860: Push((int) 540053)
0x861: @@ SetMessage(Stack[-1])
0x862: Pop(1)
0x863: @@ ClearReplies()
0x864: Pop(0)
0x865: Push((int) 540054)
0x866: Push((int) 42024)
0x867: Push((int) 42021)
0x868: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x869: Pop(3)
0x86a: Return(); Pop(0)

0x86b: Push((int) 42024)
0x86c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86d: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x86e: PushEmpty(string)
0x86f: Stack[-1] = "Neutral"
0x870: Call2 0x7b1

0x871: Pop(1)
0x872: Push((int) 540057)
0x873: @@ SetMessage(Stack[-1])
0x874: Pop(1)
0x875: @@ ClearReplies()
0x876: Pop(0)
0x877: Push((int) 540058)
0x878: Push((int) -1)
0x879: Push((int) 42025)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Push((int) 540059)
0x87d: Push((int) -1)
0x87e: Push((int) 42026)
0x87f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x883: PushEmpty(bool)
0x884: Call2 0xc69

0x885: Pop(0)
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: @ lshStopAnimation()
0x888: Pop(0)
0x889: GOTO 0x88c

0x88a: @ StopAnimation()
0x88b: Pop(0)
0x88c: Return(); Pop(0)

0x88d: GOTO 0x7c8

0x88e: Return(); Pop(0)

0x88f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x890: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x891: PushEmpty(bool, object, float)
0x892: Stack[-2] = Stack[-12]
0x893: Stack[-1] = (float) 70.0
0x894: Call2 0xa9c

0x895: Pop(2)
0x896: Pop(1); Push((bool) Stack[-1] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x898: Stack[-10] = (int) -2
0x899: Return(); Pop(8)

0x89a: @ CreateDialog(Stack[-4])
0x89b: Pop(0)
0x89c: PushEmpty(int)
0x89d: Call2 0xc63

0x89e: Pop(0)
0x89f: @@ SetNPCName(Stack[-1])
0x8a0: Pop(1)
0x8a1: PushEmpty(int)
0x8a2: Call2 0xc61

0x8a3: Pop(0)
0x8a4: @@ SetNPCDescription(Stack[-1])
0x8a5: Pop(1)
0x8a6: PushEmpty(string)
0x8a7: Call2 0xc65

0x8a8: Pop(0)
0x8a9: @@ SetPhoto(Stack[-1])
0x8aa: Pop(1)
0x8ab: PushEmpty(string)
0x8ac: Call2 0xc67

0x8ad: Pop(0)
0x8ae: @@ SetPhoto2(Stack[-1])
0x8af: Pop(1)
0x8b0: PushEmpty(int)
0x8b1: Call2 0xd8e

0x8b2: Pop(0)
0x8b3: @@ SetPlayerName(Stack[-1])
0x8b4: Pop(1)
0x8b5: Stack[-2] = (int) -1
0x8b6: @ IsOverrideActive(Stack[-3])
0x8b7: Pop(0)
0x8b8: Push(Stack[-3])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8ba: Stack[-10] = (int) -2
0x8bb: Return(); Pop(8)

0x8bc: @ DoDialog(Stack[-4])
0x8bd: Pop(0)
0x8be: PushEmpty(bool, object)
0x8bf: PushEmpty(object)
0x8c0: Call2 0xbb0

0x8c1: Stack[-2] = Stack[-1]
0x8c2: Pop(1)
0x8c3: Call2 0xaf1

0x8c4: Pop(2)
0x8c5: PushEmpty(object, object)
0x8c6: Stack[-2] = Stack[-11]
0x8c7: Stack[-1] = Stack[-6]
0x8c8: Push(-2, 4); TaskCall(13)
0x8c9: Call2 0x8e0

0x8ca: Pop(-2, 4); TaskReturn
0x8cb: Pop(2)
0x8cc: @@ IsDialogEnd(Stack[-1])
0x8cd: Pop(0)
0x8ce: Pop(0); Push((bool) Stack[-1] == 0)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d0: @ sync()
0x8d1: Pop(0)
0x8d2: @@ IsDialogEnd(Stack[-1])
0x8d3: Pop(0)
0x8d4: GOTO 0x8ce

0x8d5: PushEmpty(object)
0x8d6: Stack[-1] = Stack[-10]
0x8d7: Call2 0xae0

0x8d8: Pop(1)
0x8d9: @ StopDialog(Stack[-4])
0x8da: Pop(0)
0x8db: @@ GetReturnValue(Stack[-2])
0x8dc: Pop(0)
0x8dd: Stack[-10] = Stack[-2]
0x8de: Return(); Pop(8)

0x8df: Stack[-4] = 0
0x8e0: PushEmpty()
0x8e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8e3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8e4: Push((int) 1)
0x8e5: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8e6: PushEmpty(string)
0x8e7: Stack[-1] = "Neutral"
0x8e8: Call2 0x91a

0x8e9: Pop(1)
0x8ea: Push((int) 540548)
0x8eb: @@ SetMessage(Stack[-1])
0x8ec: Pop(1)
0x8ed: @@ ClearReplies()
0x8ee: Pop(0)
0x8ef: Push((int) 540549)
0x8f0: Push((int) -1)
0x8f1: Push((int) 42558)
0x8f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f3: Pop(3)
0x8f4: Push((int) 540797)
0x8f5: Push((int) -1)
0x8f6: Push((int) 42846)
0x8f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f8: Pop(3)
0x8f9: GOTO 0x8fc

0x8fa: Return(); Pop(0)

0x8fb: GOTO 0x8e4

0x8fc: PushEmpty(bool)
0x8fd: Call2 0xc69

0x8fe: Pop(0)
0x8ff: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x900: @ lshWaitForAnimEnd()
0x901: Pop(0)
0x902: Push( Stack[3 + Tasks[-1].StackPointer] )
0x903: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x904: GOTO 0x90a

0x905: PushEmpty(string)
0x906: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x907: Call2 0xb7b

0x908: Pop(1)
0x909: GOTO 0x900

0x90a: GOTO 0x919

0x90b: Push("all")
0x90c: Push("idle")
0x90d: @ PlayAnimation(Stack[-2], Stack[-1])
0x90e: Pop(2)
0x90f: @ WaitForAnimEnd()
0x910: Pop(0)
0x911: Push( Stack[3 + Tasks[-1].StackPointer] )
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: GOTO 0x919

0x914: Push("all")
0x915: Push("idle")
0x916: @ PlayAnimation(Stack[-2], Stack[-1])
0x917: Pop(2)
0x918: GOTO 0x90f

0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: PushEmpty(bool)
0x91c: Call2 0xc69

0x91d: Pop(0)
0x91e: Pop(1); Push((bool) Stack[-1] == 0)
0x91f: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x920: Return(); Pop(0)

0x921: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x922: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x923: Return(); Pop(0)

0x924: PushEmpty(string, bool)
0x925: Stack[-2] = Stack[-3]
0x926: Push("")
0x927: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-1] = (bool) 0
0x92a: GOTO 0x92c

0x92b: Stack[-1] = (bool) 1
0x92c: Call2 0xb8b

0x92d: Pop(2)
0x92e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x92f: Return(); Pop(0)

0x930: PushEmpty()
0x931: Push((int) 1)
0x932: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x933: PushEmpty()
0x934: Call2 0xba9

0x935: Pop(0)
0x936: Push((int) 42557)
0x937: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x939: PushEmpty(string)
0x93a: Stack[-1] = "Neutral"
0x93b: Call2 0x91a

0x93c: Pop(1)
0x93d: Push((int) 540548)
0x93e: @@ SetMessage(Stack[-1])
0x93f: Pop(1)
0x940: @@ ClearReplies()
0x941: Pop(0)
0x942: Push((int) 540549)
0x943: Push((int) -1)
0x944: Push((int) 42558)
0x945: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x946: Pop(3)
0x947: Push((int) 540797)
0x948: Push((int) -1)
0x949: Push((int) 42846)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Return(); Pop(0)

0x94d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x94e: PushEmpty(bool)
0x94f: Call2 0xc69

0x950: Pop(0)
0x951: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x952: @ lshStopAnimation()
0x953: Pop(0)
0x954: GOTO 0x957

0x955: @ StopAnimation()
0x956: Pop(0)
0x957: Return(); Pop(0)

0x958: GOTO 0x931

0x959: Return(); Pop(0)

0x95a: PushEmpty()
0x95b: Call2 0x95e

0x95c: Pop(0)
0x95d: Return(); Pop(0)

0x95e: PushEmpty(bool)
0x95f: Call2 0xa97

0x960: Pop(0)
0x961: Pop(1); Push((bool) Stack[-1] == 0)
0x962: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x963: @ Hold()
0x964: Pop(0)
0x965: @ GetDirection(Stack[-0])
0x966: Pop(0)
0x967: PushEmpty()
0x968: Call2 0xa0e

0x969: Pop(0)
0x96a: GOTO 0x967

0x96b: Return(); Pop(0)

0x96c: PushEmpty(object, object)
0x96d: Push("player")
0x96e: @ FindActor(Stack[-2], Stack[-1])
0x96f: Pop(1)
0x970: Pop(0); Push((bool) Stack[-1] == 0)
0x971: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x972: Stack[-3] = (bool) 0
0x973: Return(); Pop(2)

0x974: PushEmpty(bool, object)
0x975: Stack[-1] = Stack[-3]
0x976: Call2 0xa8e

0x977: Stack[-5] = Stack[-2]
0x978: Pop(2)
0x979: Return(); Pop(2)

0x97a: Stack[-1] = 0
0x97b: Push(CvectorIndex(Stack[-0], 0))
0x97c: Push(CvectorIndex(Stack[-0], 2))
0x97d: @ RotateAsync(Stack[-2], Stack[-1])
0x97e: Pop(2)
0x97f: Return(); Pop(0)

0x980: PushEmpty(object, bool, object, bool)
0x981: Push("player")
0x982: @ FindActor(Stack[-3], Stack[-1])
0x983: Pop(1)
0x984: Pop(0); Push((bool) Stack[-2] == 0)
0x985: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x986: Stack[-5] = (bool) 0
0x987: Return(); Pop(4)

0x988: PushEmpty(float, object)
0x989: Stack[-1] = Stack[-4]
0x98a: Call2 0xa5a

0x98b: Pop(1)
0x98c: Push((float)90000.0)
0x98d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x98e: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98f: Stack[-5] = (bool) 0
0x990: Return(); Pop(4)

0x991: @ CanSee(Stack[-1], Stack[-2])
0x992: Pop(0)
0x993: Stack[-5] = Stack[-1]
0x994: Return(); Pop(4)

0x995: Stack[-2] = 0
0x996: PushEmpty(float, float)
0x997: Push((int) 8)
0x998: Push((int) 16)
0x999: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x99a: Pop(2)
0x99b: Push((int) 10)
0x99c: @ SetTimer(Stack[-1], Stack[-2])
0x99d: Pop(1)
0x99e: Return(); Pop(2)

0x99f: Push((int) 10)
0x9a0: @ KillTimer(Stack[-1])
0x9a1: Pop(1)
0x9a2: Return(); Pop(0)

0x9a3: PushEmpty()
0x9a4: Push((int) 10)
0x9a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9a7: PushEmpty()
0x9a8: Call2 0x99f

0x9a9: Pop(0)
0x9aa: PushEmpty(bool)
0x9ab: Stack[-1] = (bool) 0
0x9ac: PushEmpty(bool)
0x9ad: Call2 0xa97

0x9ae: Pop(0)
0x9af: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b0: PushEmpty(bool)
0x9b1: Call2 0x980

0x9b2: Pop(0)
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: Stack[-1] = (bool) 1
0x9b5: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9b6: PushEmpty(bool)
0x9b7: Call2 0x96c

0x9b8: Pop(0)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9ba: PushEmpty(bool, object)
0x9bb: PushEmpty(object)
0x9bc: Call2 0xbb0

0x9bd: Stack[-2] = Stack[-1]
0x9be: Pop(1)
0x9bf: Call2 0xb2b

0x9c0: Pop(2)
0x9c1: GOTO 0x9c8

0x9c2: PushEmpty()
0x9c3: Call2 0x97b

0x9c4: Pop(0)
0x9c5: PushEmpty()
0x9c6: Call2 0x996

0x9c7: Pop(0)
0x9c8: Return(); Pop(0)

0x9c9: PushEmpty()
0x9ca: Call2 0xa55

0x9cb: Pop(0)
0x9cc: PushEmpty()
0x9cd: Call2 0x99f

0x9ce: Pop(0)
0x9cf: @ lshStopSpeech()
0x9d0: Pop(0)
0x9d1: @ lshStopAnimation()
0x9d2: Pop(0)
0x9d3: @ StopAsync()
0x9d4: Pop(0)
0x9d5: @ Hold()
0x9d6: Pop(0)
0x9d7: Return(); Pop(0)

0x9d8: @ StopGroup0()
0x9d9: Pop(0)
0x9da: PushEmpty()
0x9db: Call2 0x99f

0x9dc: Pop(0)
0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Neutral"
0x9df: Call2 0xb7b

0x9e0: Pop(1)
0x9e1: PushEmpty()
0x9e2: Call2 0x996

0x9e3: Pop(0)
0x9e4: Return(); Pop(0)

0x9e5: PushEmpty()
0x9e6: Push(Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9e8: PushEmpty()
0x9e9: Call2 0x996

0x9ea: Pop(0)
0x9eb: GOTO 0x9f0

0x9ec: PushEmpty(string)
0x9ed: Stack[-1] = "Neutral"
0x9ee: Call2 0xb7b

0x9ef: Pop(1)
0x9f0: Return(); Pop(0)

0x9f1: PushEmpty(bool, bool)
0x9f2: @ IsOverrideActive(Stack[-1])
0x9f3: Pop(0)
0x9f4: Pop(0); Push((bool) Stack[-1] == 0)
0x9f5: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0x9f6: EventDisable(0)
0x9f7: PushEmpty()
0x9f8: Call2 0xa55

0x9f9: Pop(0)
0x9fa: PushEmpty(bool, object)
0x9fb: Stack[-1] = Stack[-5]
0x9fc: Call2 0xa8e

0x9fd: Pop(2)
0x9fe: EventEnable(0)
0x9ff: PushEmpty(object)
0xa00: Stack[-1] = Stack[-4]
0xa01: Call2 0xd9f

0xa02: Pop(1)
0xa03: PushEmpty(string)
0xa04: Stack[-1] = "Neutral"
0xa05: Call2 0xb7b

0xa06: Pop(1)
0xa07: PushEmpty()
0xa08: Call2 0x99f

0xa09: Pop(0)
0xa0a: PushEmpty()
0xa0b: Call2 0x996

0xa0c: Pop(0)
0xa0d: Return(); Pop(2)

0xa0e: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xa0f: @ WaitForAnimEnd()
0xa10: Pop(0)
0xa11: PushEmpty(bool)
0xa12: Call2 0xa97

0xa13: Pop(0)
0xa14: Pop(1); Push((bool) Stack[-1] == 0)
0xa15: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa16: Return(); Pop(12)

0xa17: PushEmpty(int)
0xa18: Call2 0xc50

0xa19: Stack[-7] = Stack[-1]
0xa1a: Pop(1)
0xa1b: Stack[-5] = (int) 0
0xa1c: PushEmpty(bool)
0xa1d: Stack[-1] = (bool) 0
0xa1e: Push((int) 5)
0xa1f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xa20: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa21: PushEmpty(bool)
0xa22: Call2 0xa97

0xa23: Pop(0)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 1
0xa26: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa27: Pop(0); Push((bool) Stack[-6] == 0)
0xa28: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa29: Push((int) 3)
0xa2a: @ Sleep(Stack[-1], Stack[-5])
0xa2b: Pop(1)
0xa2c: Pop(0); Push((bool) Stack[-4] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2e: GOTO 0xa50

0xa2f: GOTO 0xa45

0xa30: @ irand(Stack[-3], Stack[-6])
0xa31: Pop(0)
0xa32: Push((int) 5)
0xa33: @ irand(Stack[-3], Stack[-1])
0xa34: Pop(1)
0xa35: Push((int) 0)
0xa36: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xa37: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa38: Stack[-3] = (int) 0
0xa39: Push("all")
0xa3a: PushEmpty(string, int)
0xa3b: Stack[-1] = Stack[-6]
0xa3c: Call2 0xc49

0xa3d: Pop(1)
0xa3e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3f: Pop(2)
0xa40: @ WaitForAnimEnd(Stack[-1])
0xa41: Pop(0)
0xa42: Pop(0); Push((bool) Stack[-1] == 0)
0xa43: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa44: GOTO 0xa50

0xa45: PushEmpty(bool)
0xa46: Call2 0xa53

0xa47: Pop(0)
0xa48: Pop(1); Push((bool) Stack[-1] == 0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa4a: GOTO 0xa50

0xa4b: @ ResetAAS()
0xa4c: Pop(0)
0xa4d: Push((int) 1)
0xa4e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa4f: GOTO 0xa1c

0xa50: @ ResetAAS()
0xa51: Pop(0)
0xa52: Return(); Pop(12)

0xa53: Stack[-1] = (bool) 1
0xa54: Return(); Pop(0)

0xa55: @ StopAnimation()
0xa56: Pop(0)
0xa57: @ StopGroup0()
0xa58: Pop(0)
0xa59: Return(); Pop(0)

0xa5a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa5b: @ GetPosition(Stack[-3])
0xa5c: Pop(0)
0xa5d: @@ GetPosition(Stack[-2])
0xa5e: Pop(0)
0xa5f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xa60: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa61: Return(); Pop(6)

0xa62: PushEmpty(bool, bool)
0xa63: Push("HasProperty")
0xa64: Push((int) 2)
0xa65: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa66: Pop(1); Push((bool) Stack[-1] == 0)
0xa67: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa68: Stack[-5] = (bool) 0
0xa69: Return(); Pop(2)

0xa6a: @@ HasProperty(Stack[-3], Stack[-1])
0xa6b: Pop(0)
0xa6c: Stack[-5] = Stack[-1]
0xa6d: Return(); Pop(2)

0xa6e: PushEmpty(float, float)
0xa6f: PushEmpty(bool, object, string)
0xa70: Stack[-2] = Stack[-10]
0xa71: Stack[-1] = Stack[-9]
0xa72: Call2 0xa62

0xa73: Pop(2)
0xa74: Pop(1); Push((bool) Stack[-1] == 0)
0xa75: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa76: Stack[-8] = (bool) 0
0xa77: Return(); Pop(2)

0xa78: @@ GetProperty(Stack[-6], Stack[-1])
0xa79: Pop(0)
0xa7a: PushEmpty(float, float, float, float)
0xa7b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xa7c: Stack[-2] = Stack[-8]
0xa7d: Stack[-1] = Stack[-7]
0xa7e: Call2 0xbc0

0xa7f: Pop(3)
0xa80: @@ SetProperty(Stack[-7], Stack[-1])
0xa81: Pop(1)
0xa82: Stack[-8] = (bool) 1
0xa83: Return(); Pop(2)

0xa84: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xa85: @ GetPosition(Stack[-3])
0xa86: Pop(0)
0xa87: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xa88: Push(CvectorIndex(Stack[-2], 0))
0xa89: Push(CvectorIndex(Stack[-3], 2))
0xa8a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xa8b: Pop(2)
0xa8c: Stack[-8] = Stack[-1]
0xa8d: Return(); Pop(6)

0xa8e: PushEmpty(cvector, cvector)
0xa8f: @@ GetPosition(Stack[-1])
0xa90: Pop(0)
0xa91: PushEmpty(bool, cvector)
0xa92: Stack[-1] = Stack[-3]
0xa93: Call2 0xa84

0xa94: Stack[-6] = Stack[-2]
0xa95: Pop(2)
0xa96: Return(); Pop(2)

0xa97: PushEmpty(bool, bool)
0xa98: @ IsLoaded(Stack[-1])
0xa99: Pop(0)
0xa9a: Stack[-3] = Stack[-1]
0xa9b: Return(); Pop(2)

0xa9c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa9d: @@ GetPosition(Stack[-8])
0xa9e: Pop(0)
0xa9f: @@ GetEyesHeight(Stack[-9])
0xaa0: Pop(0)
0xaa1: Push(CvectorIndex(Stack[-8], 1))
0xaa2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaa3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xaa4: @ GetPosition(Stack[-7])
0xaa5: Pop(0)
0xaa6: @ GetEyesHeight(Stack[-9])
0xaa7: Pop(0)
0xaa8: Push(CvectorIndex(Stack[-7], 1))
0xaa9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xaaa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaab: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xaac: Push(CvectorIndex(Stack[-6], 1))
0xaad: Stack[-1] = (int) 0
0xaae: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xaaf: Pop(0); Push(Stack[-6] | Stack[-6]);
0xab0: Pop(1); Push(Sqrt(Stack[-1]))
0xab1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xab2: Stack[-5] = -Stack[-6]; Pop(0);
0xab3: Pop(0); Push(Stack[-6] * Stack[-19]);
0xab4: PushEmpty(cvector, cvector)
0xab5: Push(CVector(0.0, 1.0, 0.0))
0xab6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xab7: Call2 0xbb6

0xab8: Pop(1)
0xab9: Push((int) 25)
0xaba: Pop(2); Push(Stack[-2] * Stack[-1]);
0xabb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xabc: Push(CVector(0.0, 10.0, 0.0))
0xabd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xabe: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xabf: @ IsOverrideActive(Stack[-2])
0xac0: Pop(0)
0xac1: Push(Stack[-2])
0xac2: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xac3: Stack[-21] = (bool) 0
0xac4: Return(); Pop(18)

0xac5: @ StopWorld()
0xac6: Pop(0)
0xac7: @ CameraTransit(Stack[-3], Stack[-5])
0xac8: Pop(0)
0xac9: Push(CvectorIndex(Stack[-4], 0))
0xaca: Push(CvectorIndex(Stack[-5], 2))
0xacb: @ Rotate(Stack[-2], Stack[-1])
0xacc: Pop(2)
0xacd: PushEmpty(bool)
0xace: Call2 0xc69

0xacf: Pop(0)
0xad0: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xad1: GOTO 0xada

0xad2: Push("head")
0xad3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xad4: Pop(1)
0xad5: Push(Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xada; Pop(1)

0xad7: Push("head")
0xad8: @ LookAsyncCamera(Stack[-1])
0xad9: Pop(1)
0xada: @ CameraWaitForPlayFinish()
0xadb: Pop(0)
0xadc: @ ResumeWorld()
0xadd: Pop(0)
0xade: Stack[-21] = (bool) 1
0xadf: Return(); Pop(18)

0xae0: PushEmpty(bool, bool)
0xae1: @ CameraSwitchToNormal()
0xae2: Pop(0)
0xae3: PushEmpty(bool)
0xae4: Call2 0xc69

0xae5: Pop(0)
0xae6: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae7: GOTO 0xaf0

0xae8: Push("head")
0xae9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xaea: Pop(1)
0xaeb: Push(Stack[-1])
0xaec: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xaed: Push("head")
0xaee: @ UnlookAsync(Stack[-1])
0xaef: Pop(1)
0xaf0: Return(); Pop(2)

0xaf1: PushEmpty(int, int, int, int)
0xaf2: Push("voice_common")
0xaf3: @ GetVariable(Stack[-1], Stack[-3])
0xaf4: Pop(1)
0xaf5: Push(Stack[-2])
0xaf6: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xaf7: PushEmpty(bool, object)
0xaf8: Stack[-1] = Stack[-7]
0xaf9: Call2 0xb2b

0xafa: Pop(1)
0xafb: Pop(1); Push((bool) Stack[-1] == 0)
0xafc: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[-7]
0xaff: Call2 0xb50

0xb00: Pop(1)
0xb01: Pop(1); Push((bool) Stack[-1] == 0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb03: Stack[-6] = (bool) 0
0xb04: Return(); Pop(4)

0xb05: Push((int) 2)
0xb06: @ irand(Stack[-2], Stack[-1])
0xb07: Pop(1)
0xb08: Push(Stack[-1])
0xb09: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb0a: Push("voice_common")
0xb0b: Push((int) 1)
0xb0c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb0d: Push((int) 3)
0xb0e: Pop(2); Push(Stack[-2] % Stack[-1]);
0xb0f: @ SetVariable(Stack[-2], Stack[-1])
0xb10: Pop(2)
0xb11: GOTO 0xb16

0xb12: Push("voice_common")
0xb13: Push((int) 0)
0xb14: @ SetVariable(Stack[-2], Stack[-1])
0xb15: Pop(2)
0xb16: GOTO 0xb29

0xb17: PushEmpty(bool, object)
0xb18: Stack[-1] = Stack[-7]
0xb19: Call2 0xb50

0xb1a: Pop(1)
0xb1b: Pop(1); Push((bool) Stack[-1] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb1d: PushEmpty(bool, object)
0xb1e: Stack[-1] = Stack[-7]
0xb1f: Call2 0xb2b

0xb20: Pop(1)
0xb21: Pop(1); Push((bool) Stack[-1] == 0)
0xb22: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb23: Stack[-6] = (bool) 0
0xb24: Return(); Pop(4)

0xb25: Push("voice_common")
0xb26: Push((int) 1)
0xb27: @ SetVariable(Stack[-2], Stack[-1])
0xb28: Pop(2)
0xb29: Stack[-6] = (bool) 1
0xb2a: Return(); Pop(4)

0xb2b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xb2c: Stack[-5] = "c"
0xb2d: Stack[-4] = (int) 0
0xb2e: Push((int) 1)
0xb2f: IF (Stack[-1] == 0) GOTO 0xb3b; Pop(1)

0xb30: Push((int) 1)
0xb31: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb32: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb33: @@ HasProperty(Stack[-1], Stack[-4])
0xb34: Pop(1)
0xb35: Pop(0); Push((bool) Stack[-3] == 0)
0xb36: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb37: GOTO 0xb3b

0xb38: Push((int) 1)
0xb39: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb3a: GOTO 0xb2e

0xb3b: Pop(0); Push((bool) Stack[-4] == 0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-12] = (bool) 0
0xb3e: Return(); Pop(10)

0xb3f: Stack[-2] = (int) 0
0xb40: Push((int) 1)
0xb41: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb42: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb43: @ irand(Stack[-2], Stack[-4])
0xb44: Pop(0)
0xb45: Push((int) 1)
0xb46: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb47: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb48: @@ GetProperty(Stack[-1], Stack[-2])
0xb49: Pop(1)
0xb4a: PushEmpty(bool, string)
0xb4b: Stack[-1] = Stack[-3]
0xb4c: Call2 0xb9a

0xb4d: Stack[-14] = Stack[-2]
0xb4e: Pop(2)
0xb4f: Return(); Pop(10)

0xb50: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xb51: Push("d")
0xb52: PushEmpty(int)
0xb53: Call2 0xc3a

0xb54: Pop(0)
0xb55: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb56: Push("m")
0xb57: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb58: Stack[-4] = (int) 0
0xb59: Push((int) 1)
0xb5a: IF (Stack[-1] == 0) GOTO 0xb66; Pop(1)

0xb5b: Push((int) 1)
0xb5c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb5d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb5e: @@ HasProperty(Stack[-1], Stack[-4])
0xb5f: Pop(1)
0xb60: Pop(0); Push((bool) Stack[-3] == 0)
0xb61: IF (Stack[-1] == 0) GOTO 0xb63; Pop(1)

0xb62: GOTO 0xb66

0xb63: Push((int) 1)
0xb64: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb65: GOTO 0xb59

0xb66: Pop(0); Push((bool) Stack[-4] == 0)
0xb67: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb68: Stack[-12] = (bool) 0
0xb69: Return(); Pop(10)

0xb6a: Stack[-2] = (int) 0
0xb6b: Push((int) 1)
0xb6c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xb6d: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb6e: @ irand(Stack[-2], Stack[-4])
0xb6f: Pop(0)
0xb70: Push((int) 1)
0xb71: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb72: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb73: @@ GetProperty(Stack[-1], Stack[-2])
0xb74: Pop(1)
0xb75: PushEmpty(bool, string)
0xb76: Stack[-1] = Stack[-3]
0xb77: Call2 0xb9a

0xb78: Stack[-14] = Stack[-2]
0xb79: Pop(2)
0xb7a: Return(); Pop(10)

0xb7b: PushEmpty(bool, float, float, bool, float, float)
0xb7c: @ lshHasAnimation(Stack[-3], Stack[-7])
0xb7d: Pop(0)
0xb7e: Push(Stack[-3])
0xb7f: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb80: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xb81: Pop(0)
0xb82: Push((bool) 0)
0xb83: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb84: Pop(1)
0xb85: GOTO 0xb8a

0xb86: Push("Can't find lsh animation : ")
0xb87: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb88: @ Trace(Stack[-1])
0xb89: Pop(1)
0xb8a: Return(); Pop(6)

0xb8b: PushEmpty(bool, float, float, bool, float, float)
0xb8c: @ lshHasAnimation(Stack[-3], Stack[-8])
0xb8d: Pop(0)
0xb8e: Push(Stack[-3])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb90: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xb91: Pop(0)
0xb92: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xb93: Pop(0)
0xb94: GOTO 0xb99

0xb95: Push("Can't find lsh animation : ")
0xb96: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb97: @ Trace(Stack[-1])
0xb98: Pop(1)
0xb99: Return(); Pop(6)

0xb9a: PushEmpty(bool, bool)
0xb9b: PushEmpty(bool)
0xb9c: Call2 0xc69

0xb9d: Pop(0)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb9f: @ lshHasSpeech(Stack[-1], Stack[-3])
0xba0: Pop(0)
0xba1: Push(Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba3: @ lshPlaySpeech(Stack[-3])
0xba4: Pop(0)
0xba5: Stack[-4] = (bool) 1
0xba6: Return(); Pop(2)

0xba7: Stack[-4] = (bool) 0
0xba8: Return(); Pop(2)

0xba9: PushEmpty(bool)
0xbaa: Call2 0xc69

0xbab: Pop(0)
0xbac: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbad: @ lshStopSpeech()
0xbae: Pop(0)
0xbaf: Return(); Pop(0)

0xbb0: PushEmpty(object, object)
0xbb1: @ self(Stack[-1])
0xbb2: Pop(0)
0xbb3: Stack[-3] = Stack[-1]
0xbb4: Return(); Pop(2)

0xbb5: Stack[-1] = 0
0xbb6: PushEmpty(float, float)
0xbb7: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbb8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xbb9: Push((float)0.0)
0xbba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbe; Pop(1)

0xbbc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xbbd: Return(); Pop(2)

0xbbe: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xbbf: Return(); Pop(2)

0xbc0: PushEmpty()
0xbc1: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xbc2: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc3: Stack[-4] = Stack[-2]
0xbc4: Return(); Pop(0)

0xbc5: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbc7: Stack[-4] = Stack[-1]
0xbc8: Return(); Pop(0)

0xbc9: Stack[-4] = Stack[-3]
0xbca: Return(); Pop(0)

0xbcb: PushEmpty(int, int)
0xbcc: @ GetVariable(Stack[-3], Stack[-1])
0xbcd: Pop(0)
0xbce: Stack[-4] = Stack[-1]
0xbcf: Return(); Pop(2)

0xbd0: PushEmpty(object, object)
0xbd1: @ CreateIntVector(Stack[-1])
0xbd2: Pop(0)
0xbd3: @@ add(Stack[-4])
0xbd4: Pop(0)
0xbd5: @@ add(Stack[-3])
0xbd6: Pop(0)
0xbd7: Push((int) 3)
0xbd8: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xbd9: Pop(1)
0xbda: Return(); Pop(2)

0xbdb: Stack[-1] = 0
0xbdc: PushEmpty(int, int, bool, int, int, bool)
0xbdd: @@ GetItemID(Stack[-3])
0xbde: Pop(0)
0xbdf: Push("Category")
0xbe0: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xbe1: Pop(1)
0xbe2: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xbe3: Pop(0)
0xbe4: Pop(0); Push((bool) Stack[-1] == 0)
0xbe5: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe6: @@ DropItems(Stack[-8], Stack[-7])
0xbe7: Pop(0)
0xbe8: GOTO 0xbee

0xbe9: PushEmpty(int, int)
0xbea: Stack[-2] = Stack[-5]
0xbeb: Stack[-1] = Stack[-9]
0xbec: Call2 0xbd0

0xbed: Pop(2)
0xbee: Return(); Pop(6)

0xbef: PushEmpty(object, object)
0xbf0: @ CreateInvItem(Stack[-1])
0xbf1: Pop(0)
0xbf2: @@ SetItemName(Stack[-4])
0xbf3: Pop(0)
0xbf4: PushEmpty(object, object, int)
0xbf5: Stack[-3] = Stack[-8]
0xbf6: Stack[-2] = Stack[-4]
0xbf7: Stack[-1] = Stack[-6]
0xbf8: Call2 0xbdc

0xbf9: Pop(3)
0xbfa: Return(); Pop(2)

0xbfb: Stack[-1] = 0
0xbfc: PushEmpty()
0xbfd: Pop(0); Push((bool) Stack[-2] == 0)
0xbfe: IF (Stack[-1] == 0) GOTO 0xc01; Pop(1)

0xbff: Stack[-3] = (bool) 0
0xc00: Return(); Pop(0)

0xc01: Push((int) 0)
0xc02: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc03: IF (Stack[-1] == 0) GOTO 0xc08; Pop(1)

0xc04: Push((int) 8)
0xc05: @ SendWorldWndMessage(Stack[-1])
0xc06: Pop(1)
0xc07: GOTO 0xc11

0xc08: Push((int) 0)
0xc09: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc0b: Push((int) 9)
0xc0c: @ SendWorldWndMessage(Stack[-1])
0xc0d: Pop(1)
0xc0e: GOTO 0xc11

0xc0f: Stack[-3] = (bool) 0
0xc10: Return(); Pop(0)

0xc11: PushEmpty(float)
0xc12: Stack[-1] = Stack[-2]
0xc13: Call2 0xc1f

0xc14: Pop(1)
0xc15: PushEmpty(bool, object, string, float, float, float)
0xc16: Stack[-5] = Stack[-8]
0xc17: Stack[-4] = "reputation"
0xc18: Stack[-3] = Stack[-7]
0xc19: Stack[-2] = (int) 0
0xc1a: Stack[-1] = (int) 1
0xc1b: Call2 0xa6e

0xc1c: Pop(6)
0xc1d: Stack[-3] = (bool) 1
0xc1e: Return(); Pop(0)

0xc1f: PushEmpty(object, object)
0xc20: @ CreateFloatVector(Stack[-1])
0xc21: Pop(0)
0xc22: @@ add(Stack[-3])
0xc23: Pop(0)
0xc24: Push((int) 16)
0xc25: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc26: Pop(1)
0xc27: Return(); Pop(2)

0xc28: Stack[-1] = 0
0xc29: PushEmpty(object, object)
0xc2a: @ FindActor(Stack[-1], Stack[-4])
0xc2b: Pop(0)
0xc2c: Pop(0); Push((bool) Stack[-1] == 0)
0xc2d: IF (Stack[-1] == 0) GOTO 0xc30; Pop(1)

0xc2e: Stack[-5] = (bool) 0
0xc2f: Return(); Pop(2)

0xc30: @ Trigger(Stack[-1], Stack[-3])
0xc31: Pop(0)
0xc32: Stack[-5] = (bool) 1
0xc33: Return(); Pop(2)

0xc34: Stack[-1] = 0
0xc35: PushEmpty(float, float)
0xc36: @ GetGameTime(Stack[-1])
0xc37: Pop(0)
0xc38: Stack[-3] = Stack[-1]
0xc39: Return(); Pop(2)

0xc3a: PushEmpty(float, float)
0xc3b: @ GetGameTime(Stack[-1])
0xc3c: Pop(0)
0xc3d: Push((int) 1)
0xc3e: PushEmpty(int)
0xc3f: Push((int) 24)
0xc40: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc41: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc42: Return(); Pop(2)

0xc43: PushEmpty()
0xc44: PushEmpty(int)
0xc45: Call2 0xc3a

0xc46: Pop(0)
0xc47: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xc48: Return(); Pop(0)

0xc49: PushEmpty(string, string)
0xc4a: Stack[-1] = "idle"
0xc4b: Push(Stack[-3])
0xc4c: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xc4e: Stack[-4] = Stack[-1]
0xc4f: Return(); Pop(2)

0xc50: PushEmpty(int, bool, int, bool)
0xc51: Stack[-2] = (int) 0
0xc52: Push("all")
0xc53: PushEmpty(string, int)
0xc54: Stack[-1] = Stack[-5]
0xc55: Call2 0xc49

0xc56: Pop(1)
0xc57: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc58: Pop(2)
0xc59: Pop(0); Push((bool) Stack[-1] == 0)
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5c; Pop(1)

0xc5b: GOTO 0xc5f

0xc5c: Push((int) 1)
0xc5d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc5e: GOTO 0xc52

0xc5f: Stack[-5] = Stack[-2]
0xc60: Return(); Pop(4)

0xc61: Stack[-1] = (int) 515542
0xc62: Return(); Pop(0)

0xc63: Stack[-1] = (int) 502867
0xc64: Return(); Pop(0)

0xc65: Stack[-1] = "ui/NPC_Laska.png"
0xc66: Return(); Pop(0)

0xc67: Stack[-1] = "ui/NPC_Laska_b.png"
0xc68: Return(); Pop(0)

0xc69: Stack[-1] = (bool) 1
0xc6a: Return(); Pop(0)

0xc6b: PushEmpty()
0xc6c: Push("playsound")
0xc6d: Push("giveitem")
0xc6e: @ TriggerWorld(Stack[-2], Stack[-1])
0xc6f: Pop(2)
0xc70: Return(); Pop(0)

0xc71: PushEmpty()
0xc72: Push("ood2Laska1")
0xc73: Push((int) 1)
0xc74: @ SetVariable(Stack[-2], Stack[-1])
0xc75: Pop(2)
0xc76: Return(); Pop(0)

0xc77: PushEmpty()
0xc78: Push("ood11Laska1")
0xc79: Push((int) 1)
0xc7a: @ SetVariable(Stack[-2], Stack[-1])
0xc7b: Pop(2)
0xc7c: Return(); Pop(0)

0xc7d: PushEmpty()
0xc7e: Push("bandage is given")
0xc7f: @ Trace(Stack[-1])
0xc80: Pop(1)
0xc81: PushEmpty(object, string, int)
0xc82: Stack[-3] = Stack[-5]
0xc83: Stack[-2] = "bandage"
0xc84: Stack[-1] = (int) 1
0xc85: Call2 0xbef

0xc86: Pop(3)
0xc87: Return(); Pop(0)

0xc88: PushEmpty()
0xc89: Push("tourniquet is given")
0xc8a: @ Trace(Stack[-1])
0xc8b: Pop(1)
0xc8c: PushEmpty(object, string, int)
0xc8d: Stack[-3] = Stack[-5]
0xc8e: Stack[-2] = "tourniquet"
0xc8f: Stack[-1] = (int) 1
0xc90: Call2 0xbef

0xc91: Pop(3)
0xc92: Return(); Pop(0)

0xc93: PushEmpty()
0xc94: Push("powder is given")
0xc95: @ Trace(Stack[-1])
0xc96: Pop(1)
0xc97: PushEmpty(object, string, int)
0xc98: Stack[-3] = Stack[-5]
0xc99: Stack[-2] = "powder"
0xc9a: Stack[-1] = (int) 1
0xc9b: Call2 0xbef

0xc9c: Pop(3)
0xc9d: Return(); Pop(0)

0xc9e: PushEmpty()
0xc9f: PushEmpty(bool, object, float)
0xca0: Stack[-2] = Stack[-5]
0xca1: Stack[-1] = (float) 0.3
0xca2: Call2 0xbfc

0xca3: Pop(3)
0xca4: Return(); Pop(0)

0xca5: PushEmpty()
0xca6: Push("ood6Laska1")
0xca7: Push((int) 1)
0xca8: @ SetVariable(Stack[-2], Stack[-1])
0xca9: Pop(2)
0xcaa: Return(); Pop(0)

0xcab: PushEmpty(object, object)
0xcac: Push("d6q01")
0xcad: Push((int) 3)
0xcae: @ SetVariable(Stack[-2], Stack[-1])
0xcaf: Pop(2)
0xcb0: PushEmpty(object)
0xcb1: Call2 0xd7d

0xcb2: Stack[-2] = Stack[-1]
0xcb3: Pop(1)
0xcb4: Push("d6q01LaskaGotoAlbinos")
0xcb5: Push("pt_d6q03_albinos")
0xcb6: Push((int) 1)
0xcb7: Push((int) 515400)
0xcb8: PushEmpty(float)
0xcb9: Call2 0xc35

0xcba: Pop(0)
0xcbb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcbc: Pop(5)
0xcbd: PushEmpty()
0xcbe: Call2 0xd47

0xcbf: Pop(0)
0xcc0: PushEmpty(bool, string, string)
0xcc1: Stack[-2] = "quest_d6_01"
0xcc2: Stack[-1] = "albinos_klara"
0xcc3: Call2 0xc29

0xcc4: Pop(3)
0xcc5: Return(); Pop(2)

0xcc6: Stack[-1] = 0
0xcc7: PushEmpty()
0xcc8: Push("d6q01")
0xcc9: Push((int) 4)
0xcca: @ SetVariable(Stack[-2], Stack[-1])
0xccb: Pop(2)
0xccc: PushEmpty(bool, string, string)
0xccd: Stack[-2] = "quest_d6_01"
0xcce: Stack[-1] = "eva_klara"
0xccf: Call2 0xc29

0xcd0: Pop(3)
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: Push("KnowLaska")
0xcd4: Push((int) 1)
0xcd5: @ SetVariable(Stack[-2], Stack[-1])
0xcd6: Pop(2)
0xcd7: Return(); Pop(0)

0xcd8: PushEmpty()
0xcd9: Push("ood3Laska1")
0xcda: Push((int) 1)
0xcdb: @ SetVariable(Stack[-2], Stack[-1])
0xcdc: Pop(2)
0xcdd: Return(); Pop(0)

0xcde: PushEmpty(object, object)
0xcdf: Push("Knife is given")
0xce0: @ Trace(Stack[-1])
0xce1: Pop(1)
0xce2: @ CreateInvItem(Stack[-1])
0xce3: Pop(0)
0xce4: Push("Knife")
0xce5: @@ SetItemName(Stack[-1])
0xce6: Pop(1)
0xce7: Push("durability")
0xce8: Push((int) 100)
0xce9: @@ SetProperty(Stack[-2], Stack[-1])
0xcea: Pop(2)
0xceb: PushEmpty(object, object, int)
0xcec: Stack[-3] = Stack[-7]
0xced: Stack[-2] = Stack[-4]
0xcee: Stack[-1] = (int) 1
0xcef: Call2 0xbdc

0xcf0: Pop(3)
0xcf1: Return(); Pop(2)

0xcf2: Stack[-1] = 0
0xcf3: PushEmpty()
0xcf4: PushEmpty(int, string)
0xcf5: Stack[-1] = "ood2Laska1"
0xcf6: Call2 0xbcb

0xcf7: Pop(1)
0xcf8: Push((int) 0)
0xcf9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcfa: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcfb: Stack[-2] = (bool) 1
0xcfc: Return(); Pop(0)

0xcfd: Stack[-2] = (bool) 0
0xcfe: Return(); Pop(0)

0xcff: PushEmpty()
0xd00: PushEmpty(int, string)
0xd01: Stack[-1] = "ood11Laska1"
0xd02: Call2 0xbcb

0xd03: Pop(1)
0xd04: Push((int) 0)
0xd05: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd06: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd07: Stack[-2] = (bool) 1
0xd08: Return(); Pop(0)

0xd09: Stack[-2] = (bool) 0
0xd0a: Return(); Pop(0)

0xd0b: PushEmpty()
0xd0c: PushEmpty(int, string)
0xd0d: Stack[-1] = "d6q03AlbinosKilled"
0xd0e: Call2 0xbcb

0xd0f: Pop(1)
0xd10: Push((int) 1)
0xd11: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd15; Pop(1)

0xd13: Stack[-2] = (bool) 1
0xd14: Return(); Pop(0)

0xd15: Stack[-2] = (bool) 0
0xd16: Return(); Pop(0)

0xd17: PushEmpty()
0xd18: PushEmpty(int, string)
0xd19: Stack[-1] = "d6q01"
0xd1a: Call2 0xbcb

0xd1b: Pop(1)
0xd1c: Push((int) 2)
0xd1d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd1e: IF (Stack[-1] == 0) GOTO 0xd21; Pop(1)

0xd1f: Stack[-2] = (bool) 1
0xd20: Return(); Pop(0)

0xd21: Stack[-2] = (bool) 0
0xd22: Return(); Pop(0)

0xd23: PushEmpty()
0xd24: PushEmpty(int, string)
0xd25: Stack[-1] = "ood6Laska1"
0xd26: Call2 0xbcb

0xd27: Pop(1)
0xd28: Push((int) 0)
0xd29: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2b: Stack[-2] = (bool) 1
0xd2c: Return(); Pop(0)

0xd2d: Stack[-2] = (bool) 0
0xd2e: Return(); Pop(0)

0xd2f: PushEmpty()
0xd30: PushEmpty(int, string)
0xd31: Stack[-1] = "d11q01"
0xd32: Call2 0xbcb

0xd33: Pop(1)
0xd34: Push((int) 3)
0xd35: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd36: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd37: Stack[-2] = (bool) 1
0xd38: Return(); Pop(0)

0xd39: Stack[-2] = (bool) 0
0xd3a: Return(); Pop(0)

0xd3b: PushEmpty()
0xd3c: PushEmpty(int, string)
0xd3d: Stack[-1] = "ood3Laska1"
0xd3e: Call2 0xbcb

0xd3f: Pop(1)
0xd40: Push((int) 0)
0xd41: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd45; Pop(1)

0xd43: Stack[-2] = (bool) 1
0xd44: Return(); Pop(0)

0xd45: Stack[-2] = (bool) 0
0xd46: Return(); Pop(0)

0xd47: PushEmpty(object, object)
0xd48: Push((int) 117)
0xd49: Push((int) 1)
0xd4a: Push((int) 513740)
0xd4b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd4c: Pop(3)
0xd4d: PushEmpty(bool, object, int)
0xd4e: Stack[-2] = Stack[-4]
0xd4f: Stack[-1] = (int) 111
0xd50: Call2 0xd61

0xd51: Pop(3)
0xd52: Return(); Pop(2)

0xd53: Stack[-1] = 0
0xd54: PushEmpty(object, object)
0xd55: @ GetDiaryRoot(Stack[-1])
0xd56: Pop(0)
0xd57: Pop(0); Push((bool) Stack[-1] == 0)
0xd58: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd59: Push("Can't retrieve diary root")
0xd5a: @ Trace(Stack[-1])
0xd5b: Pop(1)
0xd5c: Stack[-3] = (bool) 0
0xd5d: Return(); Pop(2)

0xd5e: Stack[-3] = Stack[-1]
0xd5f: Return(); Pop(2)

0xd60: Stack[-1] = 0
0xd61: PushEmpty(object, object, int, object, object, int)
0xd62: PushEmpty(object)
0xd63: Call2 0xd54

0xd64: Stack[-4] = Stack[-1]
0xd65: Pop(1)
0xd66: @@ Find(Stack[-7], Stack[-2])
0xd67: Pop(0)
0xd68: Pop(0); Push((bool) Stack[-2] == 0)
0xd69: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd6a: Push("Can't find diary parent with id: ")
0xd6b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd6c: @ Trace(Stack[-1])
0xd6d: Pop(1)
0xd6e: Stack[-9] = (bool) 0
0xd6f: Return(); Pop(6)

0xd70: @@ AddChild(Stack[-8])
0xd71: Pop(0)
0xd72: Push((int) 7)
0xd73: @ SendWorldWndMessage(Stack[-1])
0xd74: Pop(1)
0xd75: @@ GetCategory(Stack[-1])
0xd76: Pop(0)
0xd77: @ SetDiarySection(Stack[-1])
0xd78: Pop(0)
0xd79: Stack[-9] = (bool) 0
0xd7a: Return(); Pop(6)

0xd7b: Stack[-2] = 0
0xd7c: Stack[-3] = 0
0xd7d: PushEmpty(object, object, object, object)
0xd7e: @ GetMainOutdoorScene(Stack[-2])
0xd7f: Pop(0)
0xd80: Pop(0); Push((bool) Stack[-2] == 0)
0xd81: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd82: Push("Can't find main outdoor scene")
0xd83: @ Trace(Stack[-1])
0xd84: Pop(1)
0xd85: Stack[-1] = 0
0xd86: Stack[-5] = Stack[-1]
0xd87: Return(); Pop(4)

0xd88: @@ GetMap(Stack[-1])
0xd89: Pop(0)
0xd8a: Stack[-5] = Stack[-1]
0xd8b: Return(); Pop(4)

0xd8c: Stack[-1] = 0
0xd8d: Stack[-2] = 0
0xd8e: PushEmpty(int, int)
0xd8f: Push("branch")
0xd90: @ GetVariable(Stack[-1], Stack[-2])
0xd91: Pop(1)
0xd92: Push((int) 0)
0xd93: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd94: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd95: Stack[-3] = (int) 1
0xd96: Return(); Pop(2)

0xd97: GOTO 0xd9d

0xd98: Push((int) 1)
0xd99: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xd9d; Pop(1)

0xd9b: Stack[-3] = (int) 2
0xd9c: Return(); Pop(2)

0xd9d: Stack[-3] = (int) 3
0xd9e: Return(); Pop(2)

0xd9f: PushEmpty(int, int)
0xda0: Push("mt_laska")
0xda1: @ GetVariable(Stack[-1], Stack[-2])
0xda2: Pop(1)
0xda3: Pop(0); Push((bool) Stack[-1] == 0)
0xda4: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xda5: PushEmpty(int, object)
0xda6: Stack[-1] = Stack[-5]
0xda7: Push(-2, 1); TaskCall(2)
0xda8: Call2 0x103

0xda9: Pop(-2, 1); TaskReturn
0xdaa: Pop(2)
0xdab: Push("mt_laska")
0xdac: Push((int) 1)
0xdad: @ SetVariable(Stack[-2], Stack[-1])
0xdae: Pop(2)
0xdaf: PushEmpty(bool, int)
0xdb0: Stack[-1] = (int) 2
0xdb1: Call2 0xc43

0xdb2: Pop(1)
0xdb3: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb4: PushEmpty(int, object)
0xdb5: Stack[-1] = Stack[-5]
0xdb6: Push(-2, 1); TaskCall(4)
0xdb7: Call2 0x218

0xdb8: Pop(-2, 1); TaskReturn
0xdb9: Pop(2)
0xdba: Return(); Pop(2)

0xdbb: PushEmpty(bool, int)
0xdbc: Stack[-1] = (int) 3
0xdbd: Call2 0xc43

0xdbe: Pop(1)
0xdbf: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdc0: PushEmpty(int, object)
0xdc1: Stack[-1] = Stack[-5]
0xdc2: Push(-2, 1); TaskCall(6)
0xdc3: Call2 0x41f

0xdc4: Pop(-2, 1); TaskReturn
0xdc5: Pop(2)
0xdc6: Return(); Pop(2)

0xdc7: PushEmpty(bool, int)
0xdc8: Stack[-1] = (int) 6
0xdc9: Call2 0xc43

0xdca: Pop(1)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdcc: PushEmpty(int, object)
0xdcd: Stack[-1] = Stack[-5]
0xdce: Push(-2, 1); TaskCall(8)
0xdcf: Call2 0x556

0xdd0: Pop(-2, 1); TaskReturn
0xdd1: Pop(2)
0xdd2: Return(); Pop(2)

0xdd3: PushEmpty(bool, int)
0xdd4: Stack[-1] = (int) 11
0xdd5: Call2 0xc43

0xdd6: Pop(1)
0xdd7: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdd8: PushEmpty(int, object)
0xdd9: Stack[-1] = Stack[-5]
0xdda: Push(-2, 1); TaskCall(10)
0xddb: Call2 0x713

0xddc: Pop(-2, 1); TaskReturn
0xddd: Pop(2)
0xdde: Return(); Pop(2)

0xddf: PushEmpty(bool, int)
0xde0: Stack[-1] = (int) 12
0xde1: Call2 0xc43

0xde2: Pop(1)
0xde3: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde4: PushEmpty(int, object)
0xde5: Stack[-1] = Stack[-5]
0xde6: Push(-2, 1); TaskCall(0)
0xde7: Call2 0x0

0xde8: Pop(-2, 1); TaskReturn
0xde9: Pop(2)
0xdea: Return(); Pop(2)

0xdeb: PushEmpty(int, object)
0xdec: Stack[-1] = Stack[-5]
0xded: Push(-2, 1); TaskCall(12)
0xdee: Call2 0x88f

0xdef: Pop(-2, 1); TaskReturn
0xdf0: Pop(2)
0xdf1: Return(); Pop(2)

