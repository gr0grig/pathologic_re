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
	Distrust
	Smile
	Think
	Triumph
	Pride
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
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	k1q03
	k4q01
	k10q01KnowAboutRubin
	k10q01NotkinGotoRubin
	pt_map_rubin
	AddMark
	playsound
	giveitem
	Gun is given
	Gun
	ShowMap
	k1q01DobermanDead
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Notkin.png
	ui/NPC_Notkin_b.png

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
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x7b9
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x298 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x36d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x50d Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x691 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x78f Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x805 Vars = (int)
		EVENT_6 Op = 0x82b Vars = ()
		EVENT_5 Op = 0x83a Vars = ()
		EVENT_45 Op = 0x847 Vars = (bool)
		EVENT_0 Op = 0x853 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8dc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb60

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb5e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb62

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb64

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xb4d

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
0x31: Call2 0x9f2

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x933

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
0x48: Call2 0x921

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 524791)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xab4

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 524792)
0x66: Push((int) 28167)
0x67: Push((int) 26107)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 524793)
0x6b: Push((int) -1)
0x6c: Push((int) 26108)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 542093)
0x70: Push((int) -1)
0x71: Push((int) 44393)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0xb66

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x9bd

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0xb66

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x9cd

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x9eb

0xb0: Pop(0)
0xb1: Push((int) 26110)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xa5f

0xb8: Pop(2)
0xb9: Push((int) 28176)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0xa5f

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0xa8d

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0xa87

0xca: Pop(2)
0xcb: Push((int) 40900)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0xa5f

0xd2: Pop(2)
0xd3: Push((int) 40901)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0xa5f

0xda: Pop(2)
0xdb: Push((int) 40902)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0xa5f

0xe2: Pop(2)
0xe3: Push((int) 26106)
0xe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral"
0xe8: Call2 0x95

0xe9: Pop(1)
0xea: Push((int) 524791)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Call2 0xab4

0xf2: Pop(1)
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: Push((int) 524792)
0xf5: Push((int) 28167)
0xf6: Push((int) 26107)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Push((int) 524793)
0xfa: Push((int) -1)
0xfb: Push((int) 26108)
0xfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd: Pop(3)
0xfe: Push((int) 542093)
0xff: Push((int) -1)
0x100: Push((int) 44393)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Return(); Pop(0)

0x104: Push((int) 28167)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x107: PushEmpty(string)
0x108: Stack[-1] = "Distrust"
0x109: Call2 0x95

0x10a: Pop(1)
0x10b: Push((int) 526880)
0x10c: @@ SetMessage(Stack[-1])
0x10d: Pop(1)
0x10e: @@ ClearReplies()
0x10f: Pop(0)
0x110: Push((int) 526881)
0x111: Push((int) 28169)
0x112: Push((int) 28168)
0x113: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: Push((int) 542094)
0x116: Push((int) 28169)
0x117: Push((int) 44394)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Return(); Pop(0)

0x11b: Push((int) 28169)
0x11c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x11e: PushEmpty(string)
0x11f: Stack[-1] = "Distrust"
0x120: Call2 0x95

0x121: Pop(1)
0x122: Push((int) 526882)
0x123: @@ SetMessage(Stack[-1])
0x124: Pop(1)
0x125: @@ ClearReplies()
0x126: Pop(0)
0x127: Push((int) 538926)
0x128: Push((int) 40882)
0x129: Push((int) 40881)
0x12a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: Push((int) 538934)
0x12d: Push((int) 40882)
0x12e: Push((int) 40891)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 40882)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Smile"
0x137: Call2 0x95

0x138: Pop(1)
0x139: Push((int) 538927)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 526883)
0x13f: Push((int) 26109)
0x140: Push((int) 28170)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0xaa8

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push((int) 538928)
0x149: Push((int) 40884)
0x14a: Push((int) 40883)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 40884)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Think"
0x153: Call2 0x95

0x154: Pop(1)
0x155: Push((int) 538929)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 538930)
0x15b: Push((int) 40886)
0x15c: Push((int) 40885)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 538932)
0x160: Push((int) 40886)
0x161: Push((int) 40887)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 40886)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Think"
0x16a: Call2 0x95

0x16b: Pop(1)
0x16c: Push((int) 538931)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 538935)
0x172: Push((int) 40897)
0x173: Push((int) 40893)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 538937)
0x177: Push((int) 40897)
0x178: Push((int) 40895)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 40897)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Triumph"
0x181: Call2 0x95

0x182: Pop(1)
0x183: Push((int) 538939)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 538940)
0x189: Push((int) -1)
0x18a: Push((int) 40900)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 538941)
0x18e: Push((int) -1)
0x18f: Push((int) 40901)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 538942)
0x193: Push((int) -1)
0x194: Push((int) 40902)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 26109)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Distrust"
0x19d: Call2 0x95

0x19e: Pop(1)
0x19f: Push((int) 524794)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 526890)
0x1a5: Push((int) 28178)
0x1a6: Push((int) 28177)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 526885)
0x1aa: Push((int) 28173)
0x1ab: Push((int) 28172)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 28173)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Smile"
0x1b4: Call2 0x95

0x1b5: Pop(1)
0x1b6: Push((int) 526886)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 524795)
0x1bc: Push((int) -1)
0x1bd: Push((int) 26110)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Push((int) 526887)
0x1c1: Push((int) 28175)
0x1c2: Push((int) 28174)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Return(); Pop(0)

0x1c6: Push((int) 28175)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Smile"
0x1cb: Call2 0x95

0x1cc: Pop(1)
0x1cd: Push((int) 526888)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: Push((int) 526889)
0x1d3: Push((int) -1)
0x1d4: Push((int) 28176)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 28178)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Distrust"
0x1dd: Call2 0x95

0x1de: Pop(1)
0x1df: Push((int) 526891)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 538936)
0x1e5: Push((int) 40886)
0x1e6: Push((int) 40894)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1eb: PushEmpty(bool)
0x1ec: Call2 0xb66

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: @ lshStopAnimation()
0x1f0: Pop(0)
0x1f1: GOTO 0x1f4

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: GOTO 0xac

0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f9: PushEmpty(bool, object, float)
0x1fa: Stack[-2] = Stack[-12]
0x1fb: Stack[-1] = (float) 70.0
0x1fc: Call2 0x8dc

0x1fd: Pop(2)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-10] = (int) -2
0x201: Return(); Pop(8)

0x202: @ CreateDialog(Stack[-4])
0x203: Pop(0)
0x204: PushEmpty(int)
0x205: Call2 0xb60

0x206: Pop(0)
0x207: @@ SetNPCName(Stack[-1])
0x208: Pop(1)
0x209: PushEmpty(int)
0x20a: Call2 0xb5e

0x20b: Pop(0)
0x20c: @@ SetNPCDescription(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(string)
0x20f: Call2 0xb62

0x210: Pop(0)
0x211: @@ SetPhoto(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0xb64

0x215: Pop(0)
0x216: @@ SetPhoto2(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(int)
0x219: Call2 0xb4d

0x21a: Pop(0)
0x21b: @@ SetPlayerName(Stack[-1])
0x21c: Pop(1)
0x21d: Stack[-2] = (int) -1
0x21e: @ IsOverrideActive(Stack[-3])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-10] = (int) -2
0x223: Return(); Pop(8)

0x224: @ DoDialog(Stack[-4])
0x225: Pop(0)
0x226: PushEmpty(bool, object)
0x227: PushEmpty(object)
0x228: Call2 0x9f2

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Call2 0x933

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[-11]
0x22f: Stack[-1] = Stack[-6]
0x230: Push(-2, 4); TaskCall(3)
0x231: Call2 0x248

0x232: Pop(-2, 4); TaskReturn
0x233: Pop(2)
0x234: @@ IsDialogEnd(Stack[-1])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: @ sync()
0x239: Pop(0)
0x23a: @@ IsDialogEnd(Stack[-1])
0x23b: Pop(0)
0x23c: GOTO 0x236

0x23d: PushEmpty(object)
0x23e: Stack[-1] = Stack[-10]
0x23f: Call2 0x921

0x240: Pop(1)
0x241: @ StopDialog(Stack[-4])
0x242: Pop(0)
0x243: @@ GetReturnValue(Stack[-2])
0x244: Pop(0)
0x245: Stack[-10] = Stack[-2]
0x246: Return(); Pop(8)

0x247: Stack[-4] = 0
0x248: PushEmpty()
0x249: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24c: Push((int) 1)
0x24d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0x282

0x251: Pop(1)
0x252: Push((int) 525516)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 525517)
0x258: Push((int) -1)
0x259: Push((int) 26873)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 526273)
0x25d: Push((int) -1)
0x25e: Push((int) 27549)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: GOTO 0x264

0x262: Return(); Pop(0)

0x263: GOTO 0x24c

0x264: PushEmpty(bool)
0x265: Call2 0xb66

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: @ lshWaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: PushEmpty(string)
0x26e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26f: Call2 0x9bd

0x270: Pop(1)
0x271: GOTO 0x268

0x272: GOTO 0x281

0x273: Push("all")
0x274: Push("idle")
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: Push("all")
0x27d: Push("idle")
0x27e: @ PlayAnimation(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: GOTO 0x277

0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty(bool)
0x284: Call2 0xb66

0x285: Pop(0)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(0)

0x289: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(0)

0x28c: PushEmpty(string, bool)
0x28d: Stack[-2] = Stack[-3]
0x28e: Push("")
0x28f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-1] = (bool) 0
0x292: GOTO 0x294

0x293: Stack[-1] = (bool) 1
0x294: Call2 0x9cd

0x295: Pop(2)
0x296: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push((int) 1)
0x29a: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x9eb

0x29d: Pop(0)
0x29e: Push((int) 26872)
0x29f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x282

0x2a4: Pop(1)
0x2a5: Push((int) 525516)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 525517)
0x2ab: Push((int) -1)
0x2ac: Push((int) 26873)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 526273)
0x2b0: Push((int) -1)
0x2b1: Push((int) 27549)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b6: PushEmpty(bool)
0x2b7: Call2 0xb66

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ lshStopAnimation()
0x2bb: Pop(0)
0x2bc: GOTO 0x2bf

0x2bd: @ StopAnimation()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: GOTO 0x299

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2c4: PushEmpty(bool, object, float)
0x2c5: Stack[-2] = Stack[-12]
0x2c6: Stack[-1] = (float) 70.0
0x2c7: Call2 0x8dc

0x2c8: Pop(2)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-10] = (int) -2
0x2cc: Return(); Pop(8)

0x2cd: @ CreateDialog(Stack[-4])
0x2ce: Pop(0)
0x2cf: PushEmpty(int)
0x2d0: Call2 0xb60

0x2d1: Pop(0)
0x2d2: @@ SetNPCName(Stack[-1])
0x2d3: Pop(1)
0x2d4: PushEmpty(int)
0x2d5: Call2 0xb5e

0x2d6: Pop(0)
0x2d7: @@ SetNPCDescription(Stack[-1])
0x2d8: Pop(1)
0x2d9: PushEmpty(string)
0x2da: Call2 0xb62

0x2db: Pop(0)
0x2dc: @@ SetPhoto(Stack[-1])
0x2dd: Pop(1)
0x2de: PushEmpty(string)
0x2df: Call2 0xb64

0x2e0: Pop(0)
0x2e1: @@ SetPhoto2(Stack[-1])
0x2e2: Pop(1)
0x2e3: PushEmpty(int)
0x2e4: Call2 0xb4d

0x2e5: Pop(0)
0x2e6: @@ SetPlayerName(Stack[-1])
0x2e7: Pop(1)
0x2e8: Stack[-2] = (int) -1
0x2e9: @ IsOverrideActive(Stack[-3])
0x2ea: Pop(0)
0x2eb: Push(Stack[-3])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: Stack[-10] = (int) -2
0x2ee: Return(); Pop(8)

0x2ef: @ DoDialog(Stack[-4])
0x2f0: Pop(0)
0x2f1: PushEmpty(bool, object)
0x2f2: PushEmpty(object)
0x2f3: Call2 0x9f2

0x2f4: Stack[-2] = Stack[-1]
0x2f5: Pop(1)
0x2f6: Call2 0x933

0x2f7: Pop(2)
0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[-11]
0x2fa: Stack[-1] = Stack[-6]
0x2fb: Push(-2, 4); TaskCall(5)
0x2fc: Call2 0x313

0x2fd: Pop(-2, 4); TaskReturn
0x2fe: Pop(2)
0x2ff: @@ IsDialogEnd(Stack[-1])
0x300: Pop(0)
0x301: Pop(0); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: @ sync()
0x304: Pop(0)
0x305: @@ IsDialogEnd(Stack[-1])
0x306: Pop(0)
0x307: GOTO 0x301

0x308: PushEmpty(object)
0x309: Stack[-1] = Stack[-10]
0x30a: Call2 0x921

0x30b: Pop(1)
0x30c: @ StopDialog(Stack[-4])
0x30d: Pop(0)
0x30e: @@ GetReturnValue(Stack[-2])
0x30f: Pop(0)
0x310: Stack[-10] = Stack[-2]
0x311: Return(); Pop(8)

0x312: Stack[-4] = 0
0x313: PushEmpty()
0x314: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x315: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x316: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x317: Push((int) 1)
0x318: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Smile"
0x31b: Call2 0x357

0x31c: Pop(1)
0x31d: Push((int) 525691)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x324: Call2 0xac0

0x325: Pop(1)
0x326: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x327: Push((int) 525692)
0x328: Push((int) 30673)
0x329: Push((int) 27015)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Push((int) 525695)
0x32d: Push((int) -1)
0x32e: Push((int) 27018)
0x32f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x330: Pop(3)
0x331: Push((int) 542396)
0x332: Push((int) -1)
0x333: Push((int) 44768)
0x334: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(3)
0x336: GOTO 0x339

0x337: Return(); Pop(0)

0x338: GOTO 0x317

0x339: PushEmpty(bool)
0x33a: Call2 0xb66

0x33b: Pop(0)
0x33c: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x33d: @ lshWaitForAnimEnd()
0x33e: Pop(0)
0x33f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: GOTO 0x347

0x342: PushEmpty(string)
0x343: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x344: Call2 0x9bd

0x345: Pop(1)
0x346: GOTO 0x33d

0x347: GOTO 0x356

0x348: Push("all")
0x349: Push("idle")
0x34a: @ PlayAnimation(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: @ WaitForAnimEnd()
0x34d: Pop(0)
0x34e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x34f: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x350: GOTO 0x356

0x351: Push("all")
0x352: Push("idle")
0x353: @ PlayAnimation(Stack[-2], Stack[-1])
0x354: Pop(2)
0x355: GOTO 0x34c

0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: PushEmpty(bool)
0x359: Call2 0xb66

0x35a: Pop(0)
0x35b: Pop(1); Push((bool) Stack[-1] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: Return(); Pop(0)

0x35e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: Return(); Pop(0)

0x361: PushEmpty(string, bool)
0x362: Stack[-2] = Stack[-3]
0x363: Push("")
0x364: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-1] = (bool) 0
0x367: GOTO 0x369

0x368: Stack[-1] = (bool) 1
0x369: Call2 0x9cd

0x36a: Pop(2)
0x36b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x36c: Return(); Pop(0)

0x36d: PushEmpty()
0x36e: Push((int) 1)
0x36f: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x370: PushEmpty()
0x371: Call2 0x9eb

0x372: Pop(0)
0x373: Push((int) 27017)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: PushEmpty(object, object)
0x377: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x378: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x379: Call2 0xa68

0x37a: Pop(2)
0x37b: Push((int) 27014)
0x37c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x37e: PushEmpty(string)
0x37f: Stack[-1] = "Smile"
0x380: Call2 0x357

0x381: Pop(1)
0x382: Push((int) 525691)
0x383: @@ SetMessage(Stack[-1])
0x384: Pop(1)
0x385: @@ ClearReplies()
0x386: Pop(0)
0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x389: Call2 0xac0

0x38a: Pop(1)
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: Push((int) 525692)
0x38d: Push((int) 30673)
0x38e: Push((int) 27015)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 525695)
0x392: Push((int) -1)
0x393: Push((int) 27018)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Push((int) 542396)
0x397: Push((int) -1)
0x398: Push((int) 44768)
0x399: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: Return(); Pop(0)

0x39c: Push((int) 30673)
0x39d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Pride"
0x3a1: Call2 0x357

0x3a2: Pop(1)
0x3a3: Push((int) 529221)
0x3a4: @@ SetMessage(Stack[-1])
0x3a5: Pop(1)
0x3a6: @@ ClearReplies()
0x3a7: Pop(0)
0x3a8: Push((int) 529222)
0x3a9: Push((int) 44776)
0x3aa: Push((int) 30674)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Push((int) 529223)
0x3ae: Push((int) 44778)
0x3af: Push((int) 30675)
0x3b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b1: Pop(3)
0x3b2: Return(); Pop(0)

0x3b3: Push((int) 44778)
0x3b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b6: PushEmpty(string)
0x3b7: Stack[-1] = "Think"
0x3b8: Call2 0x357

0x3b9: Pop(1)
0x3ba: Push((int) 542404)
0x3bb: @@ SetMessage(Stack[-1])
0x3bc: Pop(1)
0x3bd: @@ ClearReplies()
0x3be: Pop(0)
0x3bf: Push((int) 542405)
0x3c0: Push((int) 44781)
0x3c1: Push((int) 44779)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Return(); Pop(0)

0x3c5: Push((int) 44781)
0x3c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c8: PushEmpty(string)
0x3c9: Stack[-1] = "Neutral"
0x3ca: Call2 0x357

0x3cb: Pop(1)
0x3cc: Push((int) 542407)
0x3cd: @@ SetMessage(Stack[-1])
0x3ce: Pop(1)
0x3cf: @@ ClearReplies()
0x3d0: Pop(0)
0x3d1: Push((int) 542408)
0x3d2: Push((int) 27016)
0x3d3: Push((int) 44782)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 44776)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Pride"
0x3dc: Call2 0x357

0x3dd: Pop(1)
0x3de: Push((int) 542402)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 542403)
0x3e4: Push((int) 27016)
0x3e5: Push((int) 44777)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Push((int) 542406)
0x3e9: Push((int) 27016)
0x3ea: Push((int) 44780)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Return(); Pop(0)

0x3ee: Push((int) 27016)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f1: PushEmpty(string)
0x3f2: Stack[-1] = "Think"
0x3f3: Call2 0x357

0x3f4: Pop(1)
0x3f5: Push((int) 525693)
0x3f6: @@ SetMessage(Stack[-1])
0x3f7: Pop(1)
0x3f8: @@ ClearReplies()
0x3f9: Pop(0)
0x3fa: Push((int) 542409)
0x3fb: Push((int) 44786)
0x3fc: Push((int) 44785)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Push((int) 542414)
0x400: Push((int) 30672)
0x401: Push((int) 44790)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Return(); Pop(0)

0x405: Push((int) 44786)
0x406: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x408: PushEmpty(string)
0x409: Stack[-1] = "Smile"
0x40a: Call2 0x357

0x40b: Pop(1)
0x40c: Push((int) 542410)
0x40d: @@ SetMessage(Stack[-1])
0x40e: Pop(1)
0x40f: @@ ClearReplies()
0x410: Pop(0)
0x411: Push((int) 529219)
0x412: Push((int) 30672)
0x413: Push((int) 30671)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Push((int) 542411)
0x417: Push((int) 44788)
0x418: Push((int) 44787)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: Return(); Pop(0)

0x41c: Push((int) 44788)
0x41d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x41f: PushEmpty(string)
0x420: Stack[-1] = "Neutral"
0x421: Call2 0x357

0x422: Pop(1)
0x423: Push((int) 542412)
0x424: @@ SetMessage(Stack[-1])
0x425: Pop(1)
0x426: @@ ClearReplies()
0x427: Pop(0)
0x428: Push((int) 542413)
0x429: Push((int) 30672)
0x42a: Push((int) 44789)
0x42b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42c: Pop(3)
0x42d: Return(); Pop(0)

0x42e: Push((int) 30672)
0x42f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x431: PushEmpty(string)
0x432: Stack[-1] = "Neutral"
0x433: Call2 0x357

0x434: Pop(1)
0x435: Push((int) 529220)
0x436: @@ SetMessage(Stack[-1])
0x437: Pop(1)
0x438: @@ ClearReplies()
0x439: Pop(0)
0x43a: Push((int) 525694)
0x43b: Push((int) -1)
0x43c: Push((int) 27017)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Return(); Pop(0)

0x440: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x441: PushEmpty(bool)
0x442: Call2 0xb66

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x445: @ lshStopAnimation()
0x446: Pop(0)
0x447: GOTO 0x44a

0x448: @ StopAnimation()
0x449: Pop(0)
0x44a: Return(); Pop(0)

0x44b: GOTO 0x36e

0x44c: Return(); Pop(0)

0x44d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x44e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x44f: PushEmpty(bool, object, float)
0x450: Stack[-2] = Stack[-12]
0x451: Stack[-1] = (float) 70.0
0x452: Call2 0x8dc

0x453: Pop(2)
0x454: Pop(1); Push((bool) Stack[-1] == 0)
0x455: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x456: Stack[-10] = (int) -2
0x457: Return(); Pop(8)

0x458: @ CreateDialog(Stack[-4])
0x459: Pop(0)
0x45a: PushEmpty(int)
0x45b: Call2 0xb60

0x45c: Pop(0)
0x45d: @@ SetNPCName(Stack[-1])
0x45e: Pop(1)
0x45f: PushEmpty(int)
0x460: Call2 0xb5e

0x461: Pop(0)
0x462: @@ SetNPCDescription(Stack[-1])
0x463: Pop(1)
0x464: PushEmpty(string)
0x465: Call2 0xb62

0x466: Pop(0)
0x467: @@ SetPhoto(Stack[-1])
0x468: Pop(1)
0x469: PushEmpty(string)
0x46a: Call2 0xb64

0x46b: Pop(0)
0x46c: @@ SetPhoto2(Stack[-1])
0x46d: Pop(1)
0x46e: PushEmpty(int)
0x46f: Call2 0xb4d

0x470: Pop(0)
0x471: @@ SetPlayerName(Stack[-1])
0x472: Pop(1)
0x473: Stack[-2] = (int) -1
0x474: @ IsOverrideActive(Stack[-3])
0x475: Pop(0)
0x476: Push(Stack[-3])
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-10] = (int) -2
0x479: Return(); Pop(8)

0x47a: @ DoDialog(Stack[-4])
0x47b: Pop(0)
0x47c: PushEmpty(bool, object)
0x47d: PushEmpty(object)
0x47e: Call2 0x9f2

0x47f: Stack[-2] = Stack[-1]
0x480: Pop(1)
0x481: Call2 0x933

0x482: Pop(2)
0x483: PushEmpty(object, object)
0x484: Stack[-2] = Stack[-11]
0x485: Stack[-1] = Stack[-6]
0x486: Push(-2, 4); TaskCall(7)
0x487: Call2 0x49e

0x488: Pop(-2, 4); TaskReturn
0x489: Pop(2)
0x48a: @@ IsDialogEnd(Stack[-1])
0x48b: Pop(0)
0x48c: Pop(0); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: @ sync()
0x48f: Pop(0)
0x490: @@ IsDialogEnd(Stack[-1])
0x491: Pop(0)
0x492: GOTO 0x48c

0x493: PushEmpty(object)
0x494: Stack[-1] = Stack[-10]
0x495: Call2 0x921

0x496: Pop(1)
0x497: @ StopDialog(Stack[-4])
0x498: Pop(0)
0x499: @@ GetReturnValue(Stack[-2])
0x49a: Pop(0)
0x49b: Stack[-10] = Stack[-2]
0x49c: Return(); Pop(8)

0x49d: Stack[-4] = 0
0x49e: PushEmpty()
0x49f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4a2: Push((int) 1)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4a4: PushEmpty(bool, object)
0x4a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a6: Call2 0xacc

0x4a7: Pop(1)
0x4a8: Pop(1); Push((bool) Stack[-1] == 0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4aa: PushEmpty(object, object)
0x4ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ad: Call2 0xa71

0x4ae: Pop(2)
0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Neutral"
0x4b1: Call2 0x4f7

0x4b2: Pop(1)
0x4b3: Push((int) 527714)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 527715)
0x4b9: Push((int) 29269)
0x4ba: Push((int) 29067)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Push((int) 527928)
0x4be: Push((int) 29269)
0x4bf: Push((int) 29279)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: GOTO 0x4d9

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral"
0x4c5: Call2 0x4f7

0x4c6: Pop(1)
0x4c7: Push((int) 527716)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: Push((int) 527717)
0x4cd: Push((int) -1)
0x4ce: Push((int) 29069)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Push((int) 527918)
0x4d2: Push((int) -1)
0x4d3: Push((int) 29268)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: GOTO 0x4d9

0x4d7: Return(); Pop(0)

0x4d8: GOTO 0x4a2

0x4d9: PushEmpty(bool)
0x4da: Call2 0xb66

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4dd: @ lshWaitForAnimEnd()
0x4de: Pop(0)
0x4df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: GOTO 0x4e7

0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e4: Call2 0x9bd

0x4e5: Pop(1)
0x4e6: GOTO 0x4dd

0x4e7: GOTO 0x4f6

0x4e8: Push("all")
0x4e9: Push("idle")
0x4ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x4eb: Pop(2)
0x4ec: @ WaitForAnimEnd()
0x4ed: Pop(0)
0x4ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: GOTO 0x4f6

0x4f1: Push("all")
0x4f2: Push("idle")
0x4f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f4: Pop(2)
0x4f5: GOTO 0x4ec

0x4f6: Return(); Pop(0)

0x4f7: PushEmpty()
0x4f8: PushEmpty(bool)
0x4f9: Call2 0xb66

0x4fa: Pop(0)
0x4fb: Pop(1); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fd: Return(); Pop(0)

0x4fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: Return(); Pop(0)

0x501: PushEmpty(string, bool)
0x502: Stack[-2] = Stack[-3]
0x503: Push("")
0x504: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-1] = (bool) 0
0x507: GOTO 0x509

0x508: Stack[-1] = (bool) 1
0x509: Call2 0x9cd

0x50a: Pop(2)
0x50b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x50c: Return(); Pop(0)

0x50d: PushEmpty()
0x50e: Push((int) 1)
0x50f: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x510: PushEmpty()
0x511: Call2 0x9eb

0x512: Pop(0)
0x513: Push((int) 29286)
0x514: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x516: PushEmpty(object, object)
0x517: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x518: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x519: Call2 0xa77

0x51a: Pop(2)
0x51b: PushEmpty(object, object)
0x51c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51e: Call2 0xa98

0x51f: Pop(2)
0x520: Push((int) 29287)
0x521: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x523: PushEmpty(object, object)
0x524: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x525: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x526: Call2 0xa77

0x527: Pop(2)
0x528: PushEmpty(object, object)
0x529: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x52b: Call2 0xa98

0x52c: Pop(2)
0x52d: Push((int) 29066)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x532: Call2 0xacc

0x533: Pop(1)
0x534: Pop(1); Push((bool) Stack[-1] == 0)
0x535: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x536: PushEmpty(object, object)
0x537: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x538: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x539: Call2 0xa71

0x53a: Pop(2)
0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x4f7

0x53e: Pop(1)
0x53f: Push((int) 527714)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 527715)
0x545: Push((int) 29269)
0x546: Push((int) 29067)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 527928)
0x54a: Push((int) 29269)
0x54b: Push((int) 29279)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: PushEmpty(string)
0x550: Stack[-1] = "Neutral"
0x551: Call2 0x4f7

0x552: Pop(1)
0x553: Push((int) 527716)
0x554: @@ SetMessage(Stack[-1])
0x555: Pop(1)
0x556: @@ ClearReplies()
0x557: Pop(0)
0x558: Push((int) 527717)
0x559: Push((int) -1)
0x55a: Push((int) 29069)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Push((int) 527918)
0x55e: Push((int) -1)
0x55f: Push((int) 29268)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Return(); Pop(0)

0x563: Push((int) 29269)
0x564: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x566: PushEmpty(string)
0x567: Stack[-1] = "Neutral"
0x568: Call2 0x4f7

0x569: Pop(1)
0x56a: Push((int) 527919)
0x56b: @@ SetMessage(Stack[-1])
0x56c: Pop(1)
0x56d: @@ ClearReplies()
0x56e: Pop(0)
0x56f: Push((int) 527920)
0x570: Push((int) 29271)
0x571: Push((int) 29270)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Push((int) 527923)
0x575: Push((int) 29274)
0x576: Push((int) 29273)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: Return(); Pop(0)

0x57a: Push((int) 29274)
0x57b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x57d: PushEmpty(string)
0x57e: Stack[-1] = "Neutral"
0x57f: Call2 0x4f7

0x580: Pop(1)
0x581: Push((int) 527924)
0x582: @@ SetMessage(Stack[-1])
0x583: Pop(1)
0x584: @@ ClearReplies()
0x585: Pop(0)
0x586: Push((int) 527925)
0x587: Push((int) 29276)
0x588: Push((int) 29275)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Return(); Pop(0)

0x58c: Push((int) 29276)
0x58d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x58f: PushEmpty(string)
0x590: Stack[-1] = "Neutral"
0x591: Call2 0x4f7

0x592: Pop(1)
0x593: Push((int) 527926)
0x594: @@ SetMessage(Stack[-1])
0x595: Pop(1)
0x596: @@ ClearReplies()
0x597: Pop(0)
0x598: Push((int) 527927)
0x599: Push((int) 29271)
0x59a: Push((int) 29277)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: Return(); Pop(0)

0x59e: Push((int) 29271)
0x59f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5a1: PushEmpty(string)
0x5a2: Stack[-1] = "Neutral"
0x5a3: Call2 0x4f7

0x5a4: Pop(1)
0x5a5: Push((int) 527921)
0x5a6: @@ SetMessage(Stack[-1])
0x5a7: Pop(1)
0x5a8: @@ ClearReplies()
0x5a9: Pop(0)
0x5aa: Push((int) 527922)
0x5ab: Push((int) 29282)
0x5ac: Push((int) 29272)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: Push((int) 527929)
0x5b0: Push((int) 29284)
0x5b1: Push((int) 29281)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Return(); Pop(0)

0x5b5: Push((int) 29282)
0x5b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5b8: PushEmpty(string)
0x5b9: Stack[-1] = "Neutral"
0x5ba: Call2 0x4f7

0x5bb: Pop(1)
0x5bc: Push((int) 527930)
0x5bd: @@ SetMessage(Stack[-1])
0x5be: Pop(1)
0x5bf: @@ ClearReplies()
0x5c0: Pop(0)
0x5c1: Push((int) 527931)
0x5c2: Push((int) 29284)
0x5c3: Push((int) 29283)
0x5c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c5: Pop(3)
0x5c6: Return(); Pop(0)

0x5c7: Push((int) 29284)
0x5c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5ca: PushEmpty(string)
0x5cb: Stack[-1] = "Neutral"
0x5cc: Call2 0x4f7

0x5cd: Pop(1)
0x5ce: Push((int) 527932)
0x5cf: @@ SetMessage(Stack[-1])
0x5d0: Pop(1)
0x5d1: @@ ClearReplies()
0x5d2: Pop(0)
0x5d3: Push((int) 527933)
0x5d4: Push((int) -1)
0x5d5: Push((int) 29286)
0x5d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d7: Pop(3)
0x5d8: Push((int) 527934)
0x5d9: Push((int) -1)
0x5da: Push((int) 29287)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5df: PushEmpty(bool)
0x5e0: Call2 0xb66

0x5e1: Pop(0)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e3: @ lshStopAnimation()
0x5e4: Pop(0)
0x5e5: GOTO 0x5e8

0x5e6: @ StopAnimation()
0x5e7: Pop(0)
0x5e8: Return(); Pop(0)

0x5e9: GOTO 0x50e

0x5ea: Return(); Pop(0)

0x5eb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5ec: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5ed: PushEmpty(bool, object, float)
0x5ee: Stack[-2] = Stack[-12]
0x5ef: Stack[-1] = (float) 70.0
0x5f0: Call2 0x8dc

0x5f1: Pop(2)
0x5f2: Pop(1); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-10] = (int) -2
0x5f5: Return(); Pop(8)

0x5f6: @ CreateDialog(Stack[-4])
0x5f7: Pop(0)
0x5f8: PushEmpty(int)
0x5f9: Call2 0xb60

0x5fa: Pop(0)
0x5fb: @@ SetNPCName(Stack[-1])
0x5fc: Pop(1)
0x5fd: PushEmpty(int)
0x5fe: Call2 0xb5e

0x5ff: Pop(0)
0x600: @@ SetNPCDescription(Stack[-1])
0x601: Pop(1)
0x602: PushEmpty(string)
0x603: Call2 0xb62

0x604: Pop(0)
0x605: @@ SetPhoto(Stack[-1])
0x606: Pop(1)
0x607: PushEmpty(string)
0x608: Call2 0xb64

0x609: Pop(0)
0x60a: @@ SetPhoto2(Stack[-1])
0x60b: Pop(1)
0x60c: PushEmpty(int)
0x60d: Call2 0xb4d

0x60e: Pop(0)
0x60f: @@ SetPlayerName(Stack[-1])
0x610: Pop(1)
0x611: Stack[-2] = (int) -1
0x612: @ IsOverrideActive(Stack[-3])
0x613: Pop(0)
0x614: Push(Stack[-3])
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-10] = (int) -2
0x617: Return(); Pop(8)

0x618: @ DoDialog(Stack[-4])
0x619: Pop(0)
0x61a: PushEmpty(bool, object)
0x61b: PushEmpty(object)
0x61c: Call2 0x9f2

0x61d: Stack[-2] = Stack[-1]
0x61e: Pop(1)
0x61f: Call2 0x933

0x620: Pop(2)
0x621: PushEmpty(object, object)
0x622: Stack[-2] = Stack[-11]
0x623: Stack[-1] = Stack[-6]
0x624: Push(-2, 4); TaskCall(9)
0x625: Call2 0x63c

0x626: Pop(-2, 4); TaskReturn
0x627: Pop(2)
0x628: @@ IsDialogEnd(Stack[-1])
0x629: Pop(0)
0x62a: Pop(0); Push((bool) Stack[-1] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62c: @ sync()
0x62d: Pop(0)
0x62e: @@ IsDialogEnd(Stack[-1])
0x62f: Pop(0)
0x630: GOTO 0x62a

0x631: PushEmpty(object)
0x632: Stack[-1] = Stack[-10]
0x633: Call2 0x921

0x634: Pop(1)
0x635: @ StopDialog(Stack[-4])
0x636: Pop(0)
0x637: @@ GetReturnValue(Stack[-2])
0x638: Pop(0)
0x639: Stack[-10] = Stack[-2]
0x63a: Return(); Pop(8)

0x63b: Stack[-4] = 0
0x63c: PushEmpty()
0x63d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x63e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x63f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x640: Push((int) 1)
0x641: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x642: PushEmpty(string)
0x643: Stack[-1] = "Neutral"
0x644: Call2 0x67b

0x645: Pop(1)
0x646: Push((int) 535284)
0x647: @@ SetMessage(Stack[-1])
0x648: Pop(1)
0x649: @@ ClearReplies()
0x64a: Pop(0)
0x64b: Push((int) 535285)
0x64c: Push((int) 36962)
0x64d: Push((int) 36961)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Push((int) 535292)
0x651: Push((int) -1)
0x652: Push((int) 36968)
0x653: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x654: Pop(3)
0x655: Push((int) 535293)
0x656: Push((int) -1)
0x657: Push((int) 36969)
0x658: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x659: Pop(3)
0x65a: GOTO 0x65d

0x65b: Return(); Pop(0)

0x65c: GOTO 0x640

0x65d: PushEmpty(bool)
0x65e: Call2 0xb66

0x65f: Pop(0)
0x660: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x661: @ lshWaitForAnimEnd()
0x662: Pop(0)
0x663: Push( Stack[3 + Tasks[-1].StackPointer] )
0x664: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x665: GOTO 0x66b

0x666: PushEmpty(string)
0x667: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x668: Call2 0x9bd

0x669: Pop(1)
0x66a: GOTO 0x661

0x66b: GOTO 0x67a

0x66c: Push("all")
0x66d: Push("idle")
0x66e: @ PlayAnimation(Stack[-2], Stack[-1])
0x66f: Pop(2)
0x670: @ WaitForAnimEnd()
0x671: Pop(0)
0x672: Push( Stack[3 + Tasks[-1].StackPointer] )
0x673: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x674: GOTO 0x67a

0x675: Push("all")
0x676: Push("idle")
0x677: @ PlayAnimation(Stack[-2], Stack[-1])
0x678: Pop(2)
0x679: GOTO 0x670

0x67a: Return(); Pop(0)

0x67b: PushEmpty()
0x67c: PushEmpty(bool)
0x67d: Call2 0xb66

0x67e: Pop(0)
0x67f: Pop(1); Push((bool) Stack[-1] == 0)
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: Return(); Pop(0)

0x682: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x683: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x684: Return(); Pop(0)

0x685: PushEmpty(string, bool)
0x686: Stack[-2] = Stack[-3]
0x687: Push("")
0x688: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68a: Stack[-1] = (bool) 0
0x68b: GOTO 0x68d

0x68c: Stack[-1] = (bool) 1
0x68d: Call2 0x9cd

0x68e: Pop(2)
0x68f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x690: Return(); Pop(0)

0x691: PushEmpty()
0x692: Push((int) 1)
0x693: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x694: PushEmpty()
0x695: Call2 0x9eb

0x696: Pop(0)
0x697: Push((int) 36960)
0x698: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x69a: PushEmpty(string)
0x69b: Stack[-1] = "Neutral"
0x69c: Call2 0x67b

0x69d: Pop(1)
0x69e: Push((int) 535284)
0x69f: @@ SetMessage(Stack[-1])
0x6a0: Pop(1)
0x6a1: @@ ClearReplies()
0x6a2: Pop(0)
0x6a3: Push((int) 535285)
0x6a4: Push((int) 36962)
0x6a5: Push((int) 36961)
0x6a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(3)
0x6a8: Push((int) 535292)
0x6a9: Push((int) -1)
0x6aa: Push((int) 36968)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Push((int) 535293)
0x6ae: Push((int) -1)
0x6af: Push((int) 36969)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: Return(); Pop(0)

0x6b3: Push((int) 36962)
0x6b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6b6: PushEmpty(string)
0x6b7: Stack[-1] = "Neutral"
0x6b8: Call2 0x67b

0x6b9: Pop(1)
0x6ba: Push((int) 535286)
0x6bb: @@ SetMessage(Stack[-1])
0x6bc: Pop(1)
0x6bd: @@ ClearReplies()
0x6be: Pop(0)
0x6bf: Push((int) 535287)
0x6c0: Push((int) 36964)
0x6c1: Push((int) 36963)
0x6c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c3: Pop(3)
0x6c4: Push((int) 535291)
0x6c5: Push((int) -1)
0x6c6: Push((int) 36967)
0x6c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c8: Pop(3)
0x6c9: Return(); Pop(0)

0x6ca: Push((int) 36964)
0x6cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6cd: PushEmpty(string)
0x6ce: Stack[-1] = "Neutral"
0x6cf: Call2 0x67b

0x6d0: Pop(1)
0x6d1: Push((int) 535288)
0x6d2: @@ SetMessage(Stack[-1])
0x6d3: Pop(1)
0x6d4: @@ ClearReplies()
0x6d5: Pop(0)
0x6d6: Push((int) 535289)
0x6d7: Push((int) -1)
0x6d8: Push((int) 36965)
0x6d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6da: Pop(3)
0x6db: Push((int) 535290)
0x6dc: Push((int) -1)
0x6dd: Push((int) 36966)
0x6de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: Return(); Pop(0)

0x6e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6e2: PushEmpty(bool)
0x6e3: Call2 0xb66

0x6e4: Pop(0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e6: @ lshStopAnimation()
0x6e7: Pop(0)
0x6e8: GOTO 0x6eb

0x6e9: @ StopAnimation()
0x6ea: Pop(0)
0x6eb: Return(); Pop(0)

0x6ec: GOTO 0x692

0x6ed: Return(); Pop(0)

0x6ee: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6ef: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6f0: PushEmpty(bool, object, float)
0x6f1: Stack[-2] = Stack[-12]
0x6f2: Stack[-1] = (float) 70.0
0x6f3: Call2 0x8dc

0x6f4: Pop(2)
0x6f5: Pop(1); Push((bool) Stack[-1] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f7: Stack[-10] = (int) -2
0x6f8: Return(); Pop(8)

0x6f9: @ CreateDialog(Stack[-4])
0x6fa: Pop(0)
0x6fb: PushEmpty(int)
0x6fc: Call2 0xb60

0x6fd: Pop(0)
0x6fe: @@ SetNPCName(Stack[-1])
0x6ff: Pop(1)
0x700: PushEmpty(int)
0x701: Call2 0xb5e

0x702: Pop(0)
0x703: @@ SetNPCDescription(Stack[-1])
0x704: Pop(1)
0x705: PushEmpty(string)
0x706: Call2 0xb62

0x707: Pop(0)
0x708: @@ SetPhoto(Stack[-1])
0x709: Pop(1)
0x70a: PushEmpty(string)
0x70b: Call2 0xb64

0x70c: Pop(0)
0x70d: @@ SetPhoto2(Stack[-1])
0x70e: Pop(1)
0x70f: PushEmpty(int)
0x710: Call2 0xb4d

0x711: Pop(0)
0x712: @@ SetPlayerName(Stack[-1])
0x713: Pop(1)
0x714: Stack[-2] = (int) -1
0x715: @ IsOverrideActive(Stack[-3])
0x716: Pop(0)
0x717: Push(Stack[-3])
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: Stack[-10] = (int) -2
0x71a: Return(); Pop(8)

0x71b: @ DoDialog(Stack[-4])
0x71c: Pop(0)
0x71d: PushEmpty(bool, object)
0x71e: PushEmpty(object)
0x71f: Call2 0x9f2

0x720: Stack[-2] = Stack[-1]
0x721: Pop(1)
0x722: Call2 0x933

0x723: Pop(2)
0x724: PushEmpty(object, object)
0x725: Stack[-2] = Stack[-11]
0x726: Stack[-1] = Stack[-6]
0x727: Push(-2, 4); TaskCall(11)
0x728: Call2 0x73f

0x729: Pop(-2, 4); TaskReturn
0x72a: Pop(2)
0x72b: @@ IsDialogEnd(Stack[-1])
0x72c: Pop(0)
0x72d: Pop(0); Push((bool) Stack[-1] == 0)
0x72e: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72f: @ sync()
0x730: Pop(0)
0x731: @@ IsDialogEnd(Stack[-1])
0x732: Pop(0)
0x733: GOTO 0x72d

0x734: PushEmpty(object)
0x735: Stack[-1] = Stack[-10]
0x736: Call2 0x921

0x737: Pop(1)
0x738: @ StopDialog(Stack[-4])
0x739: Pop(0)
0x73a: @@ GetReturnValue(Stack[-2])
0x73b: Pop(0)
0x73c: Stack[-10] = Stack[-2]
0x73d: Return(); Pop(8)

0x73e: Stack[-4] = 0
0x73f: PushEmpty()
0x740: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x741: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x742: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x743: Push((int) 1)
0x744: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x745: PushEmpty(string)
0x746: Stack[-1] = "Neutral"
0x747: Call2 0x779

0x748: Pop(1)
0x749: Push((int) 540545)
0x74a: @@ SetMessage(Stack[-1])
0x74b: Pop(1)
0x74c: @@ ClearReplies()
0x74d: Pop(0)
0x74e: Push((int) 540546)
0x74f: Push((int) -1)
0x750: Push((int) 42555)
0x751: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x752: Pop(3)
0x753: Push((int) 540798)
0x754: Push((int) -1)
0x755: Push((int) 42847)
0x756: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x757: Pop(3)
0x758: GOTO 0x75b

0x759: Return(); Pop(0)

0x75a: GOTO 0x743

0x75b: PushEmpty(bool)
0x75c: Call2 0xb66

0x75d: Pop(0)
0x75e: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x75f: @ lshWaitForAnimEnd()
0x760: Pop(0)
0x761: Push( Stack[3 + Tasks[-1].StackPointer] )
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: GOTO 0x769

0x764: PushEmpty(string)
0x765: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x766: Call2 0x9bd

0x767: Pop(1)
0x768: GOTO 0x75f

0x769: GOTO 0x778

0x76a: Push("all")
0x76b: Push("idle")
0x76c: @ PlayAnimation(Stack[-2], Stack[-1])
0x76d: Pop(2)
0x76e: @ WaitForAnimEnd()
0x76f: Pop(0)
0x770: Push( Stack[3 + Tasks[-1].StackPointer] )
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: GOTO 0x778

0x773: Push("all")
0x774: Push("idle")
0x775: @ PlayAnimation(Stack[-2], Stack[-1])
0x776: Pop(2)
0x777: GOTO 0x76e

0x778: Return(); Pop(0)

0x779: PushEmpty()
0x77a: PushEmpty(bool)
0x77b: Call2 0xb66

0x77c: Pop(0)
0x77d: Pop(1); Push((bool) Stack[-1] == 0)
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: Return(); Pop(0)

0x780: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Return(); Pop(0)

0x783: PushEmpty(string, bool)
0x784: Stack[-2] = Stack[-3]
0x785: Push("")
0x786: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x787: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x788: Stack[-1] = (bool) 0
0x789: GOTO 0x78b

0x78a: Stack[-1] = (bool) 1
0x78b: Call2 0x9cd

0x78c: Pop(2)
0x78d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x78e: Return(); Pop(0)

0x78f: PushEmpty()
0x790: Push((int) 1)
0x791: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x792: PushEmpty()
0x793: Call2 0x9eb

0x794: Pop(0)
0x795: Push((int) 42554)
0x796: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x798: PushEmpty(string)
0x799: Stack[-1] = "Neutral"
0x79a: Call2 0x779

0x79b: Pop(1)
0x79c: Push((int) 540545)
0x79d: @@ SetMessage(Stack[-1])
0x79e: Pop(1)
0x79f: @@ ClearReplies()
0x7a0: Pop(0)
0x7a1: Push((int) 540546)
0x7a2: Push((int) -1)
0x7a3: Push((int) 42555)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Push((int) 540798)
0x7a7: Push((int) -1)
0x7a8: Push((int) 42847)
0x7a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7aa: Pop(3)
0x7ab: Return(); Pop(0)

0x7ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7ad: PushEmpty(bool)
0x7ae: Call2 0xb66

0x7af: Pop(0)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b1: @ lshStopAnimation()
0x7b2: Pop(0)
0x7b3: GOTO 0x7b6

0x7b4: @ StopAnimation()
0x7b5: Pop(0)
0x7b6: Return(); Pop(0)

0x7b7: GOTO 0x790

0x7b8: Return(); Pop(0)

0x7b9: Push(GlobalVars[1])
0x7ba: Stack[-1] = (bool) 0
0x7bb: GlobalVars[1] = Stack[-1]; Pop(1)
0x7bc: PushEmpty()
0x7bd: Call2 0x7c0

0x7be: Pop(0)
0x7bf: Return(); Pop(0)

0x7c0: PushEmpty(bool)
0x7c1: Call2 0x8d7

0x7c2: Pop(0)
0x7c3: Pop(1); Push((bool) Stack[-1] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: @ Hold()
0x7c6: Pop(0)
0x7c7: @ GetDirection(Stack[-0])
0x7c8: Pop(0)
0x7c9: PushEmpty()
0x7ca: Call2 0x870

0x7cb: Pop(0)
0x7cc: GOTO 0x7c9

0x7cd: Return(); Pop(0)

0x7ce: PushEmpty(object, object)
0x7cf: Push("player")
0x7d0: @ FindActor(Stack[-2], Stack[-1])
0x7d1: Pop(1)
0x7d2: Pop(0); Push((bool) Stack[-1] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-3] = (bool) 0
0x7d5: Return(); Pop(2)

0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[-3]
0x7d8: Call2 0x8ce

0x7d9: Stack[-5] = Stack[-2]
0x7da: Pop(2)
0x7db: Return(); Pop(2)

0x7dc: Stack[-1] = 0
0x7dd: Push(CvectorIndex(Stack[-0], 0))
0x7de: Push(CvectorIndex(Stack[-0], 2))
0x7df: @ RotateAsync(Stack[-2], Stack[-1])
0x7e0: Pop(2)
0x7e1: Return(); Pop(0)

0x7e2: PushEmpty(object, bool, object, bool)
0x7e3: Push("player")
0x7e4: @ FindActor(Stack[-3], Stack[-1])
0x7e5: Pop(1)
0x7e6: Pop(0); Push((bool) Stack[-2] == 0)
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-5] = (bool) 0
0x7e9: Return(); Pop(4)

0x7ea: PushEmpty(float, object)
0x7eb: Stack[-1] = Stack[-4]
0x7ec: Call2 0x8bc

0x7ed: Pop(1)
0x7ee: Push((float)90000.0)
0x7ef: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f1: Stack[-5] = (bool) 0
0x7f2: Return(); Pop(4)

0x7f3: @ CanSee(Stack[-1], Stack[-2])
0x7f4: Pop(0)
0x7f5: Stack[-5] = Stack[-1]
0x7f6: Return(); Pop(4)

0x7f7: Stack[-2] = 0
0x7f8: PushEmpty(float, float)
0x7f9: Push((int) 8)
0x7fa: Push((int) 16)
0x7fb: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7fc: Pop(2)
0x7fd: Push((int) 10)
0x7fe: @ SetTimer(Stack[-1], Stack[-2])
0x7ff: Pop(1)
0x800: Return(); Pop(2)

0x801: Push((int) 10)
0x802: @ KillTimer(Stack[-1])
0x803: Pop(1)
0x804: Return(); Pop(0)

0x805: PushEmpty()
0x806: Push((int) 10)
0x807: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x809: PushEmpty()
0x80a: Call2 0x801

0x80b: Pop(0)
0x80c: PushEmpty(bool)
0x80d: Stack[-1] = (bool) 0
0x80e: PushEmpty(bool)
0x80f: Call2 0x8d7

0x810: Pop(0)
0x811: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x812: PushEmpty(bool)
0x813: Call2 0x7e2

0x814: Pop(0)
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Stack[-1] = (bool) 1
0x817: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x818: PushEmpty(bool)
0x819: Call2 0x7ce

0x81a: Pop(0)
0x81b: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x81c: PushEmpty(bool, object)
0x81d: PushEmpty(object)
0x81e: Call2 0x9f2

0x81f: Stack[-2] = Stack[-1]
0x820: Pop(1)
0x821: Call2 0x96d

0x822: Pop(2)
0x823: GOTO 0x82a

0x824: PushEmpty()
0x825: Call2 0x7dd

0x826: Pop(0)
0x827: PushEmpty()
0x828: Call2 0x7f8

0x829: Pop(0)
0x82a: Return(); Pop(0)

0x82b: PushEmpty()
0x82c: Call2 0x8b7

0x82d: Pop(0)
0x82e: PushEmpty()
0x82f: Call2 0x801

0x830: Pop(0)
0x831: @ lshStopSpeech()
0x832: Pop(0)
0x833: @ lshStopAnimation()
0x834: Pop(0)
0x835: @ StopAsync()
0x836: Pop(0)
0x837: @ Hold()
0x838: Pop(0)
0x839: Return(); Pop(0)

0x83a: @ StopGroup0()
0x83b: Pop(0)
0x83c: PushEmpty()
0x83d: Call2 0x801

0x83e: Pop(0)
0x83f: PushEmpty(string)
0x840: Stack[-1] = "Neutral"
0x841: Call2 0x9bd

0x842: Pop(1)
0x843: PushEmpty()
0x844: Call2 0x7f8

0x845: Pop(0)
0x846: Return(); Pop(0)

0x847: PushEmpty()
0x848: Push(Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84a: PushEmpty()
0x84b: Call2 0x7f8

0x84c: Pop(0)
0x84d: GOTO 0x852

0x84e: PushEmpty(string)
0x84f: Stack[-1] = "Neutral"
0x850: Call2 0x9bd

0x851: Pop(1)
0x852: Return(); Pop(0)

0x853: PushEmpty(bool, bool)
0x854: @ IsOverrideActive(Stack[-1])
0x855: Pop(0)
0x856: Pop(0); Push((bool) Stack[-1] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x858: EventDisable(0)
0x859: PushEmpty()
0x85a: Call2 0x8b7

0x85b: Pop(0)
0x85c: PushEmpty(bool, object)
0x85d: Stack[-1] = Stack[-5]
0x85e: Call2 0x8ce

0x85f: Pop(2)
0x860: EventEnable(0)
0x861: PushEmpty(object)
0x862: Stack[-1] = Stack[-4]
0x863: Call2 0xb68

0x864: Pop(1)
0x865: PushEmpty(string)
0x866: Stack[-1] = "Neutral"
0x867: Call2 0x9bd

0x868: Pop(1)
0x869: PushEmpty()
0x86a: Call2 0x801

0x86b: Pop(0)
0x86c: PushEmpty()
0x86d: Call2 0x7f8

0x86e: Pop(0)
0x86f: Return(); Pop(2)

0x870: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x871: @ WaitForAnimEnd()
0x872: Pop(0)
0x873: PushEmpty(bool)
0x874: Call2 0x8d7

0x875: Pop(0)
0x876: Pop(1); Push((bool) Stack[-1] == 0)
0x877: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x878: Return(); Pop(12)

0x879: PushEmpty(int)
0x87a: Call2 0xa4e

0x87b: Stack[-7] = Stack[-1]
0x87c: Pop(1)
0x87d: Stack[-5] = (int) 0
0x87e: PushEmpty(bool)
0x87f: Stack[-1] = (bool) 0
0x880: Push((int) 5)
0x881: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x883: PushEmpty(bool)
0x884: Call2 0x8d7

0x885: Pop(0)
0x886: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x887: Stack[-1] = (bool) 1
0x888: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x889: Pop(0); Push((bool) Stack[-6] == 0)
0x88a: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x88b: Push((int) 3)
0x88c: @ Sleep(Stack[-1], Stack[-5])
0x88d: Pop(1)
0x88e: Pop(0); Push((bool) Stack[-4] == 0)
0x88f: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x890: GOTO 0x8b2

0x891: GOTO 0x8a7

0x892: @ irand(Stack[-3], Stack[-6])
0x893: Pop(0)
0x894: Push((int) 5)
0x895: @ irand(Stack[-3], Stack[-1])
0x896: Pop(1)
0x897: Push((int) 0)
0x898: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x899: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x89a: Stack[-3] = (int) 0
0x89b: Push("all")
0x89c: PushEmpty(string, int)
0x89d: Stack[-1] = Stack[-6]
0x89e: Call2 0xa47

0x89f: Pop(1)
0x8a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a1: Pop(2)
0x8a2: @ WaitForAnimEnd(Stack[-1])
0x8a3: Pop(0)
0x8a4: Pop(0); Push((bool) Stack[-1] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a6: GOTO 0x8b2

0x8a7: PushEmpty(bool)
0x8a8: Call2 0x8b5

0x8a9: Pop(0)
0x8aa: Pop(1); Push((bool) Stack[-1] == 0)
0x8ab: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ac: GOTO 0x8b2

0x8ad: @ ResetAAS()
0x8ae: Pop(0)
0x8af: Push((int) 1)
0x8b0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x8b1: GOTO 0x87e

0x8b2: @ ResetAAS()
0x8b3: Pop(0)
0x8b4: Return(); Pop(12)

0x8b5: Stack[-1] = (bool) 1
0x8b6: Return(); Pop(0)

0x8b7: @ StopAnimation()
0x8b8: Pop(0)
0x8b9: @ StopGroup0()
0x8ba: Pop(0)
0x8bb: Return(); Pop(0)

0x8bc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8bd: @ GetPosition(Stack[-3])
0x8be: Pop(0)
0x8bf: @@ GetPosition(Stack[-2])
0x8c0: Pop(0)
0x8c1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8c2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8c3: Return(); Pop(6)

0x8c4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8c5: @ GetPosition(Stack[-3])
0x8c6: Pop(0)
0x8c7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8c8: Push(CvectorIndex(Stack[-2], 0))
0x8c9: Push(CvectorIndex(Stack[-3], 2))
0x8ca: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8cb: Pop(2)
0x8cc: Stack[-8] = Stack[-1]
0x8cd: Return(); Pop(6)

0x8ce: PushEmpty(cvector, cvector)
0x8cf: @@ GetPosition(Stack[-1])
0x8d0: Pop(0)
0x8d1: PushEmpty(bool, cvector)
0x8d2: Stack[-1] = Stack[-3]
0x8d3: Call2 0x8c4

0x8d4: Stack[-6] = Stack[-2]
0x8d5: Pop(2)
0x8d6: Return(); Pop(2)

0x8d7: PushEmpty(bool, bool)
0x8d8: @ IsLoaded(Stack[-1])
0x8d9: Pop(0)
0x8da: Stack[-3] = Stack[-1]
0x8db: Return(); Pop(2)

0x8dc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8dd: @@ GetPosition(Stack[-8])
0x8de: Pop(0)
0x8df: @@ GetEyesHeight(Stack[-9])
0x8e0: Pop(0)
0x8e1: Push(CvectorIndex(Stack[-8], 1))
0x8e2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8e3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8e4: @ GetPosition(Stack[-7])
0x8e5: Pop(0)
0x8e6: @ GetEyesHeight(Stack[-9])
0x8e7: Pop(0)
0x8e8: Push(CvectorIndex(Stack[-7], 1))
0x8e9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8ea: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8eb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8ec: Push(CvectorIndex(Stack[-6], 1))
0x8ed: Stack[-1] = (int) 0
0x8ee: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8ef: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8f0: Pop(1); Push(Sqrt(Stack[-1]))
0x8f1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8f2: Stack[-5] = -Stack[-6]; Pop(0);
0x8f3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8f4: PushEmpty(cvector, cvector)
0x8f5: Push(CVector(0.0, 1.0, 0.0))
0x8f6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8f7: Call2 0x9f8

0x8f8: Pop(1)
0x8f9: Push((int) 25)
0x8fa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8fc: Push(CVector(0.0, 10.0, 0.0))
0x8fd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8fe: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8ff: @ IsOverrideActive(Stack[-2])
0x900: Pop(0)
0x901: Push(Stack[-2])
0x902: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x903: Stack[-21] = (bool) 0
0x904: Return(); Pop(18)

0x905: @ StopWorld()
0x906: Pop(0)
0x907: Push((bool) 1)
0x908: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x909: Pop(1)
0x90a: Push(CvectorIndex(Stack[-4], 0))
0x90b: Push(CvectorIndex(Stack[-5], 2))
0x90c: @ Rotate(Stack[-2], Stack[-1])
0x90d: Pop(2)
0x90e: PushEmpty(bool)
0x90f: Call2 0xb66

0x910: Pop(0)
0x911: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x912: GOTO 0x91b

0x913: Push("head")
0x914: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x915: Pop(1)
0x916: Push(Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x918: Push("head")
0x919: @ LookAsyncCamera(Stack[-1])
0x91a: Pop(1)
0x91b: @ CameraWaitForPlayFinish()
0x91c: Pop(0)
0x91d: @ ResumeWorld()
0x91e: Pop(0)
0x91f: Stack[-21] = (bool) 1
0x920: Return(); Pop(18)

0x921: PushEmpty(bool, bool)
0x922: Push((bool) 1)
0x923: @ CameraSwitchToNormal(Stack[-1])
0x924: Pop(1)
0x925: PushEmpty(bool)
0x926: Call2 0xb66

0x927: Pop(0)
0x928: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x929: GOTO 0x932

0x92a: Push("head")
0x92b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x92c: Pop(1)
0x92d: Push(Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92f: Push("head")
0x930: @ UnlookAsync(Stack[-1])
0x931: Pop(1)
0x932: Return(); Pop(2)

0x933: PushEmpty(int, int, int, int)
0x934: Push("voice_common")
0x935: @ GetVariable(Stack[-1], Stack[-3])
0x936: Pop(1)
0x937: Push(Stack[-2])
0x938: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x939: PushEmpty(bool, object)
0x93a: Stack[-1] = Stack[-7]
0x93b: Call2 0x96d

0x93c: Pop(1)
0x93d: Pop(1); Push((bool) Stack[-1] == 0)
0x93e: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x93f: PushEmpty(bool, object)
0x940: Stack[-1] = Stack[-7]
0x941: Call2 0x992

0x942: Pop(1)
0x943: Pop(1); Push((bool) Stack[-1] == 0)
0x944: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x945: Stack[-6] = (bool) 0
0x946: Return(); Pop(4)

0x947: Push((int) 2)
0x948: @ irand(Stack[-2], Stack[-1])
0x949: Pop(1)
0x94a: Push(Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x94c: Push("voice_common")
0x94d: Push((int) 1)
0x94e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x94f: Push((int) 3)
0x950: Pop(2); Push(Stack[-2] % Stack[-1]);
0x951: @ SetVariable(Stack[-2], Stack[-1])
0x952: Pop(2)
0x953: GOTO 0x958

0x954: Push("voice_common")
0x955: Push((int) 0)
0x956: @ SetVariable(Stack[-2], Stack[-1])
0x957: Pop(2)
0x958: GOTO 0x96b

0x959: PushEmpty(bool, object)
0x95a: Stack[-1] = Stack[-7]
0x95b: Call2 0x992

0x95c: Pop(1)
0x95d: Pop(1); Push((bool) Stack[-1] == 0)
0x95e: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x95f: PushEmpty(bool, object)
0x960: Stack[-1] = Stack[-7]
0x961: Call2 0x96d

0x962: Pop(1)
0x963: Pop(1); Push((bool) Stack[-1] == 0)
0x964: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x965: Stack[-6] = (bool) 0
0x966: Return(); Pop(4)

0x967: Push("voice_common")
0x968: Push((int) 1)
0x969: @ SetVariable(Stack[-2], Stack[-1])
0x96a: Pop(2)
0x96b: Stack[-6] = (bool) 1
0x96c: Return(); Pop(4)

0x96d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x96e: Stack[-5] = "c"
0x96f: Stack[-4] = (int) 0
0x970: Push((int) 1)
0x971: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x972: Push((int) 1)
0x973: Pop(1); Push(Stack[-5] + Stack[-1]);
0x974: Pop(1); Push(Stack[-6] + Stack[-1]);
0x975: @@ HasProperty(Stack[-1], Stack[-4])
0x976: Pop(1)
0x977: Pop(0); Push((bool) Stack[-3] == 0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: GOTO 0x97d

0x97a: Push((int) 1)
0x97b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x97c: GOTO 0x970

0x97d: Pop(0); Push((bool) Stack[-4] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x981; Pop(1)

0x97f: Stack[-12] = (bool) 0
0x980: Return(); Pop(10)

0x981: Stack[-2] = (int) 0
0x982: Push((int) 1)
0x983: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x985: @ irand(Stack[-2], Stack[-4])
0x986: Pop(0)
0x987: Push((int) 1)
0x988: Pop(1); Push(Stack[-3] + Stack[-1]);
0x989: Pop(1); Push(Stack[-6] + Stack[-1]);
0x98a: @@ GetProperty(Stack[-1], Stack[-2])
0x98b: Pop(1)
0x98c: PushEmpty(bool, string)
0x98d: Stack[-1] = Stack[-3]
0x98e: Call2 0x9dc

0x98f: Stack[-14] = Stack[-2]
0x990: Pop(2)
0x991: Return(); Pop(10)

0x992: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x993: Push("d")
0x994: PushEmpty(int)
0x995: Call2 0xa38

0x996: Pop(0)
0x997: Pop(2); Push(Stack[-2] + Stack[-1]);
0x998: Push("m")
0x999: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x99a: Stack[-4] = (int) 0
0x99b: Push((int) 1)
0x99c: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x99d: Push((int) 1)
0x99e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x99f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9a0: @@ HasProperty(Stack[-1], Stack[-4])
0x9a1: Pop(1)
0x9a2: Pop(0); Push((bool) Stack[-3] == 0)
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a4: GOTO 0x9a8

0x9a5: Push((int) 1)
0x9a6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9a7: GOTO 0x99b

0x9a8: Pop(0); Push((bool) Stack[-4] == 0)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9aa: Stack[-12] = (bool) 0
0x9ab: Return(); Pop(10)

0x9ac: Stack[-2] = (int) 0
0x9ad: Push((int) 1)
0x9ae: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b0: @ irand(Stack[-2], Stack[-4])
0x9b1: Pop(0)
0x9b2: Push((int) 1)
0x9b3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x9b4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9b5: @@ GetProperty(Stack[-1], Stack[-2])
0x9b6: Pop(1)
0x9b7: PushEmpty(bool, string)
0x9b8: Stack[-1] = Stack[-3]
0x9b9: Call2 0x9dc

0x9ba: Stack[-14] = Stack[-2]
0x9bb: Pop(2)
0x9bc: Return(); Pop(10)

0x9bd: PushEmpty(bool, float, float, bool, float, float)
0x9be: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9bf: Pop(0)
0x9c0: Push(Stack[-3])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x9c3: Pop(0)
0x9c4: Push((bool) 0)
0x9c5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9c6: Pop(1)
0x9c7: GOTO 0x9cc

0x9c8: Push("Can't find lsh animation : ")
0x9c9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9ca: @ Trace(Stack[-1])
0x9cb: Pop(1)
0x9cc: Return(); Pop(6)

0x9cd: PushEmpty(bool, float, float, bool, float, float)
0x9ce: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9cf: Pop(0)
0x9d0: Push(Stack[-3])
0x9d1: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9d3: Pop(0)
0x9d4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9d5: Pop(0)
0x9d6: GOTO 0x9db

0x9d7: Push("Can't find lsh animation : ")
0x9d8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9d9: @ Trace(Stack[-1])
0x9da: Pop(1)
0x9db: Return(); Pop(6)

0x9dc: PushEmpty(bool, bool)
0x9dd: PushEmpty(bool)
0x9de: Call2 0xb66

0x9df: Pop(0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9e2: Pop(0)
0x9e3: Push(Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e5: @ lshPlaySpeech(Stack[-3])
0x9e6: Pop(0)
0x9e7: Stack[-4] = (bool) 1
0x9e8: Return(); Pop(2)

0x9e9: Stack[-4] = (bool) 0
0x9ea: Return(); Pop(2)

0x9eb: PushEmpty(bool)
0x9ec: Call2 0xb66

0x9ed: Pop(0)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ef: @ lshStopSpeech()
0x9f0: Pop(0)
0x9f1: Return(); Pop(0)

0x9f2: PushEmpty(object, object)
0x9f3: @ self(Stack[-1])
0x9f4: Pop(0)
0x9f5: Stack[-3] = Stack[-1]
0x9f6: Return(); Pop(2)

0x9f7: Stack[-1] = 0
0x9f8: PushEmpty(float, float)
0x9f9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9fa: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9fb: Push((float)0.0)
0x9fc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9fe: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9ff: Return(); Pop(2)

0xa00: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa01: Return(); Pop(2)

0xa02: PushEmpty(int, int)
0xa03: @ GetVariable(Stack[-3], Stack[-1])
0xa04: Pop(0)
0xa05: Stack[-4] = Stack[-1]
0xa06: Return(); Pop(2)

0xa07: PushEmpty(object, object)
0xa08: @ CreateIntVector(Stack[-1])
0xa09: Pop(0)
0xa0a: @@ add(Stack[-4])
0xa0b: Pop(0)
0xa0c: @@ add(Stack[-3])
0xa0d: Pop(0)
0xa0e: Push((int) 3)
0xa0f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa10: Pop(1)
0xa11: Return(); Pop(2)

0xa12: Stack[-1] = 0
0xa13: PushEmpty(int, int, bool, int, int, bool)
0xa14: @@ GetItemID(Stack[-3])
0xa15: Pop(0)
0xa16: Push("Category")
0xa17: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa18: Pop(1)
0xa19: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa1a: Pop(0)
0xa1b: Pop(0); Push((bool) Stack[-1] == 0)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1d: @@ DropItems(Stack[-8], Stack[-7])
0xa1e: Pop(0)
0xa1f: GOTO 0xa25

0xa20: PushEmpty(int, int)
0xa21: Stack[-2] = Stack[-5]
0xa22: Stack[-1] = Stack[-9]
0xa23: Call2 0xa07

0xa24: Pop(2)
0xa25: Return(); Pop(6)

0xa26: PushEmpty(object, object)
0xa27: @ CreateInvItem(Stack[-1])
0xa28: Pop(0)
0xa29: @@ SetItemName(Stack[-4])
0xa2a: Pop(0)
0xa2b: PushEmpty(object, object, int)
0xa2c: Stack[-3] = Stack[-8]
0xa2d: Stack[-2] = Stack[-4]
0xa2e: Stack[-1] = Stack[-6]
0xa2f: Call2 0xa13

0xa30: Pop(3)
0xa31: Return(); Pop(2)

0xa32: Stack[-1] = 0
0xa33: PushEmpty(float, float)
0xa34: @ GetGameTime(Stack[-1])
0xa35: Pop(0)
0xa36: Stack[-3] = Stack[-1]
0xa37: Return(); Pop(2)

0xa38: PushEmpty(float, float)
0xa39: @ GetGameTime(Stack[-1])
0xa3a: Pop(0)
0xa3b: Push((int) 1)
0xa3c: PushEmpty(int)
0xa3d: Push((int) 24)
0xa3e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa3f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa40: Return(); Pop(2)

0xa41: PushEmpty()
0xa42: PushEmpty(int)
0xa43: Call2 0xa38

0xa44: Pop(0)
0xa45: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa46: Return(); Pop(0)

0xa47: PushEmpty(string, string)
0xa48: Stack[-1] = "idle"
0xa49: Push(Stack[-3])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa4b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa4c: Stack[-4] = Stack[-1]
0xa4d: Return(); Pop(2)

0xa4e: PushEmpty(int, bool, int, bool)
0xa4f: Stack[-2] = (int) 0
0xa50: Push("all")
0xa51: PushEmpty(string, int)
0xa52: Stack[-1] = Stack[-5]
0xa53: Call2 0xa47

0xa54: Pop(1)
0xa55: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa56: Pop(2)
0xa57: Pop(0); Push((bool) Stack[-1] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa59: GOTO 0xa5d

0xa5a: Push((int) 1)
0xa5b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa5c: GOTO 0xa50

0xa5d: Stack[-5] = Stack[-2]
0xa5e: Return(); Pop(4)

0xa5f: PushEmpty()
0xa60: Push("k1q03")
0xa61: Push((int) 2)
0xa62: @ SetVariable(Stack[-2], Stack[-1])
0xa63: Pop(2)
0xa64: PushEmpty()
0xa65: Call2 0xad8

0xa66: Pop(0)
0xa67: Return(); Pop(0)

0xa68: PushEmpty()
0xa69: Push("k4q01")
0xa6a: Push((int) 3)
0xa6b: @ SetVariable(Stack[-2], Stack[-1])
0xa6c: Pop(2)
0xa6d: PushEmpty()
0xa6e: Call2 0xae5

0xa6f: Pop(0)
0xa70: Return(); Pop(0)

0xa71: PushEmpty()
0xa72: Push("k10q01KnowAboutRubin")
0xa73: Push((int) 1)
0xa74: @ SetVariable(Stack[-2], Stack[-1])
0xa75: Pop(2)
0xa76: Return(); Pop(0)

0xa77: PushEmpty(object, object)
0xa78: PushEmpty(object)
0xa79: Call2 0xb1b

0xa7a: Stack[-2] = Stack[-1]
0xa7b: Pop(1)
0xa7c: Push("k10q01NotkinGotoRubin")
0xa7d: Push("pt_map_rubin")
0xa7e: Push((int) 3)
0xa7f: Push((int) 530195)
0xa80: PushEmpty(float)
0xa81: Call2 0xa33

0xa82: Pop(0)
0xa83: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa84: Pop(5)
0xa85: Return(); Pop(2)

0xa86: Stack[-1] = 0
0xa87: PushEmpty()
0xa88: Push("playsound")
0xa89: Push("giveitem")
0xa8a: @ TriggerWorld(Stack[-2], Stack[-1])
0xa8b: Pop(2)
0xa8c: Return(); Pop(0)

0xa8d: PushEmpty()
0xa8e: Push("Gun is given")
0xa8f: @ Trace(Stack[-1])
0xa90: Pop(1)
0xa91: PushEmpty(object, string, int)
0xa92: Stack[-3] = Stack[-5]
0xa93: Stack[-2] = "Gun"
0xa94: Stack[-1] = (int) 1
0xa95: Call2 0xa26

0xa96: Pop(3)
0xa97: Return(); Pop(0)

0xa98: PushEmpty()
0xa99: PushEmpty(object, string, float)
0xa9a: PushEmpty(object)
0xa9b: Call2 0xb1b

0xa9c: Stack[-4] = Stack[-1]
0xa9d: Pop(1)
0xa9e: Stack[-2] = "pt_map_rubin"
0xa9f: Stack[-1] = (int) 2
0xaa0: Call2 0xb2c

0xaa1: Pop(3)
0xaa2: PushEmpty(object)
0xaa3: Call2 0xb1b

0xaa4: Pop(0)
0xaa5: @@ ShowMap(Stack[-1])
0xaa6: Pop(1)
0xaa7: Return(); Pop(0)

0xaa8: PushEmpty()
0xaa9: PushEmpty(int, string)
0xaaa: Stack[-1] = "k1q01DobermanDead"
0xaab: Call2 0xa02

0xaac: Pop(1)
0xaad: Push((int) 0)
0xaae: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xaaf: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xab0: Stack[-2] = (bool) 1
0xab1: Return(); Pop(0)

0xab2: Stack[-2] = (bool) 0
0xab3: Return(); Pop(0)

0xab4: PushEmpty()
0xab5: PushEmpty(int, string)
0xab6: Stack[-1] = "k1q03"
0xab7: Call2 0xa02

0xab8: Pop(1)
0xab9: Push((int) 1)
0xaba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xabc: Stack[-2] = (bool) 1
0xabd: Return(); Pop(0)

0xabe: Stack[-2] = (bool) 0
0xabf: Return(); Pop(0)

0xac0: PushEmpty()
0xac1: PushEmpty(int, string)
0xac2: Stack[-1] = "k4q01"
0xac3: Call2 0xa02

0xac4: Pop(1)
0xac5: Push((int) 2)
0xac6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xac7: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac8: Stack[-2] = (bool) 1
0xac9: Return(); Pop(0)

0xaca: Stack[-2] = (bool) 0
0xacb: Return(); Pop(0)

0xacc: PushEmpty()
0xacd: PushEmpty(int, string)
0xace: Stack[-1] = "k10q01KnowAboutRubin"
0xacf: Call2 0xa02

0xad0: Pop(1)
0xad1: Push((int) 0)
0xad2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xad3: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad4: Stack[-2] = (bool) 1
0xad5: Return(); Pop(0)

0xad6: Stack[-2] = (bool) 0
0xad7: Return(); Pop(0)

0xad8: PushEmpty(object, object)
0xad9: Push((int) 335)
0xada: Push((int) 2)
0xadb: Push((int) 524802)
0xadc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xadd: Pop(3)
0xade: PushEmpty(bool, object, int)
0xadf: Stack[-2] = Stack[-4]
0xae0: Stack[-1] = (int) 333
0xae1: Call2 0xaff

0xae2: Pop(3)
0xae3: Return(); Pop(2)

0xae4: Stack[-1] = 0
0xae5: PushEmpty(object, object)
0xae6: Push((int) 371)
0xae7: Push((int) 1)
0xae8: Push((int) 525728)
0xae9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaea: Pop(3)
0xaeb: PushEmpty(bool, object, int)
0xaec: Stack[-2] = Stack[-4]
0xaed: Stack[-1] = (int) 368
0xaee: Call2 0xaff

0xaef: Pop(3)
0xaf0: Return(); Pop(2)

0xaf1: Stack[-1] = 0
0xaf2: PushEmpty(object, object)
0xaf3: @ GetDiaryRoot(Stack[-1])
0xaf4: Pop(0)
0xaf5: Pop(0); Push((bool) Stack[-1] == 0)
0xaf6: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf7: Push("Can't retrieve diary root")
0xaf8: @ Trace(Stack[-1])
0xaf9: Pop(1)
0xafa: Stack[-3] = (bool) 0
0xafb: Return(); Pop(2)

0xafc: Stack[-3] = Stack[-1]
0xafd: Return(); Pop(2)

0xafe: Stack[-1] = 0
0xaff: PushEmpty(object, object, int, object, object, int)
0xb00: PushEmpty(object)
0xb01: Call2 0xaf2

0xb02: Stack[-4] = Stack[-1]
0xb03: Pop(1)
0xb04: @@ Find(Stack[-7], Stack[-2])
0xb05: Pop(0)
0xb06: Pop(0); Push((bool) Stack[-2] == 0)
0xb07: IF (Stack[-1] == 0) GOTO 0xb0e; Pop(1)

0xb08: Push("Can't find diary parent with id: ")
0xb09: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb0a: @ Trace(Stack[-1])
0xb0b: Pop(1)
0xb0c: Stack[-9] = (bool) 0
0xb0d: Return(); Pop(6)

0xb0e: @@ AddChild(Stack[-8])
0xb0f: Pop(0)
0xb10: Push((int) 7)
0xb11: @ SendWorldWndMessage(Stack[-1])
0xb12: Pop(1)
0xb13: @@ GetCategory(Stack[-1])
0xb14: Pop(0)
0xb15: @ SetDiarySection(Stack[-1])
0xb16: Pop(0)
0xb17: Stack[-9] = (bool) 0
0xb18: Return(); Pop(6)

0xb19: Stack[-2] = 0
0xb1a: Stack[-3] = 0
0xb1b: PushEmpty(object, object, object, object)
0xb1c: @ GetMainOutdoorScene(Stack[-2])
0xb1d: Pop(0)
0xb1e: Pop(0); Push((bool) Stack[-2] == 0)
0xb1f: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb20: Push("Can't find main outdoor scene")
0xb21: @ Trace(Stack[-1])
0xb22: Pop(1)
0xb23: Stack[-1] = 0
0xb24: Stack[-5] = Stack[-1]
0xb25: Return(); Pop(4)

0xb26: @@ GetMap(Stack[-1])
0xb27: Pop(0)
0xb28: Stack[-5] = Stack[-1]
0xb29: Return(); Pop(4)

0xb2a: Stack[-1] = 0
0xb2b: Stack[-2] = 0
0xb2c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xb2d: @ GetMainOutdoorScene(Stack[-2])
0xb2e: Pop(0)
0xb2f: Pop(0); Push((bool) Stack[-2] == 0)
0xb30: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb31: Push("Can't find main outdoor scene")
0xb32: @ Trace(Stack[-1])
0xb33: Pop(1)
0xb34: Return(); Pop(8)

0xb35: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xb36: Pop(0)
0xb37: Pop(0); Push((bool) Stack[-1] == 0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb39: Push("Warning: outdoor scene locator ")
0xb3a: Pop(1); Push(Stack[-1] + Stack[-11]);
0xb3b: Push(" doesnt exist")
0xb3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb3d: @ Trace(Stack[-1])
0xb3e: Pop(1)
0xb3f: @@ GetMap(Stack[-11])
0xb40: Pop(0)
0xb41: Pop(0); Push((bool) Stack[-11] == 0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb43: Push("Can't find map")
0xb44: @ Trace(Stack[-1])
0xb45: Pop(1)
0xb46: Return(); Pop(8)

0xb47: Push(CvectorIndex(Stack[-4], 0))
0xb48: Push(CvectorIndex(Stack[-5], 2))
0xb49: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xb4a: Pop(2)
0xb4b: Return(); Pop(8)

0xb4c: Stack[-2] = 0
0xb4d: PushEmpty(int, int)
0xb4e: Push("branch")
0xb4f: @ GetVariable(Stack[-1], Stack[-2])
0xb50: Pop(1)
0xb51: Push((int) 0)
0xb52: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb53: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb54: Stack[-3] = (int) 1
0xb55: Return(); Pop(2)

0xb56: GOTO 0xb5c

0xb57: Push((int) 1)
0xb58: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb59: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb5a: Stack[-3] = (int) 2
0xb5b: Return(); Pop(2)

0xb5c: Stack[-3] = (int) 3
0xb5d: Return(); Pop(2)

0xb5e: Stack[-1] = (int) 515548
0xb5f: Return(); Pop(0)

0xb60: Stack[-1] = (int) 502873
0xb61: Return(); Pop(0)

0xb62: Stack[-1] = "ui/NPC_Notkin.png"
0xb63: Return(); Pop(0)

0xb64: Stack[-1] = "ui/NPC_Notkin_b.png"
0xb65: Return(); Pop(0)

0xb66: Stack[-1] = (bool) 1
0xb67: Return(); Pop(0)

0xb68: PushEmpty()
0xb69: Push(GlobalVars[1])
0xb6a: Pop(1); Push((bool) Stack[-1] == 0)
0xb6b: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb6c: PushEmpty(int, object)
0xb6d: Stack[-1] = Stack[-3]
0xb6e: Push(-2, 1); TaskCall(2)
0xb6f: Call2 0x1f7

0xb70: Pop(-2, 1); TaskReturn
0xb71: Pop(2)
0xb72: Push(GlobalVars[1])
0xb73: Stack[-1] = (bool) 1
0xb74: GlobalVars[1] = Stack[-1]; Pop(1)
0xb75: PushEmpty(bool, int)
0xb76: Stack[-1] = (int) 1
0xb77: Call2 0xa41

0xb78: Pop(1)
0xb79: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7a: PushEmpty(int, object)
0xb7b: Stack[-1] = Stack[-3]
0xb7c: Push(-2, 1); TaskCall(0)
0xb7d: Call2 0x0

0xb7e: Pop(-2, 1); TaskReturn
0xb7f: Pop(2)
0xb80: Return(); Pop(0)

0xb81: PushEmpty(bool, int)
0xb82: Stack[-1] = (int) 4
0xb83: Call2 0xa41

0xb84: Pop(1)
0xb85: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb86: PushEmpty(int, object)
0xb87: Stack[-1] = Stack[-3]
0xb88: Push(-2, 1); TaskCall(4)
0xb89: Call2 0x2c2

0xb8a: Pop(-2, 1); TaskReturn
0xb8b: Pop(2)
0xb8c: Return(); Pop(0)

0xb8d: PushEmpty(bool, int)
0xb8e: Stack[-1] = (int) 10
0xb8f: Call2 0xa41

0xb90: Pop(1)
0xb91: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb92: PushEmpty(int, object)
0xb93: Stack[-1] = Stack[-3]
0xb94: Push(-2, 1); TaskCall(6)
0xb95: Call2 0x44d

0xb96: Pop(-2, 1); TaskReturn
0xb97: Pop(2)
0xb98: Return(); Pop(0)

0xb99: PushEmpty(bool, int)
0xb9a: Stack[-1] = (int) 12
0xb9b: Call2 0xa41

0xb9c: Pop(1)
0xb9d: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xb9e: PushEmpty(int, object)
0xb9f: Stack[-1] = Stack[-3]
0xba0: Push(-2, 1); TaskCall(8)
0xba1: Call2 0x5eb

0xba2: Pop(-2, 1); TaskReturn
0xba3: Pop(2)
0xba4: Return(); Pop(0)

0xba5: PushEmpty(int, object)
0xba6: Stack[-1] = Stack[-3]
0xba7: Push(-2, 1); TaskCall(10)
0xba8: Call2 0x6ee

0xba9: Pop(-2, 1); TaskReturn
0xbaa: Pop(2)
0xbab: Return(); Pop(0)

