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
	Untrust
	Autizm
	Drunk
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png
	playsound
	giveitem
	quest_d7_03
	remove_maria
	ood7Petr2
	ood3Petr2
	ood3Petr3
	ood3Petr4
	ood3Petr5
	ood2Petr4
	ood2Petr5
	lens is given
	lens
	KnowTvirin
	ood2Petr1
	ood2Petr2
	ood2Petr3
	d2q02
	d2q02PetrGotoAndrei
	pt_map_andrei
	AddMark
	KnowPetr
	d7q02
	d7q02BirdBalahon
	d7q02AlexandrGotoPetr
	FindMark
	Remove
	d7q02MarkGotoAlexandr
	d7q02MarkGotoCemetery
	quest_d7_02
	completed
	ood7Petr1
	birdmask is given
	bird_mask
	ood11Petr1
	ood11Petr2
	ood3Petr1
	d7q03
	d11q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	mt_petr

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xf6c
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x222 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5ba Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x889 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf7 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe13 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf42 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xfb5 Vars = (int)
		EVENT_6 Op = 0xfdb Vars = ()
		EVENT_5 Op = 0xfea Vars = ()
		EVENT_45 Op = 0xff7 Vars = (bool)
		EVENT_0 Op = 0x1003 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x108c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x121d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x121b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x121f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1221

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x149d

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
0x31: Call2 0x11a2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x10e3

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
0x48: Call2 0x10d1

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

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0x129f

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x90

0x5f: Pop(1)
0x60: Push((int) 500170)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500171)
0x66: Push((int) 210)
0x67: Push((int) 206)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500172)
0x6b: Push((int) 209)
0x6c: Push((int) 207)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x1223

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x116d

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
0x92: Call2 0x1223

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
0xa2: Call2 0x117d

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x119b

0xab: Pop(0)
0xac: Push((int) 205)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x129f

0xb3: Pop(2)
0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Neutral"
0xb6: Call2 0x90

0xb7: Pop(1)
0xb8: Push((int) 500170)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 500171)
0xbe: Push((int) 210)
0xbf: Push((int) 206)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 500172)
0xc3: Push((int) 209)
0xc4: Push((int) 207)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 209)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 500174)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 500178)
0xd5: Push((int) 218)
0xd6: Push((int) 213)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 210)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral"
0xdf: Call2 0x90

0xe0: Pop(1)
0xe1: Push((int) 500175)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 500176)
0xe7: Push((int) 215)
0xe8: Push((int) 211)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 500177)
0xec: Push((int) 214)
0xed: Push((int) 212)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 214)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Neutral"
0xf6: Call2 0x90

0xf7: Pop(1)
0xf8: Push((int) 500179)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 500181)
0xfe: Push((int) 218)
0xff: Push((int) 216)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 215)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0x90

0x109: Pop(1)
0x10a: Push((int) 500180)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 500182)
0x110: Push((int) 218)
0x111: Push((int) 217)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 218)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0x90

0x11b: Pop(1)
0x11c: Push((int) 500183)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 500184)
0x122: Push((int) -1)
0x123: Push((int) 221)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 500185)
0x127: Push((int) -1)
0x128: Push((int) 222)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12d: PushEmpty(bool)
0x12e: Call2 0x1223

0x12f: Pop(0)
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: @ lshStopAnimation()
0x132: Pop(0)
0x133: GOTO 0x136

0x134: @ StopAnimation()
0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: GOTO 0xa7

0x138: Return(); Pop(0)

0x139: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13b: PushEmpty(bool, object, float)
0x13c: Stack[-2] = Stack[-12]
0x13d: Stack[-1] = (float) 70.0
0x13e: Call2 0x108c

0x13f: Pop(2)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ CreateDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(int)
0x147: Call2 0x121d

0x148: Pop(0)
0x149: @@ SetNPCName(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(int)
0x14c: Call2 0x121b

0x14d: Pop(0)
0x14e: @@ SetNPCDescription(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(string)
0x151: Call2 0x121f

0x152: Pop(0)
0x153: @@ SetPhoto(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(string)
0x156: Call2 0x1221

0x157: Pop(0)
0x158: @@ SetPhoto2(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty(int)
0x15b: Call2 0x149d

0x15c: Pop(0)
0x15d: @@ SetPlayerName(Stack[-1])
0x15e: Pop(1)
0x15f: Stack[-2] = (int) -1
0x160: @ IsOverrideActive(Stack[-3])
0x161: Pop(0)
0x162: Push(Stack[-3])
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-10] = (int) -2
0x165: Return(); Pop(8)

0x166: @ DoDialog(Stack[-4])
0x167: Pop(0)
0x168: PushEmpty(bool, object)
0x169: PushEmpty(object)
0x16a: Call2 0x11a2

0x16b: Stack[-2] = Stack[-1]
0x16c: Pop(1)
0x16d: Call2 0x10e3

0x16e: Pop(2)
0x16f: PushEmpty(object, object)
0x170: Stack[-2] = Stack[-11]
0x171: Stack[-1] = Stack[-6]
0x172: Push(-2, 4); TaskCall(3)
0x173: Call2 0x18a

0x174: Pop(-2, 4); TaskReturn
0x175: Pop(2)
0x176: @@ IsDialogEnd(Stack[-1])
0x177: Pop(0)
0x178: Pop(0); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: @ sync()
0x17b: Pop(0)
0x17c: @@ IsDialogEnd(Stack[-1])
0x17d: Pop(0)
0x17e: GOTO 0x178

0x17f: PushEmpty(object)
0x180: Stack[-1] = Stack[-10]
0x181: Call2 0x10d1

0x182: Pop(1)
0x183: @ StopDialog(Stack[-4])
0x184: Pop(0)
0x185: @@ GetReturnValue(Stack[-2])
0x186: Pop(0)
0x187: Stack[-10] = Stack[-2]
0x188: Return(); Pop(8)

0x189: Stack[-4] = 0
0x18a: PushEmpty()
0x18b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18e: Push((int) 1)
0x18f: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Untrust"
0x192: Call2 0x20c

0x193: Pop(1)
0x194: Push((int) 506877)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: PushEmpty(bool)
0x19a: Stack[-1] = (bool) 0
0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x136f

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a0: PushEmpty(bool, object)
0x1a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a2: Call2 0x139f

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a7: Push((int) 506878)
0x1a8: Push((int) 7585)
0x1a9: Push((int) 7584)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: PushEmpty(bool)
0x1ad: Stack[-1] = (bool) 0
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0x137b

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0x13b7

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: Push((int) 507431)
0x1bb: Push((int) 8203)
0x1bc: Push((int) 8202)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: PushEmpty(bool)
0x1c0: Stack[-1] = (bool) 0
0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Call2 0x1387

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x1393

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: Push((int) 506884)
0x1ce: Push((int) 7591)
0x1cf: Push((int) 7590)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x1357

0x1d5: Pop(1)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: Push((int) 525164)
0x1d8: Push((int) 26526)
0x1d9: Push((int) 26525)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: PushEmpty(bool, object)
0x1dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Call2 0x1363

0x1df: Pop(1)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: Push((int) 525171)
0x1e2: Push((int) 26534)
0x1e3: Push((int) 26533)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Push((int) 507529)
0x1e7: Push((int) -1)
0x1e8: Push((int) 8311)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: GOTO 0x1ee

0x1ec: Return(); Pop(0)

0x1ed: GOTO 0x18e

0x1ee: PushEmpty(bool)
0x1ef: Call2 0x1223

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f2: @ lshWaitForAnimEnd()
0x1f3: Pop(0)
0x1f4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x1fc

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1f9: Call2 0x116d

0x1fa: Pop(1)
0x1fb: GOTO 0x1f2

0x1fc: GOTO 0x20b

0x1fd: Push("all")
0x1fe: Push("idle")
0x1ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: @ WaitForAnimEnd()
0x202: Pop(0)
0x203: Push( Stack[3 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x20b

0x206: Push("all")
0x207: Push("idle")
0x208: @ PlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: GOTO 0x201

0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: PushEmpty(bool)
0x20e: Call2 0x1223

0x20f: Pop(0)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Return(); Pop(0)

0x213: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Return(); Pop(0)

0x216: PushEmpty(string, bool)
0x217: Stack[-2] = Stack[-3]
0x218: Push("")
0x219: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21b: Stack[-1] = (bool) 0
0x21c: GOTO 0x21e

0x21d: Stack[-1] = (bool) 1
0x21e: Call2 0x117d

0x21f: Pop(2)
0x220: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Return(); Pop(0)

0x222: PushEmpty()
0x223: Push((int) 1)
0x224: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x225: PushEmpty()
0x226: Call2 0x119b

0x227: Pop(0)
0x228: Push((int) 8221)
0x229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0x126d

0x22f: Pop(2)
0x230: PushEmpty(object, object)
0x231: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x232: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x233: Call2 0x127f

0x234: Pop(2)
0x235: Push((int) 8222)
0x236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: PushEmpty(object, object)
0x239: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23b: Call2 0x126d

0x23c: Pop(2)
0x23d: Push((int) 8202)
0x23e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call2 0x1273

0x244: Pop(2)
0x245: Push((int) 8210)
0x246: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: PushEmpty(object, object)
0x249: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24b: Call2 0x1288

0x24c: Pop(2)
0x24d: Push((int) 7590)
0x24e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(object, object)
0x251: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x252: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x253: Call2 0x1279

0x254: Pop(2)
0x255: Push((int) 26525)
0x256: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: PushEmpty(object, object)
0x259: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25b: Call2 0x1250

0x25c: Pop(2)
0x25d: Push((int) 26533)
0x25e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: PushEmpty(object, object)
0x261: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x262: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x263: Call2 0x1256

0x264: Pop(2)
0x265: Push((int) 7583)
0x266: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x268: PushEmpty(string)
0x269: Stack[-1] = "Untrust"
0x26a: Call2 0x20c

0x26b: Pop(1)
0x26c: Push((int) 506877)
0x26d: @@ SetMessage(Stack[-1])
0x26e: Pop(1)
0x26f: @@ ClearReplies()
0x270: Pop(0)
0x271: PushEmpty(bool)
0x272: Stack[-1] = (bool) 0
0x273: PushEmpty(bool, object)
0x274: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x275: Call2 0x136f

0x276: Pop(1)
0x277: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Call2 0x139f

0x27b: Pop(1)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 1
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: Push((int) 506878)
0x280: Push((int) 7585)
0x281: Push((int) 7584)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: PushEmpty(bool)
0x285: Stack[-1] = (bool) 0
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0x137b

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28d: Call2 0x13b7

0x28e: Pop(1)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Stack[-1] = (bool) 1
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: Push((int) 507431)
0x293: Push((int) 8203)
0x294: Push((int) 8202)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: PushEmpty(bool)
0x298: Stack[-1] = (bool) 0
0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29b: Call2 0x1387

0x29c: Pop(1)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0x1393

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 1
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: Push((int) 506884)
0x2a6: Push((int) 7591)
0x2a7: Push((int) 7590)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: PushEmpty(bool, object)
0x2ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ac: Call2 0x1357

0x2ad: Pop(1)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: Push((int) 525164)
0x2b0: Push((int) 26526)
0x2b1: Push((int) 26525)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: PushEmpty(bool, object)
0x2b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b6: Call2 0x1363

0x2b7: Pop(1)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: Push((int) 525171)
0x2ba: Push((int) 26534)
0x2bb: Push((int) 26533)
0x2bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bd: Pop(3)
0x2be: Push((int) 507529)
0x2bf: Push((int) -1)
0x2c0: Push((int) 8311)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 26534)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral"
0x2c9: Call2 0x20c

0x2ca: Pop(1)
0x2cb: Push((int) 525172)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 525173)
0x2d1: Push((int) 26536)
0x2d2: Push((int) 26535)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Push((int) 525182)
0x2d6: Push((int) 26536)
0x2d7: Push((int) 26544)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 26536)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Neutral"
0x2e0: Call2 0x20c

0x2e1: Pop(1)
0x2e2: Push((int) 525174)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 525175)
0x2e8: Push((int) 26538)
0x2e9: Push((int) 26537)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Push((int) 525181)
0x2ed: Push((int) -1)
0x2ee: Push((int) 26543)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: Return(); Pop(0)

0x2f2: Push((int) 26538)
0x2f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Neutral"
0x2f7: Call2 0x20c

0x2f8: Pop(1)
0x2f9: Push((int) 525176)
0x2fa: @@ SetMessage(Stack[-1])
0x2fb: Pop(1)
0x2fc: @@ ClearReplies()
0x2fd: Pop(0)
0x2fe: Push((int) 525177)
0x2ff: Push((int) 26540)
0x300: Push((int) 26539)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Push((int) 525180)
0x304: Push((int) -1)
0x305: Push((int) 26542)
0x306: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x307: Pop(3)
0x308: Return(); Pop(0)

0x309: Push((int) 26540)
0x30a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral"
0x30e: Call2 0x20c

0x30f: Pop(1)
0x310: Push((int) 525178)
0x311: @@ SetMessage(Stack[-1])
0x312: Pop(1)
0x313: @@ ClearReplies()
0x314: Pop(0)
0x315: Push((int) 525179)
0x316: Push((int) -1)
0x317: Push((int) 26541)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: Push((int) 534039)
0x31b: Push((int) -1)
0x31c: Push((int) 35617)
0x31d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31e: Pop(3)
0x31f: Return(); Pop(0)

0x320: Push((int) 26526)
0x321: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral"
0x325: Call2 0x20c

0x326: Pop(1)
0x327: Push((int) 525165)
0x328: @@ SetMessage(Stack[-1])
0x329: Pop(1)
0x32a: @@ ClearReplies()
0x32b: Pop(0)
0x32c: Push((int) 525166)
0x32d: Push((int) 26528)
0x32e: Push((int) 26527)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 525170)
0x332: Push((int) 26528)
0x333: Push((int) 26531)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: Return(); Pop(0)

0x337: Push((int) 26528)
0x338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33a: PushEmpty(string)
0x33b: Stack[-1] = "Neutral"
0x33c: Call2 0x20c

0x33d: Pop(1)
0x33e: Push((int) 525167)
0x33f: @@ SetMessage(Stack[-1])
0x340: Pop(1)
0x341: @@ ClearReplies()
0x342: Pop(0)
0x343: Push((int) 525168)
0x344: Push((int) -1)
0x345: Push((int) 26529)
0x346: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(3)
0x348: Push((int) 525169)
0x349: Push((int) -1)
0x34a: Push((int) 26530)
0x34b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 7591)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral"
0x353: Call2 0x20c

0x354: Pop(1)
0x355: Push((int) 506885)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: Push((int) 507430)
0x35b: Push((int) 10354)
0x35c: Push((int) 8201)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: Push((int) 533996)
0x360: Push((int) -1)
0x361: Push((int) 35570)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Return(); Pop(0)

0x365: Push((int) 10354)
0x366: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x368: PushEmpty(string)
0x369: Stack[-1] = "Neutral"
0x36a: Call2 0x20c

0x36b: Pop(1)
0x36c: Push((int) 509422)
0x36d: @@ SetMessage(Stack[-1])
0x36e: Pop(1)
0x36f: @@ ClearReplies()
0x370: Pop(0)
0x371: Push((int) 509423)
0x372: Push((int) 10356)
0x373: Push((int) 10355)
0x374: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(3)
0x376: Push((int) 509432)
0x377: Push((int) 10366)
0x378: Push((int) 10365)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 10366)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Neutral"
0x381: Call2 0x20c

0x382: Pop(1)
0x383: Push((int) 509433)
0x384: @@ SetMessage(Stack[-1])
0x385: Pop(1)
0x386: @@ ClearReplies()
0x387: Pop(0)
0x388: Push((int) 509434)
0x389: Push((int) 10356)
0x38a: Push((int) 10367)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: Return(); Pop(0)

0x38e: Push((int) 10356)
0x38f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x391: PushEmpty(string)
0x392: Stack[-1] = "Neutral"
0x393: Call2 0x20c

0x394: Pop(1)
0x395: Push((int) 509424)
0x396: @@ SetMessage(Stack[-1])
0x397: Pop(1)
0x398: @@ ClearReplies()
0x399: Pop(0)
0x39a: Push((int) 509425)
0x39b: Push((int) 10358)
0x39c: Push((int) 10357)
0x39d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39e: Pop(3)
0x39f: Push((int) 509429)
0x3a0: Push((int) 10362)
0x3a1: Push((int) 10361)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Return(); Pop(0)

0x3a5: Push((int) 10362)
0x3a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3a8: PushEmpty(string)
0x3a9: Stack[-1] = "Neutral"
0x3aa: Call2 0x20c

0x3ab: Pop(1)
0x3ac: Push((int) 509430)
0x3ad: @@ SetMessage(Stack[-1])
0x3ae: Pop(1)
0x3af: @@ ClearReplies()
0x3b0: Pop(0)
0x3b1: Push((int) 509431)
0x3b2: Push((int) 10358)
0x3b3: Push((int) 10363)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: Push((int) 10358)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Neutral"
0x3bc: Call2 0x20c

0x3bd: Pop(1)
0x3be: Push((int) 509426)
0x3bf: @@ SetMessage(Stack[-1])
0x3c0: Pop(1)
0x3c1: @@ ClearReplies()
0x3c2: Pop(0)
0x3c3: Push((int) 509427)
0x3c4: Push((int) -1)
0x3c5: Push((int) 10359)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: Push((int) 509428)
0x3c9: Push((int) -1)
0x3ca: Push((int) 10360)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Return(); Pop(0)

0x3ce: Push((int) 8203)
0x3cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = "Neutral"
0x3d3: Call2 0x20c

0x3d4: Pop(1)
0x3d5: Push((int) 507432)
0x3d6: @@ SetMessage(Stack[-1])
0x3d7: Pop(1)
0x3d8: @@ ClearReplies()
0x3d9: Pop(0)
0x3da: Push((int) 507433)
0x3db: Push((int) 7589)
0x3dc: Push((int) 8204)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Push((int) 534034)
0x3e0: Push((int) 35612)
0x3e1: Push((int) 35611)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 35612)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Untrust"
0x3ea: Call2 0x20c

0x3eb: Pop(1)
0x3ec: Push((int) 534035)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 534036)
0x3f2: Push((int) -1)
0x3f3: Push((int) 35613)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Return(); Pop(0)

0x3f7: Push((int) 7589)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Untrust"
0x3fc: Call2 0x20c

0x3fd: Pop(1)
0x3fe: Push((int) 506883)
0x3ff: @@ SetMessage(Stack[-1])
0x400: Pop(1)
0x401: @@ ClearReplies()
0x402: Pop(0)
0x403: Push((int) 507435)
0x404: Push((int) 8207)
0x405: Push((int) 8206)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: Push((int) 507440)
0x409: Push((int) 8207)
0x40a: Push((int) 8211)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: Push((int) 8207)
0x40f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x411: PushEmpty(string)
0x412: Stack[-1] = "Untrust"
0x413: Call2 0x20c

0x414: Pop(1)
0x415: Push((int) 507436)
0x416: @@ SetMessage(Stack[-1])
0x417: Pop(1)
0x418: @@ ClearReplies()
0x419: Pop(0)
0x41a: Push((int) 507437)
0x41b: Push((int) 8209)
0x41c: Push((int) 8208)
0x41d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(3)
0x41f: Push((int) 507441)
0x420: Push((int) 8209)
0x421: Push((int) 8213)
0x422: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x423: Pop(3)
0x424: Return(); Pop(0)

0x425: Push((int) 8209)
0x426: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x428: PushEmpty(string)
0x429: Stack[-1] = "Untrust"
0x42a: Call2 0x20c

0x42b: Pop(1)
0x42c: Push((int) 507438)
0x42d: @@ SetMessage(Stack[-1])
0x42e: Pop(1)
0x42f: @@ ClearReplies()
0x430: Pop(0)
0x431: Push((int) 507439)
0x432: Push((int) -1)
0x433: Push((int) 8210)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: PushEmpty(bool, object)
0x437: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x438: Call2 0x13c3

0x439: Pop(1)
0x43a: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43b: Push((int) 534037)
0x43c: Push((int) -1)
0x43d: Push((int) 35614)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: Push((int) 7585)
0x442: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x444: PushEmpty(string)
0x445: Stack[-1] = "Untrust"
0x446: Call2 0x20c

0x447: Pop(1)
0x448: Push((int) 506879)
0x449: @@ SetMessage(Stack[-1])
0x44a: Pop(1)
0x44b: @@ ClearReplies()
0x44c: Pop(0)
0x44d: Push((int) 506880)
0x44e: Push((int) 7587)
0x44f: Push((int) 7586)
0x450: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x451: Pop(3)
0x452: Push((int) 507450)
0x453: Push((int) 8216)
0x454: Push((int) 8223)
0x455: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x456: Pop(3)
0x457: Return(); Pop(0)

0x458: Push((int) 7587)
0x459: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x45b: PushEmpty(object, object)
0x45c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x45d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45e: Call2 0x1267

0x45f: Pop(2)
0x460: PushEmpty(string)
0x461: Stack[-1] = "Untrust"
0x462: Call2 0x20c

0x463: Pop(1)
0x464: Push((int) 506881)
0x465: @@ SetMessage(Stack[-1])
0x466: Pop(1)
0x467: @@ ClearReplies()
0x468: Pop(0)
0x469: Push((int) 507442)
0x46a: Push((int) 8216)
0x46b: Push((int) 8215)
0x46c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46d: Pop(3)
0x46e: Push((int) 507451)
0x46f: Push((int) 8226)
0x470: Push((int) 8225)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Push((int) 8226)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x477: PushEmpty(string)
0x478: Stack[-1] = "Neutral"
0x479: Call2 0x20c

0x47a: Pop(1)
0x47b: Push((int) 507452)
0x47c: @@ SetMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ ClearReplies()
0x47f: Pop(0)
0x480: Push((int) 507453)
0x481: Push((int) 8216)
0x482: Push((int) 8227)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: Push((int) 8216)
0x487: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Autizm"
0x48b: Call2 0x20c

0x48c: Pop(1)
0x48d: Push((int) 507443)
0x48e: @@ SetMessage(Stack[-1])
0x48f: Pop(1)
0x490: @@ ClearReplies()
0x491: Pop(0)
0x492: Push((int) 507444)
0x493: Push((int) 8218)
0x494: Push((int) 8217)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Push((int) 534038)
0x498: Push((int) 8218)
0x499: Push((int) 35615)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Return(); Pop(0)

0x49d: Push((int) 8218)
0x49e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4a0: PushEmpty(string)
0x4a1: Stack[-1] = "Autizm"
0x4a2: Call2 0x20c

0x4a3: Pop(1)
0x4a4: Push((int) 507445)
0x4a5: @@ SetMessage(Stack[-1])
0x4a6: Pop(1)
0x4a7: @@ ClearReplies()
0x4a8: Pop(0)
0x4a9: Push((int) 507446)
0x4aa: Push((int) 8220)
0x4ab: Push((int) 8219)
0x4ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(3)
0x4ae: PushEmpty(bool, object)
0x4af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Call2 0x13ab

0x4b1: Pop(1)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b3: Push((int) 507449)
0x4b4: Push((int) -1)
0x4b5: Push((int) 8222)
0x4b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b7: Pop(3)
0x4b8: Return(); Pop(0)

0x4b9: Push((int) 8220)
0x4ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "Neutral"
0x4be: Call2 0x20c

0x4bf: Pop(1)
0x4c0: Push((int) 507447)
0x4c1: @@ SetMessage(Stack[-1])
0x4c2: Pop(1)
0x4c3: @@ ClearReplies()
0x4c4: Pop(0)
0x4c5: Push((int) 507448)
0x4c6: Push((int) -1)
0x4c7: Push((int) 8221)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Return(); Pop(0)

0x4cb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4cc: PushEmpty(bool)
0x4cd: Call2 0x1223

0x4ce: Pop(0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d0: @ lshStopAnimation()
0x4d1: Pop(0)
0x4d2: GOTO 0x4d5

0x4d3: @ StopAnimation()
0x4d4: Pop(0)
0x4d5: Return(); Pop(0)

0x4d6: GOTO 0x223

0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4d9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4da: PushEmpty(bool, object, float)
0x4db: Stack[-2] = Stack[-12]
0x4dc: Stack[-1] = (float) 70.0
0x4dd: Call2 0x108c

0x4de: Pop(2)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-10] = (int) -2
0x4e2: Return(); Pop(8)

0x4e3: @ CreateDialog(Stack[-4])
0x4e4: Pop(0)
0x4e5: PushEmpty(int)
0x4e6: Call2 0x121d

0x4e7: Pop(0)
0x4e8: @@ SetNPCName(Stack[-1])
0x4e9: Pop(1)
0x4ea: PushEmpty(int)
0x4eb: Call2 0x121b

0x4ec: Pop(0)
0x4ed: @@ SetNPCDescription(Stack[-1])
0x4ee: Pop(1)
0x4ef: PushEmpty(string)
0x4f0: Call2 0x121f

0x4f1: Pop(0)
0x4f2: @@ SetPhoto(Stack[-1])
0x4f3: Pop(1)
0x4f4: PushEmpty(string)
0x4f5: Call2 0x1221

0x4f6: Pop(0)
0x4f7: @@ SetPhoto2(Stack[-1])
0x4f8: Pop(1)
0x4f9: PushEmpty(int)
0x4fa: Call2 0x149d

0x4fb: Pop(0)
0x4fc: @@ SetPlayerName(Stack[-1])
0x4fd: Pop(1)
0x4fe: Stack[-2] = (int) -1
0x4ff: @ IsOverrideActive(Stack[-3])
0x500: Pop(0)
0x501: Push(Stack[-3])
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-10] = (int) -2
0x504: Return(); Pop(8)

0x505: @ DoDialog(Stack[-4])
0x506: Pop(0)
0x507: PushEmpty(bool, object)
0x508: PushEmpty(object)
0x509: Call2 0x11a2

0x50a: Stack[-2] = Stack[-1]
0x50b: Pop(1)
0x50c: Call2 0x10e3

0x50d: Pop(2)
0x50e: PushEmpty(object, object)
0x50f: Stack[-2] = Stack[-11]
0x510: Stack[-1] = Stack[-6]
0x511: Push(-2, 4); TaskCall(5)
0x512: Call2 0x529

0x513: Pop(-2, 4); TaskReturn
0x514: Pop(2)
0x515: @@ IsDialogEnd(Stack[-1])
0x516: Pop(0)
0x517: Pop(0); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x519: @ sync()
0x51a: Pop(0)
0x51b: @@ IsDialogEnd(Stack[-1])
0x51c: Pop(0)
0x51d: GOTO 0x517

0x51e: PushEmpty(object)
0x51f: Stack[-1] = Stack[-10]
0x520: Call2 0x10d1

0x521: Pop(1)
0x522: @ StopDialog(Stack[-4])
0x523: Pop(0)
0x524: @@ GetReturnValue(Stack[-2])
0x525: Pop(0)
0x526: Stack[-10] = Stack[-2]
0x527: Return(); Pop(8)

0x528: Stack[-4] = 0
0x529: PushEmpty()
0x52a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x52b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x52c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x52d: Push((int) 1)
0x52e: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x52f: PushEmpty(bool, object)
0x530: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x531: Call2 0x1423

0x532: Pop(1)
0x533: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x534: PushEmpty(object, object)
0x535: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x536: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x537: Call2 0x12fd

0x538: Pop(2)
0x539: PushEmpty(string)
0x53a: Stack[-1] = "Drunk"
0x53b: Call2 0x5a4

0x53c: Pop(1)
0x53d: Push((int) 510030)
0x53e: @@ SetMessage(Stack[-1])
0x53f: Pop(1)
0x540: @@ ClearReplies()
0x541: Pop(0)
0x542: Push((int) 510031)
0x543: Push((int) 11054)
0x544: Push((int) 11053)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Push((int) 510039)
0x548: Push((int) 11063)
0x549: Push((int) 11062)
0x54a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54b: Pop(3)
0x54c: GOTO 0x586

0x54d: PushEmpty(string)
0x54e: Stack[-1] = "Drunk"
0x54f: Call2 0x5a4

0x550: Pop(1)
0x551: Push((int) 533997)
0x552: @@ SetMessage(Stack[-1])
0x553: Pop(1)
0x554: @@ ClearReplies()
0x555: Pop(0)
0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x558: Call2 0x1327

0x559: Pop(1)
0x55a: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55b: Push((int) 533998)
0x55c: Push((int) 35573)
0x55d: Push((int) 35572)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: PushEmpty(bool, object)
0x561: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x562: Call2 0x1333

0x563: Pop(1)
0x564: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x565: Push((int) 534011)
0x566: Push((int) 35587)
0x567: Push((int) 35586)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: PushEmpty(bool, object)
0x56b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56c: Call2 0x133f

0x56d: Pop(1)
0x56e: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x56f: Push((int) 534019)
0x570: Push((int) 35595)
0x571: Push((int) 35594)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: PushEmpty(bool, object)
0x575: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x576: Call2 0x134b

0x577: Pop(1)
0x578: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x579: Push((int) 534025)
0x57a: Push((int) 35602)
0x57b: Push((int) 35601)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Push((int) 534033)
0x57f: Push((int) -1)
0x580: Push((int) 35610)
0x581: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x582: Pop(3)
0x583: GOTO 0x586

0x584: Return(); Pop(0)

0x585: GOTO 0x52d

0x586: PushEmpty(bool)
0x587: Call2 0x1223

0x588: Pop(0)
0x589: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x58a: @ lshWaitForAnimEnd()
0x58b: Pop(0)
0x58c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x58d: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58e: GOTO 0x594

0x58f: PushEmpty(string)
0x590: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x591: Call2 0x116d

0x592: Pop(1)
0x593: GOTO 0x58a

0x594: GOTO 0x5a3

0x595: Push("all")
0x596: Push("idle")
0x597: @ PlayAnimation(Stack[-2], Stack[-1])
0x598: Pop(2)
0x599: @ WaitForAnimEnd()
0x59a: Pop(0)
0x59b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: GOTO 0x5a3

0x59e: Push("all")
0x59f: Push("idle")
0x5a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x5a1: Pop(2)
0x5a2: GOTO 0x599

0x5a3: Return(); Pop(0)

0x5a4: PushEmpty()
0x5a5: PushEmpty(bool)
0x5a6: Call2 0x1223

0x5a7: Pop(0)
0x5a8: Pop(1); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5aa: Return(); Pop(0)

0x5ab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: Return(); Pop(0)

0x5ae: PushEmpty(string, bool)
0x5af: Stack[-2] = Stack[-3]
0x5b0: Push("")
0x5b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-1] = (bool) 0
0x5b4: GOTO 0x5b6

0x5b5: Stack[-1] = (bool) 1
0x5b6: Call2 0x117d

0x5b7: Pop(2)
0x5b8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5b9: Return(); Pop(0)

0x5ba: PushEmpty()
0x5bb: Push((int) 1)
0x5bc: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x5bd: PushEmpty()
0x5be: Call2 0x119b

0x5bf: Pop(0)
0x5c0: Push((int) 35572)
0x5c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c3: PushEmpty(object, object)
0x5c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c6: Call2 0x1238

0x5c7: Pop(2)
0x5c8: Push((int) 35586)
0x5c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cb: PushEmpty(object, object)
0x5cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ce: Call2 0x123e

0x5cf: Pop(2)
0x5d0: Push((int) 35594)
0x5d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d3: PushEmpty(object, object)
0x5d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d6: Call2 0x1244

0x5d7: Pop(2)
0x5d8: Push((int) 35601)
0x5d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5db: PushEmpty(object, object)
0x5dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5de: Call2 0x124a

0x5df: Pop(2)
0x5e0: Push((int) 11052)
0x5e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x5e3: PushEmpty(bool, object)
0x5e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e5: Call2 0x1423

0x5e6: Pop(1)
0x5e7: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5eb: Call2 0x12fd

0x5ec: Pop(2)
0x5ed: PushEmpty(string)
0x5ee: Stack[-1] = "Drunk"
0x5ef: Call2 0x5a4

0x5f0: Pop(1)
0x5f1: Push((int) 510030)
0x5f2: @@ SetMessage(Stack[-1])
0x5f3: Pop(1)
0x5f4: @@ ClearReplies()
0x5f5: Pop(0)
0x5f6: Push((int) 510031)
0x5f7: Push((int) 11054)
0x5f8: Push((int) 11053)
0x5f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fa: Pop(3)
0x5fb: Push((int) 510039)
0x5fc: Push((int) 11063)
0x5fd: Push((int) 11062)
0x5fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ff: Pop(3)
0x600: Return(); Pop(0)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Drunk"
0x603: Call2 0x5a4

0x604: Pop(1)
0x605: Push((int) 533997)
0x606: @@ SetMessage(Stack[-1])
0x607: Pop(1)
0x608: @@ ClearReplies()
0x609: Pop(0)
0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60c: Call2 0x1327

0x60d: Pop(1)
0x60e: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x60f: Push((int) 533998)
0x610: Push((int) 35573)
0x611: Push((int) 35572)
0x612: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x613: Pop(3)
0x614: PushEmpty(bool, object)
0x615: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x616: Call2 0x1333

0x617: Pop(1)
0x618: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x619: Push((int) 534011)
0x61a: Push((int) 35587)
0x61b: Push((int) 35586)
0x61c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(3)
0x61e: PushEmpty(bool, object)
0x61f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x620: Call2 0x133f

0x621: Pop(1)
0x622: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x623: Push((int) 534019)
0x624: Push((int) 35595)
0x625: Push((int) 35594)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: PushEmpty(bool, object)
0x629: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62a: Call2 0x134b

0x62b: Pop(1)
0x62c: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62d: Push((int) 534025)
0x62e: Push((int) 35602)
0x62f: Push((int) 35601)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Push((int) 534033)
0x633: Push((int) -1)
0x634: Push((int) 35610)
0x635: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x636: Pop(3)
0x637: Return(); Pop(0)

0x638: Push((int) 35602)
0x639: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x63b: PushEmpty(string)
0x63c: Stack[-1] = "Drunk"
0x63d: Call2 0x5a4

0x63e: Pop(1)
0x63f: Push((int) 534026)
0x640: @@ SetMessage(Stack[-1])
0x641: Pop(1)
0x642: @@ ClearReplies()
0x643: Pop(0)
0x644: Push((int) 534027)
0x645: Push((int) 35604)
0x646: Push((int) 35603)
0x647: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x648: Pop(3)
0x649: Push((int) 534030)
0x64a: Push((int) 35607)
0x64b: Push((int) 35606)
0x64c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64d: Pop(3)
0x64e: Return(); Pop(0)

0x64f: Push((int) 35607)
0x650: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x652: PushEmpty(string)
0x653: Stack[-1] = "Drunk"
0x654: Call2 0x5a4

0x655: Pop(1)
0x656: Push((int) 534031)
0x657: @@ SetMessage(Stack[-1])
0x658: Pop(1)
0x659: @@ ClearReplies()
0x65a: Pop(0)
0x65b: Push((int) 534032)
0x65c: Push((int) 35604)
0x65d: Push((int) 35608)
0x65e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(3)
0x660: Return(); Pop(0)

0x661: Push((int) 35604)
0x662: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x664: PushEmpty(string)
0x665: Stack[-1] = "Drunk"
0x666: Call2 0x5a4

0x667: Pop(1)
0x668: Push((int) 534028)
0x669: @@ SetMessage(Stack[-1])
0x66a: Pop(1)
0x66b: @@ ClearReplies()
0x66c: Pop(0)
0x66d: Push((int) 534029)
0x66e: Push((int) -1)
0x66f: Push((int) 35605)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 35595)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Drunk"
0x678: Call2 0x5a4

0x679: Pop(1)
0x67a: Push((int) 534020)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 534021)
0x680: Push((int) 35597)
0x681: Push((int) 35596)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 534024)
0x685: Push((int) 35597)
0x686: Push((int) 35599)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: Return(); Pop(0)

0x68a: Push((int) 35597)
0x68b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x68d: PushEmpty(string)
0x68e: Stack[-1] = "Drunk"
0x68f: Call2 0x5a4

0x690: Pop(1)
0x691: Push((int) 534022)
0x692: @@ SetMessage(Stack[-1])
0x693: Pop(1)
0x694: @@ ClearReplies()
0x695: Pop(0)
0x696: Push((int) 534023)
0x697: Push((int) -1)
0x698: Push((int) 35598)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Return(); Pop(0)

0x69c: Push((int) 35587)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x69f: PushEmpty(string)
0x6a0: Stack[-1] = "Drunk"
0x6a1: Call2 0x5a4

0x6a2: Pop(1)
0x6a3: Push((int) 534012)
0x6a4: @@ SetMessage(Stack[-1])
0x6a5: Pop(1)
0x6a6: @@ ClearReplies()
0x6a7: Pop(0)
0x6a8: Push((int) 534013)
0x6a9: Push((int) 35589)
0x6aa: Push((int) 35588)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Return(); Pop(0)

0x6ae: Push((int) 35589)
0x6af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6b1: PushEmpty(string)
0x6b2: Stack[-1] = "Drunk"
0x6b3: Call2 0x5a4

0x6b4: Pop(1)
0x6b5: Push((int) 534014)
0x6b6: @@ SetMessage(Stack[-1])
0x6b7: Pop(1)
0x6b8: @@ ClearReplies()
0x6b9: Pop(0)
0x6ba: Push((int) 534015)
0x6bb: Push((int) 35591)
0x6bc: Push((int) 35590)
0x6bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6be: Pop(3)
0x6bf: Return(); Pop(0)

0x6c0: Push((int) 35591)
0x6c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c2: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6c3: PushEmpty(string)
0x6c4: Stack[-1] = "Drunk"
0x6c5: Call2 0x5a4

0x6c6: Pop(1)
0x6c7: Push((int) 534016)
0x6c8: @@ SetMessage(Stack[-1])
0x6c9: Pop(1)
0x6ca: @@ ClearReplies()
0x6cb: Pop(0)
0x6cc: Push((int) 534017)
0x6cd: Push((int) -1)
0x6ce: Push((int) 35592)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Push((int) 534018)
0x6d2: Push((int) -1)
0x6d3: Push((int) 35593)
0x6d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d5: Pop(3)
0x6d6: Return(); Pop(0)

0x6d7: Push((int) 35573)
0x6d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6da: PushEmpty(string)
0x6db: Stack[-1] = "Drunk"
0x6dc: Call2 0x5a4

0x6dd: Pop(1)
0x6de: Push((int) 533999)
0x6df: @@ SetMessage(Stack[-1])
0x6e0: Pop(1)
0x6e1: @@ ClearReplies()
0x6e2: Pop(0)
0x6e3: Push((int) 534000)
0x6e4: Push((int) 35575)
0x6e5: Push((int) 35574)
0x6e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e7: Pop(3)
0x6e8: Push((int) 534008)
0x6e9: Push((int) 35583)
0x6ea: Push((int) 35582)
0x6eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ec: Pop(3)
0x6ed: Return(); Pop(0)

0x6ee: Push((int) 35583)
0x6ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f1: PushEmpty(string)
0x6f2: Stack[-1] = "Drunk"
0x6f3: Call2 0x5a4

0x6f4: Pop(1)
0x6f5: Push((int) 534009)
0x6f6: @@ SetMessage(Stack[-1])
0x6f7: Pop(1)
0x6f8: @@ ClearReplies()
0x6f9: Pop(0)
0x6fa: Push((int) 534010)
0x6fb: Push((int) 35577)
0x6fc: Push((int) 35584)
0x6fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6fe: Pop(3)
0x6ff: Return(); Pop(0)

0x700: Push((int) 35575)
0x701: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x703: PushEmpty(string)
0x704: Stack[-1] = "Autizm"
0x705: Call2 0x5a4

0x706: Pop(1)
0x707: Push((int) 534001)
0x708: @@ SetMessage(Stack[-1])
0x709: Pop(1)
0x70a: @@ ClearReplies()
0x70b: Pop(0)
0x70c: Push((int) 534002)
0x70d: Push((int) 35577)
0x70e: Push((int) 35576)
0x70f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x710: Pop(3)
0x711: Return(); Pop(0)

0x712: Push((int) 35577)
0x713: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x714: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x715: PushEmpty(string)
0x716: Stack[-1] = "Autizm"
0x717: Call2 0x5a4

0x718: Pop(1)
0x719: Push((int) 534003)
0x71a: @@ SetMessage(Stack[-1])
0x71b: Pop(1)
0x71c: @@ ClearReplies()
0x71d: Pop(0)
0x71e: Push((int) 534004)
0x71f: Push((int) 35579)
0x720: Push((int) 35578)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: Return(); Pop(0)

0x724: Push((int) 35579)
0x725: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x727: PushEmpty(string)
0x728: Stack[-1] = "Drunk"
0x729: Call2 0x5a4

0x72a: Pop(1)
0x72b: Push((int) 534005)
0x72c: @@ SetMessage(Stack[-1])
0x72d: Pop(1)
0x72e: @@ ClearReplies()
0x72f: Pop(0)
0x730: Push((int) 534006)
0x731: Push((int) -1)
0x732: Push((int) 35580)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Push((int) 534007)
0x736: Push((int) -1)
0x737: Push((int) 35581)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Return(); Pop(0)

0x73b: Push((int) 11063)
0x73c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x73e: PushEmpty(string)
0x73f: Stack[-1] = "Drunk"
0x740: Call2 0x5a4

0x741: Pop(1)
0x742: Push((int) 510040)
0x743: @@ SetMessage(Stack[-1])
0x744: Pop(1)
0x745: @@ ClearReplies()
0x746: Pop(0)
0x747: Push((int) 510041)
0x748: Push((int) -1)
0x749: Push((int) 11064)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Push((int) 510042)
0x74d: Push((int) 11056)
0x74e: Push((int) 11065)
0x74f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x750: Pop(3)
0x751: Return(); Pop(0)

0x752: Push((int) 11054)
0x753: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x755: PushEmpty(string)
0x756: Stack[-1] = "Drunk"
0x757: Call2 0x5a4

0x758: Pop(1)
0x759: Push((int) 510032)
0x75a: @@ SetMessage(Stack[-1])
0x75b: Pop(1)
0x75c: @@ ClearReplies()
0x75d: Pop(0)
0x75e: Push((int) 510033)
0x75f: Push((int) 11056)
0x760: Push((int) 11055)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Push((int) 510038)
0x764: Push((int) 11056)
0x765: Push((int) 11060)
0x766: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x767: Pop(3)
0x768: Return(); Pop(0)

0x769: Push((int) 11056)
0x76a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x76c: PushEmpty(string)
0x76d: Stack[-1] = "Drunk"
0x76e: Call2 0x5a4

0x76f: Pop(1)
0x770: Push((int) 510034)
0x771: @@ SetMessage(Stack[-1])
0x772: Pop(1)
0x773: @@ ClearReplies()
0x774: Pop(0)
0x775: Push((int) 510035)
0x776: Push((int) -1)
0x777: Push((int) 11057)
0x778: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x779: Pop(3)
0x77a: Push((int) 510036)
0x77b: Push((int) -1)
0x77c: Push((int) 11058)
0x77d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77e: Pop(3)
0x77f: Push((int) 510037)
0x780: Push((int) -1)
0x781: Push((int) 11059)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Return(); Pop(0)

0x785: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x786: PushEmpty(bool)
0x787: Call2 0x1223

0x788: Pop(0)
0x789: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78a: @ lshStopAnimation()
0x78b: Pop(0)
0x78c: GOTO 0x78f

0x78d: @ StopAnimation()
0x78e: Pop(0)
0x78f: Return(); Pop(0)

0x790: GOTO 0x5bb

0x791: Return(); Pop(0)

0x792: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x793: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x794: PushEmpty(bool, object, float)
0x795: Stack[-2] = Stack[-12]
0x796: Stack[-1] = (float) 70.0
0x797: Call2 0x108c

0x798: Pop(2)
0x799: Pop(1); Push((bool) Stack[-1] == 0)
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-10] = (int) -2
0x79c: Return(); Pop(8)

0x79d: @ CreateDialog(Stack[-4])
0x79e: Pop(0)
0x79f: PushEmpty(int)
0x7a0: Call2 0x121d

0x7a1: Pop(0)
0x7a2: @@ SetNPCName(Stack[-1])
0x7a3: Pop(1)
0x7a4: PushEmpty(int)
0x7a5: Call2 0x121b

0x7a6: Pop(0)
0x7a7: @@ SetNPCDescription(Stack[-1])
0x7a8: Pop(1)
0x7a9: PushEmpty(string)
0x7aa: Call2 0x121f

0x7ab: Pop(0)
0x7ac: @@ SetPhoto(Stack[-1])
0x7ad: Pop(1)
0x7ae: PushEmpty(string)
0x7af: Call2 0x1221

0x7b0: Pop(0)
0x7b1: @@ SetPhoto2(Stack[-1])
0x7b2: Pop(1)
0x7b3: PushEmpty(int)
0x7b4: Call2 0x149d

0x7b5: Pop(0)
0x7b6: @@ SetPlayerName(Stack[-1])
0x7b7: Pop(1)
0x7b8: Stack[-2] = (int) -1
0x7b9: @ IsOverrideActive(Stack[-3])
0x7ba: Pop(0)
0x7bb: Push(Stack[-3])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bd: Stack[-10] = (int) -2
0x7be: Return(); Pop(8)

0x7bf: @ DoDialog(Stack[-4])
0x7c0: Pop(0)
0x7c1: PushEmpty(bool, object)
0x7c2: PushEmpty(object)
0x7c3: Call2 0x11a2

0x7c4: Stack[-2] = Stack[-1]
0x7c5: Pop(1)
0x7c6: Call2 0x10e3

0x7c7: Pop(2)
0x7c8: PushEmpty(object, object)
0x7c9: Stack[-2] = Stack[-11]
0x7ca: Stack[-1] = Stack[-6]
0x7cb: Push(-2, 4); TaskCall(7)
0x7cc: Call2 0x7e3

0x7cd: Pop(-2, 4); TaskReturn
0x7ce: Pop(2)
0x7cf: @@ IsDialogEnd(Stack[-1])
0x7d0: Pop(0)
0x7d1: Pop(0); Push((bool) Stack[-1] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d3: @ sync()
0x7d4: Pop(0)
0x7d5: @@ IsDialogEnd(Stack[-1])
0x7d6: Pop(0)
0x7d7: GOTO 0x7d1

0x7d8: PushEmpty(object)
0x7d9: Stack[-1] = Stack[-10]
0x7da: Call2 0x10d1

0x7db: Pop(1)
0x7dc: @ StopDialog(Stack[-4])
0x7dd: Pop(0)
0x7de: @@ GetReturnValue(Stack[-2])
0x7df: Pop(0)
0x7e0: Stack[-10] = Stack[-2]
0x7e1: Return(); Pop(8)

0x7e2: Stack[-4] = 0
0x7e3: PushEmpty()
0x7e4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7e5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7e6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7e7: Push((int) 1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x7e9: PushEmpty(string)
0x7ea: Stack[-1] = "Autizm"
0x7eb: Call2 0x873

0x7ec: Pop(1)
0x7ed: Push((int) 513353)
0x7ee: @@ SetMessage(Stack[-1])
0x7ef: Pop(1)
0x7f0: @@ ClearReplies()
0x7f1: Pop(0)
0x7f2: PushEmpty(bool)
0x7f3: Stack[-1] = (bool) 0
0x7f4: PushEmpty(bool, object)
0x7f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Call2 0x13db

0x7f7: Pop(1)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7f9: PushEmpty(bool, object)
0x7fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fb: Call2 0x13cf

0x7fc: Pop(1)
0x7fd: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fe: Stack[-1] = (bool) 1
0x7ff: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x800: Push((int) 513355)
0x801: Push((int) 14598)
0x802: Push((int) 14587)
0x803: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x804: Pop(3)
0x805: PushEmpty(bool)
0x806: Stack[-1] = (bool) 0
0x807: PushEmpty(bool, object)
0x808: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x809: Call2 0x13db

0x80a: Pop(1)
0x80b: Pop(1); Push((bool) Stack[-1] == 0)
0x80c: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x80d: PushEmpty(bool, object)
0x80e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80f: Call2 0x13cf

0x810: Pop(1)
0x811: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x812: Stack[-1] = (bool) 1
0x813: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x814: Push((int) 513374)
0x815: Push((int) 14607)
0x816: Push((int) 14606)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: PushEmpty(bool, object)
0x81a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81b: Call2 0x13e7

0x81c: Pop(1)
0x81d: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x81e: Push((int) 513390)
0x81f: Push((int) 14625)
0x820: Push((int) 14624)
0x821: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x822: Pop(3)
0x823: PushEmpty(bool)
0x824: Stack[-1] = (bool) 1
0x825: PushEmpty(bool)
0x826: Stack[-1] = (bool) 0
0x827: PushEmpty(bool, object)
0x828: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x829: Call2 0x130f

0x82a: Pop(1)
0x82b: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82c: PushEmpty(bool, object)
0x82d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82e: Call2 0x131b

0x82f: Pop(1)
0x830: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x831: Stack[-1] = (bool) 1
0x832: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x833: PushEmpty(bool)
0x834: Stack[-1] = (bool) 0
0x835: PushEmpty(bool, object)
0x836: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x837: Call2 0x1303

0x838: Pop(1)
0x839: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83a: PushEmpty(bool, object)
0x83b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83c: Call2 0x131b

0x83d: Pop(1)
0x83e: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83f: Stack[-1] = (bool) 1
0x840: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x841: Stack[-1] = (bool) 0
0x842: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x843: Push((int) 533264)
0x844: Push((int) 34779)
0x845: Push((int) 34778)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Push((int) 513354)
0x849: Push((int) -1)
0x84a: Push((int) 14586)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Push((int) 535721)
0x84e: Push((int) -1)
0x84f: Push((int) 37400)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: GOTO 0x855

0x853: Return(); Pop(0)

0x854: GOTO 0x7e7

0x855: PushEmpty(bool)
0x856: Call2 0x1223

0x857: Pop(0)
0x858: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x859: @ lshWaitForAnimEnd()
0x85a: Pop(0)
0x85b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85c: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85d: GOTO 0x863

0x85e: PushEmpty(string)
0x85f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x860: Call2 0x116d

0x861: Pop(1)
0x862: GOTO 0x859

0x863: GOTO 0x872

0x864: Push("all")
0x865: Push("idle")
0x866: @ PlayAnimation(Stack[-2], Stack[-1])
0x867: Pop(2)
0x868: @ WaitForAnimEnd()
0x869: Pop(0)
0x86a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86b: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86c: GOTO 0x872

0x86d: Push("all")
0x86e: Push("idle")
0x86f: @ PlayAnimation(Stack[-2], Stack[-1])
0x870: Pop(2)
0x871: GOTO 0x868

0x872: Return(); Pop(0)

0x873: PushEmpty()
0x874: PushEmpty(bool)
0x875: Call2 0x1223

0x876: Pop(0)
0x877: Pop(1); Push((bool) Stack[-1] == 0)
0x878: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x879: Return(); Pop(0)

0x87a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x87b: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87c: Return(); Pop(0)

0x87d: PushEmpty(string, bool)
0x87e: Stack[-2] = Stack[-3]
0x87f: Push("")
0x880: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x881: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x882: Stack[-1] = (bool) 0
0x883: GOTO 0x885

0x884: Stack[-1] = (bool) 1
0x885: Call2 0x117d

0x886: Pop(2)
0x887: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x888: Return(); Pop(0)

0x889: PushEmpty()
0x88a: Push((int) 1)
0x88b: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0x88c: PushEmpty()
0x88d: Call2 0x119b

0x88e: Pop(0)
0x88f: Push((int) 14602)
0x890: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x892: PushEmpty(object, object)
0x893: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x894: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x895: Call2 0x12e0

0x896: Pop(2)
0x897: PushEmpty(object, object)
0x898: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x899: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89a: Call2 0x12a5

0x89b: Pop(2)
0x89c: Push((int) 14605)
0x89d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x89f: PushEmpty(object, object)
0x8a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8a2: Call2 0x12e0

0x8a3: Pop(2)
0x8a4: Push((int) 14608)
0x8a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a7: PushEmpty(object, object)
0x8a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8aa: Call2 0x12a5

0x8ab: Pop(2)
0x8ac: Push((int) 14626)
0x8ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8af: PushEmpty(object, object)
0x8b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b2: Call2 0x12ae

0x8b3: Pop(2)
0x8b4: PushEmpty(object, object)
0x8b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b7: Call2 0x12b4

0x8b8: Pop(2)
0x8b9: PushEmpty(object, object)
0x8ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8bc: Call2 0x12e6

0x8bd: Pop(2)
0x8be: PushEmpty(object, object)
0x8bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c1: Call2 0x1225

0x8c2: Pop(2)
0x8c3: PushEmpty(object, object)
0x8c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c6: Call2 0x125c

0x8c7: Pop(2)
0x8c8: Push((int) 34778)
0x8c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cb: PushEmpty(object, object)
0x8cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ce: Call2 0x1232

0x8cf: Pop(2)
0x8d0: Push((int) 34780)
0x8d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d8; Pop(1)

0x8d3: PushEmpty(object, object)
0x8d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d6: Call2 0x122b

0x8d7: Pop(2)
0x8d8: Push((int) 37384)
0x8d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8db: PushEmpty(object, object)
0x8dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8de: Call2 0x122b

0x8df: Pop(2)
0x8e0: Push((int) 14585)
0x8e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x8e3: PushEmpty(string)
0x8e4: Stack[-1] = "Autizm"
0x8e5: Call2 0x873

0x8e6: Pop(1)
0x8e7: Push((int) 513353)
0x8e8: @@ SetMessage(Stack[-1])
0x8e9: Pop(1)
0x8ea: @@ ClearReplies()
0x8eb: Pop(0)
0x8ec: PushEmpty(bool)
0x8ed: Stack[-1] = (bool) 0
0x8ee: PushEmpty(bool, object)
0x8ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f0: Call2 0x13db

0x8f1: Pop(1)
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f3: PushEmpty(bool, object)
0x8f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f5: Call2 0x13cf

0x8f6: Pop(1)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: Stack[-1] = (bool) 1
0x8f9: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fa: Push((int) 513355)
0x8fb: Push((int) 14598)
0x8fc: Push((int) 14587)
0x8fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fe: Pop(3)
0x8ff: PushEmpty(bool)
0x900: Stack[-1] = (bool) 0
0x901: PushEmpty(bool, object)
0x902: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x903: Call2 0x13db

0x904: Pop(1)
0x905: Pop(1); Push((bool) Stack[-1] == 0)
0x906: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x907: PushEmpty(bool, object)
0x908: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x909: Call2 0x13cf

0x90a: Pop(1)
0x90b: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90c: Stack[-1] = (bool) 1
0x90d: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90e: Push((int) 513374)
0x90f: Push((int) 14607)
0x910: Push((int) 14606)
0x911: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x912: Pop(3)
0x913: PushEmpty(bool, object)
0x914: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x915: Call2 0x13e7

0x916: Pop(1)
0x917: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x918: Push((int) 513390)
0x919: Push((int) 14625)
0x91a: Push((int) 14624)
0x91b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91c: Pop(3)
0x91d: PushEmpty(bool)
0x91e: Stack[-1] = (bool) 1
0x91f: PushEmpty(bool)
0x920: Stack[-1] = (bool) 0
0x921: PushEmpty(bool, object)
0x922: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x923: Call2 0x130f

0x924: Pop(1)
0x925: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x926: PushEmpty(bool, object)
0x927: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x928: Call2 0x131b

0x929: Pop(1)
0x92a: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x92b: Stack[-1] = (bool) 1
0x92c: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x92d: PushEmpty(bool)
0x92e: Stack[-1] = (bool) 0
0x92f: PushEmpty(bool, object)
0x930: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x931: Call2 0x1303

0x932: Pop(1)
0x933: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x934: PushEmpty(bool, object)
0x935: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x936: Call2 0x131b

0x937: Pop(1)
0x938: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x939: Stack[-1] = (bool) 1
0x93a: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x93b: Stack[-1] = (bool) 0
0x93c: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x93d: Push((int) 533264)
0x93e: Push((int) 34779)
0x93f: Push((int) 34778)
0x940: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x941: Pop(3)
0x942: Push((int) 513354)
0x943: Push((int) -1)
0x944: Push((int) 14586)
0x945: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x946: Pop(3)
0x947: Push((int) 535721)
0x948: Push((int) -1)
0x949: Push((int) 37400)
0x94a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94b: Pop(3)
0x94c: Return(); Pop(0)

0x94d: Push((int) 34779)
0x94e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x950: PushEmpty(string)
0x951: Stack[-1] = "Autizm"
0x952: Call2 0x873

0x953: Pop(1)
0x954: Push((int) 533265)
0x955: @@ SetMessage(Stack[-1])
0x956: Pop(1)
0x957: @@ ClearReplies()
0x958: Pop(0)
0x959: Push((int) 535698)
0x95a: Push((int) 37373)
0x95b: Push((int) 37370)
0x95c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95d: Pop(3)
0x95e: Push((int) 535713)
0x95f: Push((int) 37371)
0x960: Push((int) 37385)
0x961: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: Return(); Pop(0)

0x964: Push((int) 37371)
0x965: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x967: PushEmpty(string)
0x968: Stack[-1] = "Neutral"
0x969: Call2 0x873

0x96a: Pop(1)
0x96b: Push((int) 535699)
0x96c: @@ SetMessage(Stack[-1])
0x96d: Pop(1)
0x96e: @@ ClearReplies()
0x96f: Pop(0)
0x970: Push((int) 535700)
0x971: Push((int) 37373)
0x972: Push((int) 37372)
0x973: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(3)
0x975: Return(); Pop(0)

0x976: Push((int) 37373)
0x977: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x979: PushEmpty(string)
0x97a: Stack[-1] = "Autizm"
0x97b: Call2 0x873

0x97c: Pop(1)
0x97d: Push((int) 535701)
0x97e: @@ SetMessage(Stack[-1])
0x97f: Pop(1)
0x980: @@ ClearReplies()
0x981: Pop(0)
0x982: Push((int) 535702)
0x983: Push((int) 37375)
0x984: Push((int) 37374)
0x985: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x986: Pop(3)
0x987: Push((int) 535714)
0x988: Push((int) 37375)
0x989: Push((int) 37387)
0x98a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98b: Pop(3)
0x98c: Return(); Pop(0)

0x98d: Push((int) 37375)
0x98e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98f: IF (Stack[-1] == 0) GOTO 0x9a4; Pop(1)

0x990: PushEmpty(string)
0x991: Stack[-1] = "Autizm"
0x992: Call2 0x873

0x993: Pop(1)
0x994: Push((int) 535703)
0x995: @@ SetMessage(Stack[-1])
0x996: Pop(1)
0x997: @@ ClearReplies()
0x998: Pop(0)
0x999: Push((int) 535704)
0x99a: Push((int) 37377)
0x99b: Push((int) 37376)
0x99c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99d: Pop(3)
0x99e: Push((int) 535715)
0x99f: Push((int) 37377)
0x9a0: Push((int) 37389)
0x9a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a2: Pop(3)
0x9a3: Return(); Pop(0)

0x9a4: Push((int) 37377)
0x9a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a6: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9a7: PushEmpty(string)
0x9a8: Stack[-1] = "Untrust"
0x9a9: Call2 0x873

0x9aa: Pop(1)
0x9ab: Push((int) 535705)
0x9ac: @@ SetMessage(Stack[-1])
0x9ad: Pop(1)
0x9ae: @@ ClearReplies()
0x9af: Pop(0)
0x9b0: Push((int) 535706)
0x9b1: Push((int) 37379)
0x9b2: Push((int) 37378)
0x9b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b4: Pop(3)
0x9b5: Push((int) 535716)
0x9b6: Push((int) 37379)
0x9b7: Push((int) 37391)
0x9b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b9: Pop(3)
0x9ba: Return(); Pop(0)

0x9bb: Push((int) 37379)
0x9bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9be: PushEmpty(string)
0x9bf: Stack[-1] = "Untrust"
0x9c0: Call2 0x873

0x9c1: Pop(1)
0x9c2: Push((int) 535707)
0x9c3: @@ SetMessage(Stack[-1])
0x9c4: Pop(1)
0x9c5: @@ ClearReplies()
0x9c6: Pop(0)
0x9c7: Push((int) 535708)
0x9c8: Push((int) 37381)
0x9c9: Push((int) 37380)
0x9ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(3)
0x9cc: Return(); Pop(0)

0x9cd: Push((int) 37381)
0x9ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9d0: PushEmpty(string)
0x9d1: Stack[-1] = "Neutral"
0x9d2: Call2 0x873

0x9d3: Pop(1)
0x9d4: Push((int) 535709)
0x9d5: @@ SetMessage(Stack[-1])
0x9d6: Pop(1)
0x9d7: @@ ClearReplies()
0x9d8: Pop(0)
0x9d9: Push((int) 535710)
0x9da: Push((int) 37383)
0x9db: Push((int) 37382)
0x9dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(3)
0x9de: Return(); Pop(0)

0x9df: Push((int) 37383)
0x9e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9e2: PushEmpty(string)
0x9e3: Stack[-1] = "Neutral"
0x9e4: Call2 0x873

0x9e5: Pop(1)
0x9e6: Push((int) 535711)
0x9e7: @@ SetMessage(Stack[-1])
0x9e8: Pop(1)
0x9e9: @@ ClearReplies()
0x9ea: Pop(0)
0x9eb: Push((int) 533266)
0x9ec: Push((int) -1)
0x9ed: Push((int) 34780)
0x9ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ef: Pop(3)
0x9f0: Push((int) 535712)
0x9f1: Push((int) -1)
0x9f2: Push((int) 37384)
0x9f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f4: Pop(3)
0x9f5: Return(); Pop(0)

0x9f6: Push((int) 14625)
0x9f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f8: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9f9: PushEmpty(string)
0x9fa: Stack[-1] = "Autizm"
0x9fb: Call2 0x873

0x9fc: Pop(1)
0x9fd: Push((int) 513391)
0x9fe: @@ SetMessage(Stack[-1])
0x9ff: Pop(1)
0xa00: @@ ClearReplies()
0xa01: Pop(0)
0xa02: Push((int) 513392)
0xa03: Push((int) -1)
0xa04: Push((int) 14626)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: Return(); Pop(0)

0xa08: Push((int) 14607)
0xa09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa0b: PushEmpty(string)
0xa0c: Stack[-1] = "Drunk"
0xa0d: Call2 0x873

0xa0e: Pop(1)
0xa0f: Push((int) 513375)
0xa10: @@ SetMessage(Stack[-1])
0xa11: Pop(1)
0xa12: @@ ClearReplies()
0xa13: Pop(0)
0xa14: Push((int) 513376)
0xa15: Push((int) -1)
0xa16: Push((int) 14608)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Return(); Pop(0)

0xa1a: Push((int) 14598)
0xa1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa1d: PushEmpty(string)
0xa1e: Stack[-1] = "Autizm"
0xa1f: Call2 0x873

0xa20: Pop(1)
0xa21: Push((int) 513366)
0xa22: @@ SetMessage(Stack[-1])
0xa23: Pop(1)
0xa24: @@ ClearReplies()
0xa25: Pop(0)
0xa26: Push((int) 513367)
0xa27: Push((int) 14588)
0xa28: Push((int) 14599)
0xa29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2a: Pop(3)
0xa2b: Push((int) 535717)
0xa2c: Push((int) 14590)
0xa2d: Push((int) 37393)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Return(); Pop(0)

0xa31: Push((int) 14588)
0xa32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa33: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa34: PushEmpty(string)
0xa35: Stack[-1] = "Drunk"
0xa36: Call2 0x873

0xa37: Pop(1)
0xa38: Push((int) 513356)
0xa39: @@ SetMessage(Stack[-1])
0xa3a: Pop(1)
0xa3b: @@ ClearReplies()
0xa3c: Pop(0)
0xa3d: Push((int) 513357)
0xa3e: Push((int) 14590)
0xa3f: Push((int) 14589)
0xa40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa41: Pop(3)
0xa42: Push((int) 535718)
0xa43: Push((int) 37396)
0xa44: Push((int) 37395)
0xa45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa46: Pop(3)
0xa47: Return(); Pop(0)

0xa48: Push((int) 37396)
0xa49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa4b: PushEmpty(string)
0xa4c: Stack[-1] = "Drunk"
0xa4d: Call2 0x873

0xa4e: Pop(1)
0xa4f: Push((int) 535719)
0xa50: @@ SetMessage(Stack[-1])
0xa51: Pop(1)
0xa52: @@ ClearReplies()
0xa53: Pop(0)
0xa54: Push((int) 535720)
0xa55: Push((int) 14592)
0xa56: Push((int) 37397)
0xa57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa58: Pop(3)
0xa59: Return(); Pop(0)

0xa5a: Push((int) 14590)
0xa5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa5d: PushEmpty(string)
0xa5e: Stack[-1] = "Drunk"
0xa5f: Call2 0x873

0xa60: Pop(1)
0xa61: Push((int) 513358)
0xa62: @@ SetMessage(Stack[-1])
0xa63: Pop(1)
0xa64: @@ ClearReplies()
0xa65: Pop(0)
0xa66: Push((int) 513359)
0xa67: Push((int) 14592)
0xa68: Push((int) 14591)
0xa69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6a: Pop(3)
0xa6b: Push((int) 541555)
0xa6c: Push((int) 43724)
0xa6d: Push((int) 43723)
0xa6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6f: Pop(3)
0xa70: Return(); Pop(0)

0xa71: Push((int) 43724)
0xa72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa73: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa74: PushEmpty(string)
0xa75: Stack[-1] = "Drunk"
0xa76: Call2 0x873

0xa77: Pop(1)
0xa78: Push((int) 541556)
0xa79: @@ SetMessage(Stack[-1])
0xa7a: Pop(1)
0xa7b: @@ ClearReplies()
0xa7c: Pop(0)
0xa7d: Push((int) 541557)
0xa7e: Push((int) 43729)
0xa7f: Push((int) 43725)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: Push((int) 541558)
0xa83: Push((int) 43727)
0xa84: Push((int) 43726)
0xa85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa86: Pop(3)
0xa87: Return(); Pop(0)

0xa88: Push((int) 43727)
0xa89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa8b: PushEmpty(string)
0xa8c: Stack[-1] = "Untrust"
0xa8d: Call2 0x873

0xa8e: Pop(1)
0xa8f: Push((int) 541559)
0xa90: @@ SetMessage(Stack[-1])
0xa91: Pop(1)
0xa92: @@ ClearReplies()
0xa93: Pop(0)
0xa94: Push((int) 541560)
0xa95: Push((int) 43729)
0xa96: Push((int) 43728)
0xa97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa98: Pop(3)
0xa99: Return(); Pop(0)

0xa9a: Push((int) 43729)
0xa9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xa9d: PushEmpty(string)
0xa9e: Stack[-1] = "Untrust"
0xa9f: Call2 0x873

0xaa0: Pop(1)
0xaa1: Push((int) 541561)
0xaa2: @@ SetMessage(Stack[-1])
0xaa3: Pop(1)
0xaa4: @@ ClearReplies()
0xaa5: Pop(0)
0xaa6: Push((int) 541562)
0xaa7: Push((int) 43732)
0xaa8: Push((int) 43731)
0xaa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaa: Pop(3)
0xaab: Push((int) 541565)
0xaac: Push((int) 14592)
0xaad: Push((int) 43735)
0xaae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaaf: Pop(3)
0xab0: Return(); Pop(0)

0xab1: Push((int) 43732)
0xab2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xab4: PushEmpty(string)
0xab5: Stack[-1] = "Untrust"
0xab6: Call2 0x873

0xab7: Pop(1)
0xab8: Push((int) 541563)
0xab9: @@ SetMessage(Stack[-1])
0xaba: Pop(1)
0xabb: @@ ClearReplies()
0xabc: Pop(0)
0xabd: Push((int) 541564)
0xabe: Push((int) 14592)
0xabf: Push((int) 43733)
0xac0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac1: Pop(3)
0xac2: Return(); Pop(0)

0xac3: Push((int) 14592)
0xac4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac5: IF (Stack[-1] == 0) GOTO 0xad5; Pop(1)

0xac6: PushEmpty(string)
0xac7: Stack[-1] = "Drunk"
0xac8: Call2 0x873

0xac9: Pop(1)
0xaca: Push((int) 513360)
0xacb: @@ SetMessage(Stack[-1])
0xacc: Pop(1)
0xacd: @@ ClearReplies()
0xace: Pop(0)
0xacf: Push((int) 513361)
0xad0: Push((int) 14594)
0xad1: Push((int) 14593)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: Return(); Pop(0)

0xad5: Push((int) 14594)
0xad6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad7: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xad8: PushEmpty(string)
0xad9: Stack[-1] = "Autizm"
0xada: Call2 0x873

0xadb: Pop(1)
0xadc: Push((int) 513362)
0xadd: @@ SetMessage(Stack[-1])
0xade: Pop(1)
0xadf: @@ ClearReplies()
0xae0: Pop(0)
0xae1: Push((int) 513363)
0xae2: Push((int) 14601)
0xae3: Push((int) 14595)
0xae4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae5: Pop(3)
0xae6: Push((int) 513364)
0xae7: Push((int) 14597)
0xae8: Push((int) 14596)
0xae9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaea: Pop(3)
0xaeb: Return(); Pop(0)

0xaec: Push((int) 14597)
0xaed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xaef: PushEmpty(string)
0xaf0: Stack[-1] = "Drunk"
0xaf1: Call2 0x873

0xaf2: Pop(1)
0xaf3: Push((int) 513365)
0xaf4: @@ SetMessage(Stack[-1])
0xaf5: Pop(1)
0xaf6: @@ ClearReplies()
0xaf7: Pop(0)
0xaf8: Push((int) 513368)
0xaf9: Push((int) 14601)
0xafa: Push((int) 14600)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Push((int) 513371)
0xafe: Push((int) 14604)
0xaff: Push((int) 14603)
0xb00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb01: Pop(3)
0xb02: Return(); Pop(0)

0xb03: Push((int) 14604)
0xb04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb05: IF (Stack[-1] == 0) GOTO 0xb15; Pop(1)

0xb06: PushEmpty(string)
0xb07: Stack[-1] = "Neutral"
0xb08: Call2 0x873

0xb09: Pop(1)
0xb0a: Push((int) 513372)
0xb0b: @@ SetMessage(Stack[-1])
0xb0c: Pop(1)
0xb0d: @@ ClearReplies()
0xb0e: Pop(0)
0xb0f: Push((int) 513373)
0xb10: Push((int) -1)
0xb11: Push((int) 14605)
0xb12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb13: Pop(3)
0xb14: Return(); Pop(0)

0xb15: Push((int) 14601)
0xb16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb18: PushEmpty(string)
0xb19: Stack[-1] = "Autizm"
0xb1a: Call2 0x873

0xb1b: Pop(1)
0xb1c: Push((int) 513369)
0xb1d: @@ SetMessage(Stack[-1])
0xb1e: Pop(1)
0xb1f: @@ ClearReplies()
0xb20: Pop(0)
0xb21: Push((int) 513370)
0xb22: Push((int) -1)
0xb23: Push((int) 14602)
0xb24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb25: Pop(3)
0xb26: Return(); Pop(0)

0xb27: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb28: PushEmpty(bool)
0xb29: Call2 0x1223

0xb2a: Pop(0)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2c: @ lshStopAnimation()
0xb2d: Pop(0)
0xb2e: GOTO 0xb31

0xb2f: @ StopAnimation()
0xb30: Pop(0)
0xb31: Return(); Pop(0)

0xb32: GOTO 0x88a

0xb33: Return(); Pop(0)

0xb34: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb35: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb36: PushEmpty(bool, object, float)
0xb37: Stack[-2] = Stack[-12]
0xb38: Stack[-1] = (float) 70.0
0xb39: Call2 0x108c

0xb3a: Pop(2)
0xb3b: Pop(1); Push((bool) Stack[-1] == 0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3d: Stack[-10] = (int) -2
0xb3e: Return(); Pop(8)

0xb3f: @ CreateDialog(Stack[-4])
0xb40: Pop(0)
0xb41: PushEmpty(int)
0xb42: Call2 0x121d

0xb43: Pop(0)
0xb44: @@ SetNPCName(Stack[-1])
0xb45: Pop(1)
0xb46: PushEmpty(int)
0xb47: Call2 0x121b

0xb48: Pop(0)
0xb49: @@ SetNPCDescription(Stack[-1])
0xb4a: Pop(1)
0xb4b: PushEmpty(string)
0xb4c: Call2 0x121f

0xb4d: Pop(0)
0xb4e: @@ SetPhoto(Stack[-1])
0xb4f: Pop(1)
0xb50: PushEmpty(string)
0xb51: Call2 0x1221

0xb52: Pop(0)
0xb53: @@ SetPhoto2(Stack[-1])
0xb54: Pop(1)
0xb55: PushEmpty(int)
0xb56: Call2 0x149d

0xb57: Pop(0)
0xb58: @@ SetPlayerName(Stack[-1])
0xb59: Pop(1)
0xb5a: Stack[-2] = (int) -1
0xb5b: @ IsOverrideActive(Stack[-3])
0xb5c: Pop(0)
0xb5d: Push(Stack[-3])
0xb5e: IF (Stack[-1] == 0) GOTO 0xb61; Pop(1)

0xb5f: Stack[-10] = (int) -2
0xb60: Return(); Pop(8)

0xb61: @ DoDialog(Stack[-4])
0xb62: Pop(0)
0xb63: PushEmpty(bool, object)
0xb64: PushEmpty(object)
0xb65: Call2 0x11a2

0xb66: Stack[-2] = Stack[-1]
0xb67: Pop(1)
0xb68: Call2 0x10e3

0xb69: Pop(2)
0xb6a: PushEmpty(object, object)
0xb6b: Stack[-2] = Stack[-11]
0xb6c: Stack[-1] = Stack[-6]
0xb6d: Push(-2, 4); TaskCall(9)
0xb6e: Call2 0xb85

0xb6f: Pop(-2, 4); TaskReturn
0xb70: Pop(2)
0xb71: @@ IsDialogEnd(Stack[-1])
0xb72: Pop(0)
0xb73: Pop(0); Push((bool) Stack[-1] == 0)
0xb74: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb75: @ sync()
0xb76: Pop(0)
0xb77: @@ IsDialogEnd(Stack[-1])
0xb78: Pop(0)
0xb79: GOTO 0xb73

0xb7a: PushEmpty(object)
0xb7b: Stack[-1] = Stack[-10]
0xb7c: Call2 0x10d1

0xb7d: Pop(1)
0xb7e: @ StopDialog(Stack[-4])
0xb7f: Pop(0)
0xb80: @@ GetReturnValue(Stack[-2])
0xb81: Pop(0)
0xb82: Stack[-10] = Stack[-2]
0xb83: Return(); Pop(8)

0xb84: Stack[-4] = 0
0xb85: PushEmpty()
0xb86: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb87: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb88: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb89: Push((int) 1)
0xb8a: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xb8b: PushEmpty(string)
0xb8c: Stack[-1] = "Drunk"
0xb8d: Call2 0xbe1

0xb8e: Pop(1)
0xb8f: Push((int) 514474)
0xb90: @@ SetMessage(Stack[-1])
0xb91: Pop(1)
0xb92: @@ ClearReplies()
0xb93: Pop(0)
0xb94: PushEmpty(bool, object)
0xb95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb96: Call2 0x1417

0xb97: Pop(1)
0xb98: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb99: Push((int) 514475)
0xb9a: Push((int) 15709)
0xb9b: Push((int) 15708)
0xb9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9d: Pop(3)
0xb9e: PushEmpty(bool)
0xb9f: Stack[-1] = (bool) 0
0xba0: PushEmpty(bool, object)
0xba1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba2: Call2 0x13f3

0xba3: Pop(1)
0xba4: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xba5: PushEmpty(bool, object)
0xba6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba7: Call2 0x13ff

0xba8: Pop(1)
0xba9: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xbaa: Stack[-1] = (bool) 1
0xbab: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbac: Push((int) 539623)
0xbad: Push((int) 15695)
0xbae: Push((int) 41570)
0xbaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(3)
0xbb1: PushEmpty(bool, object)
0xbb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb3: Call2 0x140b

0xbb4: Pop(1)
0xbb5: IF (Stack[-1] == 0) GOTO 0xbbb; Pop(1)

0xbb6: Push((int) 514501)
0xbb7: Push((int) -1)
0xbb8: Push((int) 15737)
0xbb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbba: Pop(3)
0xbbb: Push((int) 514500)
0xbbc: Push((int) -1)
0xbbd: Push((int) 15736)
0xbbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbf: Pop(3)
0xbc0: GOTO 0xbc3

0xbc1: Return(); Pop(0)

0xbc2: GOTO 0xb89

0xbc3: PushEmpty(bool)
0xbc4: Call2 0x1223

0xbc5: Pop(0)
0xbc6: IF (Stack[-1] == 0) GOTO 0xbd2; Pop(1)

0xbc7: @ lshWaitForAnimEnd()
0xbc8: Pop(0)
0xbc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbca: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbcb: GOTO 0xbd1

0xbcc: PushEmpty(string)
0xbcd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbce: Call2 0x116d

0xbcf: Pop(1)
0xbd0: GOTO 0xbc7

0xbd1: GOTO 0xbe0

0xbd2: Push("all")
0xbd3: Push("idle")
0xbd4: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd5: Pop(2)
0xbd6: @ WaitForAnimEnd()
0xbd7: Pop(0)
0xbd8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbd9: IF (Stack[-1] == 0) GOTO 0xbdb; Pop(1)

0xbda: GOTO 0xbe0

0xbdb: Push("all")
0xbdc: Push("idle")
0xbdd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbde: Pop(2)
0xbdf: GOTO 0xbd6

0xbe0: Return(); Pop(0)

0xbe1: PushEmpty()
0xbe2: PushEmpty(bool)
0xbe3: Call2 0x1223

0xbe4: Pop(0)
0xbe5: Pop(1); Push((bool) Stack[-1] == 0)
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe7: Return(); Pop(0)

0xbe8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbe9: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbea: Return(); Pop(0)

0xbeb: PushEmpty(string, bool)
0xbec: Stack[-2] = Stack[-3]
0xbed: Push("")
0xbee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbef: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbf0: Stack[-1] = (bool) 0
0xbf1: GOTO 0xbf3

0xbf2: Stack[-1] = (bool) 1
0xbf3: Call2 0x117d

0xbf4: Pop(2)
0xbf5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf6: Return(); Pop(0)

0xbf7: PushEmpty()
0xbf8: Push((int) 1)
0xbf9: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xbfa: PushEmpty()
0xbfb: Call2 0x119b

0xbfc: Pop(0)
0xbfd: Push((int) 15708)
0xbfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbff: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc00: PushEmpty(object, object)
0xc01: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc02: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc03: Call2 0x12f7

0xc04: Pop(2)
0xc05: Push((int) 41570)
0xc06: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc07: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xc08: PushEmpty(object, object)
0xc09: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0b: Call2 0x12f1

0xc0c: Pop(2)
0xc0d: Push((int) 15707)
0xc0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0f: IF (Stack[-1] == 0) GOTO 0xc46; Pop(1)

0xc10: PushEmpty(string)
0xc11: Stack[-1] = "Drunk"
0xc12: Call2 0xbe1

0xc13: Pop(1)
0xc14: Push((int) 514474)
0xc15: @@ SetMessage(Stack[-1])
0xc16: Pop(1)
0xc17: @@ ClearReplies()
0xc18: Pop(0)
0xc19: PushEmpty(bool, object)
0xc1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1b: Call2 0x1417

0xc1c: Pop(1)
0xc1d: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1e: Push((int) 514475)
0xc1f: Push((int) 15709)
0xc20: Push((int) 15708)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: PushEmpty(bool)
0xc24: Stack[-1] = (bool) 0
0xc25: PushEmpty(bool, object)
0xc26: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc27: Call2 0x13f3

0xc28: Pop(1)
0xc29: IF (Stack[-1] == 0) GOTO 0xc30; Pop(1)

0xc2a: PushEmpty(bool, object)
0xc2b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2c: Call2 0x13ff

0xc2d: Pop(1)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc30; Pop(1)

0xc2f: Stack[-1] = (bool) 1
0xc30: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc31: Push((int) 539623)
0xc32: Push((int) 15695)
0xc33: Push((int) 41570)
0xc34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc35: Pop(3)
0xc36: PushEmpty(bool, object)
0xc37: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc38: Call2 0x140b

0xc39: Pop(1)
0xc3a: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3b: Push((int) 514501)
0xc3c: Push((int) -1)
0xc3d: Push((int) 15737)
0xc3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3f: Pop(3)
0xc40: Push((int) 514500)
0xc41: Push((int) -1)
0xc42: Push((int) 15736)
0xc43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc44: Pop(3)
0xc45: Return(); Pop(0)

0xc46: Push((int) 15695)
0xc47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc48: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc49: PushEmpty(string)
0xc4a: Stack[-1] = "Neutral"
0xc4b: Call2 0xbe1

0xc4c: Pop(1)
0xc4d: Push((int) 514464)
0xc4e: @@ SetMessage(Stack[-1])
0xc4f: Pop(1)
0xc50: @@ ClearReplies()
0xc51: Pop(0)
0xc52: Push((int) 514465)
0xc53: Push((int) 15697)
0xc54: Push((int) 15696)
0xc55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc56: Pop(3)
0xc57: Push((int) 539626)
0xc58: Push((int) 15697)
0xc59: Push((int) 41574)
0xc5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5b: Pop(3)
0xc5c: Return(); Pop(0)

0xc5d: Push((int) 15697)
0xc5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc60: PushEmpty(string)
0xc61: Stack[-1] = "Neutral"
0xc62: Call2 0xbe1

0xc63: Pop(1)
0xc64: Push((int) 514466)
0xc65: @@ SetMessage(Stack[-1])
0xc66: Pop(1)
0xc67: @@ ClearReplies()
0xc68: Pop(0)
0xc69: Push((int) 514467)
0xc6a: Push((int) -1)
0xc6b: Push((int) 15698)
0xc6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6d: Pop(3)
0xc6e: Push((int) 539630)
0xc6f: Push((int) 41859)
0xc70: Push((int) 41576)
0xc71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc72: Pop(3)
0xc73: Return(); Pop(0)

0xc74: Push((int) 41859)
0xc75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc77: PushEmpty(string)
0xc78: Stack[-1] = "Drunk"
0xc79: Call2 0xbe1

0xc7a: Pop(1)
0xc7b: Push((int) 539899)
0xc7c: @@ SetMessage(Stack[-1])
0xc7d: Pop(1)
0xc7e: @@ ClearReplies()
0xc7f: Pop(0)
0xc80: Push((int) 539900)
0xc81: Push((int) 41861)
0xc82: Push((int) 41860)
0xc83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc84: Pop(3)
0xc85: Return(); Pop(0)

0xc86: Push((int) 41861)
0xc87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc89: PushEmpty(string)
0xc8a: Stack[-1] = "Neutral"
0xc8b: Call2 0xbe1

0xc8c: Pop(1)
0xc8d: Push((int) 539901)
0xc8e: @@ SetMessage(Stack[-1])
0xc8f: Pop(1)
0xc90: @@ ClearReplies()
0xc91: Pop(0)
0xc92: Push((int) 539902)
0xc93: Push((int) -1)
0xc94: Push((int) 41862)
0xc95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc96: Pop(3)
0xc97: Return(); Pop(0)

0xc98: Push((int) 15709)
0xc99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9a: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xc9b: PushEmpty(string)
0xc9c: Stack[-1] = "Autizm"
0xc9d: Call2 0xbe1

0xc9e: Pop(1)
0xc9f: Push((int) 514476)
0xca0: @@ SetMessage(Stack[-1])
0xca1: Pop(1)
0xca2: @@ ClearReplies()
0xca3: Pop(0)
0xca4: Push((int) 514477)
0xca5: Push((int) 15711)
0xca6: Push((int) 15710)
0xca7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca8: Pop(3)
0xca9: Push((int) 514499)
0xcaa: Push((int) 15711)
0xcab: Push((int) 15734)
0xcac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcad: Pop(3)
0xcae: Return(); Pop(0)

0xcaf: Push((int) 15711)
0xcb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb1: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcb2: PushEmpty(string)
0xcb3: Stack[-1] = "Autizm"
0xcb4: Call2 0xbe1

0xcb5: Pop(1)
0xcb6: Push((int) 514478)
0xcb7: @@ SetMessage(Stack[-1])
0xcb8: Pop(1)
0xcb9: @@ ClearReplies()
0xcba: Pop(0)
0xcbb: Push((int) 514479)
0xcbc: Push((int) 15713)
0xcbd: Push((int) 15712)
0xcbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbf: Pop(3)
0xcc0: Push((int) 514494)
0xcc1: Push((int) 15729)
0xcc2: Push((int) 15728)
0xcc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc4: Pop(3)
0xcc5: Return(); Pop(0)

0xcc6: Push((int) 15729)
0xcc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc8: IF (Stack[-1] == 0) GOTO 0xcd8; Pop(1)

0xcc9: PushEmpty(string)
0xcca: Stack[-1] = "Neutral"
0xccb: Call2 0xbe1

0xccc: Pop(1)
0xccd: Push((int) 514495)
0xcce: @@ SetMessage(Stack[-1])
0xccf: Pop(1)
0xcd0: @@ ClearReplies()
0xcd1: Pop(0)
0xcd2: Push((int) 514496)
0xcd3: Push((int) 15731)
0xcd4: Push((int) 15730)
0xcd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd6: Pop(3)
0xcd7: Return(); Pop(0)

0xcd8: Push((int) 15731)
0xcd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcda: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xcdb: PushEmpty(string)
0xcdc: Stack[-1] = "Neutral"
0xcdd: Call2 0xbe1

0xcde: Pop(1)
0xcdf: Push((int) 514497)
0xce0: @@ SetMessage(Stack[-1])
0xce1: Pop(1)
0xce2: @@ ClearReplies()
0xce3: Pop(0)
0xce4: Push((int) 514498)
0xce5: Push((int) 15713)
0xce6: Push((int) 15732)
0xce7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce8: Pop(3)
0xce9: Return(); Pop(0)

0xcea: Push((int) 15713)
0xceb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xced: PushEmpty(string)
0xcee: Stack[-1] = "Neutral"
0xcef: Call2 0xbe1

0xcf0: Pop(1)
0xcf1: Push((int) 514480)
0xcf2: @@ SetMessage(Stack[-1])
0xcf3: Pop(1)
0xcf4: @@ ClearReplies()
0xcf5: Pop(0)
0xcf6: Push((int) 514481)
0xcf7: Push((int) 15715)
0xcf8: Push((int) 15714)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Return(); Pop(0)

0xcfc: Push((int) 15715)
0xcfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call2 0xbe1

0xd02: Pop(1)
0xd03: Push((int) 514482)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: Push((int) 514483)
0xd09: Push((int) 15717)
0xd0a: Push((int) 15716)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Push((int) 539625)
0xd0e: Push((int) 15719)
0xd0f: Push((int) 41572)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: Return(); Pop(0)

0xd13: Push((int) 15717)
0xd14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd16: PushEmpty(string)
0xd17: Stack[-1] = "Neutral"
0xd18: Call2 0xbe1

0xd19: Pop(1)
0xd1a: Push((int) 514484)
0xd1b: @@ SetMessage(Stack[-1])
0xd1c: Pop(1)
0xd1d: @@ ClearReplies()
0xd1e: Pop(0)
0xd1f: Push((int) 514485)
0xd20: Push((int) 15719)
0xd21: Push((int) 15718)
0xd22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd23: Pop(3)
0xd24: Return(); Pop(0)

0xd25: Push((int) 15719)
0xd26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd27: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd28: PushEmpty(string)
0xd29: Stack[-1] = "Untrust"
0xd2a: Call2 0xbe1

0xd2b: Pop(1)
0xd2c: Push((int) 514486)
0xd2d: @@ SetMessage(Stack[-1])
0xd2e: Pop(1)
0xd2f: @@ ClearReplies()
0xd30: Pop(0)
0xd31: Push((int) 514487)
0xd32: Push((int) 15721)
0xd33: Push((int) 15720)
0xd34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd35: Pop(3)
0xd36: Push((int) 514491)
0xd37: Push((int) 15725)
0xd38: Push((int) 15724)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Return(); Pop(0)

0xd3c: Push((int) 15725)
0xd3d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3e: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd3f: PushEmpty(string)
0xd40: Stack[-1] = "Untrust"
0xd41: Call2 0xbe1

0xd42: Pop(1)
0xd43: Push((int) 514492)
0xd44: @@ SetMessage(Stack[-1])
0xd45: Pop(1)
0xd46: @@ ClearReplies()
0xd47: Pop(0)
0xd48: Push((int) 514493)
0xd49: Push((int) 15721)
0xd4a: Push((int) 15726)
0xd4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4c: Pop(3)
0xd4d: Return(); Pop(0)

0xd4e: Push((int) 15721)
0xd4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd50: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd51: PushEmpty(string)
0xd52: Stack[-1] = "Untrust"
0xd53: Call2 0xbe1

0xd54: Pop(1)
0xd55: Push((int) 514488)
0xd56: @@ SetMessage(Stack[-1])
0xd57: Pop(1)
0xd58: @@ ClearReplies()
0xd59: Pop(0)
0xd5a: Push((int) 514489)
0xd5b: Push((int) -1)
0xd5c: Push((int) 15722)
0xd5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5e: Pop(3)
0xd5f: Push((int) 514490)
0xd60: Push((int) -1)
0xd61: Push((int) 15723)
0xd62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd63: Pop(3)
0xd64: Return(); Pop(0)

0xd65: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd66: PushEmpty(bool)
0xd67: Call2 0x1223

0xd68: Pop(0)
0xd69: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd6a: @ lshStopAnimation()
0xd6b: Pop(0)
0xd6c: GOTO 0xd6f

0xd6d: @ StopAnimation()
0xd6e: Pop(0)
0xd6f: Return(); Pop(0)

0xd70: GOTO 0xbf8

0xd71: Return(); Pop(0)

0xd72: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd73: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd74: PushEmpty(bool, object, float)
0xd75: Stack[-2] = Stack[-12]
0xd76: Stack[-1] = (float) 70.0
0xd77: Call2 0x108c

0xd78: Pop(2)
0xd79: Pop(1); Push((bool) Stack[-1] == 0)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7b: Stack[-10] = (int) -2
0xd7c: Return(); Pop(8)

0xd7d: @ CreateDialog(Stack[-4])
0xd7e: Pop(0)
0xd7f: PushEmpty(int)
0xd80: Call2 0x121d

0xd81: Pop(0)
0xd82: @@ SetNPCName(Stack[-1])
0xd83: Pop(1)
0xd84: PushEmpty(int)
0xd85: Call2 0x121b

0xd86: Pop(0)
0xd87: @@ SetNPCDescription(Stack[-1])
0xd88: Pop(1)
0xd89: PushEmpty(string)
0xd8a: Call2 0x121f

0xd8b: Pop(0)
0xd8c: @@ SetPhoto(Stack[-1])
0xd8d: Pop(1)
0xd8e: PushEmpty(string)
0xd8f: Call2 0x1221

0xd90: Pop(0)
0xd91: @@ SetPhoto2(Stack[-1])
0xd92: Pop(1)
0xd93: PushEmpty(int)
0xd94: Call2 0x149d

0xd95: Pop(0)
0xd96: @@ SetPlayerName(Stack[-1])
0xd97: Pop(1)
0xd98: Stack[-2] = (int) -1
0xd99: @ IsOverrideActive(Stack[-3])
0xd9a: Pop(0)
0xd9b: Push(Stack[-3])
0xd9c: IF (Stack[-1] == 0) GOTO 0xd9f; Pop(1)

0xd9d: Stack[-10] = (int) -2
0xd9e: Return(); Pop(8)

0xd9f: @ DoDialog(Stack[-4])
0xda0: Pop(0)
0xda1: PushEmpty(bool, object)
0xda2: PushEmpty(object)
0xda3: Call2 0x11a2

0xda4: Stack[-2] = Stack[-1]
0xda5: Pop(1)
0xda6: Call2 0x10e3

0xda7: Pop(2)
0xda8: PushEmpty(object, object)
0xda9: Stack[-2] = Stack[-11]
0xdaa: Stack[-1] = Stack[-6]
0xdab: Push(-2, 4); TaskCall(11)
0xdac: Call2 0xdc3

0xdad: Pop(-2, 4); TaskReturn
0xdae: Pop(2)
0xdaf: @@ IsDialogEnd(Stack[-1])
0xdb0: Pop(0)
0xdb1: Pop(0); Push((bool) Stack[-1] == 0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb8; Pop(1)

0xdb3: @ sync()
0xdb4: Pop(0)
0xdb5: @@ IsDialogEnd(Stack[-1])
0xdb6: Pop(0)
0xdb7: GOTO 0xdb1

0xdb8: PushEmpty(object)
0xdb9: Stack[-1] = Stack[-10]
0xdba: Call2 0x10d1

0xdbb: Pop(1)
0xdbc: @ StopDialog(Stack[-4])
0xdbd: Pop(0)
0xdbe: @@ GetReturnValue(Stack[-2])
0xdbf: Pop(0)
0xdc0: Stack[-10] = Stack[-2]
0xdc1: Return(); Pop(8)

0xdc2: Stack[-4] = 0
0xdc3: PushEmpty()
0xdc4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdc5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xdc6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdc7: Push((int) 1)
0xdc8: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdc9: PushEmpty(string)
0xdca: Stack[-1] = "Neutral"
0xdcb: Call2 0xdfd

0xdcc: Pop(1)
0xdcd: Push((int) 535674)
0xdce: @@ SetMessage(Stack[-1])
0xdcf: Pop(1)
0xdd0: @@ ClearReplies()
0xdd1: Pop(0)
0xdd2: Push((int) 535675)
0xdd3: Push((int) 42165)
0xdd4: Push((int) 37361)
0xdd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd6: Pop(3)
0xdd7: Push((int) 540006)
0xdd8: Push((int) -1)
0xdd9: Push((int) 41977)
0xdda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(3)
0xddc: GOTO 0xddf

0xddd: Return(); Pop(0)

0xdde: GOTO 0xdc7

0xddf: PushEmpty(bool)
0xde0: Call2 0x1223

0xde1: Pop(0)
0xde2: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xde3: @ lshWaitForAnimEnd()
0xde4: Pop(0)
0xde5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xde6: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde7: GOTO 0xded

0xde8: PushEmpty(string)
0xde9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdea: Call2 0x116d

0xdeb: Pop(1)
0xdec: GOTO 0xde3

0xded: GOTO 0xdfc

0xdee: Push("all")
0xdef: Push("idle")
0xdf0: @ PlayAnimation(Stack[-2], Stack[-1])
0xdf1: Pop(2)
0xdf2: @ WaitForAnimEnd()
0xdf3: Pop(0)
0xdf4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdf5: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf6: GOTO 0xdfc

0xdf7: Push("all")
0xdf8: Push("idle")
0xdf9: @ PlayAnimation(Stack[-2], Stack[-1])
0xdfa: Pop(2)
0xdfb: GOTO 0xdf2

0xdfc: Return(); Pop(0)

0xdfd: PushEmpty()
0xdfe: PushEmpty(bool)
0xdff: Call2 0x1223

0xe00: Pop(0)
0xe01: Pop(1); Push((bool) Stack[-1] == 0)
0xe02: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xe03: Return(); Pop(0)

0xe04: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe05: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe06: Return(); Pop(0)

0xe07: PushEmpty(string, bool)
0xe08: Stack[-2] = Stack[-3]
0xe09: Push("")
0xe0a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0c: Stack[-1] = (bool) 0
0xe0d: GOTO 0xe0f

0xe0e: Stack[-1] = (bool) 1
0xe0f: Call2 0x117d

0xe10: Pop(2)
0xe11: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe12: Return(); Pop(0)

0xe13: PushEmpty()
0xe14: Push((int) 1)
0xe15: IF (Stack[-1] == 0) GOTO 0xea0; Pop(1)

0xe16: PushEmpty()
0xe17: Call2 0x119b

0xe18: Pop(0)
0xe19: Push((int) 37360)
0xe1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1b: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe1c: PushEmpty(string)
0xe1d: Stack[-1] = "Neutral"
0xe1e: Call2 0xdfd

0xe1f: Pop(1)
0xe20: Push((int) 535674)
0xe21: @@ SetMessage(Stack[-1])
0xe22: Pop(1)
0xe23: @@ ClearReplies()
0xe24: Pop(0)
0xe25: Push((int) 535675)
0xe26: Push((int) 42165)
0xe27: Push((int) 37361)
0xe28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: Push((int) 540006)
0xe2b: Push((int) -1)
0xe2c: Push((int) 41977)
0xe2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2e: Pop(3)
0xe2f: Return(); Pop(0)

0xe30: Push((int) 42165)
0xe31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe32: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe33: PushEmpty(string)
0xe34: Stack[-1] = "Autizm"
0xe35: Call2 0xdfd

0xe36: Pop(1)
0xe37: Push((int) 540187)
0xe38: @@ SetMessage(Stack[-1])
0xe39: Pop(1)
0xe3a: @@ ClearReplies()
0xe3b: Pop(0)
0xe3c: Push((int) 540188)
0xe3d: Push((int) 42167)
0xe3e: Push((int) 42166)
0xe3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(3)
0xe41: Return(); Pop(0)

0xe42: Push((int) 42167)
0xe43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe44: IF (Stack[-1] == 0) GOTO 0xe59; Pop(1)

0xe45: PushEmpty(string)
0xe46: Stack[-1] = "Autizm"
0xe47: Call2 0xdfd

0xe48: Pop(1)
0xe49: Push((int) 540189)
0xe4a: @@ SetMessage(Stack[-1])
0xe4b: Pop(1)
0xe4c: @@ ClearReplies()
0xe4d: Pop(0)
0xe4e: Push((int) 540190)
0xe4f: Push((int) 42196)
0xe50: Push((int) 42168)
0xe51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe52: Pop(3)
0xe53: Push((int) 540192)
0xe54: Push((int) 42169)
0xe55: Push((int) 42170)
0xe56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe57: Pop(3)
0xe58: Return(); Pop(0)

0xe59: Push((int) 42196)
0xe5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5b: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe5c: PushEmpty(string)
0xe5d: Stack[-1] = "Autizm"
0xe5e: Call2 0xdfd

0xe5f: Pop(1)
0xe60: Push((int) 540216)
0xe61: @@ SetMessage(Stack[-1])
0xe62: Pop(1)
0xe63: @@ ClearReplies()
0xe64: Pop(0)
0xe65: Push((int) 540217)
0xe66: Push((int) 42169)
0xe67: Push((int) 42197)
0xe68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe69: Pop(3)
0xe6a: Return(); Pop(0)

0xe6b: Push((int) 42169)
0xe6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6d: IF (Stack[-1] == 0) GOTO 0xe82; Pop(1)

0xe6e: PushEmpty(string)
0xe6f: Stack[-1] = "Neutral"
0xe70: Call2 0xdfd

0xe71: Pop(1)
0xe72: Push((int) 540191)
0xe73: @@ SetMessage(Stack[-1])
0xe74: Pop(1)
0xe75: @@ ClearReplies()
0xe76: Pop(0)
0xe77: Push((int) 540193)
0xe78: Push((int) -1)
0xe79: Push((int) 42172)
0xe7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7b: Pop(3)
0xe7c: Push((int) 540194)
0xe7d: Push((int) 42174)
0xe7e: Push((int) 42173)
0xe7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe80: Pop(3)
0xe81: Return(); Pop(0)

0xe82: Push((int) 42174)
0xe83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe84: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe85: PushEmpty(string)
0xe86: Stack[-1] = "Neutral"
0xe87: Call2 0xdfd

0xe88: Pop(1)
0xe89: Push((int) 540195)
0xe8a: @@ SetMessage(Stack[-1])
0xe8b: Pop(1)
0xe8c: @@ ClearReplies()
0xe8d: Pop(0)
0xe8e: Push((int) 540196)
0xe8f: Push((int) -1)
0xe90: Push((int) 42175)
0xe91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe92: Pop(3)
0xe93: Return(); Pop(0)

0xe94: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe95: PushEmpty(bool)
0xe96: Call2 0x1223

0xe97: Pop(0)
0xe98: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe99: @ lshStopAnimation()
0xe9a: Pop(0)
0xe9b: GOTO 0xe9e

0xe9c: @ StopAnimation()
0xe9d: Pop(0)
0xe9e: Return(); Pop(0)

0xe9f: GOTO 0xe14

0xea0: Return(); Pop(0)

0xea1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xea2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xea3: PushEmpty(bool, object, float)
0xea4: Stack[-2] = Stack[-12]
0xea5: Stack[-1] = (float) 70.0
0xea6: Call2 0x108c

0xea7: Pop(2)
0xea8: Pop(1); Push((bool) Stack[-1] == 0)
0xea9: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xeaa: Stack[-10] = (int) -2
0xeab: Return(); Pop(8)

0xeac: @ CreateDialog(Stack[-4])
0xead: Pop(0)
0xeae: PushEmpty(int)
0xeaf: Call2 0x121d

0xeb0: Pop(0)
0xeb1: @@ SetNPCName(Stack[-1])
0xeb2: Pop(1)
0xeb3: PushEmpty(int)
0xeb4: Call2 0x121b

0xeb5: Pop(0)
0xeb6: @@ SetNPCDescription(Stack[-1])
0xeb7: Pop(1)
0xeb8: PushEmpty(string)
0xeb9: Call2 0x121f

0xeba: Pop(0)
0xebb: @@ SetPhoto(Stack[-1])
0xebc: Pop(1)
0xebd: PushEmpty(string)
0xebe: Call2 0x1221

0xebf: Pop(0)
0xec0: @@ SetPhoto2(Stack[-1])
0xec1: Pop(1)
0xec2: PushEmpty(int)
0xec3: Call2 0x149d

0xec4: Pop(0)
0xec5: @@ SetPlayerName(Stack[-1])
0xec6: Pop(1)
0xec7: Stack[-2] = (int) -1
0xec8: @ IsOverrideActive(Stack[-3])
0xec9: Pop(0)
0xeca: Push(Stack[-3])
0xecb: IF (Stack[-1] == 0) GOTO 0xece; Pop(1)

0xecc: Stack[-10] = (int) -2
0xecd: Return(); Pop(8)

0xece: @ DoDialog(Stack[-4])
0xecf: Pop(0)
0xed0: PushEmpty(bool, object)
0xed1: PushEmpty(object)
0xed2: Call2 0x11a2

0xed3: Stack[-2] = Stack[-1]
0xed4: Pop(1)
0xed5: Call2 0x10e3

0xed6: Pop(2)
0xed7: PushEmpty(object, object)
0xed8: Stack[-2] = Stack[-11]
0xed9: Stack[-1] = Stack[-6]
0xeda: Push(-2, 4); TaskCall(13)
0xedb: Call2 0xef2

0xedc: Pop(-2, 4); TaskReturn
0xedd: Pop(2)
0xede: @@ IsDialogEnd(Stack[-1])
0xedf: Pop(0)
0xee0: Pop(0); Push((bool) Stack[-1] == 0)
0xee1: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee2: @ sync()
0xee3: Pop(0)
0xee4: @@ IsDialogEnd(Stack[-1])
0xee5: Pop(0)
0xee6: GOTO 0xee0

0xee7: PushEmpty(object)
0xee8: Stack[-1] = Stack[-10]
0xee9: Call2 0x10d1

0xeea: Pop(1)
0xeeb: @ StopDialog(Stack[-4])
0xeec: Pop(0)
0xeed: @@ GetReturnValue(Stack[-2])
0xeee: Pop(0)
0xeef: Stack[-10] = Stack[-2]
0xef0: Return(); Pop(8)

0xef1: Stack[-4] = 0
0xef2: PushEmpty()
0xef3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xef4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xef5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xef6: Push((int) 1)
0xef7: IF (Stack[-1] == 0) GOTO 0xf0e; Pop(1)

0xef8: PushEmpty(string)
0xef9: Stack[-1] = "Neutral"
0xefa: Call2 0xf2c

0xefb: Pop(1)
0xefc: Push((int) 540542)
0xefd: @@ SetMessage(Stack[-1])
0xefe: Pop(1)
0xeff: @@ ClearReplies()
0xf00: Pop(0)
0xf01: Push((int) 540543)
0xf02: Push((int) -1)
0xf03: Push((int) 42552)
0xf04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf05: Pop(3)
0xf06: Push((int) 540796)
0xf07: Push((int) -1)
0xf08: Push((int) 42845)
0xf09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0a: Pop(3)
0xf0b: GOTO 0xf0e

0xf0c: Return(); Pop(0)

0xf0d: GOTO 0xef6

0xf0e: PushEmpty(bool)
0xf0f: Call2 0x1223

0xf10: Pop(0)
0xf11: IF (Stack[-1] == 0) GOTO 0xf1d; Pop(1)

0xf12: @ lshWaitForAnimEnd()
0xf13: Pop(0)
0xf14: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf15: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf16: GOTO 0xf1c

0xf17: PushEmpty(string)
0xf18: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf19: Call2 0x116d

0xf1a: Pop(1)
0xf1b: GOTO 0xf12

0xf1c: GOTO 0xf2b

0xf1d: Push("all")
0xf1e: Push("idle")
0xf1f: @ PlayAnimation(Stack[-2], Stack[-1])
0xf20: Pop(2)
0xf21: @ WaitForAnimEnd()
0xf22: Pop(0)
0xf23: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf24: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf25: GOTO 0xf2b

0xf26: Push("all")
0xf27: Push("idle")
0xf28: @ PlayAnimation(Stack[-2], Stack[-1])
0xf29: Pop(2)
0xf2a: GOTO 0xf21

0xf2b: Return(); Pop(0)

0xf2c: PushEmpty()
0xf2d: PushEmpty(bool)
0xf2e: Call2 0x1223

0xf2f: Pop(0)
0xf30: Pop(1); Push((bool) Stack[-1] == 0)
0xf31: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf32: Return(); Pop(0)

0xf33: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf34: IF (Stack[-1] == 0) GOTO 0xf36; Pop(1)

0xf35: Return(); Pop(0)

0xf36: PushEmpty(string, bool)
0xf37: Stack[-2] = Stack[-3]
0xf38: Push("")
0xf39: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf3a: IF (Stack[-1] == 0) GOTO 0xf3d; Pop(1)

0xf3b: Stack[-1] = (bool) 0
0xf3c: GOTO 0xf3e

0xf3d: Stack[-1] = (bool) 1
0xf3e: Call2 0x117d

0xf3f: Pop(2)
0xf40: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf41: Return(); Pop(0)

0xf42: PushEmpty()
0xf43: Push((int) 1)
0xf44: IF (Stack[-1] == 0) GOTO 0xf6b; Pop(1)

0xf45: PushEmpty()
0xf46: Call2 0x119b

0xf47: Pop(0)
0xf48: Push((int) 42551)
0xf49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf4b: PushEmpty(string)
0xf4c: Stack[-1] = "Neutral"
0xf4d: Call2 0xf2c

0xf4e: Pop(1)
0xf4f: Push((int) 540542)
0xf50: @@ SetMessage(Stack[-1])
0xf51: Pop(1)
0xf52: @@ ClearReplies()
0xf53: Pop(0)
0xf54: Push((int) 540543)
0xf55: Push((int) -1)
0xf56: Push((int) 42552)
0xf57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf58: Pop(3)
0xf59: Push((int) 540796)
0xf5a: Push((int) -1)
0xf5b: Push((int) 42845)
0xf5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5d: Pop(3)
0xf5e: Return(); Pop(0)

0xf5f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf60: PushEmpty(bool)
0xf61: Call2 0x1223

0xf62: Pop(0)
0xf63: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf64: @ lshStopAnimation()
0xf65: Pop(0)
0xf66: GOTO 0xf69

0xf67: @ StopAnimation()
0xf68: Pop(0)
0xf69: Return(); Pop(0)

0xf6a: GOTO 0xf43

0xf6b: Return(); Pop(0)

0xf6c: PushEmpty()
0xf6d: Call2 0xf70

0xf6e: Pop(0)
0xf6f: Return(); Pop(0)

0xf70: PushEmpty(bool)
0xf71: Call2 0x1087

0xf72: Pop(0)
0xf73: Pop(1); Push((bool) Stack[-1] == 0)
0xf74: IF (Stack[-1] == 0) GOTO 0xf77; Pop(1)

0xf75: @ Hold()
0xf76: Pop(0)
0xf77: @ GetDirection(Stack[-0])
0xf78: Pop(0)
0xf79: PushEmpty()
0xf7a: Call2 0x1020

0xf7b: Pop(0)
0xf7c: GOTO 0xf79

0xf7d: Return(); Pop(0)

0xf7e: PushEmpty(object, object)
0xf7f: Push("player")
0xf80: @ FindActor(Stack[-2], Stack[-1])
0xf81: Pop(1)
0xf82: Pop(0); Push((bool) Stack[-1] == 0)
0xf83: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf84: Stack[-3] = (bool) 0
0xf85: Return(); Pop(2)

0xf86: PushEmpty(bool, object)
0xf87: Stack[-1] = Stack[-3]
0xf88: Call2 0x107e

0xf89: Stack[-5] = Stack[-2]
0xf8a: Pop(2)
0xf8b: Return(); Pop(2)

0xf8c: Stack[-1] = 0
0xf8d: Push(CvectorIndex(Stack[-0], 0))
0xf8e: Push(CvectorIndex(Stack[-0], 2))
0xf8f: @ RotateAsync(Stack[-2], Stack[-1])
0xf90: Pop(2)
0xf91: Return(); Pop(0)

0xf92: PushEmpty(object, bool, object, bool)
0xf93: Push("player")
0xf94: @ FindActor(Stack[-3], Stack[-1])
0xf95: Pop(1)
0xf96: Pop(0); Push((bool) Stack[-2] == 0)
0xf97: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf98: Stack[-5] = (bool) 0
0xf99: Return(); Pop(4)

0xf9a: PushEmpty(float, object)
0xf9b: Stack[-1] = Stack[-4]
0xf9c: Call2 0x106c

0xf9d: Pop(1)
0xf9e: Push((float)90000.0)
0xf9f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xfa0: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xfa1: Stack[-5] = (bool) 0
0xfa2: Return(); Pop(4)

0xfa3: @ CanSee(Stack[-1], Stack[-2])
0xfa4: Pop(0)
0xfa5: Stack[-5] = Stack[-1]
0xfa6: Return(); Pop(4)

0xfa7: Stack[-2] = 0
0xfa8: PushEmpty(float, float)
0xfa9: Push((int) 8)
0xfaa: Push((int) 16)
0xfab: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xfac: Pop(2)
0xfad: Push((int) 10)
0xfae: @ SetTimer(Stack[-1], Stack[-2])
0xfaf: Pop(1)
0xfb0: Return(); Pop(2)

0xfb1: Push((int) 10)
0xfb2: @ KillTimer(Stack[-1])
0xfb3: Pop(1)
0xfb4: Return(); Pop(0)

0xfb5: PushEmpty()
0xfb6: Push((int) 10)
0xfb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb8: IF (Stack[-1] == 0) GOTO 0xfda; Pop(1)

0xfb9: PushEmpty()
0xfba: Call2 0xfb1

0xfbb: Pop(0)
0xfbc: PushEmpty(bool)
0xfbd: Stack[-1] = (bool) 0
0xfbe: PushEmpty(bool)
0xfbf: Call2 0x1087

0xfc0: Pop(0)
0xfc1: IF (Stack[-1] == 0) GOTO 0xfc7; Pop(1)

0xfc2: PushEmpty(bool)
0xfc3: Call2 0xf92

0xfc4: Pop(0)
0xfc5: IF (Stack[-1] == 0) GOTO 0xfc7; Pop(1)

0xfc6: Stack[-1] = (bool) 1
0xfc7: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfc8: PushEmpty(bool)
0xfc9: Call2 0xf7e

0xfca: Pop(0)
0xfcb: IF (Stack[-1] == 0) GOTO 0xfd3; Pop(1)

0xfcc: PushEmpty(bool, object)
0xfcd: PushEmpty(object)
0xfce: Call2 0x11a2

0xfcf: Stack[-2] = Stack[-1]
0xfd0: Pop(1)
0xfd1: Call2 0x111d

0xfd2: Pop(2)
0xfd3: GOTO 0xfda

0xfd4: PushEmpty()
0xfd5: Call2 0xf8d

0xfd6: Pop(0)
0xfd7: PushEmpty()
0xfd8: Call2 0xfa8

0xfd9: Pop(0)
0xfda: Return(); Pop(0)

0xfdb: PushEmpty()
0xfdc: Call2 0x1067

0xfdd: Pop(0)
0xfde: PushEmpty()
0xfdf: Call2 0xfb1

0xfe0: Pop(0)
0xfe1: @ lshStopSpeech()
0xfe2: Pop(0)
0xfe3: @ lshStopAnimation()
0xfe4: Pop(0)
0xfe5: @ StopAsync()
0xfe6: Pop(0)
0xfe7: @ Hold()
0xfe8: Pop(0)
0xfe9: Return(); Pop(0)

0xfea: @ StopGroup0()
0xfeb: Pop(0)
0xfec: PushEmpty()
0xfed: Call2 0xfb1

0xfee: Pop(0)
0xfef: PushEmpty(string)
0xff0: Stack[-1] = "Neutral"
0xff1: Call2 0x116d

0xff2: Pop(1)
0xff3: PushEmpty()
0xff4: Call2 0xfa8

0xff5: Pop(0)
0xff6: Return(); Pop(0)

0xff7: PushEmpty()
0xff8: Push(Stack[-1])
0xff9: IF (Stack[-1] == 0) GOTO 0xffe; Pop(1)

0xffa: PushEmpty()
0xffb: Call2 0xfa8

0xffc: Pop(0)
0xffd: GOTO 0x1002

0xffe: PushEmpty(string)
0xfff: Stack[-1] = "Neutral"
0x1000: Call2 0x116d

0x1001: Pop(1)
0x1002: Return(); Pop(0)

0x1003: PushEmpty(bool, bool)
0x1004: @ IsOverrideActive(Stack[-1])
0x1005: Pop(0)
0x1006: Pop(0); Push((bool) Stack[-1] == 0)
0x1007: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x1008: EventDisable(0)
0x1009: PushEmpty()
0x100a: Call2 0x1067

0x100b: Pop(0)
0x100c: PushEmpty(bool, object)
0x100d: Stack[-1] = Stack[-5]
0x100e: Call2 0x107e

0x100f: Pop(2)
0x1010: EventEnable(0)
0x1011: PushEmpty(object)
0x1012: Stack[-1] = Stack[-4]
0x1013: Call2 0x14ae

0x1014: Pop(1)
0x1015: PushEmpty(string)
0x1016: Stack[-1] = "Neutral"
0x1017: Call2 0x116d

0x1018: Pop(1)
0x1019: PushEmpty()
0x101a: Call2 0xfb1

0x101b: Pop(0)
0x101c: PushEmpty()
0x101d: Call2 0xfa8

0x101e: Pop(0)
0x101f: Return(); Pop(2)

0x1020: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1021: @ WaitForAnimEnd()
0x1022: Pop(0)
0x1023: PushEmpty(bool)
0x1024: Call2 0x1087

0x1025: Pop(0)
0x1026: Pop(1); Push((bool) Stack[-1] == 0)
0x1027: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x1028: Return(); Pop(12)

0x1029: PushEmpty(int)
0x102a: Call2 0x120a

0x102b: Stack[-7] = Stack[-1]
0x102c: Pop(1)
0x102d: Stack[-5] = (int) 0
0x102e: PushEmpty(bool)
0x102f: Stack[-1] = (bool) 0
0x1030: Push((int) 5)
0x1031: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1032: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1033: PushEmpty(bool)
0x1034: Call2 0x1087

0x1035: Pop(0)
0x1036: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1037: Stack[-1] = (bool) 1
0x1038: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x1039: Pop(0); Push((bool) Stack[-6] == 0)
0x103a: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x103b: Push((int) 3)
0x103c: @ Sleep(Stack[-1], Stack[-5])
0x103d: Pop(1)
0x103e: Pop(0); Push((bool) Stack[-4] == 0)
0x103f: IF (Stack[-1] == 0) GOTO 0x1041; Pop(1)

0x1040: GOTO 0x1062

0x1041: GOTO 0x1057

0x1042: @ irand(Stack[-3], Stack[-6])
0x1043: Pop(0)
0x1044: Push((int) 5)
0x1045: @ irand(Stack[-3], Stack[-1])
0x1046: Pop(1)
0x1047: Push((int) 0)
0x1048: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x1049: IF (Stack[-1] == 0) GOTO 0x104b; Pop(1)

0x104a: Stack[-3] = (int) 0
0x104b: Push("all")
0x104c: PushEmpty(string, int)
0x104d: Stack[-1] = Stack[-6]
0x104e: Call2 0x1203

0x104f: Pop(1)
0x1050: @ PlayAnimation(Stack[-2], Stack[-1])
0x1051: Pop(2)
0x1052: @ WaitForAnimEnd(Stack[-1])
0x1053: Pop(0)
0x1054: Pop(0); Push((bool) Stack[-1] == 0)
0x1055: IF (Stack[-1] == 0) GOTO 0x1057; Pop(1)

0x1056: GOTO 0x1062

0x1057: PushEmpty(bool)
0x1058: Call2 0x1065

0x1059: Pop(0)
0x105a: Pop(1); Push((bool) Stack[-1] == 0)
0x105b: IF (Stack[-1] == 0) GOTO 0x105d; Pop(1)

0x105c: GOTO 0x1062

0x105d: @ ResetAAS()
0x105e: Pop(0)
0x105f: Push((int) 1)
0x1060: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1061: GOTO 0x102e

0x1062: @ ResetAAS()
0x1063: Pop(0)
0x1064: Return(); Pop(12)

0x1065: Stack[-1] = (bool) 1
0x1066: Return(); Pop(0)

0x1067: @ StopAnimation()
0x1068: Pop(0)
0x1069: @ StopGroup0()
0x106a: Pop(0)
0x106b: Return(); Pop(0)

0x106c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x106d: @ GetPosition(Stack[-3])
0x106e: Pop(0)
0x106f: @@ GetPosition(Stack[-2])
0x1070: Pop(0)
0x1071: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1072: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1073: Return(); Pop(6)

0x1074: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1075: @ GetPosition(Stack[-3])
0x1076: Pop(0)
0x1077: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x1078: Push(CvectorIndex(Stack[-2], 0))
0x1079: Push(CvectorIndex(Stack[-3], 2))
0x107a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x107b: Pop(2)
0x107c: Stack[-8] = Stack[-1]
0x107d: Return(); Pop(6)

0x107e: PushEmpty(cvector, cvector)
0x107f: @@ GetPosition(Stack[-1])
0x1080: Pop(0)
0x1081: PushEmpty(bool, cvector)
0x1082: Stack[-1] = Stack[-3]
0x1083: Call2 0x1074

0x1084: Stack[-6] = Stack[-2]
0x1085: Pop(2)
0x1086: Return(); Pop(2)

0x1087: PushEmpty(bool, bool)
0x1088: @ IsLoaded(Stack[-1])
0x1089: Pop(0)
0x108a: Stack[-3] = Stack[-1]
0x108b: Return(); Pop(2)

0x108c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x108d: @@ GetPosition(Stack[-8])
0x108e: Pop(0)
0x108f: @@ GetEyesHeight(Stack[-9])
0x1090: Pop(0)
0x1091: Push(CvectorIndex(Stack[-8], 1))
0x1092: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1093: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1094: @ GetPosition(Stack[-7])
0x1095: Pop(0)
0x1096: @ GetEyesHeight(Stack[-9])
0x1097: Pop(0)
0x1098: Push(CvectorIndex(Stack[-7], 1))
0x1099: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x109a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x109b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x109c: Push(CvectorIndex(Stack[-6], 1))
0x109d: Stack[-1] = (int) 0
0x109e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x109f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x10a0: Pop(1); Push(Sqrt(Stack[-1]))
0x10a1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x10a2: Stack[-5] = -Stack[-6]; Pop(0);
0x10a3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x10a4: PushEmpty(cvector, cvector)
0x10a5: Push(CVector(0.0, 1.0, 0.0))
0x10a6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x10a7: Call2 0x11a8

0x10a8: Pop(1)
0x10a9: Push((int) 25)
0x10aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10ac: Push(CVector(0.0, 10.0, 0.0))
0x10ad: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x10ae: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x10af: @ IsOverrideActive(Stack[-2])
0x10b0: Pop(0)
0x10b1: Push(Stack[-2])
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10b3: Stack[-21] = (bool) 0
0x10b4: Return(); Pop(18)

0x10b5: @ StopWorld()
0x10b6: Pop(0)
0x10b7: Push((bool) 1)
0x10b8: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x10b9: Pop(1)
0x10ba: Push(CvectorIndex(Stack[-4], 0))
0x10bb: Push(CvectorIndex(Stack[-5], 2))
0x10bc: @ Rotate(Stack[-2], Stack[-1])
0x10bd: Pop(2)
0x10be: PushEmpty(bool)
0x10bf: Call2 0x1223

0x10c0: Pop(0)
0x10c1: IF (Stack[-1] == 0) GOTO 0x10c3; Pop(1)

0x10c2: GOTO 0x10cb

0x10c3: Push("head")
0x10c4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10c5: Pop(1)
0x10c6: Push(Stack[-1])
0x10c7: IF (Stack[-1] == 0) GOTO 0x10cb; Pop(1)

0x10c8: Push("head")
0x10c9: @ LookAsyncCamera(Stack[-1])
0x10ca: Pop(1)
0x10cb: @ CameraWaitForPlayFinish()
0x10cc: Pop(0)
0x10cd: @ ResumeWorld()
0x10ce: Pop(0)
0x10cf: Stack[-21] = (bool) 1
0x10d0: Return(); Pop(18)

0x10d1: PushEmpty(bool, bool)
0x10d2: Push((bool) 1)
0x10d3: @ CameraSwitchToNormal(Stack[-1])
0x10d4: Pop(1)
0x10d5: PushEmpty(bool)
0x10d6: Call2 0x1223

0x10d7: Pop(0)
0x10d8: IF (Stack[-1] == 0) GOTO 0x10da; Pop(1)

0x10d9: GOTO 0x10e2

0x10da: Push("head")
0x10db: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x10dc: Pop(1)
0x10dd: Push(Stack[-1])
0x10de: IF (Stack[-1] == 0) GOTO 0x10e2; Pop(1)

0x10df: Push("head")
0x10e0: @ UnlookAsync(Stack[-1])
0x10e1: Pop(1)
0x10e2: Return(); Pop(2)

0x10e3: PushEmpty(int, int, int, int)
0x10e4: Push("voice_common")
0x10e5: @ GetVariable(Stack[-1], Stack[-3])
0x10e6: Pop(1)
0x10e7: Push(Stack[-2])
0x10e8: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x10e9: PushEmpty(bool, object)
0x10ea: Stack[-1] = Stack[-7]
0x10eb: Call2 0x111d

0x10ec: Pop(1)
0x10ed: Pop(1); Push((bool) Stack[-1] == 0)
0x10ee: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10ef: PushEmpty(bool, object)
0x10f0: Stack[-1] = Stack[-7]
0x10f1: Call2 0x1142

0x10f2: Pop(1)
0x10f3: Pop(1); Push((bool) Stack[-1] == 0)
0x10f4: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10f5: Stack[-6] = (bool) 0
0x10f6: Return(); Pop(4)

0x10f7: Push((int) 2)
0x10f8: @ irand(Stack[-2], Stack[-1])
0x10f9: Pop(1)
0x10fa: Push(Stack[-1])
0x10fb: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x10fc: Push("voice_common")
0x10fd: Push((int) 1)
0x10fe: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10ff: Push((int) 3)
0x1100: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1101: @ SetVariable(Stack[-2], Stack[-1])
0x1102: Pop(2)
0x1103: GOTO 0x1108

0x1104: Push("voice_common")
0x1105: Push((int) 0)
0x1106: @ SetVariable(Stack[-2], Stack[-1])
0x1107: Pop(2)
0x1108: GOTO 0x111b

0x1109: PushEmpty(bool, object)
0x110a: Stack[-1] = Stack[-7]
0x110b: Call2 0x1142

0x110c: Pop(1)
0x110d: Pop(1); Push((bool) Stack[-1] == 0)
0x110e: IF (Stack[-1] == 0) GOTO 0x1117; Pop(1)

0x110f: PushEmpty(bool, object)
0x1110: Stack[-1] = Stack[-7]
0x1111: Call2 0x111d

0x1112: Pop(1)
0x1113: Pop(1); Push((bool) Stack[-1] == 0)
0x1114: IF (Stack[-1] == 0) GOTO 0x1117; Pop(1)

0x1115: Stack[-6] = (bool) 0
0x1116: Return(); Pop(4)

0x1117: Push("voice_common")
0x1118: Push((int) 1)
0x1119: @ SetVariable(Stack[-2], Stack[-1])
0x111a: Pop(2)
0x111b: Stack[-6] = (bool) 1
0x111c: Return(); Pop(4)

0x111d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x111e: Stack[-5] = "c"
0x111f: Stack[-4] = (int) 0
0x1120: Push((int) 1)
0x1121: IF (Stack[-1] == 0) GOTO 0x112d; Pop(1)

0x1122: Push((int) 1)
0x1123: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1124: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1125: @@ HasProperty(Stack[-1], Stack[-4])
0x1126: Pop(1)
0x1127: Pop(0); Push((bool) Stack[-3] == 0)
0x1128: IF (Stack[-1] == 0) GOTO 0x112a; Pop(1)

0x1129: GOTO 0x112d

0x112a: Push((int) 1)
0x112b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x112c: GOTO 0x1120

0x112d: Pop(0); Push((bool) Stack[-4] == 0)
0x112e: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x112f: Stack[-12] = (bool) 0
0x1130: Return(); Pop(10)

0x1131: Stack[-2] = (int) 0
0x1132: Push((int) 1)
0x1133: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1134: IF (Stack[-1] == 0) GOTO 0x1137; Pop(1)

0x1135: @ irand(Stack[-2], Stack[-4])
0x1136: Pop(0)
0x1137: Push((int) 1)
0x1138: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1139: Pop(1); Push(Stack[-6] + Stack[-1]);
0x113a: @@ GetProperty(Stack[-1], Stack[-2])
0x113b: Pop(1)
0x113c: PushEmpty(bool, string)
0x113d: Stack[-1] = Stack[-3]
0x113e: Call2 0x118c

0x113f: Stack[-14] = Stack[-2]
0x1140: Pop(2)
0x1141: Return(); Pop(10)

0x1142: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1143: Push("d")
0x1144: PushEmpty(int)
0x1145: Call2 0x11f4

0x1146: Pop(0)
0x1147: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1148: Push("m")
0x1149: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x114a: Stack[-4] = (int) 0
0x114b: Push((int) 1)
0x114c: IF (Stack[-1] == 0) GOTO 0x1158; Pop(1)

0x114d: Push((int) 1)
0x114e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x114f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1150: @@ HasProperty(Stack[-1], Stack[-4])
0x1151: Pop(1)
0x1152: Pop(0); Push((bool) Stack[-3] == 0)
0x1153: IF (Stack[-1] == 0) GOTO 0x1155; Pop(1)

0x1154: GOTO 0x1158

0x1155: Push((int) 1)
0x1156: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1157: GOTO 0x114b

0x1158: Pop(0); Push((bool) Stack[-4] == 0)
0x1159: IF (Stack[-1] == 0) GOTO 0x115c; Pop(1)

0x115a: Stack[-12] = (bool) 0
0x115b: Return(); Pop(10)

0x115c: Stack[-2] = (int) 0
0x115d: Push((int) 1)
0x115e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x115f: IF (Stack[-1] == 0) GOTO 0x1162; Pop(1)

0x1160: @ irand(Stack[-2], Stack[-4])
0x1161: Pop(0)
0x1162: Push((int) 1)
0x1163: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1164: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1165: @@ GetProperty(Stack[-1], Stack[-2])
0x1166: Pop(1)
0x1167: PushEmpty(bool, string)
0x1168: Stack[-1] = Stack[-3]
0x1169: Call2 0x118c

0x116a: Stack[-14] = Stack[-2]
0x116b: Pop(2)
0x116c: Return(); Pop(10)

0x116d: PushEmpty(bool, float, float, bool, float, float)
0x116e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x116f: Pop(0)
0x1170: Push(Stack[-3])
0x1171: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1172: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1173: Pop(0)
0x1174: Push((bool) 0)
0x1175: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1176: Pop(1)
0x1177: GOTO 0x117c

0x1178: Push("Can't find lsh animation : ")
0x1179: Pop(1); Push(Stack[-1] + Stack[-8]);
0x117a: @ Trace(Stack[-1])
0x117b: Pop(1)
0x117c: Return(); Pop(6)

0x117d: PushEmpty(bool, float, float, bool, float, float)
0x117e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x117f: Pop(0)
0x1180: Push(Stack[-3])
0x1181: IF (Stack[-1] == 0) GOTO 0x1187; Pop(1)

0x1182: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1183: Pop(0)
0x1184: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1185: Pop(0)
0x1186: GOTO 0x118b

0x1187: Push("Can't find lsh animation : ")
0x1188: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1189: @ Trace(Stack[-1])
0x118a: Pop(1)
0x118b: Return(); Pop(6)

0x118c: PushEmpty(bool, bool)
0x118d: PushEmpty(bool)
0x118e: Call2 0x1223

0x118f: Pop(0)
0x1190: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1191: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1192: Pop(0)
0x1193: Push(Stack[-1])
0x1194: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1195: @ lshPlaySpeech(Stack[-3])
0x1196: Pop(0)
0x1197: Stack[-4] = (bool) 1
0x1198: Return(); Pop(2)

0x1199: Stack[-4] = (bool) 0
0x119a: Return(); Pop(2)

0x119b: PushEmpty(bool)
0x119c: Call2 0x1223

0x119d: Pop(0)
0x119e: IF (Stack[-1] == 0) GOTO 0x11a1; Pop(1)

0x119f: @ lshStopSpeech()
0x11a0: Pop(0)
0x11a1: Return(); Pop(0)

0x11a2: PushEmpty(object, object)
0x11a3: @ self(Stack[-1])
0x11a4: Pop(0)
0x11a5: Stack[-3] = Stack[-1]
0x11a6: Return(); Pop(2)

0x11a7: Stack[-1] = 0
0x11a8: PushEmpty(float, float)
0x11a9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11aa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11ab: Push((float)0.0)
0x11ac: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11ad: IF (Stack[-1] == 0) GOTO 0x11b0; Pop(1)

0x11ae: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11af: Return(); Pop(2)

0x11b0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11b1: Return(); Pop(2)

0x11b2: PushEmpty(int, int)
0x11b3: @ GetVariable(Stack[-3], Stack[-1])
0x11b4: Pop(0)
0x11b5: Stack[-4] = Stack[-1]
0x11b6: Return(); Pop(2)

0x11b7: PushEmpty(object, object)
0x11b8: @ CreateIntVector(Stack[-1])
0x11b9: Pop(0)
0x11ba: @@ add(Stack[-4])
0x11bb: Pop(0)
0x11bc: @@ add(Stack[-3])
0x11bd: Pop(0)
0x11be: Push((int) 3)
0x11bf: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x11c0: Pop(1)
0x11c1: Return(); Pop(2)

0x11c2: Stack[-1] = 0
0x11c3: PushEmpty(int, int, bool, int, int, bool)
0x11c4: @@ GetItemID(Stack[-3])
0x11c5: Pop(0)
0x11c6: Push("Category")
0x11c7: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x11c8: Pop(1)
0x11c9: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x11ca: Pop(0)
0x11cb: Pop(0); Push((bool) Stack[-1] == 0)
0x11cc: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11cd: @@ DropItems(Stack[-8], Stack[-7])
0x11ce: Pop(0)
0x11cf: GOTO 0x11d5

0x11d0: PushEmpty(int, int)
0x11d1: Stack[-2] = Stack[-5]
0x11d2: Stack[-1] = Stack[-9]
0x11d3: Call2 0x11b7

0x11d4: Pop(2)
0x11d5: Return(); Pop(6)

0x11d6: PushEmpty(object, object)
0x11d7: @ CreateInvItem(Stack[-1])
0x11d8: Pop(0)
0x11d9: @@ SetItemName(Stack[-4])
0x11da: Pop(0)
0x11db: PushEmpty(object, object, int)
0x11dc: Stack[-3] = Stack[-8]
0x11dd: Stack[-2] = Stack[-4]
0x11de: Stack[-1] = Stack[-6]
0x11df: Call2 0x11c3

0x11e0: Pop(3)
0x11e1: Return(); Pop(2)

0x11e2: Stack[-1] = 0
0x11e3: PushEmpty(object, object)
0x11e4: @ FindActor(Stack[-1], Stack[-4])
0x11e5: Pop(0)
0x11e6: Pop(0); Push((bool) Stack[-1] == 0)
0x11e7: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11e8: Stack[-5] = (bool) 0
0x11e9: Return(); Pop(2)

0x11ea: @ Trigger(Stack[-1], Stack[-3])
0x11eb: Pop(0)
0x11ec: Stack[-5] = (bool) 1
0x11ed: Return(); Pop(2)

0x11ee: Stack[-1] = 0
0x11ef: PushEmpty(float, float)
0x11f0: @ GetGameTime(Stack[-1])
0x11f1: Pop(0)
0x11f2: Stack[-3] = Stack[-1]
0x11f3: Return(); Pop(2)

0x11f4: PushEmpty(float, float)
0x11f5: @ GetGameTime(Stack[-1])
0x11f6: Pop(0)
0x11f7: Push((int) 1)
0x11f8: PushEmpty(int)
0x11f9: Push((int) 24)
0x11fa: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x11fb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11fc: Return(); Pop(2)

0x11fd: PushEmpty()
0x11fe: PushEmpty(int)
0x11ff: Call2 0x11f4

0x1200: Pop(0)
0x1201: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1202: Return(); Pop(0)

0x1203: PushEmpty(string, string)
0x1204: Stack[-1] = "idle"
0x1205: Push(Stack[-3])
0x1206: IF (Stack[-1] == 0) GOTO 0x1208; Pop(1)

0x1207: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1208: Stack[-4] = Stack[-1]
0x1209: Return(); Pop(2)

0x120a: PushEmpty(int, bool, int, bool)
0x120b: Stack[-2] = (int) 0
0x120c: Push("all")
0x120d: PushEmpty(string, int)
0x120e: Stack[-1] = Stack[-5]
0x120f: Call2 0x1203

0x1210: Pop(1)
0x1211: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1212: Pop(2)
0x1213: Pop(0); Push((bool) Stack[-1] == 0)
0x1214: IF (Stack[-1] == 0) GOTO 0x1216; Pop(1)

0x1215: GOTO 0x1219

0x1216: Push((int) 1)
0x1217: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1218: GOTO 0x120c

0x1219: Stack[-5] = Stack[-2]
0x121a: Return(); Pop(4)

0x121b: Stack[-1] = (int) 515550
0x121c: Return(); Pop(0)

0x121d: Stack[-1] = (int) 502875
0x121e: Return(); Pop(0)

0x121f: Stack[-1] = "ui/NPC_Petr.png"
0x1220: Return(); Pop(0)

0x1221: Stack[-1] = "ui/NPC_Petr_b.png"
0x1222: Return(); Pop(0)

0x1223: Stack[-1] = (bool) 1
0x1224: Return(); Pop(0)

0x1225: PushEmpty()
0x1226: Push("playsound")
0x1227: Push("giveitem")
0x1228: @ TriggerWorld(Stack[-2], Stack[-1])
0x1229: Pop(2)
0x122a: Return(); Pop(0)

0x122b: PushEmpty()
0x122c: PushEmpty(bool, string, string)
0x122d: Stack[-2] = "quest_d7_03"
0x122e: Stack[-1] = "remove_maria"
0x122f: Call2 0x11e3

0x1230: Pop(3)
0x1231: Return(); Pop(0)

0x1232: PushEmpty()
0x1233: Push("ood7Petr2")
0x1234: Push((int) 1)
0x1235: @ SetVariable(Stack[-2], Stack[-1])
0x1236: Pop(2)
0x1237: Return(); Pop(0)

0x1238: PushEmpty()
0x1239: Push("ood3Petr2")
0x123a: Push((int) 1)
0x123b: @ SetVariable(Stack[-2], Stack[-1])
0x123c: Pop(2)
0x123d: Return(); Pop(0)

0x123e: PushEmpty()
0x123f: Push("ood3Petr3")
0x1240: Push((int) 1)
0x1241: @ SetVariable(Stack[-2], Stack[-1])
0x1242: Pop(2)
0x1243: Return(); Pop(0)

0x1244: PushEmpty()
0x1245: Push("ood3Petr4")
0x1246: Push((int) 1)
0x1247: @ SetVariable(Stack[-2], Stack[-1])
0x1248: Pop(2)
0x1249: Return(); Pop(0)

0x124a: PushEmpty()
0x124b: Push("ood3Petr5")
0x124c: Push((int) 1)
0x124d: @ SetVariable(Stack[-2], Stack[-1])
0x124e: Pop(2)
0x124f: Return(); Pop(0)

0x1250: PushEmpty()
0x1251: Push("ood2Petr4")
0x1252: Push((int) 1)
0x1253: @ SetVariable(Stack[-2], Stack[-1])
0x1254: Pop(2)
0x1255: Return(); Pop(0)

0x1256: PushEmpty()
0x1257: Push("ood2Petr5")
0x1258: Push((int) 1)
0x1259: @ SetVariable(Stack[-2], Stack[-1])
0x125a: Pop(2)
0x125b: Return(); Pop(0)

0x125c: PushEmpty()
0x125d: Push("lens is given")
0x125e: @ Trace(Stack[-1])
0x125f: Pop(1)
0x1260: PushEmpty(object, string, int)
0x1261: Stack[-3] = Stack[-5]
0x1262: Stack[-2] = "lens"
0x1263: Stack[-1] = (int) 1
0x1264: Call2 0x11d6

0x1265: Pop(3)
0x1266: Return(); Pop(0)

0x1267: PushEmpty()
0x1268: Push("KnowTvirin")
0x1269: Push((int) 1)
0x126a: @ SetVariable(Stack[-2], Stack[-1])
0x126b: Pop(2)
0x126c: Return(); Pop(0)

0x126d: PushEmpty()
0x126e: Push("ood2Petr1")
0x126f: Push((int) 1)
0x1270: @ SetVariable(Stack[-2], Stack[-1])
0x1271: Pop(2)
0x1272: Return(); Pop(0)

0x1273: PushEmpty()
0x1274: Push("ood2Petr2")
0x1275: Push((int) 1)
0x1276: @ SetVariable(Stack[-2], Stack[-1])
0x1277: Pop(2)
0x1278: Return(); Pop(0)

0x1279: PushEmpty()
0x127a: Push("ood2Petr3")
0x127b: Push((int) 1)
0x127c: @ SetVariable(Stack[-2], Stack[-1])
0x127d: Pop(2)
0x127e: Return(); Pop(0)

0x127f: PushEmpty()
0x1280: Push("d2q02")
0x1281: Push((int) 3)
0x1282: @ SetVariable(Stack[-2], Stack[-1])
0x1283: Pop(2)
0x1284: PushEmpty()
0x1285: Call2 0x142f

0x1286: Pop(0)
0x1287: Return(); Pop(0)

0x1288: PushEmpty(object, object)
0x1289: Push("d2q02")
0x128a: Push((int) 5)
0x128b: @ SetVariable(Stack[-2], Stack[-1])
0x128c: Pop(2)
0x128d: PushEmpty(object)
0x128e: Call2 0x148c

0x128f: Stack[-2] = Stack[-1]
0x1290: Pop(1)
0x1291: Push("d2q02PetrGotoAndrei")
0x1292: Push("pt_map_andrei")
0x1293: Push((int) 0)
0x1294: Push((int) 515276)
0x1295: PushEmpty(float)
0x1296: Call2 0x11ef

0x1297: Pop(0)
0x1298: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1299: Pop(5)
0x129a: PushEmpty()
0x129b: Call2 0x143c

0x129c: Pop(0)
0x129d: Return(); Pop(2)

0x129e: Stack[-1] = 0
0x129f: PushEmpty()
0x12a0: Push("KnowPetr")
0x12a1: Push((int) 1)
0x12a2: @ SetVariable(Stack[-2], Stack[-1])
0x12a3: Pop(2)
0x12a4: Return(); Pop(0)

0x12a5: PushEmpty()
0x12a6: Push("d7q02")
0x12a7: Push((int) 2)
0x12a8: @ SetVariable(Stack[-2], Stack[-1])
0x12a9: Pop(2)
0x12aa: PushEmpty()
0x12ab: Call2 0x1456

0x12ac: Pop(0)
0x12ad: Return(); Pop(0)

0x12ae: PushEmpty()
0x12af: Push("d7q02")
0x12b0: Push((int) 4)
0x12b1: @ SetVariable(Stack[-2], Stack[-1])
0x12b2: Pop(2)
0x12b3: Return(); Pop(0)

0x12b4: PushEmpty(object, object, object, object)
0x12b5: PushEmpty(int, string)
0x12b6: Stack[-1] = "d7q02BirdBalahon"
0x12b7: Call2 0x11b2

0x12b8: Pop(1)
0x12b9: Push((int) 0)
0x12ba: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12bb: IF (Stack[-1] == 0) GOTO 0x12df; Pop(1)

0x12bc: PushEmpty(object)
0x12bd: Call2 0x148c

0x12be: Stack[-3] = Stack[-1]
0x12bf: Pop(1)
0x12c0: Push("d7q02AlexandrGotoPetr")
0x12c1: @@ FindMark(Stack[-2], Stack[-1])
0x12c2: Pop(1)
0x12c3: Push(Stack[-1])
0x12c4: IF (Stack[-1] == 0) GOTO 0x12c7; Pop(1)

0x12c5: @@ Remove()
0x12c6: Pop(0)
0x12c7: Push("d7q02MarkGotoAlexandr")
0x12c8: @@ FindMark(Stack[-2], Stack[-1])
0x12c9: Pop(1)
0x12ca: Push(Stack[-1])
0x12cb: IF (Stack[-1] == 0) GOTO 0x12ce; Pop(1)

0x12cc: @@ Remove()
0x12cd: Pop(0)
0x12ce: Push("d7q02MarkGotoCemetery")
0x12cf: @@ FindMark(Stack[-2], Stack[-1])
0x12d0: Pop(1)
0x12d1: Push(Stack[-1])
0x12d2: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12d3: @@ Remove()
0x12d4: Pop(0)
0x12d5: PushEmpty()
0x12d6: Call2 0x1449

0x12d7: Pop(0)
0x12d8: PushEmpty(bool, string, string)
0x12d9: Stack[-2] = "quest_d7_02"
0x12da: Stack[-1] = "completed"
0x12db: Call2 0x11e3

0x12dc: Pop(3)
0x12dd: Stack[-1] = 0
0x12de: Stack[-2] = 0
0x12df: Return(); Pop(4)

0x12e0: PushEmpty()
0x12e1: Push("ood7Petr1")
0x12e2: Push((int) 1)
0x12e3: @ SetVariable(Stack[-2], Stack[-1])
0x12e4: Pop(2)
0x12e5: Return(); Pop(0)

0x12e6: PushEmpty()
0x12e7: Push("birdmask is given")
0x12e8: @ Trace(Stack[-1])
0x12e9: Pop(1)
0x12ea: PushEmpty(object, string, int)
0x12eb: Stack[-3] = Stack[-5]
0x12ec: Stack[-2] = "bird_mask"
0x12ed: Stack[-1] = (int) 1
0x12ee: Call2 0x11d6

0x12ef: Pop(3)
0x12f0: Return(); Pop(0)

0x12f1: PushEmpty()
0x12f2: Push("ood11Petr1")
0x12f3: Push((int) 1)
0x12f4: @ SetVariable(Stack[-2], Stack[-1])
0x12f5: Pop(2)
0x12f6: Return(); Pop(0)

0x12f7: PushEmpty()
0x12f8: Push("ood11Petr2")
0x12f9: Push((int) 1)
0x12fa: @ SetVariable(Stack[-2], Stack[-1])
0x12fb: Pop(2)
0x12fc: Return(); Pop(0)

0x12fd: PushEmpty()
0x12fe: Push("ood3Petr1")
0x12ff: Push((int) 1)
0x1300: @ SetVariable(Stack[-2], Stack[-1])
0x1301: Pop(2)
0x1302: Return(); Pop(0)

0x1303: PushEmpty()
0x1304: PushEmpty(int, string)
0x1305: Stack[-1] = "d7q03"
0x1306: Call2 0x11b2

0x1307: Pop(1)
0x1308: Push((int) 4)
0x1309: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x130a: IF (Stack[-1] == 0) GOTO 0x130d; Pop(1)

0x130b: Stack[-2] = (bool) 1
0x130c: Return(); Pop(0)

0x130d: Stack[-2] = (bool) 0
0x130e: Return(); Pop(0)

0x130f: PushEmpty()
0x1310: PushEmpty(int, string)
0x1311: Stack[-1] = "d7q03"
0x1312: Call2 0x11b2

0x1313: Pop(1)
0x1314: Push((int) 1000)
0x1315: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1316: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1317: Stack[-2] = (bool) 1
0x1318: Return(); Pop(0)

0x1319: Stack[-2] = (bool) 0
0x131a: Return(); Pop(0)

0x131b: PushEmpty()
0x131c: PushEmpty(int, string)
0x131d: Stack[-1] = "ood7Petr2"
0x131e: Call2 0x11b2

0x131f: Pop(1)
0x1320: Push((int) 0)
0x1321: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1322: IF (Stack[-1] == 0) GOTO 0x1325; Pop(1)

0x1323: Stack[-2] = (bool) 1
0x1324: Return(); Pop(0)

0x1325: Stack[-2] = (bool) 0
0x1326: Return(); Pop(0)

0x1327: PushEmpty()
0x1328: PushEmpty(int, string)
0x1329: Stack[-1] = "ood3Petr2"
0x132a: Call2 0x11b2

0x132b: Pop(1)
0x132c: Push((int) 0)
0x132d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x132e: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132f: Stack[-2] = (bool) 1
0x1330: Return(); Pop(0)

0x1331: Stack[-2] = (bool) 0
0x1332: Return(); Pop(0)

0x1333: PushEmpty()
0x1334: PushEmpty(int, string)
0x1335: Stack[-1] = "ood3Petr3"
0x1336: Call2 0x11b2

0x1337: Pop(1)
0x1338: Push((int) 0)
0x1339: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x133a: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133b: Stack[-2] = (bool) 1
0x133c: Return(); Pop(0)

0x133d: Stack[-2] = (bool) 0
0x133e: Return(); Pop(0)

0x133f: PushEmpty()
0x1340: PushEmpty(int, string)
0x1341: Stack[-1] = "ood3Petr4"
0x1342: Call2 0x11b2

0x1343: Pop(1)
0x1344: Push((int) 0)
0x1345: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1346: IF (Stack[-1] == 0) GOTO 0x1349; Pop(1)

0x1347: Stack[-2] = (bool) 1
0x1348: Return(); Pop(0)

0x1349: Stack[-2] = (bool) 0
0x134a: Return(); Pop(0)

0x134b: PushEmpty()
0x134c: PushEmpty(int, string)
0x134d: Stack[-1] = "ood3Petr5"
0x134e: Call2 0x11b2

0x134f: Pop(1)
0x1350: Push((int) 0)
0x1351: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1352: IF (Stack[-1] == 0) GOTO 0x1355; Pop(1)

0x1353: Stack[-2] = (bool) 1
0x1354: Return(); Pop(0)

0x1355: Stack[-2] = (bool) 0
0x1356: Return(); Pop(0)

0x1357: PushEmpty()
0x1358: PushEmpty(int, string)
0x1359: Stack[-1] = "ood2Petr4"
0x135a: Call2 0x11b2

0x135b: Pop(1)
0x135c: Push((int) 0)
0x135d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x135e: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x135f: Stack[-2] = (bool) 1
0x1360: Return(); Pop(0)

0x1361: Stack[-2] = (bool) 0
0x1362: Return(); Pop(0)

0x1363: PushEmpty()
0x1364: PushEmpty(int, string)
0x1365: Stack[-1] = "ood2Petr5"
0x1366: Call2 0x11b2

0x1367: Pop(1)
0x1368: Push((int) 0)
0x1369: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x136a: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x136b: Stack[-2] = (bool) 1
0x136c: Return(); Pop(0)

0x136d: Stack[-2] = (bool) 0
0x136e: Return(); Pop(0)

0x136f: PushEmpty()
0x1370: PushEmpty(int, string)
0x1371: Stack[-1] = "ood2Petr1"
0x1372: Call2 0x11b2

0x1373: Pop(1)
0x1374: Push((int) 0)
0x1375: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1376: IF (Stack[-1] == 0) GOTO 0x1379; Pop(1)

0x1377: Stack[-2] = (bool) 1
0x1378: Return(); Pop(0)

0x1379: Stack[-2] = (bool) 0
0x137a: Return(); Pop(0)

0x137b: PushEmpty()
0x137c: PushEmpty(int, string)
0x137d: Stack[-1] = "ood2Petr2"
0x137e: Call2 0x11b2

0x137f: Pop(1)
0x1380: Push((int) 0)
0x1381: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1382: IF (Stack[-1] == 0) GOTO 0x1385; Pop(1)

0x1383: Stack[-2] = (bool) 1
0x1384: Return(); Pop(0)

0x1385: Stack[-2] = (bool) 0
0x1386: Return(); Pop(0)

0x1387: PushEmpty()
0x1388: PushEmpty(int, string)
0x1389: Stack[-1] = "ood2Petr3"
0x138a: Call2 0x11b2

0x138b: Pop(1)
0x138c: Push((int) 0)
0x138d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138e: IF (Stack[-1] == 0) GOTO 0x1391; Pop(1)

0x138f: Stack[-2] = (bool) 1
0x1390: Return(); Pop(0)

0x1391: Stack[-2] = (bool) 0
0x1392: Return(); Pop(0)

0x1393: PushEmpty()
0x1394: PushEmpty(int, string)
0x1395: Stack[-1] = "d2q02"
0x1396: Call2 0x11b2

0x1397: Pop(1)
0x1398: Push((int) 1000)
0x1399: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x139a: IF (Stack[-1] == 0) GOTO 0x139d; Pop(1)

0x139b: Stack[-2] = (bool) 1
0x139c: Return(); Pop(0)

0x139d: Stack[-2] = (bool) 0
0x139e: Return(); Pop(0)

0x139f: PushEmpty()
0x13a0: PushEmpty(int, string)
0x13a1: Stack[-1] = "d2q02"
0x13a2: Call2 0x11b2

0x13a3: Pop(1)
0x13a4: Push((int) 2)
0x13a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13a6: IF (Stack[-1] == 0) GOTO 0x13a9; Pop(1)

0x13a7: Stack[-2] = (bool) 1
0x13a8: Return(); Pop(0)

0x13a9: Stack[-2] = (bool) 0
0x13aa: Return(); Pop(0)

0x13ab: PushEmpty()
0x13ac: PushEmpty(int, string)
0x13ad: Stack[-1] = "d2q02"
0x13ae: Call2 0x11b2

0x13af: Pop(1)
0x13b0: Push((int) 3)
0x13b1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b2: IF (Stack[-1] == 0) GOTO 0x13b5; Pop(1)

0x13b3: Stack[-2] = (bool) 1
0x13b4: Return(); Pop(0)

0x13b5: Stack[-2] = (bool) 0
0x13b6: Return(); Pop(0)

0x13b7: PushEmpty()
0x13b8: PushEmpty(int, string)
0x13b9: Stack[-1] = "d2q02"
0x13ba: Call2 0x11b2

0x13bb: Pop(1)
0x13bc: Push((int) 4)
0x13bd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13be: IF (Stack[-1] == 0) GOTO 0x13c1; Pop(1)

0x13bf: Stack[-2] = (bool) 1
0x13c0: Return(); Pop(0)

0x13c1: Stack[-2] = (bool) 0
0x13c2: Return(); Pop(0)

0x13c3: PushEmpty()
0x13c4: PushEmpty(int, string)
0x13c5: Stack[-1] = "d2q02"
0x13c6: Call2 0x11b2

0x13c7: Pop(1)
0x13c8: Push((int) 5)
0x13c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13ca: IF (Stack[-1] == 0) GOTO 0x13cd; Pop(1)

0x13cb: Stack[-2] = (bool) 1
0x13cc: Return(); Pop(0)

0x13cd: Stack[-2] = (bool) 0
0x13ce: Return(); Pop(0)

0x13cf: PushEmpty()
0x13d0: PushEmpty(int, string)
0x13d1: Stack[-1] = "d7q02"
0x13d2: Call2 0x11b2

0x13d3: Pop(1)
0x13d4: Push((int) 1)
0x13d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13d6: IF (Stack[-1] == 0) GOTO 0x13d9; Pop(1)

0x13d7: Stack[-2] = (bool) 1
0x13d8: Return(); Pop(0)

0x13d9: Stack[-2] = (bool) 0
0x13da: Return(); Pop(0)

0x13db: PushEmpty()
0x13dc: PushEmpty(int, string)
0x13dd: Stack[-1] = "ood7Petr1"
0x13de: Call2 0x11b2

0x13df: Pop(1)
0x13e0: Push((int) 0)
0x13e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13e2: IF (Stack[-1] == 0) GOTO 0x13e5; Pop(1)

0x13e3: Stack[-2] = (bool) 1
0x13e4: Return(); Pop(0)

0x13e5: Stack[-2] = (bool) 0
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty()
0x13e8: PushEmpty(int, string)
0x13e9: Stack[-1] = "d7q02"
0x13ea: Call2 0x11b2

0x13eb: Pop(1)
0x13ec: Push((int) 3)
0x13ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13ee: IF (Stack[-1] == 0) GOTO 0x13f1; Pop(1)

0x13ef: Stack[-2] = (bool) 1
0x13f0: Return(); Pop(0)

0x13f1: Stack[-2] = (bool) 0
0x13f2: Return(); Pop(0)

0x13f3: PushEmpty()
0x13f4: PushEmpty(int, string)
0x13f5: Stack[-1] = "d11q01"
0x13f6: Call2 0x11b2

0x13f7: Pop(1)
0x13f8: Push((int) 1)
0x13f9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13fa: IF (Stack[-1] == 0) GOTO 0x13fd; Pop(1)

0x13fb: Stack[-2] = (bool) 1
0x13fc: Return(); Pop(0)

0x13fd: Stack[-2] = (bool) 0
0x13fe: Return(); Pop(0)

0x13ff: PushEmpty()
0x1400: PushEmpty(int, string)
0x1401: Stack[-1] = "ood11Petr1"
0x1402: Call2 0x11b2

0x1403: Pop(1)
0x1404: Push((int) 0)
0x1405: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1406: IF (Stack[-1] == 0) GOTO 0x1409; Pop(1)

0x1407: Stack[-2] = (bool) 1
0x1408: Return(); Pop(0)

0x1409: Stack[-2] = (bool) 0
0x140a: Return(); Pop(0)

0x140b: PushEmpty()
0x140c: PushEmpty(int, string)
0x140d: Stack[-1] = "d11q01"
0x140e: Call2 0x11b2

0x140f: Pop(1)
0x1410: Push((int) 1000)
0x1411: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1412: IF (Stack[-1] == 0) GOTO 0x1415; Pop(1)

0x1413: Stack[-2] = (bool) 1
0x1414: Return(); Pop(0)

0x1415: Stack[-2] = (bool) 0
0x1416: Return(); Pop(0)

0x1417: PushEmpty()
0x1418: PushEmpty(int, string)
0x1419: Stack[-1] = "ood11Petr2"
0x141a: Call2 0x11b2

0x141b: Pop(1)
0x141c: Push((int) 0)
0x141d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x141e: IF (Stack[-1] == 0) GOTO 0x1421; Pop(1)

0x141f: Stack[-2] = (bool) 1
0x1420: Return(); Pop(0)

0x1421: Stack[-2] = (bool) 0
0x1422: Return(); Pop(0)

0x1423: PushEmpty()
0x1424: PushEmpty(int, string)
0x1425: Stack[-1] = "ood3Petr1"
0x1426: Call2 0x11b2

0x1427: Pop(1)
0x1428: Push((int) 0)
0x1429: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x142a: IF (Stack[-1] == 0) GOTO 0x142d; Pop(1)

0x142b: Stack[-2] = (bool) 1
0x142c: Return(); Pop(0)

0x142d: Stack[-2] = (bool) 0
0x142e: Return(); Pop(0)

0x142f: PushEmpty(object, object)
0x1430: Push((int) 130)
0x1431: Push((int) 2)
0x1432: Push((int) 515267)
0x1433: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1434: Pop(3)
0x1435: PushEmpty(bool, object, int)
0x1436: Stack[-2] = Stack[-4]
0x1437: Stack[-1] = (int) 11
0x1438: Call2 0x1470

0x1439: Pop(3)
0x143a: Return(); Pop(2)

0x143b: Stack[-1] = 0
0x143c: PushEmpty(object, object)
0x143d: Push((int) 131)
0x143e: Push((int) 2)
0x143f: Push((int) 515268)
0x1440: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1441: Pop(3)
0x1442: PushEmpty(bool, object, int)
0x1443: Stack[-2] = Stack[-4]
0x1444: Stack[-1] = (int) 11
0x1445: Call2 0x1470

0x1446: Pop(3)
0x1447: Return(); Pop(2)

0x1448: Stack[-1] = 0
0x1449: PushEmpty(object, object)
0x144a: Push((int) 174)
0x144b: Push((int) 2)
0x144c: Push((int) 515426)
0x144d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x144e: Pop(3)
0x144f: PushEmpty(bool, object, int)
0x1450: Stack[-2] = Stack[-4]
0x1451: Stack[-1] = (int) 170
0x1452: Call2 0x1470

0x1453: Pop(3)
0x1454: Return(); Pop(2)

0x1455: Stack[-1] = 0
0x1456: PushEmpty(object, object)
0x1457: Push((int) 173)
0x1458: Push((int) 2)
0x1459: Push((int) 515425)
0x145a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x145b: Pop(3)
0x145c: PushEmpty(bool, object, int)
0x145d: Stack[-2] = Stack[-4]
0x145e: Stack[-1] = (int) 170
0x145f: Call2 0x1470

0x1460: Pop(3)
0x1461: Return(); Pop(2)

0x1462: Stack[-1] = 0
0x1463: PushEmpty(object, object)
0x1464: @ GetDiaryRoot(Stack[-1])
0x1465: Pop(0)
0x1466: Pop(0); Push((bool) Stack[-1] == 0)
0x1467: IF (Stack[-1] == 0) GOTO 0x146d; Pop(1)

0x1468: Push("Can't retrieve diary root")
0x1469: @ Trace(Stack[-1])
0x146a: Pop(1)
0x146b: Stack[-3] = (bool) 0
0x146c: Return(); Pop(2)

0x146d: Stack[-3] = Stack[-1]
0x146e: Return(); Pop(2)

0x146f: Stack[-1] = 0
0x1470: PushEmpty(object, object, int, object, object, int)
0x1471: PushEmpty(object)
0x1472: Call2 0x1463

0x1473: Stack[-4] = Stack[-1]
0x1474: Pop(1)
0x1475: @@ Find(Stack[-7], Stack[-2])
0x1476: Pop(0)
0x1477: Pop(0); Push((bool) Stack[-2] == 0)
0x1478: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x1479: Push("Can't find diary parent with id: ")
0x147a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x147b: @ Trace(Stack[-1])
0x147c: Pop(1)
0x147d: Stack[-9] = (bool) 0
0x147e: Return(); Pop(6)

0x147f: @@ AddChild(Stack[-8])
0x1480: Pop(0)
0x1481: Push((int) 7)
0x1482: @ SendWorldWndMessage(Stack[-1])
0x1483: Pop(1)
0x1484: @@ GetCategory(Stack[-1])
0x1485: Pop(0)
0x1486: @ SetDiarySection(Stack[-1])
0x1487: Pop(0)
0x1488: Stack[-9] = (bool) 0
0x1489: Return(); Pop(6)

0x148a: Stack[-2] = 0
0x148b: Stack[-3] = 0
0x148c: PushEmpty(object, object, object, object)
0x148d: @ GetMainOutdoorScene(Stack[-2])
0x148e: Pop(0)
0x148f: Pop(0); Push((bool) Stack[-2] == 0)
0x1490: IF (Stack[-1] == 0) GOTO 0x1497; Pop(1)

0x1491: Push("Can't find main outdoor scene")
0x1492: @ Trace(Stack[-1])
0x1493: Pop(1)
0x1494: Stack[-1] = 0
0x1495: Stack[-5] = Stack[-1]
0x1496: Return(); Pop(4)

0x1497: @@ GetMap(Stack[-1])
0x1498: Pop(0)
0x1499: Stack[-5] = Stack[-1]
0x149a: Return(); Pop(4)

0x149b: Stack[-1] = 0
0x149c: Stack[-2] = 0
0x149d: PushEmpty(int, int)
0x149e: Push("branch")
0x149f: @ GetVariable(Stack[-1], Stack[-2])
0x14a0: Pop(1)
0x14a1: Push((int) 0)
0x14a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a3: IF (Stack[-1] == 0) GOTO 0x14a7; Pop(1)

0x14a4: Stack[-3] = (int) 1
0x14a5: Return(); Pop(2)

0x14a6: GOTO 0x14ac

0x14a7: Push((int) 1)
0x14a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14a9: IF (Stack[-1] == 0) GOTO 0x14ac; Pop(1)

0x14aa: Stack[-3] = (int) 2
0x14ab: Return(); Pop(2)

0x14ac: Stack[-3] = (int) 3
0x14ad: Return(); Pop(2)

0x14ae: PushEmpty(int, int)
0x14af: Push("mt_petr")
0x14b0: @ GetVariable(Stack[-1], Stack[-2])
0x14b1: Pop(1)
0x14b2: Pop(0); Push((bool) Stack[-1] == 0)
0x14b3: IF (Stack[-1] == 0) GOTO 0x14be; Pop(1)

0x14b4: PushEmpty(int, object)
0x14b5: Stack[-1] = Stack[-5]
0x14b6: Push(-2, 1); TaskCall(0)
0x14b7: Call2 0x0

0x14b8: Pop(-2, 1); TaskReturn
0x14b9: Pop(2)
0x14ba: Push("mt_petr")
0x14bb: Push((int) 1)
0x14bc: @ SetVariable(Stack[-2], Stack[-1])
0x14bd: Pop(2)
0x14be: PushEmpty(bool, int)
0x14bf: Stack[-1] = (int) 2
0x14c0: Call2 0x11fd

0x14c1: Pop(1)
0x14c2: IF (Stack[-1] == 0) GOTO 0x14ca; Pop(1)

0x14c3: PushEmpty(int, object)
0x14c4: Stack[-1] = Stack[-5]
0x14c5: Push(-2, 1); TaskCall(2)
0x14c6: Call2 0x139

0x14c7: Pop(-2, 1); TaskReturn
0x14c8: Pop(2)
0x14c9: Return(); Pop(2)

0x14ca: PushEmpty(bool, int)
0x14cb: Stack[-1] = (int) 3
0x14cc: Call2 0x11fd

0x14cd: Pop(1)
0x14ce: IF (Stack[-1] == 0) GOTO 0x14d6; Pop(1)

0x14cf: PushEmpty(int, object)
0x14d0: Stack[-1] = Stack[-5]
0x14d1: Push(-2, 1); TaskCall(4)
0x14d2: Call2 0x4d8

0x14d3: Pop(-2, 1); TaskReturn
0x14d4: Pop(2)
0x14d5: Return(); Pop(2)

0x14d6: PushEmpty(bool, int)
0x14d7: Stack[-1] = (int) 7
0x14d8: Call2 0x11fd

0x14d9: Pop(1)
0x14da: IF (Stack[-1] == 0) GOTO 0x14e2; Pop(1)

0x14db: PushEmpty(int, object)
0x14dc: Stack[-1] = Stack[-5]
0x14dd: Push(-2, 1); TaskCall(6)
0x14de: Call2 0x792

0x14df: Pop(-2, 1); TaskReturn
0x14e0: Pop(2)
0x14e1: Return(); Pop(2)

0x14e2: PushEmpty(bool, int)
0x14e3: Stack[-1] = (int) 11
0x14e4: Call2 0x11fd

0x14e5: Pop(1)
0x14e6: IF (Stack[-1] == 0) GOTO 0x14ee; Pop(1)

0x14e7: PushEmpty(int, object)
0x14e8: Stack[-1] = Stack[-5]
0x14e9: Push(-2, 1); TaskCall(8)
0x14ea: Call2 0xb34

0x14eb: Pop(-2, 1); TaskReturn
0x14ec: Pop(2)
0x14ed: Return(); Pop(2)

0x14ee: PushEmpty(bool, int)
0x14ef: Stack[-1] = (int) 12
0x14f0: Call2 0x11fd

0x14f1: Pop(1)
0x14f2: IF (Stack[-1] == 0) GOTO 0x14fa; Pop(1)

0x14f3: PushEmpty(int, object)
0x14f4: Stack[-1] = Stack[-5]
0x14f5: Push(-2, 1); TaskCall(10)
0x14f6: Call2 0xd72

0x14f7: Pop(-2, 1); TaskReturn
0x14f8: Pop(2)
0x14f9: Return(); Pop(2)

0x14fa: PushEmpty(int, object)
0x14fb: Stack[-1] = Stack[-5]
0x14fc: Push(-2, 1); TaskCall(12)
0x14fd: Call2 0xea1

0x14fe: Pop(-2, 1); TaskReturn
0x14ff: Pop(2)
0x1500: Return(); Pop(2)

