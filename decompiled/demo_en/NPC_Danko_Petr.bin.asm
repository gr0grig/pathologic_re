GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Untrust
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xe81
RunTask = 14

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d5 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x33d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x66b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8cd Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc3b Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe57 Vars = (int, int)
	GTASK_14 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xecd Vars = (int)
		EVENT_6 Op = 0xef3 Vars = ()
		EVENT_5 Op = 0xf02 Vars = ()
		EVENT_45 Op = 0xf0f Vars = (bool)
		EVENT_0 Op = 0xf1b Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xfa4

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1133

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1131

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1135

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1137

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1359

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
0x31: Call2 0x10b8

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xff9

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
0x48: Call2 0xfe8

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 535674)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535675)
0x61: Push((int) 42165)
0x62: Push((int) 37361)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 540006)
0x66: Push((int) -1)
0x67: Push((int) 41977)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x1139

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x1083

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x1139

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x1093

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x10b1

0xa6: Pop(0)
0xa7: Push((int) 37360)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 535674)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 535675)
0xb4: Push((int) 42165)
0xb5: Push((int) 37361)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 540006)
0xb9: Push((int) -1)
0xba: Push((int) 41977)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 42165)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Autizm"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 540187)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 540188)
0xcb: Push((int) 42167)
0xcc: Push((int) 42166)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 42167)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Autizm"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 540189)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 540190)
0xdd: Push((int) 42196)
0xde: Push((int) 42168)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 540192)
0xe2: Push((int) 42169)
0xe3: Push((int) 42170)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 42196)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Autizm"
0xec: Call2 0x8b

0xed: Pop(1)
0xee: Push((int) 540216)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 540217)
0xf4: Push((int) 42169)
0xf5: Push((int) 42197)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 42169)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x8b

0xff: Pop(1)
0x100: Push((int) 540191)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: Push((int) 540193)
0x106: Push((int) -1)
0x107: Push((int) 42172)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: Push((int) 540194)
0x10b: Push((int) 42174)
0x10c: Push((int) 42173)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Return(); Pop(0)

0x110: Push((int) 42174)
0x111: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x113: PushEmpty(string)
0x114: Stack[-1] = "Neutral"
0x115: Call2 0x8b

0x116: Pop(1)
0x117: Push((int) 540195)
0x118: @@ SetMessage(Stack[-1])
0x119: Pop(1)
0x11a: @@ ClearReplies()
0x11b: Pop(0)
0x11c: Push((int) 540196)
0x11d: Push((int) -1)
0x11e: Push((int) 42175)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x123: PushEmpty(bool)
0x124: Call2 0x1139

0x125: Pop(0)
0x126: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x127: @ lshStopAnimation()
0x128: Pop(0)
0x129: GOTO 0x12c

0x12a: @ StopAnimation()
0x12b: Pop(0)
0x12c: Return(); Pop(0)

0x12d: GOTO 0xa2

0x12e: Return(); Pop(0)

0x12f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x130: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x131: PushEmpty(bool, object, float)
0x132: Stack[-2] = Stack[-12]
0x133: Stack[-1] = (float) 70.0
0x134: Call2 0xfa4

0x135: Pop(2)
0x136: Pop(1); Push((bool) Stack[-1] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-10] = (int) -2
0x139: Return(); Pop(8)

0x13a: @ CreateDialog(Stack[-4])
0x13b: Pop(0)
0x13c: PushEmpty(int)
0x13d: Call2 0x1133

0x13e: Pop(0)
0x13f: @@ SetNPCName(Stack[-1])
0x140: Pop(1)
0x141: PushEmpty(int)
0x142: Call2 0x1131

0x143: Pop(0)
0x144: @@ SetNPCDescription(Stack[-1])
0x145: Pop(1)
0x146: PushEmpty(string)
0x147: Call2 0x1135

0x148: Pop(0)
0x149: @@ SetPhoto(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(string)
0x14c: Call2 0x1137

0x14d: Pop(0)
0x14e: @@ SetPhoto2(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(int)
0x151: Call2 0x1359

0x152: Pop(0)
0x153: @@ SetPlayerName(Stack[-1])
0x154: Pop(1)
0x155: Stack[-2] = (int) -1
0x156: @ IsOverrideActive(Stack[-3])
0x157: Pop(0)
0x158: Push(Stack[-3])
0x159: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15a: Stack[-10] = (int) -2
0x15b: Return(); Pop(8)

0x15c: @ DoDialog(Stack[-4])
0x15d: Pop(0)
0x15e: PushEmpty(bool, object)
0x15f: PushEmpty(object)
0x160: Call2 0x10b8

0x161: Stack[-2] = Stack[-1]
0x162: Pop(1)
0x163: Call2 0xff9

0x164: Pop(2)
0x165: PushEmpty(object, object)
0x166: Stack[-2] = Stack[-11]
0x167: Stack[-1] = Stack[-6]
0x168: Push(-2, 4); TaskCall(3)
0x169: Call2 0x180

0x16a: Pop(-2, 4); TaskReturn
0x16b: Pop(2)
0x16c: @@ IsDialogEnd(Stack[-1])
0x16d: Pop(0)
0x16e: Pop(0); Push((bool) Stack[-1] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x170: @ sync()
0x171: Pop(0)
0x172: @@ IsDialogEnd(Stack[-1])
0x173: Pop(0)
0x174: GOTO 0x16e

0x175: PushEmpty(object)
0x176: Stack[-1] = Stack[-10]
0x177: Call2 0xfe8

0x178: Pop(1)
0x179: @ StopDialog(Stack[-4])
0x17a: Pop(0)
0x17b: @@ GetReturnValue(Stack[-2])
0x17c: Pop(0)
0x17d: Stack[-10] = Stack[-2]
0x17e: Return(); Pop(8)

0x17f: Stack[-4] = 0
0x180: PushEmpty()
0x181: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x182: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x183: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x184: Push((int) 1)
0x185: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x186: PushEmpty(object, object)
0x187: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x188: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x189: Call2 0x1197

0x18a: Pop(2)
0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0x1bf

0x18e: Pop(1)
0x18f: Push((int) 500170)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 500171)
0x195: Push((int) 210)
0x196: Push((int) 206)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Push((int) 500172)
0x19a: Push((int) 209)
0x19b: Push((int) 207)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: GOTO 0x1a1

0x19f: Return(); Pop(0)

0x1a0: GOTO 0x184

0x1a1: PushEmpty(bool)
0x1a2: Call2 0x1139

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a5: @ lshWaitForAnimEnd()
0x1a6: Pop(0)
0x1a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1af

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ac: Call2 0x1083

0x1ad: Pop(1)
0x1ae: GOTO 0x1a5

0x1af: GOTO 0x1be

0x1b0: Push("all")
0x1b1: Push("idle")
0x1b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: @ WaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1be

0x1b9: Push("all")
0x1ba: Push("idle")
0x1bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: GOTO 0x1b4

0x1be: Return(); Pop(0)

0x1bf: PushEmpty()
0x1c0: PushEmpty(bool)
0x1c1: Call2 0x1139

0x1c2: Pop(0)
0x1c3: Pop(1); Push((bool) Stack[-1] == 0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Return(); Pop(0)

0x1c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(0)

0x1c9: PushEmpty(string, bool)
0x1ca: Stack[-2] = Stack[-3]
0x1cb: Push("")
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ce: Stack[-1] = (bool) 0
0x1cf: GOTO 0x1d1

0x1d0: Stack[-1] = (bool) 1
0x1d1: Call2 0x1093

0x1d2: Pop(2)
0x1d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Push((int) 1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call2 0x10b1

0x1da: Pop(0)
0x1db: Push((int) 205)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1de: PushEmpty(object, object)
0x1df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e1: Call2 0x1197

0x1e2: Pop(2)
0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = "Neutral"
0x1e5: Call2 0x1bf

0x1e6: Pop(1)
0x1e7: Push((int) 500170)
0x1e8: @@ SetMessage(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ ClearReplies()
0x1eb: Pop(0)
0x1ec: Push((int) 500171)
0x1ed: Push((int) 210)
0x1ee: Push((int) 206)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Push((int) 500172)
0x1f2: Push((int) 209)
0x1f3: Push((int) 207)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Return(); Pop(0)

0x1f7: Push((int) 209)
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fa: PushEmpty(string)
0x1fb: Stack[-1] = "Neutral"
0x1fc: Call2 0x1bf

0x1fd: Pop(1)
0x1fe: Push((int) 500174)
0x1ff: @@ SetMessage(Stack[-1])
0x200: Pop(1)
0x201: @@ ClearReplies()
0x202: Pop(0)
0x203: Push((int) 500178)
0x204: Push((int) 218)
0x205: Push((int) 213)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Return(); Pop(0)

0x209: Push((int) 210)
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x20c: PushEmpty(string)
0x20d: Stack[-1] = "Neutral"
0x20e: Call2 0x1bf

0x20f: Pop(1)
0x210: Push((int) 500175)
0x211: @@ SetMessage(Stack[-1])
0x212: Pop(1)
0x213: @@ ClearReplies()
0x214: Pop(0)
0x215: Push((int) 500176)
0x216: Push((int) 215)
0x217: Push((int) 211)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: Push((int) 500177)
0x21b: Push((int) 214)
0x21c: Push((int) 212)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Return(); Pop(0)

0x220: Push((int) 214)
0x221: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(string)
0x224: Stack[-1] = "Neutral"
0x225: Call2 0x1bf

0x226: Pop(1)
0x227: Push((int) 500179)
0x228: @@ SetMessage(Stack[-1])
0x229: Pop(1)
0x22a: @@ ClearReplies()
0x22b: Pop(0)
0x22c: Push((int) 500181)
0x22d: Push((int) 218)
0x22e: Push((int) 216)
0x22f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x230: Pop(3)
0x231: Return(); Pop(0)

0x232: Push((int) 215)
0x233: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x235: PushEmpty(string)
0x236: Stack[-1] = "Neutral"
0x237: Call2 0x1bf

0x238: Pop(1)
0x239: Push((int) 500180)
0x23a: @@ SetMessage(Stack[-1])
0x23b: Pop(1)
0x23c: @@ ClearReplies()
0x23d: Pop(0)
0x23e: Push((int) 500182)
0x23f: Push((int) 218)
0x240: Push((int) 217)
0x241: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(3)
0x243: Return(); Pop(0)

0x244: Push((int) 218)
0x245: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x247: PushEmpty(string)
0x248: Stack[-1] = "Neutral"
0x249: Call2 0x1bf

0x24a: Pop(1)
0x24b: Push((int) 500183)
0x24c: @@ SetMessage(Stack[-1])
0x24d: Pop(1)
0x24e: @@ ClearReplies()
0x24f: Pop(0)
0x250: Push((int) 500184)
0x251: Push((int) -1)
0x252: Push((int) 221)
0x253: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Push((int) 500185)
0x256: Push((int) -1)
0x257: Push((int) 222)
0x258: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x259: Pop(3)
0x25a: Return(); Pop(0)

0x25b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25c: PushEmpty(bool)
0x25d: Call2 0x1139

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x260: @ lshStopAnimation()
0x261: Pop(0)
0x262: GOTO 0x265

0x263: @ StopAnimation()
0x264: Pop(0)
0x265: Return(); Pop(0)

0x266: GOTO 0x1d6

0x267: Return(); Pop(0)

0x268: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x269: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x26a: PushEmpty(bool, object, float)
0x26b: Stack[-2] = Stack[-12]
0x26c: Stack[-1] = (float) 70.0
0x26d: Call2 0xfa4

0x26e: Pop(2)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-10] = (int) -2
0x272: Return(); Pop(8)

0x273: @ CreateDialog(Stack[-4])
0x274: Pop(0)
0x275: PushEmpty(int)
0x276: Call2 0x1133

0x277: Pop(0)
0x278: @@ SetNPCName(Stack[-1])
0x279: Pop(1)
0x27a: PushEmpty(int)
0x27b: Call2 0x1131

0x27c: Pop(0)
0x27d: @@ SetNPCDescription(Stack[-1])
0x27e: Pop(1)
0x27f: PushEmpty(string)
0x280: Call2 0x1135

0x281: Pop(0)
0x282: @@ SetPhoto(Stack[-1])
0x283: Pop(1)
0x284: PushEmpty(string)
0x285: Call2 0x1137

0x286: Pop(0)
0x287: @@ SetPhoto2(Stack[-1])
0x288: Pop(1)
0x289: PushEmpty(int)
0x28a: Call2 0x1359

0x28b: Pop(0)
0x28c: @@ SetPlayerName(Stack[-1])
0x28d: Pop(1)
0x28e: Stack[-2] = (int) -1
0x28f: @ IsOverrideActive(Stack[-3])
0x290: Pop(0)
0x291: Push(Stack[-3])
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-10] = (int) -2
0x294: Return(); Pop(8)

0x295: @ DoDialog(Stack[-4])
0x296: Pop(0)
0x297: PushEmpty(bool, object)
0x298: PushEmpty(object)
0x299: Call2 0x10b8

0x29a: Stack[-2] = Stack[-1]
0x29b: Pop(1)
0x29c: Call2 0xff9

0x29d: Pop(2)
0x29e: PushEmpty(object, object)
0x29f: Stack[-2] = Stack[-11]
0x2a0: Stack[-1] = Stack[-6]
0x2a1: Push(-2, 4); TaskCall(5)
0x2a2: Call2 0x2b9

0x2a3: Pop(-2, 4); TaskReturn
0x2a4: Pop(2)
0x2a5: @@ IsDialogEnd(Stack[-1])
0x2a6: Pop(0)
0x2a7: Pop(0); Push((bool) Stack[-1] == 0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: @ sync()
0x2aa: Pop(0)
0x2ab: @@ IsDialogEnd(Stack[-1])
0x2ac: Pop(0)
0x2ad: GOTO 0x2a7

0x2ae: PushEmpty(object)
0x2af: Stack[-1] = Stack[-10]
0x2b0: Call2 0xfe8

0x2b1: Pop(1)
0x2b2: @ StopDialog(Stack[-4])
0x2b3: Pop(0)
0x2b4: @@ GetReturnValue(Stack[-2])
0x2b5: Pop(0)
0x2b6: Stack[-10] = Stack[-2]
0x2b7: Return(); Pop(8)

0x2b8: Stack[-4] = 0
0x2b9: PushEmpty()
0x2ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2bb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2bc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2bd: Push((int) 1)
0x2be: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = "Untrust"
0x2c1: Call2 0x327

0x2c2: Pop(1)
0x2c3: Push((int) 506877)
0x2c4: @@ SetMessage(Stack[-1])
0x2c5: Pop(1)
0x2c6: @@ ClearReplies()
0x2c7: Pop(0)
0x2c8: PushEmpty(bool)
0x2c9: Stack[-1] = (bool) 0
0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Call2 0x122b

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Call2 0x125b

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[-1] = (bool) 1
0x2d5: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d6: Push((int) 506878)
0x2d7: Push((int) 7585)
0x2d8: Push((int) 7584)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: PushEmpty(bool)
0x2dc: Stack[-1] = (bool) 0
0x2dd: PushEmpty(bool, object)
0x2de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Call2 0x1237

0x2e0: Pop(1)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e2: PushEmpty(bool, object)
0x2e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e4: Call2 0x1273

0x2e5: Pop(1)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: Stack[-1] = (bool) 1
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: Push((int) 507431)
0x2ea: Push((int) 8203)
0x2eb: Push((int) 8202)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: PushEmpty(bool)
0x2ef: Stack[-1] = (bool) 0
0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call2 0x1243

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f5: PushEmpty(bool, object)
0x2f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Call2 0x124f

0x2f8: Pop(1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2fa: Stack[-1] = (bool) 1
0x2fb: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2fc: Push((int) 506884)
0x2fd: Push((int) 7591)
0x2fe: Push((int) 7590)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 507529)
0x302: Push((int) -1)
0x303: Push((int) 8311)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: GOTO 0x309

0x307: Return(); Pop(0)

0x308: GOTO 0x2bd

0x309: PushEmpty(bool)
0x30a: Call2 0x1139

0x30b: Pop(0)
0x30c: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x30d: @ lshWaitForAnimEnd()
0x30e: Pop(0)
0x30f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x317

0x312: PushEmpty(string)
0x313: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x314: Call2 0x1083

0x315: Pop(1)
0x316: GOTO 0x30d

0x317: GOTO 0x326

0x318: Push("all")
0x319: Push("idle")
0x31a: @ PlayAnimation(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: @ WaitForAnimEnd()
0x31d: Pop(0)
0x31e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x326

0x321: Push("all")
0x322: Push("idle")
0x323: @ PlayAnimation(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: GOTO 0x31c

0x326: Return(); Pop(0)

0x327: PushEmpty()
0x328: PushEmpty(bool)
0x329: Call2 0x1139

0x32a: Pop(0)
0x32b: Pop(1); Push((bool) Stack[-1] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Return(); Pop(0)

0x32e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Return(); Pop(0)

0x331: PushEmpty(string, bool)
0x332: Stack[-2] = Stack[-3]
0x333: Push("")
0x334: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: Stack[-1] = (bool) 0
0x337: GOTO 0x339

0x338: Stack[-1] = (bool) 1
0x339: Call2 0x1093

0x33a: Pop(2)
0x33b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x33c: Return(); Pop(0)

0x33d: PushEmpty()
0x33e: Push((int) 1)
0x33f: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x340: PushEmpty()
0x341: Call2 0x10b1

0x342: Pop(0)
0x343: Push((int) 8221)
0x344: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x346: PushEmpty(object, object)
0x347: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x348: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x349: Call2 0x1165

0x34a: Pop(2)
0x34b: PushEmpty(object, object)
0x34c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34e: Call2 0x1177

0x34f: Pop(2)
0x350: Push((int) 8222)
0x351: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x353: PushEmpty(object, object)
0x354: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x355: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x356: Call2 0x1165

0x357: Pop(2)
0x358: Push((int) 8202)
0x359: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35b: PushEmpty(object, object)
0x35c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x35d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35e: Call2 0x116b

0x35f: Pop(2)
0x360: Push((int) 8210)
0x361: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: PushEmpty(object, object)
0x364: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x1180

0x367: Pop(2)
0x368: Push((int) 7590)
0x369: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36b: PushEmpty(object, object)
0x36c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Call2 0x1171

0x36f: Pop(2)
0x370: Push((int) 7583)
0x371: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x373: PushEmpty(string)
0x374: Stack[-1] = "Untrust"
0x375: Call2 0x327

0x376: Pop(1)
0x377: Push((int) 506877)
0x378: @@ SetMessage(Stack[-1])
0x379: Pop(1)
0x37a: @@ ClearReplies()
0x37b: Pop(0)
0x37c: PushEmpty(bool)
0x37d: Stack[-1] = (bool) 0
0x37e: PushEmpty(bool, object)
0x37f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x380: Call2 0x122b

0x381: Pop(1)
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x385: Call2 0x125b

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-1] = (bool) 1
0x389: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38a: Push((int) 506878)
0x38b: Push((int) 7585)
0x38c: Push((int) 7584)
0x38d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38e: Pop(3)
0x38f: PushEmpty(bool)
0x390: Stack[-1] = (bool) 0
0x391: PushEmpty(bool, object)
0x392: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x393: Call2 0x1237

0x394: Pop(1)
0x395: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x398: Call2 0x1273

0x399: Pop(1)
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Stack[-1] = (bool) 1
0x39c: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39d: Push((int) 507431)
0x39e: Push((int) 8203)
0x39f: Push((int) 8202)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: PushEmpty(bool)
0x3a3: Stack[-1] = (bool) 0
0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Call2 0x1243

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a9: PushEmpty(bool, object)
0x3aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ab: Call2 0x124f

0x3ac: Pop(1)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: Stack[-1] = (bool) 1
0x3af: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b0: Push((int) 506884)
0x3b1: Push((int) 7591)
0x3b2: Push((int) 7590)
0x3b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: Push((int) 507529)
0x3b6: Push((int) -1)
0x3b7: Push((int) 8311)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 26534)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3be: Push((int) 26536)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral"
0x3c3: Call2 0x327

0x3c4: Pop(1)
0x3c5: Push((int) 525174)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: Push((int) 525175)
0x3cb: Push((int) 26538)
0x3cc: Push((int) 26537)
0x3cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ce: Pop(3)
0x3cf: Push((int) 525181)
0x3d0: Push((int) -1)
0x3d1: Push((int) 26543)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 26538)
0x3d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3d8: PushEmpty(string)
0x3d9: Stack[-1] = "Neutral"
0x3da: Call2 0x327

0x3db: Pop(1)
0x3dc: Push((int) 525176)
0x3dd: @@ SetMessage(Stack[-1])
0x3de: Pop(1)
0x3df: @@ ClearReplies()
0x3e0: Pop(0)
0x3e1: Push((int) 525177)
0x3e2: Push((int) 26540)
0x3e3: Push((int) 26539)
0x3e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e5: Pop(3)
0x3e6: Push((int) 525180)
0x3e7: Push((int) -1)
0x3e8: Push((int) 26542)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Return(); Pop(0)

0x3ec: Push((int) 26540)
0x3ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral"
0x3f1: Call2 0x327

0x3f2: Pop(1)
0x3f3: Push((int) 525178)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: Push((int) 525179)
0x3f9: Push((int) -1)
0x3fa: Push((int) 26541)
0x3fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fc: Pop(3)
0x3fd: Push((int) 534039)
0x3fe: Push((int) -1)
0x3ff: Push((int) 35617)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Return(); Pop(0)

0x403: Push((int) 26526)
0x404: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x406: Push((int) 26528)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x409: PushEmpty(string)
0x40a: Stack[-1] = "Neutral"
0x40b: Call2 0x327

0x40c: Pop(1)
0x40d: Push((int) 525167)
0x40e: @@ SetMessage(Stack[-1])
0x40f: Pop(1)
0x410: @@ ClearReplies()
0x411: Pop(0)
0x412: Push((int) 525168)
0x413: Push((int) -1)
0x414: Push((int) 26529)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Push((int) 525169)
0x418: Push((int) -1)
0x419: Push((int) 26530)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Return(); Pop(0)

0x41d: Push((int) 7591)
0x41e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x420: PushEmpty(string)
0x421: Stack[-1] = "Neutral"
0x422: Call2 0x327

0x423: Pop(1)
0x424: Push((int) 506885)
0x425: @@ SetMessage(Stack[-1])
0x426: Pop(1)
0x427: @@ ClearReplies()
0x428: Pop(0)
0x429: Push((int) 507430)
0x42a: Push((int) 10354)
0x42b: Push((int) 8201)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Push((int) 533996)
0x42f: Push((int) -1)
0x430: Push((int) 35570)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Return(); Pop(0)

0x434: Push((int) 10354)
0x435: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x437: PushEmpty(string)
0x438: Stack[-1] = "Neutral"
0x439: Call2 0x327

0x43a: Pop(1)
0x43b: Push((int) 509422)
0x43c: @@ SetMessage(Stack[-1])
0x43d: Pop(1)
0x43e: @@ ClearReplies()
0x43f: Pop(0)
0x440: Push((int) 509423)
0x441: Push((int) 10356)
0x442: Push((int) 10355)
0x443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x444: Pop(3)
0x445: Push((int) 509432)
0x446: Push((int) 10366)
0x447: Push((int) 10365)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Return(); Pop(0)

0x44b: Push((int) 10366)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call2 0x327

0x451: Pop(1)
0x452: Push((int) 509433)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 509434)
0x458: Push((int) 10356)
0x459: Push((int) 10367)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Return(); Pop(0)

0x45d: Push((int) 10356)
0x45e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x460: PushEmpty(string)
0x461: Stack[-1] = "Neutral"
0x462: Call2 0x327

0x463: Pop(1)
0x464: Push((int) 509424)
0x465: @@ SetMessage(Stack[-1])
0x466: Pop(1)
0x467: @@ ClearReplies()
0x468: Pop(0)
0x469: Push((int) 509425)
0x46a: Push((int) 10358)
0x46b: Push((int) 10357)
0x46c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46d: Pop(3)
0x46e: Push((int) 509429)
0x46f: Push((int) 10362)
0x470: Push((int) 10361)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Push((int) 10362)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x477: PushEmpty(string)
0x478: Stack[-1] = "Neutral"
0x479: Call2 0x327

0x47a: Pop(1)
0x47b: Push((int) 509430)
0x47c: @@ SetMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ ClearReplies()
0x47f: Pop(0)
0x480: Push((int) 509431)
0x481: Push((int) 10358)
0x482: Push((int) 10363)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: Return(); Pop(0)

0x486: Push((int) 10358)
0x487: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x489: PushEmpty(string)
0x48a: Stack[-1] = "Neutral"
0x48b: Call2 0x327

0x48c: Pop(1)
0x48d: Push((int) 509426)
0x48e: @@ SetMessage(Stack[-1])
0x48f: Pop(1)
0x490: @@ ClearReplies()
0x491: Pop(0)
0x492: Push((int) 509427)
0x493: Push((int) -1)
0x494: Push((int) 10359)
0x495: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x496: Pop(3)
0x497: Push((int) 509428)
0x498: Push((int) -1)
0x499: Push((int) 10360)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Return(); Pop(0)

0x49d: Push((int) 8203)
0x49e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a0: PushEmpty(string)
0x4a1: Stack[-1] = "Neutral"
0x4a2: Call2 0x327

0x4a3: Pop(1)
0x4a4: Push((int) 507432)
0x4a5: @@ SetMessage(Stack[-1])
0x4a6: Pop(1)
0x4a7: @@ ClearReplies()
0x4a8: Pop(0)
0x4a9: Push((int) 507433)
0x4aa: Push((int) 7589)
0x4ab: Push((int) 8204)
0x4ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(3)
0x4ae: Push((int) 534034)
0x4af: Push((int) 35612)
0x4b0: Push((int) 35611)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Return(); Pop(0)

0x4b4: Push((int) 35612)
0x4b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4b7: PushEmpty(string)
0x4b8: Stack[-1] = "Untrust"
0x4b9: Call2 0x327

0x4ba: Pop(1)
0x4bb: Push((int) 534035)
0x4bc: @@ SetMessage(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ ClearReplies()
0x4bf: Pop(0)
0x4c0: Push((int) 534036)
0x4c1: Push((int) -1)
0x4c2: Push((int) 35613)
0x4c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c4: Pop(3)
0x4c5: Return(); Pop(0)

0x4c6: Push((int) 7589)
0x4c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4c9: PushEmpty(string)
0x4ca: Stack[-1] = "Untrust"
0x4cb: Call2 0x327

0x4cc: Pop(1)
0x4cd: Push((int) 506883)
0x4ce: @@ SetMessage(Stack[-1])
0x4cf: Pop(1)
0x4d0: @@ ClearReplies()
0x4d1: Pop(0)
0x4d2: Push((int) 507435)
0x4d3: Push((int) 8207)
0x4d4: Push((int) 8206)
0x4d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(3)
0x4d7: Push((int) 507440)
0x4d8: Push((int) 8207)
0x4d9: Push((int) 8211)
0x4da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: Return(); Pop(0)

0x4dd: Push((int) 8207)
0x4de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4e0: PushEmpty(string)
0x4e1: Stack[-1] = "Untrust"
0x4e2: Call2 0x327

0x4e3: Pop(1)
0x4e4: Push((int) 507436)
0x4e5: @@ SetMessage(Stack[-1])
0x4e6: Pop(1)
0x4e7: @@ ClearReplies()
0x4e8: Pop(0)
0x4e9: Push((int) 507437)
0x4ea: Push((int) 8209)
0x4eb: Push((int) 8208)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: Push((int) 507441)
0x4ef: Push((int) 8209)
0x4f0: Push((int) 8213)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Return(); Pop(0)

0x4f4: Push((int) 8209)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Untrust"
0x4f9: Call2 0x327

0x4fa: Pop(1)
0x4fb: Push((int) 507438)
0x4fc: @@ SetMessage(Stack[-1])
0x4fd: Pop(1)
0x4fe: @@ ClearReplies()
0x4ff: Pop(0)
0x500: Push((int) 507439)
0x501: Push((int) -1)
0x502: Push((int) 8210)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: PushEmpty(bool, object)
0x506: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x507: Call2 0x127f

0x508: Pop(1)
0x509: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50a: Push((int) 534037)
0x50b: Push((int) -1)
0x50c: Push((int) 35614)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 7585)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Untrust"
0x515: Call2 0x327

0x516: Pop(1)
0x517: Push((int) 506879)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 506880)
0x51d: Push((int) 7587)
0x51e: Push((int) 7586)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Push((int) 507450)
0x522: Push((int) 8216)
0x523: Push((int) 8223)
0x524: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x525: Pop(3)
0x526: Return(); Pop(0)

0x527: Push((int) 7587)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x52a: PushEmpty(object, object)
0x52b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52d: Call2 0x115f

0x52e: Pop(2)
0x52f: PushEmpty(string)
0x530: Stack[-1] = "Untrust"
0x531: Call2 0x327

0x532: Pop(1)
0x533: Push((int) 506881)
0x534: @@ SetMessage(Stack[-1])
0x535: Pop(1)
0x536: @@ ClearReplies()
0x537: Pop(0)
0x538: Push((int) 507442)
0x539: Push((int) 8216)
0x53a: Push((int) 8215)
0x53b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53c: Pop(3)
0x53d: Push((int) 507451)
0x53e: Push((int) 8226)
0x53f: Push((int) 8225)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Return(); Pop(0)

0x543: Push((int) 8226)
0x544: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x546: PushEmpty(string)
0x547: Stack[-1] = "Neutral"
0x548: Call2 0x327

0x549: Pop(1)
0x54a: Push((int) 507452)
0x54b: @@ SetMessage(Stack[-1])
0x54c: Pop(1)
0x54d: @@ ClearReplies()
0x54e: Pop(0)
0x54f: Push((int) 507453)
0x550: Push((int) 8216)
0x551: Push((int) 8227)
0x552: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: Push((int) 8216)
0x556: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x558: PushEmpty(string)
0x559: Stack[-1] = "Autizm"
0x55a: Call2 0x327

0x55b: Pop(1)
0x55c: Push((int) 507443)
0x55d: @@ SetMessage(Stack[-1])
0x55e: Pop(1)
0x55f: @@ ClearReplies()
0x560: Pop(0)
0x561: Push((int) 507444)
0x562: Push((int) 8218)
0x563: Push((int) 8217)
0x564: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x565: Pop(3)
0x566: Push((int) 534038)
0x567: Push((int) 8218)
0x568: Push((int) 35615)
0x569: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56a: Pop(3)
0x56b: Return(); Pop(0)

0x56c: Push((int) 8218)
0x56d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x56f: PushEmpty(string)
0x570: Stack[-1] = "Autizm"
0x571: Call2 0x327

0x572: Pop(1)
0x573: Push((int) 507445)
0x574: @@ SetMessage(Stack[-1])
0x575: Pop(1)
0x576: @@ ClearReplies()
0x577: Pop(0)
0x578: Push((int) 507446)
0x579: Push((int) 8220)
0x57a: Push((int) 8219)
0x57b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57c: Pop(3)
0x57d: PushEmpty(bool, object)
0x57e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57f: Call2 0x1267

0x580: Pop(1)
0x581: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x582: Push((int) 507449)
0x583: Push((int) -1)
0x584: Push((int) 8222)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Return(); Pop(0)

0x588: Push((int) 8220)
0x589: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x58b: PushEmpty(string)
0x58c: Stack[-1] = "Neutral"
0x58d: Call2 0x327

0x58e: Pop(1)
0x58f: Push((int) 507447)
0x590: @@ SetMessage(Stack[-1])
0x591: Pop(1)
0x592: @@ ClearReplies()
0x593: Pop(0)
0x594: Push((int) 507448)
0x595: Push((int) -1)
0x596: Push((int) 8221)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Return(); Pop(0)

0x59a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x59b: PushEmpty(bool)
0x59c: Call2 0x1139

0x59d: Pop(0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59f: @ lshStopAnimation()
0x5a0: Pop(0)
0x5a1: GOTO 0x5a4

0x5a2: @ StopAnimation()
0x5a3: Pop(0)
0x5a4: Return(); Pop(0)

0x5a5: GOTO 0x33e

0x5a6: Return(); Pop(0)

0x5a7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5a9: PushEmpty(bool, object, float)
0x5aa: Stack[-2] = Stack[-12]
0x5ab: Stack[-1] = (float) 70.0
0x5ac: Call2 0xfa4

0x5ad: Pop(2)
0x5ae: Pop(1); Push((bool) Stack[-1] == 0)
0x5af: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b0: Stack[-10] = (int) -2
0x5b1: Return(); Pop(8)

0x5b2: @ CreateDialog(Stack[-4])
0x5b3: Pop(0)
0x5b4: PushEmpty(int)
0x5b5: Call2 0x1133

0x5b6: Pop(0)
0x5b7: @@ SetNPCName(Stack[-1])
0x5b8: Pop(1)
0x5b9: PushEmpty(int)
0x5ba: Call2 0x1131

0x5bb: Pop(0)
0x5bc: @@ SetNPCDescription(Stack[-1])
0x5bd: Pop(1)
0x5be: PushEmpty(string)
0x5bf: Call2 0x1135

0x5c0: Pop(0)
0x5c1: @@ SetPhoto(Stack[-1])
0x5c2: Pop(1)
0x5c3: PushEmpty(string)
0x5c4: Call2 0x1137

0x5c5: Pop(0)
0x5c6: @@ SetPhoto2(Stack[-1])
0x5c7: Pop(1)
0x5c8: PushEmpty(int)
0x5c9: Call2 0x1359

0x5ca: Pop(0)
0x5cb: @@ SetPlayerName(Stack[-1])
0x5cc: Pop(1)
0x5cd: Stack[-2] = (int) -1
0x5ce: @ IsOverrideActive(Stack[-3])
0x5cf: Pop(0)
0x5d0: Push(Stack[-3])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: Stack[-10] = (int) -2
0x5d3: Return(); Pop(8)

0x5d4: @ DoDialog(Stack[-4])
0x5d5: Pop(0)
0x5d6: PushEmpty(bool, object)
0x5d7: PushEmpty(object)
0x5d8: Call2 0x10b8

0x5d9: Stack[-2] = Stack[-1]
0x5da: Pop(1)
0x5db: Call2 0xff9

0x5dc: Pop(2)
0x5dd: PushEmpty(object, object)
0x5de: Stack[-2] = Stack[-11]
0x5df: Stack[-1] = Stack[-6]
0x5e0: Push(-2, 4); TaskCall(7)
0x5e1: Call2 0x5f8

0x5e2: Pop(-2, 4); TaskReturn
0x5e3: Pop(2)
0x5e4: @@ IsDialogEnd(Stack[-1])
0x5e5: Pop(0)
0x5e6: Pop(0); Push((bool) Stack[-1] == 0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e8: @ sync()
0x5e9: Pop(0)
0x5ea: @@ IsDialogEnd(Stack[-1])
0x5eb: Pop(0)
0x5ec: GOTO 0x5e6

0x5ed: PushEmpty(object)
0x5ee: Stack[-1] = Stack[-10]
0x5ef: Call2 0xfe8

0x5f0: Pop(1)
0x5f1: @ StopDialog(Stack[-4])
0x5f2: Pop(0)
0x5f3: @@ GetReturnValue(Stack[-2])
0x5f4: Pop(0)
0x5f5: Stack[-10] = Stack[-2]
0x5f6: Return(); Pop(8)

0x5f7: Stack[-4] = 0
0x5f8: PushEmpty()
0x5f9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5fa: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5fb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5fc: Push((int) 1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x5fe: PushEmpty(bool, object)
0x5ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x600: Call2 0x12df

0x601: Pop(1)
0x602: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x603: PushEmpty(object, object)
0x604: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x605: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x606: Call2 0x11f5

0x607: Pop(2)
0x608: PushEmpty(string)
0x609: Stack[-1] = "Drunk"
0x60a: Call2 0x655

0x60b: Pop(1)
0x60c: Push((int) 510030)
0x60d: @@ SetMessage(Stack[-1])
0x60e: Pop(1)
0x60f: @@ ClearReplies()
0x610: Pop(0)
0x611: Push((int) 510031)
0x612: Push((int) 11054)
0x613: Push((int) 11053)
0x614: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x615: Pop(3)
0x616: Push((int) 510039)
0x617: Push((int) 11063)
0x618: Push((int) 11062)
0x619: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61a: Pop(3)
0x61b: GOTO 0x637

0x61c: PushEmpty(string)
0x61d: Stack[-1] = "Drunk"
0x61e: Call2 0x655

0x61f: Pop(1)
0x620: Push((int) 533997)
0x621: @@ SetMessage(Stack[-1])
0x622: Pop(1)
0x623: @@ ClearReplies()
0x624: Pop(0)
0x625: PushEmpty(bool, object)
0x626: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x627: Call2 0x121f

0x628: Pop(1)
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: Push((int) 533998)
0x62b: Push((int) 35573)
0x62c: Push((int) 35572)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 534033)
0x630: Push((int) -1)
0x631: Push((int) 35610)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: GOTO 0x637

0x635: Return(); Pop(0)

0x636: GOTO 0x5fc

0x637: PushEmpty(bool)
0x638: Call2 0x1139

0x639: Pop(0)
0x63a: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x63b: @ lshWaitForAnimEnd()
0x63c: Pop(0)
0x63d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: GOTO 0x645

0x640: PushEmpty(string)
0x641: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x642: Call2 0x1083

0x643: Pop(1)
0x644: GOTO 0x63b

0x645: GOTO 0x654

0x646: Push("all")
0x647: Push("idle")
0x648: @ PlayAnimation(Stack[-2], Stack[-1])
0x649: Pop(2)
0x64a: @ WaitForAnimEnd()
0x64b: Pop(0)
0x64c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x64d: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64e: GOTO 0x654

0x64f: Push("all")
0x650: Push("idle")
0x651: @ PlayAnimation(Stack[-2], Stack[-1])
0x652: Pop(2)
0x653: GOTO 0x64a

0x654: Return(); Pop(0)

0x655: PushEmpty()
0x656: PushEmpty(bool)
0x657: Call2 0x1139

0x658: Pop(0)
0x659: Pop(1); Push((bool) Stack[-1] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65b: Return(); Pop(0)

0x65c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Return(); Pop(0)

0x65f: PushEmpty(string, bool)
0x660: Stack[-2] = Stack[-3]
0x661: Push("")
0x662: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: Stack[-1] = (bool) 0
0x665: GOTO 0x667

0x666: Stack[-1] = (bool) 1
0x667: Call2 0x1093

0x668: Pop(2)
0x669: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Push((int) 1)
0x66d: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x66e: PushEmpty()
0x66f: Call2 0x10b1

0x670: Pop(0)
0x671: Push((int) 35572)
0x672: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x674: PushEmpty(object, object)
0x675: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x676: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x677: Call2 0x114e

0x678: Pop(2)
0x679: Push((int) 11052)
0x67a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x67c: PushEmpty(bool, object)
0x67d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67e: Call2 0x12df

0x67f: Pop(1)
0x680: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x681: PushEmpty(object, object)
0x682: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x683: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x684: Call2 0x11f5

0x685: Pop(2)
0x686: PushEmpty(string)
0x687: Stack[-1] = "Drunk"
0x688: Call2 0x655

0x689: Pop(1)
0x68a: Push((int) 510030)
0x68b: @@ SetMessage(Stack[-1])
0x68c: Pop(1)
0x68d: @@ ClearReplies()
0x68e: Pop(0)
0x68f: Push((int) 510031)
0x690: Push((int) 11054)
0x691: Push((int) 11053)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Push((int) 510039)
0x695: Push((int) 11063)
0x696: Push((int) 11062)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Return(); Pop(0)

0x69a: PushEmpty(string)
0x69b: Stack[-1] = "Drunk"
0x69c: Call2 0x655

0x69d: Pop(1)
0x69e: Push((int) 533997)
0x69f: @@ SetMessage(Stack[-1])
0x6a0: Pop(1)
0x6a1: @@ ClearReplies()
0x6a2: Pop(0)
0x6a3: PushEmpty(bool, object)
0x6a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a5: Call2 0x121f

0x6a6: Pop(1)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6a8: Push((int) 533998)
0x6a9: Push((int) 35573)
0x6aa: Push((int) 35572)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Push((int) 534033)
0x6ae: Push((int) -1)
0x6af: Push((int) 35610)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: Return(); Pop(0)

0x6b3: Push((int) 35602)
0x6b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b6: Push((int) 35607)
0x6b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6b9: PushEmpty(string)
0x6ba: Stack[-1] = "Drunk"
0x6bb: Call2 0x655

0x6bc: Pop(1)
0x6bd: Push((int) 534031)
0x6be: @@ SetMessage(Stack[-1])
0x6bf: Pop(1)
0x6c0: @@ ClearReplies()
0x6c1: Pop(0)
0x6c2: Push((int) 534032)
0x6c3: Push((int) 35604)
0x6c4: Push((int) 35608)
0x6c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c6: Pop(3)
0x6c7: Return(); Pop(0)

0x6c8: Push((int) 35604)
0x6c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6cb: PushEmpty(string)
0x6cc: Stack[-1] = "Drunk"
0x6cd: Call2 0x655

0x6ce: Pop(1)
0x6cf: Push((int) 534028)
0x6d0: @@ SetMessage(Stack[-1])
0x6d1: Pop(1)
0x6d2: @@ ClearReplies()
0x6d3: Pop(0)
0x6d4: Push((int) 534029)
0x6d5: Push((int) -1)
0x6d6: Push((int) 35605)
0x6d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d8: Pop(3)
0x6d9: Return(); Pop(0)

0x6da: Push((int) 35595)
0x6db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6dc: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6dd: Push((int) 35597)
0x6de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6e0: PushEmpty(string)
0x6e1: Stack[-1] = "Drunk"
0x6e2: Call2 0x655

0x6e3: Pop(1)
0x6e4: Push((int) 534022)
0x6e5: @@ SetMessage(Stack[-1])
0x6e6: Pop(1)
0x6e7: @@ ClearReplies()
0x6e8: Pop(0)
0x6e9: Push((int) 534023)
0x6ea: Push((int) -1)
0x6eb: Push((int) 35598)
0x6ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ed: Pop(3)
0x6ee: Return(); Pop(0)

0x6ef: Push((int) 35587)
0x6f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f2: Push((int) 35589)
0x6f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6f5: PushEmpty(string)
0x6f6: Stack[-1] = "Drunk"
0x6f7: Call2 0x655

0x6f8: Pop(1)
0x6f9: Push((int) 534014)
0x6fa: @@ SetMessage(Stack[-1])
0x6fb: Pop(1)
0x6fc: @@ ClearReplies()
0x6fd: Pop(0)
0x6fe: Push((int) 534015)
0x6ff: Push((int) 35591)
0x700: Push((int) 35590)
0x701: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x702: Pop(3)
0x703: Return(); Pop(0)

0x704: Push((int) 35591)
0x705: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x707: PushEmpty(string)
0x708: Stack[-1] = "Drunk"
0x709: Call2 0x655

0x70a: Pop(1)
0x70b: Push((int) 534016)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: Push((int) 534017)
0x711: Push((int) -1)
0x712: Push((int) 35592)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Push((int) 534018)
0x716: Push((int) -1)
0x717: Push((int) 35593)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: Push((int) 35573)
0x71c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x71e: PushEmpty(string)
0x71f: Stack[-1] = "Drunk"
0x720: Call2 0x655

0x721: Pop(1)
0x722: Push((int) 533999)
0x723: @@ SetMessage(Stack[-1])
0x724: Pop(1)
0x725: @@ ClearReplies()
0x726: Pop(0)
0x727: Push((int) 534000)
0x728: Push((int) 35575)
0x729: Push((int) 35574)
0x72a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72b: Pop(3)
0x72c: Push((int) 534008)
0x72d: Push((int) 35583)
0x72e: Push((int) 35582)
0x72f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x730: Pop(3)
0x731: Return(); Pop(0)

0x732: Push((int) 35583)
0x733: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x734: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x735: PushEmpty(string)
0x736: Stack[-1] = "Drunk"
0x737: Call2 0x655

0x738: Pop(1)
0x739: Push((int) 534009)
0x73a: @@ SetMessage(Stack[-1])
0x73b: Pop(1)
0x73c: @@ ClearReplies()
0x73d: Pop(0)
0x73e: Push((int) 534010)
0x73f: Push((int) 35577)
0x740: Push((int) 35584)
0x741: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x742: Pop(3)
0x743: Return(); Pop(0)

0x744: Push((int) 35575)
0x745: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x746: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x747: PushEmpty(string)
0x748: Stack[-1] = "Autizm"
0x749: Call2 0x655

0x74a: Pop(1)
0x74b: Push((int) 534001)
0x74c: @@ SetMessage(Stack[-1])
0x74d: Pop(1)
0x74e: @@ ClearReplies()
0x74f: Pop(0)
0x750: Push((int) 534002)
0x751: Push((int) 35577)
0x752: Push((int) 35576)
0x753: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x754: Pop(3)
0x755: Return(); Pop(0)

0x756: Push((int) 35577)
0x757: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x759: PushEmpty(string)
0x75a: Stack[-1] = "Autizm"
0x75b: Call2 0x655

0x75c: Pop(1)
0x75d: Push((int) 534003)
0x75e: @@ SetMessage(Stack[-1])
0x75f: Pop(1)
0x760: @@ ClearReplies()
0x761: Pop(0)
0x762: Push((int) 534004)
0x763: Push((int) 35579)
0x764: Push((int) 35578)
0x765: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x766: Pop(3)
0x767: Return(); Pop(0)

0x768: Push((int) 35579)
0x769: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x76b: PushEmpty(string)
0x76c: Stack[-1] = "Drunk"
0x76d: Call2 0x655

0x76e: Pop(1)
0x76f: Push((int) 534005)
0x770: @@ SetMessage(Stack[-1])
0x771: Pop(1)
0x772: @@ ClearReplies()
0x773: Pop(0)
0x774: Push((int) 534006)
0x775: Push((int) -1)
0x776: Push((int) 35580)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: Push((int) 534007)
0x77a: Push((int) -1)
0x77b: Push((int) 35581)
0x77c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77d: Pop(3)
0x77e: Return(); Pop(0)

0x77f: Push((int) 11063)
0x780: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x782: PushEmpty(string)
0x783: Stack[-1] = "Drunk"
0x784: Call2 0x655

0x785: Pop(1)
0x786: Push((int) 510040)
0x787: @@ SetMessage(Stack[-1])
0x788: Pop(1)
0x789: @@ ClearReplies()
0x78a: Pop(0)
0x78b: Push((int) 510041)
0x78c: Push((int) -1)
0x78d: Push((int) 11064)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: Push((int) 510042)
0x791: Push((int) 11056)
0x792: Push((int) 11065)
0x793: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x794: Pop(3)
0x795: Return(); Pop(0)

0x796: Push((int) 11054)
0x797: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x799: PushEmpty(string)
0x79a: Stack[-1] = "Drunk"
0x79b: Call2 0x655

0x79c: Pop(1)
0x79d: Push((int) 510032)
0x79e: @@ SetMessage(Stack[-1])
0x79f: Pop(1)
0x7a0: @@ ClearReplies()
0x7a1: Pop(0)
0x7a2: Push((int) 510033)
0x7a3: Push((int) 11056)
0x7a4: Push((int) 11055)
0x7a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(3)
0x7a7: Push((int) 510038)
0x7a8: Push((int) 11056)
0x7a9: Push((int) 11060)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Return(); Pop(0)

0x7ad: Push((int) 11056)
0x7ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7b0: PushEmpty(string)
0x7b1: Stack[-1] = "Drunk"
0x7b2: Call2 0x655

0x7b3: Pop(1)
0x7b4: Push((int) 510034)
0x7b5: @@ SetMessage(Stack[-1])
0x7b6: Pop(1)
0x7b7: @@ ClearReplies()
0x7b8: Pop(0)
0x7b9: Push((int) 510035)
0x7ba: Push((int) -1)
0x7bb: Push((int) 11057)
0x7bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bd: Pop(3)
0x7be: Push((int) 510036)
0x7bf: Push((int) -1)
0x7c0: Push((int) 11058)
0x7c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(3)
0x7c3: Push((int) 510037)
0x7c4: Push((int) -1)
0x7c5: Push((int) 11059)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: Return(); Pop(0)

0x7c9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7ca: PushEmpty(bool)
0x7cb: Call2 0x1139

0x7cc: Pop(0)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7ce: @ lshStopAnimation()
0x7cf: Pop(0)
0x7d0: GOTO 0x7d3

0x7d1: @ StopAnimation()
0x7d2: Pop(0)
0x7d3: Return(); Pop(0)

0x7d4: GOTO 0x66c

0x7d5: Return(); Pop(0)

0x7d6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x7d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x7d8: PushEmpty(bool, object, float)
0x7d9: Stack[-2] = Stack[-12]
0x7da: Stack[-1] = (float) 70.0
0x7db: Call2 0xfa4

0x7dc: Pop(2)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7df: Stack[-10] = (int) -2
0x7e0: Return(); Pop(8)

0x7e1: @ CreateDialog(Stack[-4])
0x7e2: Pop(0)
0x7e3: PushEmpty(int)
0x7e4: Call2 0x1133

0x7e5: Pop(0)
0x7e6: @@ SetNPCName(Stack[-1])
0x7e7: Pop(1)
0x7e8: PushEmpty(int)
0x7e9: Call2 0x1131

0x7ea: Pop(0)
0x7eb: @@ SetNPCDescription(Stack[-1])
0x7ec: Pop(1)
0x7ed: PushEmpty(string)
0x7ee: Call2 0x1135

0x7ef: Pop(0)
0x7f0: @@ SetPhoto(Stack[-1])
0x7f1: Pop(1)
0x7f2: PushEmpty(string)
0x7f3: Call2 0x1137

0x7f4: Pop(0)
0x7f5: @@ SetPhoto2(Stack[-1])
0x7f6: Pop(1)
0x7f7: PushEmpty(int)
0x7f8: Call2 0x1359

0x7f9: Pop(0)
0x7fa: @@ SetPlayerName(Stack[-1])
0x7fb: Pop(1)
0x7fc: Stack[-2] = (int) -1
0x7fd: @ IsOverrideActive(Stack[-3])
0x7fe: Pop(0)
0x7ff: Push(Stack[-3])
0x800: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x801: Stack[-10] = (int) -2
0x802: Return(); Pop(8)

0x803: @ DoDialog(Stack[-4])
0x804: Pop(0)
0x805: PushEmpty(bool, object)
0x806: PushEmpty(object)
0x807: Call2 0x10b8

0x808: Stack[-2] = Stack[-1]
0x809: Pop(1)
0x80a: Call2 0xff9

0x80b: Pop(2)
0x80c: PushEmpty(object, object)
0x80d: Stack[-2] = Stack[-11]
0x80e: Stack[-1] = Stack[-6]
0x80f: Push(-2, 4); TaskCall(9)
0x810: Call2 0x827

0x811: Pop(-2, 4); TaskReturn
0x812: Pop(2)
0x813: @@ IsDialogEnd(Stack[-1])
0x814: Pop(0)
0x815: Pop(0); Push((bool) Stack[-1] == 0)
0x816: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x817: @ sync()
0x818: Pop(0)
0x819: @@ IsDialogEnd(Stack[-1])
0x81a: Pop(0)
0x81b: GOTO 0x815

0x81c: PushEmpty(object)
0x81d: Stack[-1] = Stack[-10]
0x81e: Call2 0xfe8

0x81f: Pop(1)
0x820: @ StopDialog(Stack[-4])
0x821: Pop(0)
0x822: @@ GetReturnValue(Stack[-2])
0x823: Pop(0)
0x824: Stack[-10] = Stack[-2]
0x825: Return(); Pop(8)

0x826: Stack[-4] = 0
0x827: PushEmpty()
0x828: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x829: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x82a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x82b: Push((int) 1)
0x82c: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Autizm"
0x82f: Call2 0x8b7

0x830: Pop(1)
0x831: Push((int) 513353)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: PushEmpty(bool)
0x837: Stack[-1] = (bool) 0
0x838: PushEmpty(bool, object)
0x839: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83a: Call2 0x1297

0x83b: Pop(1)
0x83c: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x83d: PushEmpty(bool, object)
0x83e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83f: Call2 0x128b

0x840: Pop(1)
0x841: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x842: Stack[-1] = (bool) 1
0x843: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x844: Push((int) 513355)
0x845: Push((int) 14598)
0x846: Push((int) 14587)
0x847: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x848: Pop(3)
0x849: PushEmpty(bool)
0x84a: Stack[-1] = (bool) 0
0x84b: PushEmpty(bool, object)
0x84c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84d: Call2 0x1297

0x84e: Pop(1)
0x84f: Pop(1); Push((bool) Stack[-1] == 0)
0x850: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x851: PushEmpty(bool, object)
0x852: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x853: Call2 0x128b

0x854: Pop(1)
0x855: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x856: Stack[-1] = (bool) 1
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: Push((int) 513374)
0x859: Push((int) 14607)
0x85a: Push((int) 14606)
0x85b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85c: Pop(3)
0x85d: PushEmpty(bool, object)
0x85e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85f: Call2 0x12a3

0x860: Pop(1)
0x861: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x862: Push((int) 513390)
0x863: Push((int) 14625)
0x864: Push((int) 14624)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: PushEmpty(bool)
0x868: Stack[-1] = (bool) 1
0x869: PushEmpty(bool)
0x86a: Stack[-1] = (bool) 0
0x86b: PushEmpty(bool, object)
0x86c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86d: Call2 0x1207

0x86e: Pop(1)
0x86f: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x870: PushEmpty(bool, object)
0x871: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x872: Call2 0x1213

0x873: Pop(1)
0x874: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x875: Stack[-1] = (bool) 1
0x876: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x877: PushEmpty(bool)
0x878: Stack[-1] = (bool) 0
0x879: PushEmpty(bool, object)
0x87a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87b: Call2 0x11fb

0x87c: Pop(1)
0x87d: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x87e: PushEmpty(bool, object)
0x87f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x880: Call2 0x1213

0x881: Pop(1)
0x882: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x883: Stack[-1] = (bool) 1
0x884: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x885: Stack[-1] = (bool) 0
0x886: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x887: Push((int) 533264)
0x888: Push((int) 34779)
0x889: Push((int) 34778)
0x88a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88b: Pop(3)
0x88c: Push((int) 513354)
0x88d: Push((int) -1)
0x88e: Push((int) 14586)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Push((int) 535721)
0x892: Push((int) -1)
0x893: Push((int) 37400)
0x894: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x895: Pop(3)
0x896: GOTO 0x899

0x897: Return(); Pop(0)

0x898: GOTO 0x82b

0x899: PushEmpty(bool)
0x89a: Call2 0x1139

0x89b: Pop(0)
0x89c: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x89d: @ lshWaitForAnimEnd()
0x89e: Pop(0)
0x89f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: GOTO 0x8a7

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a4: Call2 0x1083

0x8a5: Pop(1)
0x8a6: GOTO 0x89d

0x8a7: GOTO 0x8b6

0x8a8: Push("all")
0x8a9: Push("idle")
0x8aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ab: Pop(2)
0x8ac: @ WaitForAnimEnd()
0x8ad: Pop(0)
0x8ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8af: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8b0: GOTO 0x8b6

0x8b1: Push("all")
0x8b2: Push("idle")
0x8b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b4: Pop(2)
0x8b5: GOTO 0x8ac

0x8b6: Return(); Pop(0)

0x8b7: PushEmpty()
0x8b8: PushEmpty(bool)
0x8b9: Call2 0x1139

0x8ba: Pop(0)
0x8bb: Pop(1); Push((bool) Stack[-1] == 0)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: Return(); Pop(0)

0x8be: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(string, bool)
0x8c2: Stack[-2] = Stack[-3]
0x8c3: Push("")
0x8c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: Stack[-1] = (bool) 0
0x8c7: GOTO 0x8c9

0x8c8: Stack[-1] = (bool) 1
0x8c9: Call2 0x1093

0x8ca: Pop(2)
0x8cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8cc: Return(); Pop(0)

0x8cd: PushEmpty()
0x8ce: Push((int) 1)
0x8cf: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0x8d0: PushEmpty()
0x8d1: Call2 0x10b1

0x8d2: Pop(0)
0x8d3: Push((int) 14602)
0x8d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8d6: PushEmpty(object, object)
0x8d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d9: Call2 0x11d8

0x8da: Pop(2)
0x8db: PushEmpty(object, object)
0x8dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8de: Call2 0x119d

0x8df: Pop(2)
0x8e0: Push((int) 14605)
0x8e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e3: PushEmpty(object, object)
0x8e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8e6: Call2 0x11d8

0x8e7: Pop(2)
0x8e8: Push((int) 14608)
0x8e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8eb: PushEmpty(object, object)
0x8ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ee: Call2 0x119d

0x8ef: Pop(2)
0x8f0: Push((int) 14626)
0x8f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f2: IF (Stack[-1] == 0) GOTO 0x90c; Pop(1)

0x8f3: PushEmpty(object, object)
0x8f4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8f6: Call2 0x11a6

0x8f7: Pop(2)
0x8f8: PushEmpty(object, object)
0x8f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8fb: Call2 0x11ac

0x8fc: Pop(2)
0x8fd: PushEmpty(object, object)
0x8fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x900: Call2 0x11de

0x901: Pop(2)
0x902: PushEmpty(object, object)
0x903: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x904: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x905: Call2 0x113b

0x906: Pop(2)
0x907: PushEmpty(object, object)
0x908: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x909: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90a: Call2 0x1154

0x90b: Pop(2)
0x90c: Push((int) 34778)
0x90d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90f: PushEmpty(object, object)
0x910: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x911: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x912: Call2 0x1148

0x913: Pop(2)
0x914: Push((int) 34780)
0x915: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x917: PushEmpty(object, object)
0x918: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x919: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91a: Call2 0x1141

0x91b: Pop(2)
0x91c: Push((int) 37384)
0x91d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x91f: PushEmpty(object, object)
0x920: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x921: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x922: Call2 0x1141

0x923: Pop(2)
0x924: Push((int) 14585)
0x925: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x926: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x927: PushEmpty(string)
0x928: Stack[-1] = "Autizm"
0x929: Call2 0x8b7

0x92a: Pop(1)
0x92b: Push((int) 513353)
0x92c: @@ SetMessage(Stack[-1])
0x92d: Pop(1)
0x92e: @@ ClearReplies()
0x92f: Pop(0)
0x930: PushEmpty(bool)
0x931: Stack[-1] = (bool) 0
0x932: PushEmpty(bool, object)
0x933: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x934: Call2 0x1297

0x935: Pop(1)
0x936: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x937: PushEmpty(bool, object)
0x938: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x939: Call2 0x128b

0x93a: Pop(1)
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Stack[-1] = (bool) 1
0x93d: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x93e: Push((int) 513355)
0x93f: Push((int) 14598)
0x940: Push((int) 14587)
0x941: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: PushEmpty(bool)
0x944: Stack[-1] = (bool) 0
0x945: PushEmpty(bool, object)
0x946: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x947: Call2 0x1297

0x948: Pop(1)
0x949: Pop(1); Push((bool) Stack[-1] == 0)
0x94a: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x94b: PushEmpty(bool, object)
0x94c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94d: Call2 0x128b

0x94e: Pop(1)
0x94f: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x950: Stack[-1] = (bool) 1
0x951: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x952: Push((int) 513374)
0x953: Push((int) 14607)
0x954: Push((int) 14606)
0x955: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x956: Pop(3)
0x957: PushEmpty(bool, object)
0x958: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x959: Call2 0x12a3

0x95a: Pop(1)
0x95b: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95c: Push((int) 513390)
0x95d: Push((int) 14625)
0x95e: Push((int) 14624)
0x95f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x960: Pop(3)
0x961: PushEmpty(bool)
0x962: Stack[-1] = (bool) 1
0x963: PushEmpty(bool)
0x964: Stack[-1] = (bool) 0
0x965: PushEmpty(bool, object)
0x966: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x967: Call2 0x1207

0x968: Pop(1)
0x969: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96a: PushEmpty(bool, object)
0x96b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96c: Call2 0x1213

0x96d: Pop(1)
0x96e: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96f: Stack[-1] = (bool) 1
0x970: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x971: PushEmpty(bool)
0x972: Stack[-1] = (bool) 0
0x973: PushEmpty(bool, object)
0x974: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x975: Call2 0x11fb

0x976: Pop(1)
0x977: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x978: PushEmpty(bool, object)
0x979: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97a: Call2 0x1213

0x97b: Pop(1)
0x97c: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x97d: Stack[-1] = (bool) 1
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: Stack[-1] = (bool) 0
0x980: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x981: Push((int) 533264)
0x982: Push((int) 34779)
0x983: Push((int) 34778)
0x984: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x985: Pop(3)
0x986: Push((int) 513354)
0x987: Push((int) -1)
0x988: Push((int) 14586)
0x989: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98a: Pop(3)
0x98b: Push((int) 535721)
0x98c: Push((int) -1)
0x98d: Push((int) 37400)
0x98e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98f: Pop(3)
0x990: Return(); Pop(0)

0x991: Push((int) 34779)
0x992: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x994: PushEmpty(string)
0x995: Stack[-1] = "Autizm"
0x996: Call2 0x8b7

0x997: Pop(1)
0x998: Push((int) 533265)
0x999: @@ SetMessage(Stack[-1])
0x99a: Pop(1)
0x99b: @@ ClearReplies()
0x99c: Pop(0)
0x99d: Push((int) 535698)
0x99e: Push((int) 37373)
0x99f: Push((int) 37370)
0x9a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a1: Pop(3)
0x9a2: Push((int) 535713)
0x9a3: Push((int) 37371)
0x9a4: Push((int) 37385)
0x9a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a6: Pop(3)
0x9a7: Return(); Pop(0)

0x9a8: Push((int) 37371)
0x9a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9ab: PushEmpty(string)
0x9ac: Stack[-1] = "Neutral"
0x9ad: Call2 0x8b7

0x9ae: Pop(1)
0x9af: Push((int) 535699)
0x9b0: @@ SetMessage(Stack[-1])
0x9b1: Pop(1)
0x9b2: @@ ClearReplies()
0x9b3: Pop(0)
0x9b4: Push((int) 535700)
0x9b5: Push((int) 37373)
0x9b6: Push((int) 37372)
0x9b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b8: Pop(3)
0x9b9: Return(); Pop(0)

0x9ba: Push((int) 37373)
0x9bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9bd: PushEmpty(string)
0x9be: Stack[-1] = "Autizm"
0x9bf: Call2 0x8b7

0x9c0: Pop(1)
0x9c1: Push((int) 535701)
0x9c2: @@ SetMessage(Stack[-1])
0x9c3: Pop(1)
0x9c4: @@ ClearReplies()
0x9c5: Pop(0)
0x9c6: Push((int) 535702)
0x9c7: Push((int) 37375)
0x9c8: Push((int) 37374)
0x9c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ca: Pop(3)
0x9cb: Push((int) 535714)
0x9cc: Push((int) 37375)
0x9cd: Push((int) 37387)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Return(); Pop(0)

0x9d1: Push((int) 37375)
0x9d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d3: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9d4: PushEmpty(string)
0x9d5: Stack[-1] = "Autizm"
0x9d6: Call2 0x8b7

0x9d7: Pop(1)
0x9d8: Push((int) 535703)
0x9d9: @@ SetMessage(Stack[-1])
0x9da: Pop(1)
0x9db: @@ ClearReplies()
0x9dc: Pop(0)
0x9dd: Push((int) 535704)
0x9de: Push((int) 37377)
0x9df: Push((int) 37376)
0x9e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e1: Pop(3)
0x9e2: Push((int) 535715)
0x9e3: Push((int) 37377)
0x9e4: Push((int) 37389)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Return(); Pop(0)

0x9e8: Push((int) 37377)
0x9e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9eb: PushEmpty(string)
0x9ec: Stack[-1] = "Untrust"
0x9ed: Call2 0x8b7

0x9ee: Pop(1)
0x9ef: Push((int) 535705)
0x9f0: @@ SetMessage(Stack[-1])
0x9f1: Pop(1)
0x9f2: @@ ClearReplies()
0x9f3: Pop(0)
0x9f4: Push((int) 535706)
0x9f5: Push((int) 37379)
0x9f6: Push((int) 37378)
0x9f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f8: Pop(3)
0x9f9: Push((int) 535716)
0x9fa: Push((int) 37379)
0x9fb: Push((int) 37391)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Return(); Pop(0)

0x9ff: Push((int) 37379)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Untrust"
0xa04: Call2 0x8b7

0xa05: Pop(1)
0xa06: Push((int) 535707)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 535708)
0xa0c: Push((int) 37381)
0xa0d: Push((int) 37380)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: Return(); Pop(0)

0xa11: Push((int) 37381)
0xa12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa13: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa14: PushEmpty(string)
0xa15: Stack[-1] = "Neutral"
0xa16: Call2 0x8b7

0xa17: Pop(1)
0xa18: Push((int) 535709)
0xa19: @@ SetMessage(Stack[-1])
0xa1a: Pop(1)
0xa1b: @@ ClearReplies()
0xa1c: Pop(0)
0xa1d: Push((int) 535710)
0xa1e: Push((int) 37383)
0xa1f: Push((int) 37382)
0xa20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa21: Pop(3)
0xa22: Return(); Pop(0)

0xa23: Push((int) 37383)
0xa24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa25: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa26: PushEmpty(string)
0xa27: Stack[-1] = "Neutral"
0xa28: Call2 0x8b7

0xa29: Pop(1)
0xa2a: Push((int) 535711)
0xa2b: @@ SetMessage(Stack[-1])
0xa2c: Pop(1)
0xa2d: @@ ClearReplies()
0xa2e: Pop(0)
0xa2f: Push((int) 533266)
0xa30: Push((int) -1)
0xa31: Push((int) 34780)
0xa32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa33: Pop(3)
0xa34: Push((int) 535712)
0xa35: Push((int) -1)
0xa36: Push((int) 37384)
0xa37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa38: Pop(3)
0xa39: Return(); Pop(0)

0xa3a: Push((int) 14625)
0xa3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa3d: PushEmpty(string)
0xa3e: Stack[-1] = "Autizm"
0xa3f: Call2 0x8b7

0xa40: Pop(1)
0xa41: Push((int) 513391)
0xa42: @@ SetMessage(Stack[-1])
0xa43: Pop(1)
0xa44: @@ ClearReplies()
0xa45: Pop(0)
0xa46: Push((int) 513392)
0xa47: Push((int) -1)
0xa48: Push((int) 14626)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Return(); Pop(0)

0xa4c: Push((int) 14607)
0xa4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4e: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa4f: PushEmpty(string)
0xa50: Stack[-1] = "Drunk"
0xa51: Call2 0x8b7

0xa52: Pop(1)
0xa53: Push((int) 513375)
0xa54: @@ SetMessage(Stack[-1])
0xa55: Pop(1)
0xa56: @@ ClearReplies()
0xa57: Pop(0)
0xa58: Push((int) 513376)
0xa59: Push((int) -1)
0xa5a: Push((int) 14608)
0xa5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5c: Pop(3)
0xa5d: Return(); Pop(0)

0xa5e: Push((int) 14598)
0xa5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa60: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa61: PushEmpty(string)
0xa62: Stack[-1] = "Autizm"
0xa63: Call2 0x8b7

0xa64: Pop(1)
0xa65: Push((int) 513366)
0xa66: @@ SetMessage(Stack[-1])
0xa67: Pop(1)
0xa68: @@ ClearReplies()
0xa69: Pop(0)
0xa6a: Push((int) 513367)
0xa6b: Push((int) 14588)
0xa6c: Push((int) 14599)
0xa6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(3)
0xa6f: Push((int) 535717)
0xa70: Push((int) 14590)
0xa71: Push((int) 37393)
0xa72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa73: Pop(3)
0xa74: Return(); Pop(0)

0xa75: Push((int) 14588)
0xa76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa78: PushEmpty(string)
0xa79: Stack[-1] = "Drunk"
0xa7a: Call2 0x8b7

0xa7b: Pop(1)
0xa7c: Push((int) 513356)
0xa7d: @@ SetMessage(Stack[-1])
0xa7e: Pop(1)
0xa7f: @@ ClearReplies()
0xa80: Pop(0)
0xa81: Push((int) 513357)
0xa82: Push((int) 14590)
0xa83: Push((int) 14589)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: Push((int) 535718)
0xa87: Push((int) 37396)
0xa88: Push((int) 37395)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: Return(); Pop(0)

0xa8c: Push((int) 37396)
0xa8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa8f: PushEmpty(string)
0xa90: Stack[-1] = "Drunk"
0xa91: Call2 0x8b7

0xa92: Pop(1)
0xa93: Push((int) 535719)
0xa94: @@ SetMessage(Stack[-1])
0xa95: Pop(1)
0xa96: @@ ClearReplies()
0xa97: Pop(0)
0xa98: Push((int) 535720)
0xa99: Push((int) 14592)
0xa9a: Push((int) 37397)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: Return(); Pop(0)

0xa9e: Push((int) 14590)
0xa9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa0: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xaa1: PushEmpty(string)
0xaa2: Stack[-1] = "Drunk"
0xaa3: Call2 0x8b7

0xaa4: Pop(1)
0xaa5: Push((int) 513358)
0xaa6: @@ SetMessage(Stack[-1])
0xaa7: Pop(1)
0xaa8: @@ ClearReplies()
0xaa9: Pop(0)
0xaaa: Push((int) 513359)
0xaab: Push((int) 14592)
0xaac: Push((int) 14591)
0xaad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaae: Pop(3)
0xaaf: Push((int) 541555)
0xab0: Push((int) 43724)
0xab1: Push((int) 43723)
0xab2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab3: Pop(3)
0xab4: Return(); Pop(0)

0xab5: Push((int) 43724)
0xab6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab7: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xab8: PushEmpty(string)
0xab9: Stack[-1] = "Drunk"
0xaba: Call2 0x8b7

0xabb: Pop(1)
0xabc: Push((int) 541556)
0xabd: @@ SetMessage(Stack[-1])
0xabe: Pop(1)
0xabf: @@ ClearReplies()
0xac0: Pop(0)
0xac1: Push((int) 541557)
0xac2: Push((int) 43729)
0xac3: Push((int) 43725)
0xac4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac5: Pop(3)
0xac6: Push((int) 541558)
0xac7: Push((int) 43727)
0xac8: Push((int) 43726)
0xac9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaca: Pop(3)
0xacb: Return(); Pop(0)

0xacc: Push((int) 43727)
0xacd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xace: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xacf: PushEmpty(string)
0xad0: Stack[-1] = "Untrust"
0xad1: Call2 0x8b7

0xad2: Pop(1)
0xad3: Push((int) 541559)
0xad4: @@ SetMessage(Stack[-1])
0xad5: Pop(1)
0xad6: @@ ClearReplies()
0xad7: Pop(0)
0xad8: Push((int) 541560)
0xad9: Push((int) 43729)
0xada: Push((int) 43728)
0xadb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadc: Pop(3)
0xadd: Return(); Pop(0)

0xade: Push((int) 43729)
0xadf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae0: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xae1: PushEmpty(string)
0xae2: Stack[-1] = "Untrust"
0xae3: Call2 0x8b7

0xae4: Pop(1)
0xae5: Push((int) 541561)
0xae6: @@ SetMessage(Stack[-1])
0xae7: Pop(1)
0xae8: @@ ClearReplies()
0xae9: Pop(0)
0xaea: Push((int) 541562)
0xaeb: Push((int) 43732)
0xaec: Push((int) 43731)
0xaed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaee: Pop(3)
0xaef: Push((int) 541565)
0xaf0: Push((int) 14592)
0xaf1: Push((int) 43735)
0xaf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf3: Pop(3)
0xaf4: Return(); Pop(0)

0xaf5: Push((int) 43732)
0xaf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf7: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xaf8: PushEmpty(string)
0xaf9: Stack[-1] = "Untrust"
0xafa: Call2 0x8b7

0xafb: Pop(1)
0xafc: Push((int) 541563)
0xafd: @@ SetMessage(Stack[-1])
0xafe: Pop(1)
0xaff: @@ ClearReplies()
0xb00: Pop(0)
0xb01: Push((int) 541564)
0xb02: Push((int) 14592)
0xb03: Push((int) 43733)
0xb04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb05: Pop(3)
0xb06: Return(); Pop(0)

0xb07: Push((int) 14592)
0xb08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb09: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb0a: PushEmpty(string)
0xb0b: Stack[-1] = "Drunk"
0xb0c: Call2 0x8b7

0xb0d: Pop(1)
0xb0e: Push((int) 513360)
0xb0f: @@ SetMessage(Stack[-1])
0xb10: Pop(1)
0xb11: @@ ClearReplies()
0xb12: Pop(0)
0xb13: Push((int) 513361)
0xb14: Push((int) 14594)
0xb15: Push((int) 14593)
0xb16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb17: Pop(3)
0xb18: Return(); Pop(0)

0xb19: Push((int) 14594)
0xb1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1b: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb1c: PushEmpty(string)
0xb1d: Stack[-1] = "Autizm"
0xb1e: Call2 0x8b7

0xb1f: Pop(1)
0xb20: Push((int) 513362)
0xb21: @@ SetMessage(Stack[-1])
0xb22: Pop(1)
0xb23: @@ ClearReplies()
0xb24: Pop(0)
0xb25: Push((int) 513363)
0xb26: Push((int) 14601)
0xb27: Push((int) 14595)
0xb28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb29: Pop(3)
0xb2a: Push((int) 513364)
0xb2b: Push((int) 14597)
0xb2c: Push((int) 14596)
0xb2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2e: Pop(3)
0xb2f: Return(); Pop(0)

0xb30: Push((int) 14597)
0xb31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb33: PushEmpty(string)
0xb34: Stack[-1] = "Drunk"
0xb35: Call2 0x8b7

0xb36: Pop(1)
0xb37: Push((int) 513365)
0xb38: @@ SetMessage(Stack[-1])
0xb39: Pop(1)
0xb3a: @@ ClearReplies()
0xb3b: Pop(0)
0xb3c: Push((int) 513368)
0xb3d: Push((int) 14601)
0xb3e: Push((int) 14600)
0xb3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb40: Pop(3)
0xb41: Push((int) 513371)
0xb42: Push((int) 14604)
0xb43: Push((int) 14603)
0xb44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb45: Pop(3)
0xb46: Return(); Pop(0)

0xb47: Push((int) 14604)
0xb48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb49: IF (Stack[-1] == 0) GOTO 0xb59; Pop(1)

0xb4a: PushEmpty(string)
0xb4b: Stack[-1] = "Neutral"
0xb4c: Call2 0x8b7

0xb4d: Pop(1)
0xb4e: Push((int) 513372)
0xb4f: @@ SetMessage(Stack[-1])
0xb50: Pop(1)
0xb51: @@ ClearReplies()
0xb52: Pop(0)
0xb53: Push((int) 513373)
0xb54: Push((int) -1)
0xb55: Push((int) 14605)
0xb56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb57: Pop(3)
0xb58: Return(); Pop(0)

0xb59: Push((int) 14601)
0xb5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5b: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb5c: PushEmpty(string)
0xb5d: Stack[-1] = "Autizm"
0xb5e: Call2 0x8b7

0xb5f: Pop(1)
0xb60: Push((int) 513369)
0xb61: @@ SetMessage(Stack[-1])
0xb62: Pop(1)
0xb63: @@ ClearReplies()
0xb64: Pop(0)
0xb65: Push((int) 513370)
0xb66: Push((int) -1)
0xb67: Push((int) 14602)
0xb68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb69: Pop(3)
0xb6a: Return(); Pop(0)

0xb6b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb6c: PushEmpty(bool)
0xb6d: Call2 0x1139

0xb6e: Pop(0)
0xb6f: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb70: @ lshStopAnimation()
0xb71: Pop(0)
0xb72: GOTO 0xb75

0xb73: @ StopAnimation()
0xb74: Pop(0)
0xb75: Return(); Pop(0)

0xb76: GOTO 0x8ce

0xb77: Return(); Pop(0)

0xb78: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb79: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb7a: PushEmpty(bool, object, float)
0xb7b: Stack[-2] = Stack[-12]
0xb7c: Stack[-1] = (float) 70.0
0xb7d: Call2 0xfa4

0xb7e: Pop(2)
0xb7f: Pop(1); Push((bool) Stack[-1] == 0)
0xb80: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb81: Stack[-10] = (int) -2
0xb82: Return(); Pop(8)

0xb83: @ CreateDialog(Stack[-4])
0xb84: Pop(0)
0xb85: PushEmpty(int)
0xb86: Call2 0x1133

0xb87: Pop(0)
0xb88: @@ SetNPCName(Stack[-1])
0xb89: Pop(1)
0xb8a: PushEmpty(int)
0xb8b: Call2 0x1131

0xb8c: Pop(0)
0xb8d: @@ SetNPCDescription(Stack[-1])
0xb8e: Pop(1)
0xb8f: PushEmpty(string)
0xb90: Call2 0x1135

0xb91: Pop(0)
0xb92: @@ SetPhoto(Stack[-1])
0xb93: Pop(1)
0xb94: PushEmpty(string)
0xb95: Call2 0x1137

0xb96: Pop(0)
0xb97: @@ SetPhoto2(Stack[-1])
0xb98: Pop(1)
0xb99: PushEmpty(int)
0xb9a: Call2 0x1359

0xb9b: Pop(0)
0xb9c: @@ SetPlayerName(Stack[-1])
0xb9d: Pop(1)
0xb9e: Stack[-2] = (int) -1
0xb9f: @ IsOverrideActive(Stack[-3])
0xba0: Pop(0)
0xba1: Push(Stack[-3])
0xba2: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba3: Stack[-10] = (int) -2
0xba4: Return(); Pop(8)

0xba5: @ DoDialog(Stack[-4])
0xba6: Pop(0)
0xba7: PushEmpty(bool, object)
0xba8: PushEmpty(object)
0xba9: Call2 0x10b8

0xbaa: Stack[-2] = Stack[-1]
0xbab: Pop(1)
0xbac: Call2 0xff9

0xbad: Pop(2)
0xbae: PushEmpty(object, object)
0xbaf: Stack[-2] = Stack[-11]
0xbb0: Stack[-1] = Stack[-6]
0xbb1: Push(-2, 4); TaskCall(11)
0xbb2: Call2 0xbc9

0xbb3: Pop(-2, 4); TaskReturn
0xbb4: Pop(2)
0xbb5: @@ IsDialogEnd(Stack[-1])
0xbb6: Pop(0)
0xbb7: Pop(0); Push((bool) Stack[-1] == 0)
0xbb8: IF (Stack[-1] == 0) GOTO 0xbbe; Pop(1)

0xbb9: @ sync()
0xbba: Pop(0)
0xbbb: @@ IsDialogEnd(Stack[-1])
0xbbc: Pop(0)
0xbbd: GOTO 0xbb7

0xbbe: PushEmpty(object)
0xbbf: Stack[-1] = Stack[-10]
0xbc0: Call2 0xfe8

0xbc1: Pop(1)
0xbc2: @ StopDialog(Stack[-4])
0xbc3: Pop(0)
0xbc4: @@ GetReturnValue(Stack[-2])
0xbc5: Pop(0)
0xbc6: Stack[-10] = Stack[-2]
0xbc7: Return(); Pop(8)

0xbc8: Stack[-4] = 0
0xbc9: PushEmpty()
0xbca: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xbcb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xbcc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xbcd: Push((int) 1)
0xbce: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xbcf: PushEmpty(string)
0xbd0: Stack[-1] = "Drunk"
0xbd1: Call2 0xc25

0xbd2: Pop(1)
0xbd3: Push((int) 514474)
0xbd4: @@ SetMessage(Stack[-1])
0xbd5: Pop(1)
0xbd6: @@ ClearReplies()
0xbd7: Pop(0)
0xbd8: PushEmpty(bool, object)
0xbd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbda: Call2 0x12d3

0xbdb: Pop(1)
0xbdc: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbdd: Push((int) 514475)
0xbde: Push((int) 15709)
0xbdf: Push((int) 15708)
0xbe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe1: Pop(3)
0xbe2: PushEmpty(bool)
0xbe3: Stack[-1] = (bool) 0
0xbe4: PushEmpty(bool, object)
0xbe5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe6: Call2 0x12af

0xbe7: Pop(1)
0xbe8: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbe9: PushEmpty(bool, object)
0xbea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbeb: Call2 0x12bb

0xbec: Pop(1)
0xbed: IF (Stack[-1] == 0) GOTO 0xbef; Pop(1)

0xbee: Stack[-1] = (bool) 1
0xbef: IF (Stack[-1] == 0) GOTO 0xbf5; Pop(1)

0xbf0: Push((int) 539623)
0xbf1: Push((int) 15695)
0xbf2: Push((int) 41570)
0xbf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf4: Pop(3)
0xbf5: PushEmpty(bool, object)
0xbf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf7: Call2 0x12c7

0xbf8: Pop(1)
0xbf9: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfa: Push((int) 514501)
0xbfb: Push((int) -1)
0xbfc: Push((int) 15737)
0xbfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfe: Pop(3)
0xbff: Push((int) 514500)
0xc00: Push((int) -1)
0xc01: Push((int) 15736)
0xc02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: GOTO 0xc07

0xc05: Return(); Pop(0)

0xc06: GOTO 0xbcd

0xc07: PushEmpty(bool)
0xc08: Call2 0x1139

0xc09: Pop(0)
0xc0a: IF (Stack[-1] == 0) GOTO 0xc16; Pop(1)

0xc0b: @ lshWaitForAnimEnd()
0xc0c: Pop(0)
0xc0d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0e: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0f: GOTO 0xc15

0xc10: PushEmpty(string)
0xc11: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc12: Call2 0x1083

0xc13: Pop(1)
0xc14: GOTO 0xc0b

0xc15: GOTO 0xc24

0xc16: Push("all")
0xc17: Push("idle")
0xc18: @ PlayAnimation(Stack[-2], Stack[-1])
0xc19: Pop(2)
0xc1a: @ WaitForAnimEnd()
0xc1b: Pop(0)
0xc1c: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc1d: IF (Stack[-1] == 0) GOTO 0xc1f; Pop(1)

0xc1e: GOTO 0xc24

0xc1f: Push("all")
0xc20: Push("idle")
0xc21: @ PlayAnimation(Stack[-2], Stack[-1])
0xc22: Pop(2)
0xc23: GOTO 0xc1a

0xc24: Return(); Pop(0)

0xc25: PushEmpty()
0xc26: PushEmpty(bool)
0xc27: Call2 0x1139

0xc28: Pop(0)
0xc29: Pop(1); Push((bool) Stack[-1] == 0)
0xc2a: IF (Stack[-1] == 0) GOTO 0xc2c; Pop(1)

0xc2b: Return(); Pop(0)

0xc2c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2e: Return(); Pop(0)

0xc2f: PushEmpty(string, bool)
0xc30: Stack[-2] = Stack[-3]
0xc31: Push("")
0xc32: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc33: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc34: Stack[-1] = (bool) 0
0xc35: GOTO 0xc37

0xc36: Stack[-1] = (bool) 1
0xc37: Call2 0x1093

0xc38: Pop(2)
0xc39: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3a: Return(); Pop(0)

0xc3b: PushEmpty()
0xc3c: Push((int) 1)
0xc3d: IF (Stack[-1] == 0) GOTO 0xdb5; Pop(1)

0xc3e: PushEmpty()
0xc3f: Call2 0x10b1

0xc40: Pop(0)
0xc41: Push((int) 15708)
0xc42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc43: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc44: PushEmpty(object, object)
0xc45: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc46: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc47: Call2 0x11ef

0xc48: Pop(2)
0xc49: Push((int) 41570)
0xc4a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc4b: IF (Stack[-1] == 0) GOTO 0xc51; Pop(1)

0xc4c: PushEmpty(object, object)
0xc4d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4f: Call2 0x11e9

0xc50: Pop(2)
0xc51: Push((int) 15707)
0xc52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc53: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc54: PushEmpty(string)
0xc55: Stack[-1] = "Drunk"
0xc56: Call2 0xc25

0xc57: Pop(1)
0xc58: Push((int) 514474)
0xc59: @@ SetMessage(Stack[-1])
0xc5a: Pop(1)
0xc5b: @@ ClearReplies()
0xc5c: Pop(0)
0xc5d: PushEmpty(bool, object)
0xc5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5f: Call2 0x12d3

0xc60: Pop(1)
0xc61: IF (Stack[-1] == 0) GOTO 0xc67; Pop(1)

0xc62: Push((int) 514475)
0xc63: Push((int) 15709)
0xc64: Push((int) 15708)
0xc65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc66: Pop(3)
0xc67: PushEmpty(bool)
0xc68: Stack[-1] = (bool) 0
0xc69: PushEmpty(bool, object)
0xc6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6b: Call2 0x12af

0xc6c: Pop(1)
0xc6d: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc6e: PushEmpty(bool, object)
0xc6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc70: Call2 0x12bb

0xc71: Pop(1)
0xc72: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc73: Stack[-1] = (bool) 1
0xc74: IF (Stack[-1] == 0) GOTO 0xc7a; Pop(1)

0xc75: Push((int) 539623)
0xc76: Push((int) 15695)
0xc77: Push((int) 41570)
0xc78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: PushEmpty(bool, object)
0xc7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7c: Call2 0x12c7

0xc7d: Pop(1)
0xc7e: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc7f: Push((int) 514501)
0xc80: Push((int) -1)
0xc81: Push((int) 15737)
0xc82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc83: Pop(3)
0xc84: Push((int) 514500)
0xc85: Push((int) -1)
0xc86: Push((int) 15736)
0xc87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc88: Pop(3)
0xc89: Return(); Pop(0)

0xc8a: Push((int) 15695)
0xc8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8c: IF (Stack[-1] == 0) GOTO 0xca1; Pop(1)

0xc8d: PushEmpty(string)
0xc8e: Stack[-1] = "Neutral"
0xc8f: Call2 0xc25

0xc90: Pop(1)
0xc91: Push((int) 514464)
0xc92: @@ SetMessage(Stack[-1])
0xc93: Pop(1)
0xc94: @@ ClearReplies()
0xc95: Pop(0)
0xc96: Push((int) 514465)
0xc97: Push((int) 15697)
0xc98: Push((int) 15696)
0xc99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9a: Pop(3)
0xc9b: Push((int) 539626)
0xc9c: Push((int) 15697)
0xc9d: Push((int) 41574)
0xc9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9f: Pop(3)
0xca0: Return(); Pop(0)

0xca1: Push((int) 15697)
0xca2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca3: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xca4: PushEmpty(string)
0xca5: Stack[-1] = "Neutral"
0xca6: Call2 0xc25

0xca7: Pop(1)
0xca8: Push((int) 514466)
0xca9: @@ SetMessage(Stack[-1])
0xcaa: Pop(1)
0xcab: @@ ClearReplies()
0xcac: Pop(0)
0xcad: Push((int) 514467)
0xcae: Push((int) -1)
0xcaf: Push((int) 15698)
0xcb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb1: Pop(3)
0xcb2: Push((int) 539630)
0xcb3: Push((int) 41859)
0xcb4: Push((int) 41576)
0xcb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb6: Pop(3)
0xcb7: Return(); Pop(0)

0xcb8: Push((int) 41859)
0xcb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcba: IF (Stack[-1] == 0) GOTO 0xcca; Pop(1)

0xcbb: PushEmpty(string)
0xcbc: Stack[-1] = "Drunk"
0xcbd: Call2 0xc25

0xcbe: Pop(1)
0xcbf: Push((int) 539899)
0xcc0: @@ SetMessage(Stack[-1])
0xcc1: Pop(1)
0xcc2: @@ ClearReplies()
0xcc3: Pop(0)
0xcc4: Push((int) 539900)
0xcc5: Push((int) 41861)
0xcc6: Push((int) 41860)
0xcc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc8: Pop(3)
0xcc9: Return(); Pop(0)

0xcca: Push((int) 41861)
0xccb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccc: IF (Stack[-1] == 0) GOTO 0xcdc; Pop(1)

0xccd: PushEmpty(string)
0xcce: Stack[-1] = "Neutral"
0xccf: Call2 0xc25

0xcd0: Pop(1)
0xcd1: Push((int) 539901)
0xcd2: @@ SetMessage(Stack[-1])
0xcd3: Pop(1)
0xcd4: @@ ClearReplies()
0xcd5: Pop(0)
0xcd6: Push((int) 539902)
0xcd7: Push((int) -1)
0xcd8: Push((int) 41862)
0xcd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcda: Pop(3)
0xcdb: Return(); Pop(0)

0xcdc: Push((int) 15709)
0xcdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcdf: PushEmpty(string)
0xce0: Stack[-1] = "Autizm"
0xce1: Call2 0xc25

0xce2: Pop(1)
0xce3: Push((int) 514476)
0xce4: @@ SetMessage(Stack[-1])
0xce5: Pop(1)
0xce6: @@ ClearReplies()
0xce7: Pop(0)
0xce8: Push((int) 514477)
0xce9: Push((int) 15711)
0xcea: Push((int) 15710)
0xceb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcec: Pop(3)
0xced: Push((int) 514499)
0xcee: Push((int) 15711)
0xcef: Push((int) 15734)
0xcf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf1: Pop(3)
0xcf2: Return(); Pop(0)

0xcf3: Push((int) 15711)
0xcf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf5: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xcf6: PushEmpty(string)
0xcf7: Stack[-1] = "Autizm"
0xcf8: Call2 0xc25

0xcf9: Pop(1)
0xcfa: Push((int) 514478)
0xcfb: @@ SetMessage(Stack[-1])
0xcfc: Pop(1)
0xcfd: @@ ClearReplies()
0xcfe: Pop(0)
0xcff: Push((int) 514479)
0xd00: Push((int) 15713)
0xd01: Push((int) 15712)
0xd02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd03: Pop(3)
0xd04: Push((int) 514494)
0xd05: Push((int) 15729)
0xd06: Push((int) 15728)
0xd07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd08: Pop(3)
0xd09: Return(); Pop(0)

0xd0a: Push((int) 15729)
0xd0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0c: IF (Stack[-1] == 0) GOTO 0xd1c; Pop(1)

0xd0d: PushEmpty(string)
0xd0e: Stack[-1] = "Neutral"
0xd0f: Call2 0xc25

0xd10: Pop(1)
0xd11: Push((int) 514495)
0xd12: @@ SetMessage(Stack[-1])
0xd13: Pop(1)
0xd14: @@ ClearReplies()
0xd15: Pop(0)
0xd16: Push((int) 514496)
0xd17: Push((int) 15731)
0xd18: Push((int) 15730)
0xd19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1a: Pop(3)
0xd1b: Return(); Pop(0)

0xd1c: Push((int) 15731)
0xd1d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1e: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd1f: PushEmpty(string)
0xd20: Stack[-1] = "Neutral"
0xd21: Call2 0xc25

0xd22: Pop(1)
0xd23: Push((int) 514497)
0xd24: @@ SetMessage(Stack[-1])
0xd25: Pop(1)
0xd26: @@ ClearReplies()
0xd27: Pop(0)
0xd28: Push((int) 514498)
0xd29: Push((int) 15713)
0xd2a: Push((int) 15732)
0xd2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2c: Pop(3)
0xd2d: Return(); Pop(0)

0xd2e: Push((int) 15713)
0xd2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd30: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd31: PushEmpty(string)
0xd32: Stack[-1] = "Neutral"
0xd33: Call2 0xc25

0xd34: Pop(1)
0xd35: Push((int) 514480)
0xd36: @@ SetMessage(Stack[-1])
0xd37: Pop(1)
0xd38: @@ ClearReplies()
0xd39: Pop(0)
0xd3a: Push((int) 514481)
0xd3b: Push((int) 15715)
0xd3c: Push((int) 15714)
0xd3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3e: Pop(3)
0xd3f: Return(); Pop(0)

0xd40: Push((int) 15715)
0xd41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd43: PushEmpty(string)
0xd44: Stack[-1] = "Neutral"
0xd45: Call2 0xc25

0xd46: Pop(1)
0xd47: Push((int) 514482)
0xd48: @@ SetMessage(Stack[-1])
0xd49: Pop(1)
0xd4a: @@ ClearReplies()
0xd4b: Pop(0)
0xd4c: Push((int) 514483)
0xd4d: Push((int) 15717)
0xd4e: Push((int) 15716)
0xd4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd50: Pop(3)
0xd51: Push((int) 539625)
0xd52: Push((int) 15719)
0xd53: Push((int) 41572)
0xd54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd55: Pop(3)
0xd56: Return(); Pop(0)

0xd57: Push((int) 15717)
0xd58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd59: IF (Stack[-1] == 0) GOTO 0xd69; Pop(1)

0xd5a: PushEmpty(string)
0xd5b: Stack[-1] = "Neutral"
0xd5c: Call2 0xc25

0xd5d: Pop(1)
0xd5e: Push((int) 514484)
0xd5f: @@ SetMessage(Stack[-1])
0xd60: Pop(1)
0xd61: @@ ClearReplies()
0xd62: Pop(0)
0xd63: Push((int) 514485)
0xd64: Push((int) 15719)
0xd65: Push((int) 15718)
0xd66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd67: Pop(3)
0xd68: Return(); Pop(0)

0xd69: Push((int) 15719)
0xd6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6b: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd6c: PushEmpty(string)
0xd6d: Stack[-1] = "Untrust"
0xd6e: Call2 0xc25

0xd6f: Pop(1)
0xd70: Push((int) 514486)
0xd71: @@ SetMessage(Stack[-1])
0xd72: Pop(1)
0xd73: @@ ClearReplies()
0xd74: Pop(0)
0xd75: Push((int) 514487)
0xd76: Push((int) 15721)
0xd77: Push((int) 15720)
0xd78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd79: Pop(3)
0xd7a: Push((int) 514491)
0xd7b: Push((int) 15725)
0xd7c: Push((int) 15724)
0xd7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7e: Pop(3)
0xd7f: Return(); Pop(0)

0xd80: Push((int) 15725)
0xd81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd82: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd83: PushEmpty(string)
0xd84: Stack[-1] = "Untrust"
0xd85: Call2 0xc25

0xd86: Pop(1)
0xd87: Push((int) 514492)
0xd88: @@ SetMessage(Stack[-1])
0xd89: Pop(1)
0xd8a: @@ ClearReplies()
0xd8b: Pop(0)
0xd8c: Push((int) 514493)
0xd8d: Push((int) 15721)
0xd8e: Push((int) 15726)
0xd8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd90: Pop(3)
0xd91: Return(); Pop(0)

0xd92: Push((int) 15721)
0xd93: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd94: IF (Stack[-1] == 0) GOTO 0xda9; Pop(1)

0xd95: PushEmpty(string)
0xd96: Stack[-1] = "Untrust"
0xd97: Call2 0xc25

0xd98: Pop(1)
0xd99: Push((int) 514488)
0xd9a: @@ SetMessage(Stack[-1])
0xd9b: Pop(1)
0xd9c: @@ ClearReplies()
0xd9d: Pop(0)
0xd9e: Push((int) 514489)
0xd9f: Push((int) -1)
0xda0: Push((int) 15722)
0xda1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda2: Pop(3)
0xda3: Push((int) 514490)
0xda4: Push((int) -1)
0xda5: Push((int) 15723)
0xda6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda7: Pop(3)
0xda8: Return(); Pop(0)

0xda9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdaa: PushEmpty(bool)
0xdab: Call2 0x1139

0xdac: Pop(0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdae: @ lshStopAnimation()
0xdaf: Pop(0)
0xdb0: GOTO 0xdb3

0xdb1: @ StopAnimation()
0xdb2: Pop(0)
0xdb3: Return(); Pop(0)

0xdb4: GOTO 0xc3c

0xdb5: Return(); Pop(0)

0xdb6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdb7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xdb8: PushEmpty(bool, object, float)
0xdb9: Stack[-2] = Stack[-12]
0xdba: Stack[-1] = (float) 70.0
0xdbb: Call2 0xfa4

0xdbc: Pop(2)
0xdbd: Pop(1); Push((bool) Stack[-1] == 0)
0xdbe: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbf: Stack[-10] = (int) -2
0xdc0: Return(); Pop(8)

0xdc1: @ CreateDialog(Stack[-4])
0xdc2: Pop(0)
0xdc3: PushEmpty(int)
0xdc4: Call2 0x1133

0xdc5: Pop(0)
0xdc6: @@ SetNPCName(Stack[-1])
0xdc7: Pop(1)
0xdc8: PushEmpty(int)
0xdc9: Call2 0x1131

0xdca: Pop(0)
0xdcb: @@ SetNPCDescription(Stack[-1])
0xdcc: Pop(1)
0xdcd: PushEmpty(string)
0xdce: Call2 0x1135

0xdcf: Pop(0)
0xdd0: @@ SetPhoto(Stack[-1])
0xdd1: Pop(1)
0xdd2: PushEmpty(string)
0xdd3: Call2 0x1137

0xdd4: Pop(0)
0xdd5: @@ SetPhoto2(Stack[-1])
0xdd6: Pop(1)
0xdd7: PushEmpty(int)
0xdd8: Call2 0x1359

0xdd9: Pop(0)
0xdda: @@ SetPlayerName(Stack[-1])
0xddb: Pop(1)
0xddc: Stack[-2] = (int) -1
0xddd: @ IsOverrideActive(Stack[-3])
0xdde: Pop(0)
0xddf: Push(Stack[-3])
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: Stack[-10] = (int) -2
0xde2: Return(); Pop(8)

0xde3: @ DoDialog(Stack[-4])
0xde4: Pop(0)
0xde5: PushEmpty(bool, object)
0xde6: PushEmpty(object)
0xde7: Call2 0x10b8

0xde8: Stack[-2] = Stack[-1]
0xde9: Pop(1)
0xdea: Call2 0xff9

0xdeb: Pop(2)
0xdec: PushEmpty(object, object)
0xded: Stack[-2] = Stack[-11]
0xdee: Stack[-1] = Stack[-6]
0xdef: Push(-2, 4); TaskCall(13)
0xdf0: Call2 0xe07

0xdf1: Pop(-2, 4); TaskReturn
0xdf2: Pop(2)
0xdf3: @@ IsDialogEnd(Stack[-1])
0xdf4: Pop(0)
0xdf5: Pop(0); Push((bool) Stack[-1] == 0)
0xdf6: IF (Stack[-1] == 0) GOTO 0xdfc; Pop(1)

0xdf7: @ sync()
0xdf8: Pop(0)
0xdf9: @@ IsDialogEnd(Stack[-1])
0xdfa: Pop(0)
0xdfb: GOTO 0xdf5

0xdfc: PushEmpty(object)
0xdfd: Stack[-1] = Stack[-10]
0xdfe: Call2 0xfe8

0xdff: Pop(1)
0xe00: @ StopDialog(Stack[-4])
0xe01: Pop(0)
0xe02: @@ GetReturnValue(Stack[-2])
0xe03: Pop(0)
0xe04: Stack[-10] = Stack[-2]
0xe05: Return(); Pop(8)

0xe06: Stack[-4] = 0
0xe07: PushEmpty()
0xe08: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe09: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe0a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe0b: Push((int) 1)
0xe0c: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe0d: PushEmpty(string)
0xe0e: Stack[-1] = "Neutral"
0xe0f: Call2 0xe41

0xe10: Pop(1)
0xe11: Push((int) 540542)
0xe12: @@ SetMessage(Stack[-1])
0xe13: Pop(1)
0xe14: @@ ClearReplies()
0xe15: Pop(0)
0xe16: Push((int) 540543)
0xe17: Push((int) -1)
0xe18: Push((int) 42552)
0xe19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1a: Pop(3)
0xe1b: Push((int) 540796)
0xe1c: Push((int) -1)
0xe1d: Push((int) 42845)
0xe1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1f: Pop(3)
0xe20: GOTO 0xe23

0xe21: Return(); Pop(0)

0xe22: GOTO 0xe0b

0xe23: PushEmpty(bool)
0xe24: Call2 0x1139

0xe25: Pop(0)
0xe26: IF (Stack[-1] == 0) GOTO 0xe32; Pop(1)

0xe27: @ lshWaitForAnimEnd()
0xe28: Pop(0)
0xe29: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2a: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe2b: GOTO 0xe31

0xe2c: PushEmpty(string)
0xe2d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe2e: Call2 0x1083

0xe2f: Pop(1)
0xe30: GOTO 0xe27

0xe31: GOTO 0xe40

0xe32: Push("all")
0xe33: Push("idle")
0xe34: @ PlayAnimation(Stack[-2], Stack[-1])
0xe35: Pop(2)
0xe36: @ WaitForAnimEnd()
0xe37: Pop(0)
0xe38: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe39: IF (Stack[-1] == 0) GOTO 0xe3b; Pop(1)

0xe3a: GOTO 0xe40

0xe3b: Push("all")
0xe3c: Push("idle")
0xe3d: @ PlayAnimation(Stack[-2], Stack[-1])
0xe3e: Pop(2)
0xe3f: GOTO 0xe36

0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: PushEmpty(bool)
0xe43: Call2 0x1139

0xe44: Pop(0)
0xe45: Pop(1); Push((bool) Stack[-1] == 0)
0xe46: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe47: Return(); Pop(0)

0xe48: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe49: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe4a: Return(); Pop(0)

0xe4b: PushEmpty(string, bool)
0xe4c: Stack[-2] = Stack[-3]
0xe4d: Push("")
0xe4e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe4f: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe50: Stack[-1] = (bool) 0
0xe51: GOTO 0xe53

0xe52: Stack[-1] = (bool) 1
0xe53: Call2 0x1093

0xe54: Pop(2)
0xe55: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe56: Return(); Pop(0)

0xe57: PushEmpty()
0xe58: Push((int) 1)
0xe59: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe5a: PushEmpty()
0xe5b: Call2 0x10b1

0xe5c: Pop(0)
0xe5d: Push((int) 42551)
0xe5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5f: IF (Stack[-1] == 0) GOTO 0xe74; Pop(1)

0xe60: PushEmpty(string)
0xe61: Stack[-1] = "Neutral"
0xe62: Call2 0xe41

0xe63: Pop(1)
0xe64: Push((int) 540542)
0xe65: @@ SetMessage(Stack[-1])
0xe66: Pop(1)
0xe67: @@ ClearReplies()
0xe68: Pop(0)
0xe69: Push((int) 540543)
0xe6a: Push((int) -1)
0xe6b: Push((int) 42552)
0xe6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6d: Pop(3)
0xe6e: Push((int) 540796)
0xe6f: Push((int) -1)
0xe70: Push((int) 42845)
0xe71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe72: Pop(3)
0xe73: Return(); Pop(0)

0xe74: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe75: PushEmpty(bool)
0xe76: Call2 0x1139

0xe77: Pop(0)
0xe78: IF (Stack[-1] == 0) GOTO 0xe7c; Pop(1)

0xe79: @ lshStopAnimation()
0xe7a: Pop(0)
0xe7b: GOTO 0xe7e

0xe7c: @ StopAnimation()
0xe7d: Pop(0)
0xe7e: Return(); Pop(0)

0xe7f: GOTO 0xe58

0xe80: Return(); Pop(0)

0xe81: Push(GlobalVars[1])
0xe82: Stack[-1] = (bool) 0
0xe83: GlobalVars[1] = Stack[-1]; Pop(1)
0xe84: PushEmpty()
0xe85: Call2 0xe88

0xe86: Pop(0)
0xe87: Return(); Pop(0)

0xe88: PushEmpty(bool)
0xe89: Call2 0xf9f

0xe8a: Pop(0)
0xe8b: Pop(1); Push((bool) Stack[-1] == 0)
0xe8c: IF (Stack[-1] == 0) GOTO 0xe8f; Pop(1)

0xe8d: @ Hold()
0xe8e: Pop(0)
0xe8f: @ GetDirection(Stack[-0])
0xe90: Pop(0)
0xe91: PushEmpty()
0xe92: Call2 0xf38

0xe93: Pop(0)
0xe94: GOTO 0xe91

0xe95: Return(); Pop(0)

0xe96: PushEmpty(object, object)
0xe97: Push("player")
0xe98: @ FindActor(Stack[-2], Stack[-1])
0xe99: Pop(1)
0xe9a: Pop(0); Push((bool) Stack[-1] == 0)
0xe9b: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe9c: Stack[-3] = (bool) 0
0xe9d: Return(); Pop(2)

0xe9e: PushEmpty(bool, object)
0xe9f: Stack[-1] = Stack[-3]
0xea0: Call2 0xf96

0xea1: Stack[-5] = Stack[-2]
0xea2: Pop(2)
0xea3: Return(); Pop(2)

0xea4: Stack[-1] = 0
0xea5: Push(CvectorIndex(Stack[-0], 0))
0xea6: Push(CvectorIndex(Stack[-0], 2))
0xea7: @ RotateAsync(Stack[-2], Stack[-1])
0xea8: Pop(2)
0xea9: Return(); Pop(0)

0xeaa: PushEmpty(object, bool, object, bool)
0xeab: Push("player")
0xeac: @ FindActor(Stack[-3], Stack[-1])
0xead: Pop(1)
0xeae: Pop(0); Push((bool) Stack[-2] == 0)
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb2; Pop(1)

0xeb0: Stack[-5] = (bool) 0
0xeb1: Return(); Pop(4)

0xeb2: PushEmpty(float, object)
0xeb3: Stack[-1] = Stack[-4]
0xeb4: Call2 0xf84

0xeb5: Pop(1)
0xeb6: Push((float)90000.0)
0xeb7: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xeb8: IF (Stack[-1] == 0) GOTO 0xebb; Pop(1)

0xeb9: Stack[-5] = (bool) 0
0xeba: Return(); Pop(4)

0xebb: @ CanSee(Stack[-1], Stack[-2])
0xebc: Pop(0)
0xebd: Stack[-5] = Stack[-1]
0xebe: Return(); Pop(4)

0xebf: Stack[-2] = 0
0xec0: PushEmpty(float, float)
0xec1: Push((int) 8)
0xec2: Push((int) 16)
0xec3: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xec4: Pop(2)
0xec5: Push((int) 10)
0xec6: @ SetTimer(Stack[-1], Stack[-2])
0xec7: Pop(1)
0xec8: Return(); Pop(2)

0xec9: Push((int) 10)
0xeca: @ KillTimer(Stack[-1])
0xecb: Pop(1)
0xecc: Return(); Pop(0)

0xecd: PushEmpty()
0xece: Push((int) 10)
0xecf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed0: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xed1: PushEmpty()
0xed2: Call2 0xec9

0xed3: Pop(0)
0xed4: PushEmpty(bool)
0xed5: Stack[-1] = (bool) 0
0xed6: PushEmpty(bool)
0xed7: Call2 0xf9f

0xed8: Pop(0)
0xed9: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xeda: PushEmpty(bool)
0xedb: Call2 0xeaa

0xedc: Pop(0)
0xedd: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xede: Stack[-1] = (bool) 1
0xedf: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xee0: PushEmpty(bool)
0xee1: Call2 0xe96

0xee2: Pop(0)
0xee3: IF (Stack[-1] == 0) GOTO 0xeeb; Pop(1)

0xee4: PushEmpty(bool, object)
0xee5: PushEmpty(object)
0xee6: Call2 0x10b8

0xee7: Stack[-2] = Stack[-1]
0xee8: Pop(1)
0xee9: Call2 0x1033

0xeea: Pop(2)
0xeeb: GOTO 0xef2

0xeec: PushEmpty()
0xeed: Call2 0xea5

0xeee: Pop(0)
0xeef: PushEmpty()
0xef0: Call2 0xec0

0xef1: Pop(0)
0xef2: Return(); Pop(0)

0xef3: PushEmpty()
0xef4: Call2 0xf7f

0xef5: Pop(0)
0xef6: PushEmpty()
0xef7: Call2 0xec9

0xef8: Pop(0)
0xef9: @ lshStopSpeech()
0xefa: Pop(0)
0xefb: @ lshStopAnimation()
0xefc: Pop(0)
0xefd: @ StopAsync()
0xefe: Pop(0)
0xeff: @ Hold()
0xf00: Pop(0)
0xf01: Return(); Pop(0)

0xf02: @ StopGroup0()
0xf03: Pop(0)
0xf04: PushEmpty()
0xf05: Call2 0xec9

0xf06: Pop(0)
0xf07: PushEmpty(string)
0xf08: Stack[-1] = "Neutral"
0xf09: Call2 0x1083

0xf0a: Pop(1)
0xf0b: PushEmpty()
0xf0c: Call2 0xec0

0xf0d: Pop(0)
0xf0e: Return(); Pop(0)

0xf0f: PushEmpty()
0xf10: Push(Stack[-1])
0xf11: IF (Stack[-1] == 0) GOTO 0xf16; Pop(1)

0xf12: PushEmpty()
0xf13: Call2 0xec0

0xf14: Pop(0)
0xf15: GOTO 0xf1a

0xf16: PushEmpty(string)
0xf17: Stack[-1] = "Neutral"
0xf18: Call2 0x1083

0xf19: Pop(1)
0xf1a: Return(); Pop(0)

0xf1b: PushEmpty(bool, bool)
0xf1c: @ IsOverrideActive(Stack[-1])
0xf1d: Pop(0)
0xf1e: Pop(0); Push((bool) Stack[-1] == 0)
0xf1f: IF (Stack[-1] == 0) GOTO 0xf37; Pop(1)

0xf20: EventDisable(0)
0xf21: PushEmpty()
0xf22: Call2 0xf7f

0xf23: Pop(0)
0xf24: PushEmpty(bool, object)
0xf25: Stack[-1] = Stack[-5]
0xf26: Call2 0xf96

0xf27: Pop(2)
0xf28: EventEnable(0)
0xf29: PushEmpty(object)
0xf2a: Stack[-1] = Stack[-4]
0xf2b: Call2 0x136a

0xf2c: Pop(1)
0xf2d: PushEmpty(string)
0xf2e: Stack[-1] = "Neutral"
0xf2f: Call2 0x1083

0xf30: Pop(1)
0xf31: PushEmpty()
0xf32: Call2 0xec9

0xf33: Pop(0)
0xf34: PushEmpty()
0xf35: Call2 0xec0

0xf36: Pop(0)
0xf37: Return(); Pop(2)

0xf38: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xf39: @ WaitForAnimEnd()
0xf3a: Pop(0)
0xf3b: PushEmpty(bool)
0xf3c: Call2 0xf9f

0xf3d: Pop(0)
0xf3e: Pop(1); Push((bool) Stack[-1] == 0)
0xf3f: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf40: Return(); Pop(12)

0xf41: PushEmpty(int)
0xf42: Call2 0x1120

0xf43: Stack[-7] = Stack[-1]
0xf44: Pop(1)
0xf45: Stack[-5] = (int) 0
0xf46: PushEmpty(bool)
0xf47: Stack[-1] = (bool) 0
0xf48: Push((int) 5)
0xf49: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4b: PushEmpty(bool)
0xf4c: Call2 0xf9f

0xf4d: Pop(0)
0xf4e: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4f: Stack[-1] = (bool) 1
0xf50: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf51: Pop(0); Push((bool) Stack[-6] == 0)
0xf52: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf53: Push((int) 3)
0xf54: @ Sleep(Stack[-1], Stack[-5])
0xf55: Pop(1)
0xf56: Pop(0); Push((bool) Stack[-4] == 0)
0xf57: IF (Stack[-1] == 0) GOTO 0xf59; Pop(1)

0xf58: GOTO 0xf7a

0xf59: GOTO 0xf6f

0xf5a: @ irand(Stack[-3], Stack[-6])
0xf5b: Pop(0)
0xf5c: Push((int) 5)
0xf5d: @ irand(Stack[-3], Stack[-1])
0xf5e: Pop(1)
0xf5f: Push((int) 0)
0xf60: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xf61: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf62: Stack[-3] = (int) 0
0xf63: Push("all")
0xf64: PushEmpty(string, int)
0xf65: Stack[-1] = Stack[-6]
0xf66: Call2 0x1119

0xf67: Pop(1)
0xf68: @ PlayAnimation(Stack[-2], Stack[-1])
0xf69: Pop(2)
0xf6a: @ WaitForAnimEnd(Stack[-1])
0xf6b: Pop(0)
0xf6c: Pop(0); Push((bool) Stack[-1] == 0)
0xf6d: IF (Stack[-1] == 0) GOTO 0xf6f; Pop(1)

0xf6e: GOTO 0xf7a

0xf6f: PushEmpty(bool)
0xf70: Call2 0xf7d

0xf71: Pop(0)
0xf72: Pop(1); Push((bool) Stack[-1] == 0)
0xf73: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf74: GOTO 0xf7a

0xf75: @ ResetAAS()
0xf76: Pop(0)
0xf77: Push((int) 1)
0xf78: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xf79: GOTO 0xf46

0xf7a: @ ResetAAS()
0xf7b: Pop(0)
0xf7c: Return(); Pop(12)

0xf7d: Stack[-1] = (bool) 1
0xf7e: Return(); Pop(0)

0xf7f: @ StopAnimation()
0xf80: Pop(0)
0xf81: @ StopGroup0()
0xf82: Pop(0)
0xf83: Return(); Pop(0)

0xf84: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf85: @ GetPosition(Stack[-3])
0xf86: Pop(0)
0xf87: @@ GetPosition(Stack[-2])
0xf88: Pop(0)
0xf89: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xf8a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xf8b: Return(); Pop(6)

0xf8c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xf8d: @ GetPosition(Stack[-3])
0xf8e: Pop(0)
0xf8f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xf90: Push(CvectorIndex(Stack[-2], 0))
0xf91: Push(CvectorIndex(Stack[-3], 2))
0xf92: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf93: Pop(2)
0xf94: Stack[-8] = Stack[-1]
0xf95: Return(); Pop(6)

0xf96: PushEmpty(cvector, cvector)
0xf97: @@ GetPosition(Stack[-1])
0xf98: Pop(0)
0xf99: PushEmpty(bool, cvector)
0xf9a: Stack[-1] = Stack[-3]
0xf9b: Call2 0xf8c

0xf9c: Stack[-6] = Stack[-2]
0xf9d: Pop(2)
0xf9e: Return(); Pop(2)

0xf9f: PushEmpty(bool, bool)
0xfa0: @ IsLoaded(Stack[-1])
0xfa1: Pop(0)
0xfa2: Stack[-3] = Stack[-1]
0xfa3: Return(); Pop(2)

0xfa4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xfa5: @@ GetPosition(Stack[-8])
0xfa6: Pop(0)
0xfa7: @@ GetEyesHeight(Stack[-9])
0xfa8: Pop(0)
0xfa9: Push(CvectorIndex(Stack[-8], 1))
0xfaa: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfab: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xfac: @ GetPosition(Stack[-7])
0xfad: Pop(0)
0xfae: @ GetEyesHeight(Stack[-9])
0xfaf: Pop(0)
0xfb0: Push(CvectorIndex(Stack[-7], 1))
0xfb1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfb2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xfb3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xfb4: Push(CvectorIndex(Stack[-6], 1))
0xfb5: Stack[-1] = (int) 0
0xfb6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xfb7: Pop(0); Push(Stack[-6] | Stack[-6]);
0xfb8: Pop(1); Push(Sqrt(Stack[-1]))
0xfb9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xfba: Stack[-5] = -Stack[-6]; Pop(0);
0xfbb: Pop(0); Push(Stack[-6] * Stack[-19]);
0xfbc: PushEmpty(cvector, cvector)
0xfbd: Push(CVector(0.0, 1.0, 0.0))
0xfbe: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xfbf: Call2 0x10be

0xfc0: Pop(1)
0xfc1: Push((int) 25)
0xfc2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfc3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfc4: Push(CVector(0.0, 10.0, 0.0))
0xfc5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xfc6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xfc7: @ IsOverrideActive(Stack[-2])
0xfc8: Pop(0)
0xfc9: Push(Stack[-2])
0xfca: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfcb: Stack[-21] = (bool) 0
0xfcc: Return(); Pop(18)

0xfcd: @ StopWorld()
0xfce: Pop(0)
0xfcf: @ CameraTransit(Stack[-3], Stack[-5])
0xfd0: Pop(0)
0xfd1: Push(CvectorIndex(Stack[-4], 0))
0xfd2: Push(CvectorIndex(Stack[-5], 2))
0xfd3: @ Rotate(Stack[-2], Stack[-1])
0xfd4: Pop(2)
0xfd5: PushEmpty(bool)
0xfd6: Call2 0x1139

0xfd7: Pop(0)
0xfd8: IF (Stack[-1] == 0) GOTO 0xfda; Pop(1)

0xfd9: GOTO 0xfe2

0xfda: Push("head")
0xfdb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfdc: Pop(1)
0xfdd: Push(Stack[-1])
0xfde: IF (Stack[-1] == 0) GOTO 0xfe2; Pop(1)

0xfdf: Push("head")
0xfe0: @ LookAsyncCamera(Stack[-1])
0xfe1: Pop(1)
0xfe2: @ CameraWaitForPlayFinish()
0xfe3: Pop(0)
0xfe4: @ ResumeWorld()
0xfe5: Pop(0)
0xfe6: Stack[-21] = (bool) 1
0xfe7: Return(); Pop(18)

0xfe8: PushEmpty(bool, bool)
0xfe9: @ CameraSwitchToNormal()
0xfea: Pop(0)
0xfeb: PushEmpty(bool)
0xfec: Call2 0x1139

0xfed: Pop(0)
0xfee: IF (Stack[-1] == 0) GOTO 0xff0; Pop(1)

0xfef: GOTO 0xff8

0xff0: Push("head")
0xff1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xff2: Pop(1)
0xff3: Push(Stack[-1])
0xff4: IF (Stack[-1] == 0) GOTO 0xff8; Pop(1)

0xff5: Push("head")
0xff6: @ UnlookAsync(Stack[-1])
0xff7: Pop(1)
0xff8: Return(); Pop(2)

0xff9: PushEmpty(int, int, int, int)
0xffa: Push("voice_common")
0xffb: @ GetVariable(Stack[-1], Stack[-3])
0xffc: Pop(1)
0xffd: Push(Stack[-2])
0xffe: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0xfff: PushEmpty(bool, object)
0x1000: Stack[-1] = Stack[-7]
0x1001: Call2 0x1033

0x1002: Pop(1)
0x1003: Pop(1); Push((bool) Stack[-1] == 0)
0x1004: IF (Stack[-1] == 0) GOTO 0x100d; Pop(1)

0x1005: PushEmpty(bool, object)
0x1006: Stack[-1] = Stack[-7]
0x1007: Call2 0x1058

0x1008: Pop(1)
0x1009: Pop(1); Push((bool) Stack[-1] == 0)
0x100a: IF (Stack[-1] == 0) GOTO 0x100d; Pop(1)

0x100b: Stack[-6] = (bool) 0
0x100c: Return(); Pop(4)

0x100d: Push((int) 2)
0x100e: @ irand(Stack[-2], Stack[-1])
0x100f: Pop(1)
0x1010: Push(Stack[-1])
0x1011: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1012: Push("voice_common")
0x1013: Push((int) 1)
0x1014: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1015: Push((int) 3)
0x1016: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1017: @ SetVariable(Stack[-2], Stack[-1])
0x1018: Pop(2)
0x1019: GOTO 0x101e

0x101a: Push("voice_common")
0x101b: Push((int) 0)
0x101c: @ SetVariable(Stack[-2], Stack[-1])
0x101d: Pop(2)
0x101e: GOTO 0x1031

0x101f: PushEmpty(bool, object)
0x1020: Stack[-1] = Stack[-7]
0x1021: Call2 0x1058

0x1022: Pop(1)
0x1023: Pop(1); Push((bool) Stack[-1] == 0)
0x1024: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0x1025: PushEmpty(bool, object)
0x1026: Stack[-1] = Stack[-7]
0x1027: Call2 0x1033

0x1028: Pop(1)
0x1029: Pop(1); Push((bool) Stack[-1] == 0)
0x102a: IF (Stack[-1] == 0) GOTO 0x102d; Pop(1)

0x102b: Stack[-6] = (bool) 0
0x102c: Return(); Pop(4)

0x102d: Push("voice_common")
0x102e: Push((int) 1)
0x102f: @ SetVariable(Stack[-2], Stack[-1])
0x1030: Pop(2)
0x1031: Stack[-6] = (bool) 1
0x1032: Return(); Pop(4)

0x1033: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1034: Stack[-5] = "c"
0x1035: Stack[-4] = (int) 0
0x1036: Push((int) 1)
0x1037: IF (Stack[-1] == 0) GOTO 0x1043; Pop(1)

0x1038: Push((int) 1)
0x1039: Pop(1); Push(Stack[-5] + Stack[-1]);
0x103a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x103b: @@ HasProperty(Stack[-1], Stack[-4])
0x103c: Pop(1)
0x103d: Pop(0); Push((bool) Stack[-3] == 0)
0x103e: IF (Stack[-1] == 0) GOTO 0x1040; Pop(1)

0x103f: GOTO 0x1043

0x1040: Push((int) 1)
0x1041: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1042: GOTO 0x1036

0x1043: Pop(0); Push((bool) Stack[-4] == 0)
0x1044: IF (Stack[-1] == 0) GOTO 0x1047; Pop(1)

0x1045: Stack[-12] = (bool) 0
0x1046: Return(); Pop(10)

0x1047: Stack[-2] = (int) 0
0x1048: Push((int) 1)
0x1049: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x104a: IF (Stack[-1] == 0) GOTO 0x104d; Pop(1)

0x104b: @ irand(Stack[-2], Stack[-4])
0x104c: Pop(0)
0x104d: Push((int) 1)
0x104e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x104f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1050: @@ GetProperty(Stack[-1], Stack[-2])
0x1051: Pop(1)
0x1052: PushEmpty(bool, string)
0x1053: Stack[-1] = Stack[-3]
0x1054: Call2 0x10a2

0x1055: Stack[-14] = Stack[-2]
0x1056: Pop(2)
0x1057: Return(); Pop(10)

0x1058: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1059: Push("d")
0x105a: PushEmpty(int)
0x105b: Call2 0x110a

0x105c: Pop(0)
0x105d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x105e: Push("m")
0x105f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x1060: Stack[-4] = (int) 0
0x1061: Push((int) 1)
0x1062: IF (Stack[-1] == 0) GOTO 0x106e; Pop(1)

0x1063: Push((int) 1)
0x1064: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1065: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1066: @@ HasProperty(Stack[-1], Stack[-4])
0x1067: Pop(1)
0x1068: Pop(0); Push((bool) Stack[-3] == 0)
0x1069: IF (Stack[-1] == 0) GOTO 0x106b; Pop(1)

0x106a: GOTO 0x106e

0x106b: Push((int) 1)
0x106c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x106d: GOTO 0x1061

0x106e: Pop(0); Push((bool) Stack[-4] == 0)
0x106f: IF (Stack[-1] == 0) GOTO 0x1072; Pop(1)

0x1070: Stack[-12] = (bool) 0
0x1071: Return(); Pop(10)

0x1072: Stack[-2] = (int) 0
0x1073: Push((int) 1)
0x1074: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1075: IF (Stack[-1] == 0) GOTO 0x1078; Pop(1)

0x1076: @ irand(Stack[-2], Stack[-4])
0x1077: Pop(0)
0x1078: Push((int) 1)
0x1079: Pop(1); Push(Stack[-3] + Stack[-1]);
0x107a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x107b: @@ GetProperty(Stack[-1], Stack[-2])
0x107c: Pop(1)
0x107d: PushEmpty(bool, string)
0x107e: Stack[-1] = Stack[-3]
0x107f: Call2 0x10a2

0x1080: Stack[-14] = Stack[-2]
0x1081: Pop(2)
0x1082: Return(); Pop(10)

0x1083: PushEmpty(bool, float, float, bool, float, float)
0x1084: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1085: Pop(0)
0x1086: Push(Stack[-3])
0x1087: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x1088: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1089: Pop(0)
0x108a: Push((bool) 0)
0x108b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x108c: Pop(1)
0x108d: GOTO 0x1092

0x108e: Push("Can't find lsh animation : ")
0x108f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1090: @ Trace(Stack[-1])
0x1091: Pop(1)
0x1092: Return(); Pop(6)

0x1093: PushEmpty(bool, float, float, bool, float, float)
0x1094: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1095: Pop(0)
0x1096: Push(Stack[-3])
0x1097: IF (Stack[-1] == 0) GOTO 0x109d; Pop(1)

0x1098: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1099: Pop(0)
0x109a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x109b: Pop(0)
0x109c: GOTO 0x10a1

0x109d: Push("Can't find lsh animation : ")
0x109e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x109f: @ Trace(Stack[-1])
0x10a0: Pop(1)
0x10a1: Return(); Pop(6)

0x10a2: PushEmpty(bool, bool)
0x10a3: PushEmpty(bool)
0x10a4: Call2 0x1139

0x10a5: Pop(0)
0x10a6: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x10a7: @ lshHasSpeech(Stack[-1], Stack[-3])
0x10a8: Pop(0)
0x10a9: Push(Stack[-1])
0x10aa: IF (Stack[-1] == 0) GOTO 0x10af; Pop(1)

0x10ab: @ lshPlaySpeech(Stack[-3])
0x10ac: Pop(0)
0x10ad: Stack[-4] = (bool) 1
0x10ae: Return(); Pop(2)

0x10af: Stack[-4] = (bool) 0
0x10b0: Return(); Pop(2)

0x10b1: PushEmpty(bool)
0x10b2: Call2 0x1139

0x10b3: Pop(0)
0x10b4: IF (Stack[-1] == 0) GOTO 0x10b7; Pop(1)

0x10b5: @ lshStopSpeech()
0x10b6: Pop(0)
0x10b7: Return(); Pop(0)

0x10b8: PushEmpty(object, object)
0x10b9: @ self(Stack[-1])
0x10ba: Pop(0)
0x10bb: Stack[-3] = Stack[-1]
0x10bc: Return(); Pop(2)

0x10bd: Stack[-1] = 0
0x10be: PushEmpty(float, float)
0x10bf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x10c0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x10c1: Push((float)0.0)
0x10c2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x10c3: IF (Stack[-1] == 0) GOTO 0x10c6; Pop(1)

0x10c4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x10c5: Return(); Pop(2)

0x10c6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x10c7: Return(); Pop(2)

0x10c8: PushEmpty(int, int)
0x10c9: @ GetVariable(Stack[-3], Stack[-1])
0x10ca: Pop(0)
0x10cb: Stack[-4] = Stack[-1]
0x10cc: Return(); Pop(2)

0x10cd: PushEmpty(object, object)
0x10ce: @ CreateIntVector(Stack[-1])
0x10cf: Pop(0)
0x10d0: @@ add(Stack[-4])
0x10d1: Pop(0)
0x10d2: @@ add(Stack[-3])
0x10d3: Pop(0)
0x10d4: Push((int) 3)
0x10d5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x10d6: Pop(1)
0x10d7: Return(); Pop(2)

0x10d8: Stack[-1] = 0
0x10d9: PushEmpty(int, int, bool, int, int, bool)
0x10da: @@ GetItemID(Stack[-3])
0x10db: Pop(0)
0x10dc: Push("Category")
0x10dd: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x10de: Pop(1)
0x10df: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x10e0: Pop(0)
0x10e1: Pop(0); Push((bool) Stack[-1] == 0)
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10e3: @@ DropItems(Stack[-8], Stack[-7])
0x10e4: Pop(0)
0x10e5: GOTO 0x10eb

0x10e6: PushEmpty(int, int)
0x10e7: Stack[-2] = Stack[-5]
0x10e8: Stack[-1] = Stack[-9]
0x10e9: Call2 0x10cd

0x10ea: Pop(2)
0x10eb: Return(); Pop(6)

0x10ec: PushEmpty(object, object)
0x10ed: @ CreateInvItem(Stack[-1])
0x10ee: Pop(0)
0x10ef: @@ SetItemName(Stack[-4])
0x10f0: Pop(0)
0x10f1: PushEmpty(object, object, int)
0x10f2: Stack[-3] = Stack[-8]
0x10f3: Stack[-2] = Stack[-4]
0x10f4: Stack[-1] = Stack[-6]
0x10f5: Call2 0x10d9

0x10f6: Pop(3)
0x10f7: Return(); Pop(2)

0x10f8: Stack[-1] = 0
0x10f9: PushEmpty(object, object)
0x10fa: @ FindActor(Stack[-1], Stack[-4])
0x10fb: Pop(0)
0x10fc: Pop(0); Push((bool) Stack[-1] == 0)
0x10fd: IF (Stack[-1] == 0) GOTO 0x1100; Pop(1)

0x10fe: Stack[-5] = (bool) 0
0x10ff: Return(); Pop(2)

0x1100: @ Trigger(Stack[-1], Stack[-3])
0x1101: Pop(0)
0x1102: Stack[-5] = (bool) 1
0x1103: Return(); Pop(2)

0x1104: Stack[-1] = 0
0x1105: PushEmpty(float, float)
0x1106: @ GetGameTime(Stack[-1])
0x1107: Pop(0)
0x1108: Stack[-3] = Stack[-1]
0x1109: Return(); Pop(2)

0x110a: PushEmpty(float, float)
0x110b: @ GetGameTime(Stack[-1])
0x110c: Pop(0)
0x110d: Push((int) 1)
0x110e: PushEmpty(int)
0x110f: Push((int) 24)
0x1110: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1111: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1112: Return(); Pop(2)

0x1113: PushEmpty()
0x1114: PushEmpty(int)
0x1115: Call2 0x110a

0x1116: Pop(0)
0x1117: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1118: Return(); Pop(0)

0x1119: PushEmpty(string, string)
0x111a: Stack[-1] = "idle"
0x111b: Push(Stack[-3])
0x111c: IF (Stack[-1] == 0) GOTO 0x111e; Pop(1)

0x111d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x111e: Stack[-4] = Stack[-1]
0x111f: Return(); Pop(2)

0x1120: PushEmpty(int, bool, int, bool)
0x1121: Stack[-2] = (int) 0
0x1122: Push("all")
0x1123: PushEmpty(string, int)
0x1124: Stack[-1] = Stack[-5]
0x1125: Call2 0x1119

0x1126: Pop(1)
0x1127: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1128: Pop(2)
0x1129: Pop(0); Push((bool) Stack[-1] == 0)
0x112a: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x112b: GOTO 0x112f

0x112c: Push((int) 1)
0x112d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x112e: GOTO 0x1122

0x112f: Stack[-5] = Stack[-2]
0x1130: Return(); Pop(4)

0x1131: Stack[-1] = (int) 515550
0x1132: Return(); Pop(0)

0x1133: Stack[-1] = (int) 502875
0x1134: Return(); Pop(0)

0x1135: Stack[-1] = "ui/NPC_Petr.png"
0x1136: Return(); Pop(0)

0x1137: Stack[-1] = "ui/NPC_Petr_b.png"
0x1138: Return(); Pop(0)

0x1139: Stack[-1] = (bool) 1
0x113a: Return(); Pop(0)

0x113b: PushEmpty()
0x113c: Push("playsound")
0x113d: Push("giveitem")
0x113e: @ TriggerWorld(Stack[-2], Stack[-1])
0x113f: Pop(2)
0x1140: Return(); Pop(0)

0x1141: PushEmpty()
0x1142: PushEmpty(bool, string, string)
0x1143: Stack[-2] = "quest_d7_03"
0x1144: Stack[-1] = "remove_maria"
0x1145: Call2 0x10f9

0x1146: Pop(3)
0x1147: Return(); Pop(0)

0x1148: PushEmpty()
0x1149: Push("ood7Petr2")
0x114a: Push((int) 1)
0x114b: @ SetVariable(Stack[-2], Stack[-1])
0x114c: Pop(2)
0x114d: Return(); Pop(0)

0x114e: PushEmpty()
0x114f: Push("ood3Petr2")
0x1150: Push((int) 1)
0x1151: @ SetVariable(Stack[-2], Stack[-1])
0x1152: Pop(2)
0x1153: Return(); Pop(0)

0x1154: PushEmpty()
0x1155: Push("lens is given")
0x1156: @ Trace(Stack[-1])
0x1157: Pop(1)
0x1158: PushEmpty(object, string, int)
0x1159: Stack[-3] = Stack[-5]
0x115a: Stack[-2] = "lens"
0x115b: Stack[-1] = (int) 1
0x115c: Call2 0x10ec

0x115d: Pop(3)
0x115e: Return(); Pop(0)

0x115f: PushEmpty()
0x1160: Push("KnowTvirin")
0x1161: Push((int) 1)
0x1162: @ SetVariable(Stack[-2], Stack[-1])
0x1163: Pop(2)
0x1164: Return(); Pop(0)

0x1165: PushEmpty()
0x1166: Push("ood2Petr1")
0x1167: Push((int) 1)
0x1168: @ SetVariable(Stack[-2], Stack[-1])
0x1169: Pop(2)
0x116a: Return(); Pop(0)

0x116b: PushEmpty()
0x116c: Push("ood2Petr2")
0x116d: Push((int) 1)
0x116e: @ SetVariable(Stack[-2], Stack[-1])
0x116f: Pop(2)
0x1170: Return(); Pop(0)

0x1171: PushEmpty()
0x1172: Push("ood2Petr3")
0x1173: Push((int) 1)
0x1174: @ SetVariable(Stack[-2], Stack[-1])
0x1175: Pop(2)
0x1176: Return(); Pop(0)

0x1177: PushEmpty()
0x1178: Push("d2q02")
0x1179: Push((int) 3)
0x117a: @ SetVariable(Stack[-2], Stack[-1])
0x117b: Pop(2)
0x117c: PushEmpty()
0x117d: Call2 0x12eb

0x117e: Pop(0)
0x117f: Return(); Pop(0)

0x1180: PushEmpty(object, object)
0x1181: Push("d2q02")
0x1182: Push((int) 5)
0x1183: @ SetVariable(Stack[-2], Stack[-1])
0x1184: Pop(2)
0x1185: PushEmpty(object)
0x1186: Call2 0x1348

0x1187: Stack[-2] = Stack[-1]
0x1188: Pop(1)
0x1189: Push("d2q02PetrGotoAndrei")
0x118a: Push("pt_map_andrei")
0x118b: Push((int) 0)
0x118c: Push((int) 515276)
0x118d: PushEmpty(float)
0x118e: Call2 0x1105

0x118f: Pop(0)
0x1190: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1191: Pop(5)
0x1192: PushEmpty()
0x1193: Call2 0x12f8

0x1194: Pop(0)
0x1195: Return(); Pop(2)

0x1196: Stack[-1] = 0
0x1197: PushEmpty()
0x1198: Push("KnowPetr")
0x1199: Push((int) 1)
0x119a: @ SetVariable(Stack[-2], Stack[-1])
0x119b: Pop(2)
0x119c: Return(); Pop(0)

0x119d: PushEmpty()
0x119e: Push("d7q02")
0x119f: Push((int) 2)
0x11a0: @ SetVariable(Stack[-2], Stack[-1])
0x11a1: Pop(2)
0x11a2: PushEmpty()
0x11a3: Call2 0x1312

0x11a4: Pop(0)
0x11a5: Return(); Pop(0)

0x11a6: PushEmpty()
0x11a7: Push("d7q02")
0x11a8: Push((int) 4)
0x11a9: @ SetVariable(Stack[-2], Stack[-1])
0x11aa: Pop(2)
0x11ab: Return(); Pop(0)

0x11ac: PushEmpty(object, object, object, object)
0x11ad: PushEmpty(int, string)
0x11ae: Stack[-1] = "d7q02BirdBalahon"
0x11af: Call2 0x10c8

0x11b0: Pop(1)
0x11b1: Push((int) 0)
0x11b2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x11b3: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11b4: PushEmpty(object)
0x11b5: Call2 0x1348

0x11b6: Stack[-3] = Stack[-1]
0x11b7: Pop(1)
0x11b8: Push("d7q02AlexandrGotoPetr")
0x11b9: @@ FindMark(Stack[-2], Stack[-1])
0x11ba: Pop(1)
0x11bb: Push(Stack[-1])
0x11bc: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11bd: @@ Remove()
0x11be: Pop(0)
0x11bf: Push("d7q02MarkGotoAlexandr")
0x11c0: @@ FindMark(Stack[-2], Stack[-1])
0x11c1: Pop(1)
0x11c2: Push(Stack[-1])
0x11c3: IF (Stack[-1] == 0) GOTO 0x11c6; Pop(1)

0x11c4: @@ Remove()
0x11c5: Pop(0)
0x11c6: Push("d7q02MarkGotoCemetery")
0x11c7: @@ FindMark(Stack[-2], Stack[-1])
0x11c8: Pop(1)
0x11c9: Push(Stack[-1])
0x11ca: IF (Stack[-1] == 0) GOTO 0x11cd; Pop(1)

0x11cb: @@ Remove()
0x11cc: Pop(0)
0x11cd: PushEmpty()
0x11ce: Call2 0x1305

0x11cf: Pop(0)
0x11d0: PushEmpty(bool, string, string)
0x11d1: Stack[-2] = "quest_d7_02"
0x11d2: Stack[-1] = "completed"
0x11d3: Call2 0x10f9

0x11d4: Pop(3)
0x11d5: Stack[-1] = 0
0x11d6: Stack[-2] = 0
0x11d7: Return(); Pop(4)

0x11d8: PushEmpty()
0x11d9: Push("ood7Petr1")
0x11da: Push((int) 1)
0x11db: @ SetVariable(Stack[-2], Stack[-1])
0x11dc: Pop(2)
0x11dd: Return(); Pop(0)

0x11de: PushEmpty()
0x11df: Push("birdmask is given")
0x11e0: @ Trace(Stack[-1])
0x11e1: Pop(1)
0x11e2: PushEmpty(object, string, int)
0x11e3: Stack[-3] = Stack[-5]
0x11e4: Stack[-2] = "bird_mask"
0x11e5: Stack[-1] = (int) 1
0x11e6: Call2 0x10ec

0x11e7: Pop(3)
0x11e8: Return(); Pop(0)

0x11e9: PushEmpty()
0x11ea: Push("ood11Petr1")
0x11eb: Push((int) 1)
0x11ec: @ SetVariable(Stack[-2], Stack[-1])
0x11ed: Pop(2)
0x11ee: Return(); Pop(0)

0x11ef: PushEmpty()
0x11f0: Push("ood11Petr2")
0x11f1: Push((int) 1)
0x11f2: @ SetVariable(Stack[-2], Stack[-1])
0x11f3: Pop(2)
0x11f4: Return(); Pop(0)

0x11f5: PushEmpty()
0x11f6: Push("ood3Petr1")
0x11f7: Push((int) 1)
0x11f8: @ SetVariable(Stack[-2], Stack[-1])
0x11f9: Pop(2)
0x11fa: Return(); Pop(0)

0x11fb: PushEmpty()
0x11fc: PushEmpty(int, string)
0x11fd: Stack[-1] = "d7q03"
0x11fe: Call2 0x10c8

0x11ff: Pop(1)
0x1200: Push((int) 4)
0x1201: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1202: IF (Stack[-1] == 0) GOTO 0x1205; Pop(1)

0x1203: Stack[-2] = (bool) 1
0x1204: Return(); Pop(0)

0x1205: Stack[-2] = (bool) 0
0x1206: Return(); Pop(0)

0x1207: PushEmpty()
0x1208: PushEmpty(int, string)
0x1209: Stack[-1] = "d7q03"
0x120a: Call2 0x10c8

0x120b: Pop(1)
0x120c: Push((int) 1000)
0x120d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x120e: IF (Stack[-1] == 0) GOTO 0x1211; Pop(1)

0x120f: Stack[-2] = (bool) 1
0x1210: Return(); Pop(0)

0x1211: Stack[-2] = (bool) 0
0x1212: Return(); Pop(0)

0x1213: PushEmpty()
0x1214: PushEmpty(int, string)
0x1215: Stack[-1] = "ood7Petr2"
0x1216: Call2 0x10c8

0x1217: Pop(1)
0x1218: Push((int) 0)
0x1219: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x121a: IF (Stack[-1] == 0) GOTO 0x121d; Pop(1)

0x121b: Stack[-2] = (bool) 1
0x121c: Return(); Pop(0)

0x121d: Stack[-2] = (bool) 0
0x121e: Return(); Pop(0)

0x121f: PushEmpty()
0x1220: PushEmpty(int, string)
0x1221: Stack[-1] = "ood3Petr2"
0x1222: Call2 0x10c8

0x1223: Pop(1)
0x1224: Push((int) 0)
0x1225: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1226: IF (Stack[-1] == 0) GOTO 0x1229; Pop(1)

0x1227: Stack[-2] = (bool) 1
0x1228: Return(); Pop(0)

0x1229: Stack[-2] = (bool) 0
0x122a: Return(); Pop(0)

0x122b: PushEmpty()
0x122c: PushEmpty(int, string)
0x122d: Stack[-1] = "ood2Petr1"
0x122e: Call2 0x10c8

0x122f: Pop(1)
0x1230: Push((int) 0)
0x1231: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1232: IF (Stack[-1] == 0) GOTO 0x1235; Pop(1)

0x1233: Stack[-2] = (bool) 1
0x1234: Return(); Pop(0)

0x1235: Stack[-2] = (bool) 0
0x1236: Return(); Pop(0)

0x1237: PushEmpty()
0x1238: PushEmpty(int, string)
0x1239: Stack[-1] = "ood2Petr2"
0x123a: Call2 0x10c8

0x123b: Pop(1)
0x123c: Push((int) 0)
0x123d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x123e: IF (Stack[-1] == 0) GOTO 0x1241; Pop(1)

0x123f: Stack[-2] = (bool) 1
0x1240: Return(); Pop(0)

0x1241: Stack[-2] = (bool) 0
0x1242: Return(); Pop(0)

0x1243: PushEmpty()
0x1244: PushEmpty(int, string)
0x1245: Stack[-1] = "ood2Petr3"
0x1246: Call2 0x10c8

0x1247: Pop(1)
0x1248: Push((int) 0)
0x1249: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x124a: IF (Stack[-1] == 0) GOTO 0x124d; Pop(1)

0x124b: Stack[-2] = (bool) 1
0x124c: Return(); Pop(0)

0x124d: Stack[-2] = (bool) 0
0x124e: Return(); Pop(0)

0x124f: PushEmpty()
0x1250: PushEmpty(int, string)
0x1251: Stack[-1] = "d2q02"
0x1252: Call2 0x10c8

0x1253: Pop(1)
0x1254: Push((int) 1000)
0x1255: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1256: IF (Stack[-1] == 0) GOTO 0x1259; Pop(1)

0x1257: Stack[-2] = (bool) 1
0x1258: Return(); Pop(0)

0x1259: Stack[-2] = (bool) 0
0x125a: Return(); Pop(0)

0x125b: PushEmpty()
0x125c: PushEmpty(int, string)
0x125d: Stack[-1] = "d2q02"
0x125e: Call2 0x10c8

0x125f: Pop(1)
0x1260: Push((int) 2)
0x1261: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1262: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1263: Stack[-2] = (bool) 1
0x1264: Return(); Pop(0)

0x1265: Stack[-2] = (bool) 0
0x1266: Return(); Pop(0)

0x1267: PushEmpty()
0x1268: PushEmpty(int, string)
0x1269: Stack[-1] = "d2q02"
0x126a: Call2 0x10c8

0x126b: Pop(1)
0x126c: Push((int) 3)
0x126d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126e: IF (Stack[-1] == 0) GOTO 0x1271; Pop(1)

0x126f: Stack[-2] = (bool) 1
0x1270: Return(); Pop(0)

0x1271: Stack[-2] = (bool) 0
0x1272: Return(); Pop(0)

0x1273: PushEmpty()
0x1274: PushEmpty(int, string)
0x1275: Stack[-1] = "d2q02"
0x1276: Call2 0x10c8

0x1277: Pop(1)
0x1278: Push((int) 4)
0x1279: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x127a: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x127b: Stack[-2] = (bool) 1
0x127c: Return(); Pop(0)

0x127d: Stack[-2] = (bool) 0
0x127e: Return(); Pop(0)

0x127f: PushEmpty()
0x1280: PushEmpty(int, string)
0x1281: Stack[-1] = "d2q02"
0x1282: Call2 0x10c8

0x1283: Pop(1)
0x1284: Push((int) 5)
0x1285: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1286: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1287: Stack[-2] = (bool) 1
0x1288: Return(); Pop(0)

0x1289: Stack[-2] = (bool) 0
0x128a: Return(); Pop(0)

0x128b: PushEmpty()
0x128c: PushEmpty(int, string)
0x128d: Stack[-1] = "d7q02"
0x128e: Call2 0x10c8

0x128f: Pop(1)
0x1290: Push((int) 1)
0x1291: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1292: IF (Stack[-1] == 0) GOTO 0x1295; Pop(1)

0x1293: Stack[-2] = (bool) 1
0x1294: Return(); Pop(0)

0x1295: Stack[-2] = (bool) 0
0x1296: Return(); Pop(0)

0x1297: PushEmpty()
0x1298: PushEmpty(int, string)
0x1299: Stack[-1] = "ood7Petr1"
0x129a: Call2 0x10c8

0x129b: Pop(1)
0x129c: Push((int) 0)
0x129d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x129e: IF (Stack[-1] == 0) GOTO 0x12a1; Pop(1)

0x129f: Stack[-2] = (bool) 1
0x12a0: Return(); Pop(0)

0x12a1: Stack[-2] = (bool) 0
0x12a2: Return(); Pop(0)

0x12a3: PushEmpty()
0x12a4: PushEmpty(int, string)
0x12a5: Stack[-1] = "d7q02"
0x12a6: Call2 0x10c8

0x12a7: Pop(1)
0x12a8: Push((int) 3)
0x12a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12aa: IF (Stack[-1] == 0) GOTO 0x12ad; Pop(1)

0x12ab: Stack[-2] = (bool) 1
0x12ac: Return(); Pop(0)

0x12ad: Stack[-2] = (bool) 0
0x12ae: Return(); Pop(0)

0x12af: PushEmpty()
0x12b0: PushEmpty(int, string)
0x12b1: Stack[-1] = "d11q01"
0x12b2: Call2 0x10c8

0x12b3: Pop(1)
0x12b4: Push((int) 1)
0x12b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12b6: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x12b7: Stack[-2] = (bool) 1
0x12b8: Return(); Pop(0)

0x12b9: Stack[-2] = (bool) 0
0x12ba: Return(); Pop(0)

0x12bb: PushEmpty()
0x12bc: PushEmpty(int, string)
0x12bd: Stack[-1] = "ood11Petr1"
0x12be: Call2 0x10c8

0x12bf: Pop(1)
0x12c0: Push((int) 0)
0x12c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c5; Pop(1)

0x12c3: Stack[-2] = (bool) 1
0x12c4: Return(); Pop(0)

0x12c5: Stack[-2] = (bool) 0
0x12c6: Return(); Pop(0)

0x12c7: PushEmpty()
0x12c8: PushEmpty(int, string)
0x12c9: Stack[-1] = "d11q01"
0x12ca: Call2 0x10c8

0x12cb: Pop(1)
0x12cc: Push((int) 1000)
0x12cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12cf: Stack[-2] = (bool) 1
0x12d0: Return(); Pop(0)

0x12d1: Stack[-2] = (bool) 0
0x12d2: Return(); Pop(0)

0x12d3: PushEmpty()
0x12d4: PushEmpty(int, string)
0x12d5: Stack[-1] = "ood11Petr2"
0x12d6: Call2 0x10c8

0x12d7: Pop(1)
0x12d8: Push((int) 0)
0x12d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12da: IF (Stack[-1] == 0) GOTO 0x12dd; Pop(1)

0x12db: Stack[-2] = (bool) 1
0x12dc: Return(); Pop(0)

0x12dd: Stack[-2] = (bool) 0
0x12de: Return(); Pop(0)

0x12df: PushEmpty()
0x12e0: PushEmpty(int, string)
0x12e1: Stack[-1] = "ood3Petr1"
0x12e2: Call2 0x10c8

0x12e3: Pop(1)
0x12e4: Push((int) 0)
0x12e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12e6: IF (Stack[-1] == 0) GOTO 0x12e9; Pop(1)

0x12e7: Stack[-2] = (bool) 1
0x12e8: Return(); Pop(0)

0x12e9: Stack[-2] = (bool) 0
0x12ea: Return(); Pop(0)

0x12eb: PushEmpty(object, object)
0x12ec: Push((int) 130)
0x12ed: Push((int) 2)
0x12ee: Push((int) 515267)
0x12ef: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12f0: Pop(3)
0x12f1: PushEmpty(bool, object, int)
0x12f2: Stack[-2] = Stack[-4]
0x12f3: Stack[-1] = (int) 11
0x12f4: Call2 0x132c

0x12f5: Pop(3)
0x12f6: Return(); Pop(2)

0x12f7: Stack[-1] = 0
0x12f8: PushEmpty(object, object)
0x12f9: Push((int) 131)
0x12fa: Push((int) 2)
0x12fb: Push((int) 515268)
0x12fc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12fd: Pop(3)
0x12fe: PushEmpty(bool, object, int)
0x12ff: Stack[-2] = Stack[-4]
0x1300: Stack[-1] = (int) 11
0x1301: Call2 0x132c

0x1302: Pop(3)
0x1303: Return(); Pop(2)

0x1304: Stack[-1] = 0
0x1305: PushEmpty(object, object)
0x1306: Push((int) 174)
0x1307: Push((int) 2)
0x1308: Push((int) 515426)
0x1309: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x130a: Pop(3)
0x130b: PushEmpty(bool, object, int)
0x130c: Stack[-2] = Stack[-4]
0x130d: Stack[-1] = (int) 170
0x130e: Call2 0x132c

0x130f: Pop(3)
0x1310: Return(); Pop(2)

0x1311: Stack[-1] = 0
0x1312: PushEmpty(object, object)
0x1313: Push((int) 173)
0x1314: Push((int) 2)
0x1315: Push((int) 515425)
0x1316: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1317: Pop(3)
0x1318: PushEmpty(bool, object, int)
0x1319: Stack[-2] = Stack[-4]
0x131a: Stack[-1] = (int) 170
0x131b: Call2 0x132c

0x131c: Pop(3)
0x131d: Return(); Pop(2)

0x131e: Stack[-1] = 0
0x131f: PushEmpty(object, object)
0x1320: @ GetDiaryRoot(Stack[-1])
0x1321: Pop(0)
0x1322: Pop(0); Push((bool) Stack[-1] == 0)
0x1323: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1324: Push("Can't retrieve diary root")
0x1325: @ Trace(Stack[-1])
0x1326: Pop(1)
0x1327: Stack[-3] = (bool) 0
0x1328: Return(); Pop(2)

0x1329: Stack[-3] = Stack[-1]
0x132a: Return(); Pop(2)

0x132b: Stack[-1] = 0
0x132c: PushEmpty(object, object, int, object, object, int)
0x132d: PushEmpty(object)
0x132e: Call2 0x131f

0x132f: Stack[-4] = Stack[-1]
0x1330: Pop(1)
0x1331: @@ Find(Stack[-7], Stack[-2])
0x1332: Pop(0)
0x1333: Pop(0); Push((bool) Stack[-2] == 0)
0x1334: IF (Stack[-1] == 0) GOTO 0x133b; Pop(1)

0x1335: Push("Can't find diary parent with id: ")
0x1336: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1337: @ Trace(Stack[-1])
0x1338: Pop(1)
0x1339: Stack[-9] = (bool) 0
0x133a: Return(); Pop(6)

0x133b: @@ AddChild(Stack[-8])
0x133c: Pop(0)
0x133d: Push((int) 7)
0x133e: @ SendWorldWndMessage(Stack[-1])
0x133f: Pop(1)
0x1340: @@ GetCategory(Stack[-1])
0x1341: Pop(0)
0x1342: @ SetDiarySection(Stack[-1])
0x1343: Pop(0)
0x1344: Stack[-9] = (bool) 0
0x1345: Return(); Pop(6)

0x1346: Stack[-2] = 0
0x1347: Stack[-3] = 0
0x1348: PushEmpty(object, object, object, object)
0x1349: @ GetMainOutdoorScene(Stack[-2])
0x134a: Pop(0)
0x134b: Pop(0); Push((bool) Stack[-2] == 0)
0x134c: IF (Stack[-1] == 0) GOTO 0x1353; Pop(1)

0x134d: Push("Can't find main outdoor scene")
0x134e: @ Trace(Stack[-1])
0x134f: Pop(1)
0x1350: Stack[-1] = 0
0x1351: Stack[-5] = Stack[-1]
0x1352: Return(); Pop(4)

0x1353: @@ GetMap(Stack[-1])
0x1354: Pop(0)
0x1355: Stack[-5] = Stack[-1]
0x1356: Return(); Pop(4)

0x1357: Stack[-1] = 0
0x1358: Stack[-2] = 0
0x1359: PushEmpty(int, int)
0x135a: Push("branch")
0x135b: @ GetVariable(Stack[-1], Stack[-2])
0x135c: Pop(1)
0x135d: Push((int) 0)
0x135e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x135f: IF (Stack[-1] == 0) GOTO 0x1363; Pop(1)

0x1360: Stack[-3] = (int) 1
0x1361: Return(); Pop(2)

0x1362: GOTO 0x1368

0x1363: Push((int) 1)
0x1364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1365: IF (Stack[-1] == 0) GOTO 0x1368; Pop(1)

0x1366: Stack[-3] = (int) 2
0x1367: Return(); Pop(2)

0x1368: Stack[-3] = (int) 3
0x1369: Return(); Pop(2)

0x136a: PushEmpty()
0x136b: Push(GlobalVars[1])
0x136c: Pop(1); Push((bool) Stack[-1] == 0)
0x136d: IF (Stack[-1] == 0) GOTO 0x1377; Pop(1)

0x136e: PushEmpty(int, object)
0x136f: Stack[-1] = Stack[-3]
0x1370: Push(-2, 1); TaskCall(2)
0x1371: Call2 0x12f

0x1372: Pop(-2, 1); TaskReturn
0x1373: Pop(2)
0x1374: Push(GlobalVars[1])
0x1375: Stack[-1] = (bool) 1
0x1376: GlobalVars[1] = Stack[-1]; Pop(1)
0x1377: PushEmpty(bool, int)
0x1378: Stack[-1] = (int) 2
0x1379: Call2 0x1113

0x137a: Pop(1)
0x137b: IF (Stack[-1] == 0) GOTO 0x1383; Pop(1)

0x137c: PushEmpty(int, object)
0x137d: Stack[-1] = Stack[-3]
0x137e: Push(-2, 1); TaskCall(4)
0x137f: Call2 0x268

0x1380: Pop(-2, 1); TaskReturn
0x1381: Pop(2)
0x1382: Return(); Pop(0)

0x1383: PushEmpty(bool, int)
0x1384: Stack[-1] = (int) 3
0x1385: Call2 0x1113

0x1386: Pop(1)
0x1387: IF (Stack[-1] == 0) GOTO 0x138f; Pop(1)

0x1388: PushEmpty(int, object)
0x1389: Stack[-1] = Stack[-3]
0x138a: Push(-2, 1); TaskCall(6)
0x138b: Call2 0x5a7

0x138c: Pop(-2, 1); TaskReturn
0x138d: Pop(2)
0x138e: Return(); Pop(0)

0x138f: PushEmpty(bool, int)
0x1390: Stack[-1] = (int) 7
0x1391: Call2 0x1113

0x1392: Pop(1)
0x1393: IF (Stack[-1] == 0) GOTO 0x139b; Pop(1)

0x1394: PushEmpty(int, object)
0x1395: Stack[-1] = Stack[-3]
0x1396: Push(-2, 1); TaskCall(8)
0x1397: Call2 0x7d6

0x1398: Pop(-2, 1); TaskReturn
0x1399: Pop(2)
0x139a: Return(); Pop(0)

0x139b: PushEmpty(bool, int)
0x139c: Stack[-1] = (int) 11
0x139d: Call2 0x1113

0x139e: Pop(1)
0x139f: IF (Stack[-1] == 0) GOTO 0x13a7; Pop(1)

0x13a0: PushEmpty(int, object)
0x13a1: Stack[-1] = Stack[-3]
0x13a2: Push(-2, 1); TaskCall(10)
0x13a3: Call2 0xb78

0x13a4: Pop(-2, 1); TaskReturn
0x13a5: Pop(2)
0x13a6: Return(); Pop(0)

0x13a7: PushEmpty(bool, int)
0x13a8: Stack[-1] = (int) 12
0x13a9: Call2 0x1113

0x13aa: Pop(1)
0x13ab: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13ac: PushEmpty(int, object)
0x13ad: Stack[-1] = Stack[-3]
0x13ae: Push(-2, 1); TaskCall(0)
0x13af: Call2 0x0

0x13b0: Pop(-2, 1); TaskReturn
0x13b1: Pop(2)
0x13b2: Return(); Pop(0)

0x13b3: PushEmpty(int, object)
0x13b4: Stack[-1] = Stack[-3]
0x13b5: Push(-2, 1); TaskCall(12)
0x13b6: Call2 0xdb6

0x13b7: Pop(-2, 1); TaskReturn
0x13b8: Pop(2)
0x13b9: Return(); Pop(0)

