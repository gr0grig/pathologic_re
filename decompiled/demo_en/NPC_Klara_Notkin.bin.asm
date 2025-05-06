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
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x7a5
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
		EVENT_11 Op = 0x4f9 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x67d Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x77b Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x7f1 Vars = (int)
		EVENT_6 Op = 0x817 Vars = ()
		EVENT_5 Op = 0x826 Vars = ()
		EVENT_45 Op = 0x833 Vars = (bool)
		EVENT_0 Op = 0x83f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x8c8

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xb4a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xb48

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xb4c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xb4e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xb37

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
0x31: Call2 0x9dc

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x91d

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
0x48: Call2 0x90c

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
0x62: Call2 0xa9e

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
0x78: Call2 0xb50

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x9a7

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
0x97: Call2 0xb50

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
0xa7: Call2 0x9b7

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x9d5

0xb0: Pop(0)
0xb1: Push((int) 26110)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0xa49

0xb8: Pop(2)
0xb9: Push((int) 28176)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0xa49

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0xa77

0xc5: Pop(2)
0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call2 0xa71

0xca: Pop(2)
0xcb: Push((int) 40900)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0xa49

0xd2: Pop(2)
0xd3: Push((int) 40901)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0xa49

0xda: Pop(2)
0xdb: Push((int) 40902)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0xa49

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
0xf1: Call2 0xa9e

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
0x145: Call2 0xa92

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
0x1ec: Call2 0xb50

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
0x1fc: Call2 0x8c8

0x1fd: Pop(2)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-10] = (int) -2
0x201: Return(); Pop(8)

0x202: @ CreateDialog(Stack[-4])
0x203: Pop(0)
0x204: PushEmpty(int)
0x205: Call2 0xb4a

0x206: Pop(0)
0x207: @@ SetNPCName(Stack[-1])
0x208: Pop(1)
0x209: PushEmpty(int)
0x20a: Call2 0xb48

0x20b: Pop(0)
0x20c: @@ SetNPCDescription(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(string)
0x20f: Call2 0xb4c

0x210: Pop(0)
0x211: @@ SetPhoto(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0xb4e

0x215: Pop(0)
0x216: @@ SetPhoto2(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(int)
0x219: Call2 0xb37

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
0x228: Call2 0x9dc

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Call2 0x91d

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
0x23f: Call2 0x90c

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
0x265: Call2 0xb50

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: @ lshWaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: PushEmpty(string)
0x26e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26f: Call2 0x9a7

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
0x284: Call2 0xb50

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
0x294: Call2 0x9b7

0x295: Pop(2)
0x296: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push((int) 1)
0x29a: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x9d5

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
0x2b7: Call2 0xb50

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
0x2c7: Call2 0x8c8

0x2c8: Pop(2)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-10] = (int) -2
0x2cc: Return(); Pop(8)

0x2cd: @ CreateDialog(Stack[-4])
0x2ce: Pop(0)
0x2cf: PushEmpty(int)
0x2d0: Call2 0xb4a

0x2d1: Pop(0)
0x2d2: @@ SetNPCName(Stack[-1])
0x2d3: Pop(1)
0x2d4: PushEmpty(int)
0x2d5: Call2 0xb48

0x2d6: Pop(0)
0x2d7: @@ SetNPCDescription(Stack[-1])
0x2d8: Pop(1)
0x2d9: PushEmpty(string)
0x2da: Call2 0xb4c

0x2db: Pop(0)
0x2dc: @@ SetPhoto(Stack[-1])
0x2dd: Pop(1)
0x2de: PushEmpty(string)
0x2df: Call2 0xb4e

0x2e0: Pop(0)
0x2e1: @@ SetPhoto2(Stack[-1])
0x2e2: Pop(1)
0x2e3: PushEmpty(int)
0x2e4: Call2 0xb37

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
0x2f3: Call2 0x9dc

0x2f4: Stack[-2] = Stack[-1]
0x2f5: Pop(1)
0x2f6: Call2 0x91d

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
0x30a: Call2 0x90c

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
0x324: Call2 0xaaa

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
0x33a: Call2 0xb50

0x33b: Pop(0)
0x33c: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x33d: @ lshWaitForAnimEnd()
0x33e: Pop(0)
0x33f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: GOTO 0x347

0x342: PushEmpty(string)
0x343: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x344: Call2 0x9a7

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
0x359: Call2 0xb50

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
0x369: Call2 0x9b7

0x36a: Pop(2)
0x36b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x36c: Return(); Pop(0)

0x36d: PushEmpty()
0x36e: Push((int) 1)
0x36f: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x370: PushEmpty()
0x371: Call2 0x9d5

0x372: Pop(0)
0x373: Push((int) 27017)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x376: PushEmpty(object, object)
0x377: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x378: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x379: Call2 0xa52

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
0x389: Call2 0xaaa

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
0x39e: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

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
0x3ad: Return(); Pop(0)

0x3ae: Push((int) 44778)
0x3af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b1: Push((int) 44781)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Neutral"
0x3b6: Call2 0x357

0x3b7: Pop(1)
0x3b8: Push((int) 542407)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 542408)
0x3be: Push((int) 27016)
0x3bf: Push((int) 44782)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 44776)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "Pride"
0x3c8: Call2 0x357

0x3c9: Pop(1)
0x3ca: Push((int) 542402)
0x3cb: @@ SetMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ ClearReplies()
0x3ce: Pop(0)
0x3cf: Push((int) 542403)
0x3d0: Push((int) 27016)
0x3d1: Push((int) 44777)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Push((int) 542406)
0x3d5: Push((int) 27016)
0x3d6: Push((int) 44780)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Return(); Pop(0)

0x3da: Push((int) 27016)
0x3db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3dd: PushEmpty(string)
0x3de: Stack[-1] = "Think"
0x3df: Call2 0x357

0x3e0: Pop(1)
0x3e1: Push((int) 525693)
0x3e2: @@ SetMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ ClearReplies()
0x3e5: Pop(0)
0x3e6: Push((int) 542409)
0x3e7: Push((int) 44786)
0x3e8: Push((int) 44785)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Push((int) 542414)
0x3ec: Push((int) 30672)
0x3ed: Push((int) 44790)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: Return(); Pop(0)

0x3f1: Push((int) 44786)
0x3f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Smile"
0x3f6: Call2 0x357

0x3f7: Pop(1)
0x3f8: Push((int) 542410)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 529219)
0x3fe: Push((int) 30672)
0x3ff: Push((int) 30671)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 542411)
0x403: Push((int) 44788)
0x404: Push((int) 44787)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Return(); Pop(0)

0x408: Push((int) 44788)
0x409: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x40b: PushEmpty(string)
0x40c: Stack[-1] = "Neutral"
0x40d: Call2 0x357

0x40e: Pop(1)
0x40f: Push((int) 542412)
0x410: @@ SetMessage(Stack[-1])
0x411: Pop(1)
0x412: @@ ClearReplies()
0x413: Pop(0)
0x414: Push((int) 542413)
0x415: Push((int) 30672)
0x416: Push((int) 44789)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: Return(); Pop(0)

0x41a: Push((int) 30672)
0x41b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x41d: PushEmpty(string)
0x41e: Stack[-1] = "Neutral"
0x41f: Call2 0x357

0x420: Pop(1)
0x421: Push((int) 529220)
0x422: @@ SetMessage(Stack[-1])
0x423: Pop(1)
0x424: @@ ClearReplies()
0x425: Pop(0)
0x426: Push((int) 525694)
0x427: Push((int) -1)
0x428: Push((int) 27017)
0x429: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x42d: PushEmpty(bool)
0x42e: Call2 0xb50

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x431: @ lshStopAnimation()
0x432: Pop(0)
0x433: GOTO 0x436

0x434: @ StopAnimation()
0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: GOTO 0x36e

0x438: Return(); Pop(0)

0x439: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x43a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x43b: PushEmpty(bool, object, float)
0x43c: Stack[-2] = Stack[-12]
0x43d: Stack[-1] = (float) 70.0
0x43e: Call2 0x8c8

0x43f: Pop(2)
0x440: Pop(1); Push((bool) Stack[-1] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-10] = (int) -2
0x443: Return(); Pop(8)

0x444: @ CreateDialog(Stack[-4])
0x445: Pop(0)
0x446: PushEmpty(int)
0x447: Call2 0xb4a

0x448: Pop(0)
0x449: @@ SetNPCName(Stack[-1])
0x44a: Pop(1)
0x44b: PushEmpty(int)
0x44c: Call2 0xb48

0x44d: Pop(0)
0x44e: @@ SetNPCDescription(Stack[-1])
0x44f: Pop(1)
0x450: PushEmpty(string)
0x451: Call2 0xb4c

0x452: Pop(0)
0x453: @@ SetPhoto(Stack[-1])
0x454: Pop(1)
0x455: PushEmpty(string)
0x456: Call2 0xb4e

0x457: Pop(0)
0x458: @@ SetPhoto2(Stack[-1])
0x459: Pop(1)
0x45a: PushEmpty(int)
0x45b: Call2 0xb37

0x45c: Pop(0)
0x45d: @@ SetPlayerName(Stack[-1])
0x45e: Pop(1)
0x45f: Stack[-2] = (int) -1
0x460: @ IsOverrideActive(Stack[-3])
0x461: Pop(0)
0x462: Push(Stack[-3])
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: Stack[-10] = (int) -2
0x465: Return(); Pop(8)

0x466: @ DoDialog(Stack[-4])
0x467: Pop(0)
0x468: PushEmpty(bool, object)
0x469: PushEmpty(object)
0x46a: Call2 0x9dc

0x46b: Stack[-2] = Stack[-1]
0x46c: Pop(1)
0x46d: Call2 0x91d

0x46e: Pop(2)
0x46f: PushEmpty(object, object)
0x470: Stack[-2] = Stack[-11]
0x471: Stack[-1] = Stack[-6]
0x472: Push(-2, 4); TaskCall(7)
0x473: Call2 0x48a

0x474: Pop(-2, 4); TaskReturn
0x475: Pop(2)
0x476: @@ IsDialogEnd(Stack[-1])
0x477: Pop(0)
0x478: Pop(0); Push((bool) Stack[-1] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47a: @ sync()
0x47b: Pop(0)
0x47c: @@ IsDialogEnd(Stack[-1])
0x47d: Pop(0)
0x47e: GOTO 0x478

0x47f: PushEmpty(object)
0x480: Stack[-1] = Stack[-10]
0x481: Call2 0x90c

0x482: Pop(1)
0x483: @ StopDialog(Stack[-4])
0x484: Pop(0)
0x485: @@ GetReturnValue(Stack[-2])
0x486: Pop(0)
0x487: Stack[-10] = Stack[-2]
0x488: Return(); Pop(8)

0x489: Stack[-4] = 0
0x48a: PushEmpty()
0x48b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x48c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x48d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x48e: Push((int) 1)
0x48f: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x492: Call2 0xab6

0x493: Pop(1)
0x494: Pop(1); Push((bool) Stack[-1] == 0)
0x495: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x496: PushEmpty(object, object)
0x497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x499: Call2 0xa5b

0x49a: Pop(2)
0x49b: PushEmpty(string)
0x49c: Stack[-1] = "Neutral"
0x49d: Call2 0x4e3

0x49e: Pop(1)
0x49f: Push((int) 527714)
0x4a0: @@ SetMessage(Stack[-1])
0x4a1: Pop(1)
0x4a2: @@ ClearReplies()
0x4a3: Pop(0)
0x4a4: Push((int) 527715)
0x4a5: Push((int) 29269)
0x4a6: Push((int) 29067)
0x4a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(3)
0x4a9: Push((int) 527928)
0x4aa: Push((int) 29269)
0x4ab: Push((int) 29279)
0x4ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ad: Pop(3)
0x4ae: GOTO 0x4c5

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = "Neutral"
0x4b1: Call2 0x4e3

0x4b2: Pop(1)
0x4b3: Push((int) 527716)
0x4b4: @@ SetMessage(Stack[-1])
0x4b5: Pop(1)
0x4b6: @@ ClearReplies()
0x4b7: Pop(0)
0x4b8: Push((int) 527717)
0x4b9: Push((int) -1)
0x4ba: Push((int) 29069)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: Push((int) 527918)
0x4be: Push((int) -1)
0x4bf: Push((int) 29268)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: GOTO 0x4c5

0x4c3: Return(); Pop(0)

0x4c4: GOTO 0x48e

0x4c5: PushEmpty(bool)
0x4c6: Call2 0xb50

0x4c7: Pop(0)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c9: @ lshWaitForAnimEnd()
0x4ca: Pop(0)
0x4cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4d3

0x4ce: PushEmpty(string)
0x4cf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4d0: Call2 0x9a7

0x4d1: Pop(1)
0x4d2: GOTO 0x4c9

0x4d3: GOTO 0x4e2

0x4d4: Push("all")
0x4d5: Push("idle")
0x4d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d7: Pop(2)
0x4d8: @ WaitForAnimEnd()
0x4d9: Pop(0)
0x4da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: GOTO 0x4e2

0x4dd: Push("all")
0x4de: Push("idle")
0x4df: @ PlayAnimation(Stack[-2], Stack[-1])
0x4e0: Pop(2)
0x4e1: GOTO 0x4d8

0x4e2: Return(); Pop(0)

0x4e3: PushEmpty()
0x4e4: PushEmpty(bool)
0x4e5: Call2 0xb50

0x4e6: Pop(0)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Return(); Pop(0)

0x4ea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Return(); Pop(0)

0x4ed: PushEmpty(string, bool)
0x4ee: Stack[-2] = Stack[-3]
0x4ef: Push("")
0x4f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-1] = (bool) 0
0x4f3: GOTO 0x4f5

0x4f4: Stack[-1] = (bool) 1
0x4f5: Call2 0x9b7

0x4f6: Pop(2)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4f8: Return(); Pop(0)

0x4f9: PushEmpty()
0x4fa: Push((int) 1)
0x4fb: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x4fc: PushEmpty()
0x4fd: Call2 0x9d5

0x4fe: Pop(0)
0x4ff: Push((int) 29286)
0x500: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x502: PushEmpty(object, object)
0x503: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x504: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x505: Call2 0xa61

0x506: Pop(2)
0x507: PushEmpty(object, object)
0x508: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x509: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x50a: Call2 0xa82

0x50b: Pop(2)
0x50c: Push((int) 29287)
0x50d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x50f: PushEmpty(object, object)
0x510: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x511: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x512: Call2 0xa61

0x513: Pop(2)
0x514: PushEmpty(object, object)
0x515: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x516: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x517: Call2 0xa82

0x518: Pop(2)
0x519: Push((int) 29066)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x51c: PushEmpty(bool, object)
0x51d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x51e: Call2 0xab6

0x51f: Pop(1)
0x520: Pop(1); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x522: PushEmpty(object, object)
0x523: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x524: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x525: Call2 0xa5b

0x526: Pop(2)
0x527: PushEmpty(string)
0x528: Stack[-1] = "Neutral"
0x529: Call2 0x4e3

0x52a: Pop(1)
0x52b: Push((int) 527714)
0x52c: @@ SetMessage(Stack[-1])
0x52d: Pop(1)
0x52e: @@ ClearReplies()
0x52f: Pop(0)
0x530: Push((int) 527715)
0x531: Push((int) 29269)
0x532: Push((int) 29067)
0x533: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x534: Pop(3)
0x535: Push((int) 527928)
0x536: Push((int) 29269)
0x537: Push((int) 29279)
0x538: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x539: Pop(3)
0x53a: Return(); Pop(0)

0x53b: PushEmpty(string)
0x53c: Stack[-1] = "Neutral"
0x53d: Call2 0x4e3

0x53e: Pop(1)
0x53f: Push((int) 527716)
0x540: @@ SetMessage(Stack[-1])
0x541: Pop(1)
0x542: @@ ClearReplies()
0x543: Pop(0)
0x544: Push((int) 527717)
0x545: Push((int) -1)
0x546: Push((int) 29069)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Push((int) 527918)
0x54a: Push((int) -1)
0x54b: Push((int) 29268)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 29269)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x4e3

0x555: Pop(1)
0x556: Push((int) 527919)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 527920)
0x55c: Push((int) 29271)
0x55d: Push((int) 29270)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 527923)
0x561: Push((int) 29274)
0x562: Push((int) 29273)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 29274)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x4e3

0x56c: Pop(1)
0x56d: Push((int) 527924)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 527925)
0x573: Push((int) 29276)
0x574: Push((int) 29275)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Return(); Pop(0)

0x578: Push((int) 29276)
0x579: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x57b: PushEmpty(string)
0x57c: Stack[-1] = "Neutral"
0x57d: Call2 0x4e3

0x57e: Pop(1)
0x57f: Push((int) 527926)
0x580: @@ SetMessage(Stack[-1])
0x581: Pop(1)
0x582: @@ ClearReplies()
0x583: Pop(0)
0x584: Push((int) 527927)
0x585: Push((int) 29271)
0x586: Push((int) 29277)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Return(); Pop(0)

0x58a: Push((int) 29271)
0x58b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x58d: PushEmpty(string)
0x58e: Stack[-1] = "Neutral"
0x58f: Call2 0x4e3

0x590: Pop(1)
0x591: Push((int) 527921)
0x592: @@ SetMessage(Stack[-1])
0x593: Pop(1)
0x594: @@ ClearReplies()
0x595: Pop(0)
0x596: Push((int) 527922)
0x597: Push((int) 29282)
0x598: Push((int) 29272)
0x599: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59a: Pop(3)
0x59b: Push((int) 527929)
0x59c: Push((int) 29284)
0x59d: Push((int) 29281)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Return(); Pop(0)

0x5a1: Push((int) 29282)
0x5a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5a4: PushEmpty(string)
0x5a5: Stack[-1] = "Neutral"
0x5a6: Call2 0x4e3

0x5a7: Pop(1)
0x5a8: Push((int) 527930)
0x5a9: @@ SetMessage(Stack[-1])
0x5aa: Pop(1)
0x5ab: @@ ClearReplies()
0x5ac: Pop(0)
0x5ad: Push((int) 527931)
0x5ae: Push((int) 29284)
0x5af: Push((int) 29283)
0x5b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b1: Pop(3)
0x5b2: Return(); Pop(0)

0x5b3: Push((int) 29284)
0x5b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5b6: PushEmpty(string)
0x5b7: Stack[-1] = "Neutral"
0x5b8: Call2 0x4e3

0x5b9: Pop(1)
0x5ba: Push((int) 527932)
0x5bb: @@ SetMessage(Stack[-1])
0x5bc: Pop(1)
0x5bd: @@ ClearReplies()
0x5be: Pop(0)
0x5bf: Push((int) 527933)
0x5c0: Push((int) -1)
0x5c1: Push((int) 29286)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Push((int) 527934)
0x5c5: Push((int) -1)
0x5c6: Push((int) 29287)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Return(); Pop(0)

0x5ca: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5cb: PushEmpty(bool)
0x5cc: Call2 0xb50

0x5cd: Pop(0)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5cf: @ lshStopAnimation()
0x5d0: Pop(0)
0x5d1: GOTO 0x5d4

0x5d2: @ StopAnimation()
0x5d3: Pop(0)
0x5d4: Return(); Pop(0)

0x5d5: GOTO 0x4fa

0x5d6: Return(); Pop(0)

0x5d7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5d8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5d9: PushEmpty(bool, object, float)
0x5da: Stack[-2] = Stack[-12]
0x5db: Stack[-1] = (float) 70.0
0x5dc: Call2 0x8c8

0x5dd: Pop(2)
0x5de: Pop(1); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-10] = (int) -2
0x5e1: Return(); Pop(8)

0x5e2: @ CreateDialog(Stack[-4])
0x5e3: Pop(0)
0x5e4: PushEmpty(int)
0x5e5: Call2 0xb4a

0x5e6: Pop(0)
0x5e7: @@ SetNPCName(Stack[-1])
0x5e8: Pop(1)
0x5e9: PushEmpty(int)
0x5ea: Call2 0xb48

0x5eb: Pop(0)
0x5ec: @@ SetNPCDescription(Stack[-1])
0x5ed: Pop(1)
0x5ee: PushEmpty(string)
0x5ef: Call2 0xb4c

0x5f0: Pop(0)
0x5f1: @@ SetPhoto(Stack[-1])
0x5f2: Pop(1)
0x5f3: PushEmpty(string)
0x5f4: Call2 0xb4e

0x5f5: Pop(0)
0x5f6: @@ SetPhoto2(Stack[-1])
0x5f7: Pop(1)
0x5f8: PushEmpty(int)
0x5f9: Call2 0xb37

0x5fa: Pop(0)
0x5fb: @@ SetPlayerName(Stack[-1])
0x5fc: Pop(1)
0x5fd: Stack[-2] = (int) -1
0x5fe: @ IsOverrideActive(Stack[-3])
0x5ff: Pop(0)
0x600: Push(Stack[-3])
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-10] = (int) -2
0x603: Return(); Pop(8)

0x604: @ DoDialog(Stack[-4])
0x605: Pop(0)
0x606: PushEmpty(bool, object)
0x607: PushEmpty(object)
0x608: Call2 0x9dc

0x609: Stack[-2] = Stack[-1]
0x60a: Pop(1)
0x60b: Call2 0x91d

0x60c: Pop(2)
0x60d: PushEmpty(object, object)
0x60e: Stack[-2] = Stack[-11]
0x60f: Stack[-1] = Stack[-6]
0x610: Push(-2, 4); TaskCall(9)
0x611: Call2 0x628

0x612: Pop(-2, 4); TaskReturn
0x613: Pop(2)
0x614: @@ IsDialogEnd(Stack[-1])
0x615: Pop(0)
0x616: Pop(0); Push((bool) Stack[-1] == 0)
0x617: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x618: @ sync()
0x619: Pop(0)
0x61a: @@ IsDialogEnd(Stack[-1])
0x61b: Pop(0)
0x61c: GOTO 0x616

0x61d: PushEmpty(object)
0x61e: Stack[-1] = Stack[-10]
0x61f: Call2 0x90c

0x620: Pop(1)
0x621: @ StopDialog(Stack[-4])
0x622: Pop(0)
0x623: @@ GetReturnValue(Stack[-2])
0x624: Pop(0)
0x625: Stack[-10] = Stack[-2]
0x626: Return(); Pop(8)

0x627: Stack[-4] = 0
0x628: PushEmpty()
0x629: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x62a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x62b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62c: Push((int) 1)
0x62d: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Neutral"
0x630: Call2 0x667

0x631: Pop(1)
0x632: Push((int) 535284)
0x633: @@ SetMessage(Stack[-1])
0x634: Pop(1)
0x635: @@ ClearReplies()
0x636: Pop(0)
0x637: Push((int) 535285)
0x638: Push((int) 36962)
0x639: Push((int) 36961)
0x63a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63b: Pop(3)
0x63c: Push((int) 535292)
0x63d: Push((int) -1)
0x63e: Push((int) 36968)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Push((int) 535293)
0x642: Push((int) -1)
0x643: Push((int) 36969)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: GOTO 0x649

0x647: Return(); Pop(0)

0x648: GOTO 0x62c

0x649: PushEmpty(bool)
0x64a: Call2 0xb50

0x64b: Pop(0)
0x64c: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x64d: @ lshWaitForAnimEnd()
0x64e: Pop(0)
0x64f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x650: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x651: GOTO 0x657

0x652: PushEmpty(string)
0x653: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x654: Call2 0x9a7

0x655: Pop(1)
0x656: GOTO 0x64d

0x657: GOTO 0x666

0x658: Push("all")
0x659: Push("idle")
0x65a: @ PlayAnimation(Stack[-2], Stack[-1])
0x65b: Pop(2)
0x65c: @ WaitForAnimEnd()
0x65d: Pop(0)
0x65e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: GOTO 0x666

0x661: Push("all")
0x662: Push("idle")
0x663: @ PlayAnimation(Stack[-2], Stack[-1])
0x664: Pop(2)
0x665: GOTO 0x65c

0x666: Return(); Pop(0)

0x667: PushEmpty()
0x668: PushEmpty(bool)
0x669: Call2 0xb50

0x66a: Pop(0)
0x66b: Pop(1); Push((bool) Stack[-1] == 0)
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Return(); Pop(0)

0x66e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: Return(); Pop(0)

0x671: PushEmpty(string, bool)
0x672: Stack[-2] = Stack[-3]
0x673: Push("")
0x674: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-1] = (bool) 0
0x677: GOTO 0x679

0x678: Stack[-1] = (bool) 1
0x679: Call2 0x9b7

0x67a: Pop(2)
0x67b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: Push((int) 1)
0x67f: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x680: PushEmpty()
0x681: Call2 0x9d5

0x682: Pop(0)
0x683: Push((int) 36960)
0x684: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x686: PushEmpty(string)
0x687: Stack[-1] = "Neutral"
0x688: Call2 0x667

0x689: Pop(1)
0x68a: Push((int) 535284)
0x68b: @@ SetMessage(Stack[-1])
0x68c: Pop(1)
0x68d: @@ ClearReplies()
0x68e: Pop(0)
0x68f: Push((int) 535285)
0x690: Push((int) 36962)
0x691: Push((int) 36961)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Push((int) 535292)
0x695: Push((int) -1)
0x696: Push((int) 36968)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Push((int) 535293)
0x69a: Push((int) -1)
0x69b: Push((int) 36969)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 36962)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6a2: PushEmpty(string)
0x6a3: Stack[-1] = "Neutral"
0x6a4: Call2 0x667

0x6a5: Pop(1)
0x6a6: Push((int) 535286)
0x6a7: @@ SetMessage(Stack[-1])
0x6a8: Pop(1)
0x6a9: @@ ClearReplies()
0x6aa: Pop(0)
0x6ab: Push((int) 535287)
0x6ac: Push((int) 36964)
0x6ad: Push((int) 36963)
0x6ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: Push((int) 535291)
0x6b1: Push((int) -1)
0x6b2: Push((int) 36967)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Return(); Pop(0)

0x6b6: Push((int) 36964)
0x6b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6b9: PushEmpty(string)
0x6ba: Stack[-1] = "Neutral"
0x6bb: Call2 0x667

0x6bc: Pop(1)
0x6bd: Push((int) 535288)
0x6be: @@ SetMessage(Stack[-1])
0x6bf: Pop(1)
0x6c0: @@ ClearReplies()
0x6c1: Pop(0)
0x6c2: Push((int) 535289)
0x6c3: Push((int) -1)
0x6c4: Push((int) 36965)
0x6c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c6: Pop(3)
0x6c7: Push((int) 535290)
0x6c8: Push((int) -1)
0x6c9: Push((int) 36966)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Return(); Pop(0)

0x6cd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6ce: PushEmpty(bool)
0x6cf: Call2 0xb50

0x6d0: Pop(0)
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d2: @ lshStopAnimation()
0x6d3: Pop(0)
0x6d4: GOTO 0x6d7

0x6d5: @ StopAnimation()
0x6d6: Pop(0)
0x6d7: Return(); Pop(0)

0x6d8: GOTO 0x67e

0x6d9: Return(); Pop(0)

0x6da: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6db: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6dc: PushEmpty(bool, object, float)
0x6dd: Stack[-2] = Stack[-12]
0x6de: Stack[-1] = (float) 70.0
0x6df: Call2 0x8c8

0x6e0: Pop(2)
0x6e1: Pop(1); Push((bool) Stack[-1] == 0)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-10] = (int) -2
0x6e4: Return(); Pop(8)

0x6e5: @ CreateDialog(Stack[-4])
0x6e6: Pop(0)
0x6e7: PushEmpty(int)
0x6e8: Call2 0xb4a

0x6e9: Pop(0)
0x6ea: @@ SetNPCName(Stack[-1])
0x6eb: Pop(1)
0x6ec: PushEmpty(int)
0x6ed: Call2 0xb48

0x6ee: Pop(0)
0x6ef: @@ SetNPCDescription(Stack[-1])
0x6f0: Pop(1)
0x6f1: PushEmpty(string)
0x6f2: Call2 0xb4c

0x6f3: Pop(0)
0x6f4: @@ SetPhoto(Stack[-1])
0x6f5: Pop(1)
0x6f6: PushEmpty(string)
0x6f7: Call2 0xb4e

0x6f8: Pop(0)
0x6f9: @@ SetPhoto2(Stack[-1])
0x6fa: Pop(1)
0x6fb: PushEmpty(int)
0x6fc: Call2 0xb37

0x6fd: Pop(0)
0x6fe: @@ SetPlayerName(Stack[-1])
0x6ff: Pop(1)
0x700: Stack[-2] = (int) -1
0x701: @ IsOverrideActive(Stack[-3])
0x702: Pop(0)
0x703: Push(Stack[-3])
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-10] = (int) -2
0x706: Return(); Pop(8)

0x707: @ DoDialog(Stack[-4])
0x708: Pop(0)
0x709: PushEmpty(bool, object)
0x70a: PushEmpty(object)
0x70b: Call2 0x9dc

0x70c: Stack[-2] = Stack[-1]
0x70d: Pop(1)
0x70e: Call2 0x91d

0x70f: Pop(2)
0x710: PushEmpty(object, object)
0x711: Stack[-2] = Stack[-11]
0x712: Stack[-1] = Stack[-6]
0x713: Push(-2, 4); TaskCall(11)
0x714: Call2 0x72b

0x715: Pop(-2, 4); TaskReturn
0x716: Pop(2)
0x717: @@ IsDialogEnd(Stack[-1])
0x718: Pop(0)
0x719: Pop(0); Push((bool) Stack[-1] == 0)
0x71a: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71b: @ sync()
0x71c: Pop(0)
0x71d: @@ IsDialogEnd(Stack[-1])
0x71e: Pop(0)
0x71f: GOTO 0x719

0x720: PushEmpty(object)
0x721: Stack[-1] = Stack[-10]
0x722: Call2 0x90c

0x723: Pop(1)
0x724: @ StopDialog(Stack[-4])
0x725: Pop(0)
0x726: @@ GetReturnValue(Stack[-2])
0x727: Pop(0)
0x728: Stack[-10] = Stack[-2]
0x729: Return(); Pop(8)

0x72a: Stack[-4] = 0
0x72b: PushEmpty()
0x72c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x72e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x72f: Push((int) 1)
0x730: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x731: PushEmpty(string)
0x732: Stack[-1] = "Neutral"
0x733: Call2 0x765

0x734: Pop(1)
0x735: Push((int) 540545)
0x736: @@ SetMessage(Stack[-1])
0x737: Pop(1)
0x738: @@ ClearReplies()
0x739: Pop(0)
0x73a: Push((int) 540546)
0x73b: Push((int) -1)
0x73c: Push((int) 42555)
0x73d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: Push((int) 540798)
0x740: Push((int) -1)
0x741: Push((int) 42847)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: GOTO 0x747

0x745: Return(); Pop(0)

0x746: GOTO 0x72f

0x747: PushEmpty(bool)
0x748: Call2 0xb50

0x749: Pop(0)
0x74a: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x74b: @ lshWaitForAnimEnd()
0x74c: Pop(0)
0x74d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74e: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74f: GOTO 0x755

0x750: PushEmpty(string)
0x751: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x752: Call2 0x9a7

0x753: Pop(1)
0x754: GOTO 0x74b

0x755: GOTO 0x764

0x756: Push("all")
0x757: Push("idle")
0x758: @ PlayAnimation(Stack[-2], Stack[-1])
0x759: Pop(2)
0x75a: @ WaitForAnimEnd()
0x75b: Pop(0)
0x75c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: GOTO 0x764

0x75f: Push("all")
0x760: Push("idle")
0x761: @ PlayAnimation(Stack[-2], Stack[-1])
0x762: Pop(2)
0x763: GOTO 0x75a

0x764: Return(); Pop(0)

0x765: PushEmpty()
0x766: PushEmpty(bool)
0x767: Call2 0xb50

0x768: Pop(0)
0x769: Pop(1); Push((bool) Stack[-1] == 0)
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Return(); Pop(0)

0x76c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: Return(); Pop(0)

0x76f: PushEmpty(string, bool)
0x770: Stack[-2] = Stack[-3]
0x771: Push("")
0x772: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x774: Stack[-1] = (bool) 0
0x775: GOTO 0x777

0x776: Stack[-1] = (bool) 1
0x777: Call2 0x9b7

0x778: Pop(2)
0x779: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x77a: Return(); Pop(0)

0x77b: PushEmpty()
0x77c: Push((int) 1)
0x77d: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x77e: PushEmpty()
0x77f: Call2 0x9d5

0x780: Pop(0)
0x781: Push((int) 42554)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x784: PushEmpty(string)
0x785: Stack[-1] = "Neutral"
0x786: Call2 0x765

0x787: Pop(1)
0x788: Push((int) 540545)
0x789: @@ SetMessage(Stack[-1])
0x78a: Pop(1)
0x78b: @@ ClearReplies()
0x78c: Pop(0)
0x78d: Push((int) 540546)
0x78e: Push((int) -1)
0x78f: Push((int) 42555)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: Push((int) 540798)
0x793: Push((int) -1)
0x794: Push((int) 42847)
0x795: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x796: Pop(3)
0x797: Return(); Pop(0)

0x798: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x799: PushEmpty(bool)
0x79a: Call2 0xb50

0x79b: Pop(0)
0x79c: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79d: @ lshStopAnimation()
0x79e: Pop(0)
0x79f: GOTO 0x7a2

0x7a0: @ StopAnimation()
0x7a1: Pop(0)
0x7a2: Return(); Pop(0)

0x7a3: GOTO 0x77c

0x7a4: Return(); Pop(0)

0x7a5: Push(GlobalVars[1])
0x7a6: Stack[-1] = (bool) 0
0x7a7: GlobalVars[1] = Stack[-1]; Pop(1)
0x7a8: PushEmpty()
0x7a9: Call2 0x7ac

0x7aa: Pop(0)
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty(bool)
0x7ad: Call2 0x8c3

0x7ae: Pop(0)
0x7af: Pop(1); Push((bool) Stack[-1] == 0)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: @ Hold()
0x7b2: Pop(0)
0x7b3: @ GetDirection(Stack[-0])
0x7b4: Pop(0)
0x7b5: PushEmpty()
0x7b6: Call2 0x85c

0x7b7: Pop(0)
0x7b8: GOTO 0x7b5

0x7b9: Return(); Pop(0)

0x7ba: PushEmpty(object, object)
0x7bb: Push("player")
0x7bc: @ FindActor(Stack[-2], Stack[-1])
0x7bd: Pop(1)
0x7be: Pop(0); Push((bool) Stack[-1] == 0)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-3] = (bool) 0
0x7c1: Return(); Pop(2)

0x7c2: PushEmpty(bool, object)
0x7c3: Stack[-1] = Stack[-3]
0x7c4: Call2 0x8ba

0x7c5: Stack[-5] = Stack[-2]
0x7c6: Pop(2)
0x7c7: Return(); Pop(2)

0x7c8: Stack[-1] = 0
0x7c9: Push(CvectorIndex(Stack[-0], 0))
0x7ca: Push(CvectorIndex(Stack[-0], 2))
0x7cb: @ RotateAsync(Stack[-2], Stack[-1])
0x7cc: Pop(2)
0x7cd: Return(); Pop(0)

0x7ce: PushEmpty(object, bool, object, bool)
0x7cf: Push("player")
0x7d0: @ FindActor(Stack[-3], Stack[-1])
0x7d1: Pop(1)
0x7d2: Pop(0); Push((bool) Stack[-2] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-5] = (bool) 0
0x7d5: Return(); Pop(4)

0x7d6: PushEmpty(float, object)
0x7d7: Stack[-1] = Stack[-4]
0x7d8: Call2 0x8a8

0x7d9: Pop(1)
0x7da: Push((float)90000.0)
0x7db: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7dd: Stack[-5] = (bool) 0
0x7de: Return(); Pop(4)

0x7df: @ CanSee(Stack[-1], Stack[-2])
0x7e0: Pop(0)
0x7e1: Stack[-5] = Stack[-1]
0x7e2: Return(); Pop(4)

0x7e3: Stack[-2] = 0
0x7e4: PushEmpty(float, float)
0x7e5: Push((int) 8)
0x7e6: Push((int) 16)
0x7e7: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(2)
0x7e9: Push((int) 10)
0x7ea: @ SetTimer(Stack[-1], Stack[-2])
0x7eb: Pop(1)
0x7ec: Return(); Pop(2)

0x7ed: Push((int) 10)
0x7ee: @ KillTimer(Stack[-1])
0x7ef: Pop(1)
0x7f0: Return(); Pop(0)

0x7f1: PushEmpty()
0x7f2: Push((int) 10)
0x7f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x7f5: PushEmpty()
0x7f6: Call2 0x7ed

0x7f7: Pop(0)
0x7f8: PushEmpty(bool)
0x7f9: Stack[-1] = (bool) 0
0x7fa: PushEmpty(bool)
0x7fb: Call2 0x8c3

0x7fc: Pop(0)
0x7fd: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fe: PushEmpty(bool)
0x7ff: Call2 0x7ce

0x800: Pop(0)
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: Stack[-1] = (bool) 1
0x803: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x804: PushEmpty(bool)
0x805: Call2 0x7ba

0x806: Pop(0)
0x807: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x808: PushEmpty(bool, object)
0x809: PushEmpty(object)
0x80a: Call2 0x9dc

0x80b: Stack[-2] = Stack[-1]
0x80c: Pop(1)
0x80d: Call2 0x957

0x80e: Pop(2)
0x80f: GOTO 0x816

0x810: PushEmpty()
0x811: Call2 0x7c9

0x812: Pop(0)
0x813: PushEmpty()
0x814: Call2 0x7e4

0x815: Pop(0)
0x816: Return(); Pop(0)

0x817: PushEmpty()
0x818: Call2 0x8a3

0x819: Pop(0)
0x81a: PushEmpty()
0x81b: Call2 0x7ed

0x81c: Pop(0)
0x81d: @ lshStopSpeech()
0x81e: Pop(0)
0x81f: @ lshStopAnimation()
0x820: Pop(0)
0x821: @ StopAsync()
0x822: Pop(0)
0x823: @ Hold()
0x824: Pop(0)
0x825: Return(); Pop(0)

0x826: @ StopGroup0()
0x827: Pop(0)
0x828: PushEmpty()
0x829: Call2 0x7ed

0x82a: Pop(0)
0x82b: PushEmpty(string)
0x82c: Stack[-1] = "Neutral"
0x82d: Call2 0x9a7

0x82e: Pop(1)
0x82f: PushEmpty()
0x830: Call2 0x7e4

0x831: Pop(0)
0x832: Return(); Pop(0)

0x833: PushEmpty()
0x834: Push(Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x836: PushEmpty()
0x837: Call2 0x7e4

0x838: Pop(0)
0x839: GOTO 0x83e

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "Neutral"
0x83c: Call2 0x9a7

0x83d: Pop(1)
0x83e: Return(); Pop(0)

0x83f: PushEmpty(bool, bool)
0x840: @ IsOverrideActive(Stack[-1])
0x841: Pop(0)
0x842: Pop(0); Push((bool) Stack[-1] == 0)
0x843: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x844: EventDisable(0)
0x845: PushEmpty()
0x846: Call2 0x8a3

0x847: Pop(0)
0x848: PushEmpty(bool, object)
0x849: Stack[-1] = Stack[-5]
0x84a: Call2 0x8ba

0x84b: Pop(2)
0x84c: EventEnable(0)
0x84d: PushEmpty(object)
0x84e: Stack[-1] = Stack[-4]
0x84f: Call2 0xb52

0x850: Pop(1)
0x851: PushEmpty(string)
0x852: Stack[-1] = "Neutral"
0x853: Call2 0x9a7

0x854: Pop(1)
0x855: PushEmpty()
0x856: Call2 0x7ed

0x857: Pop(0)
0x858: PushEmpty()
0x859: Call2 0x7e4

0x85a: Pop(0)
0x85b: Return(); Pop(2)

0x85c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x85d: @ WaitForAnimEnd()
0x85e: Pop(0)
0x85f: PushEmpty(bool)
0x860: Call2 0x8c3

0x861: Pop(0)
0x862: Pop(1); Push((bool) Stack[-1] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x864: Return(); Pop(12)

0x865: PushEmpty(int)
0x866: Call2 0xa38

0x867: Stack[-7] = Stack[-1]
0x868: Pop(1)
0x869: Stack[-5] = (int) 0
0x86a: PushEmpty(bool)
0x86b: Stack[-1] = (bool) 0
0x86c: Push((int) 5)
0x86d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x86f: PushEmpty(bool)
0x870: Call2 0x8c3

0x871: Pop(0)
0x872: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x873: Stack[-1] = (bool) 1
0x874: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x875: Pop(0); Push((bool) Stack[-6] == 0)
0x876: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x877: Push((int) 3)
0x878: @ Sleep(Stack[-1], Stack[-5])
0x879: Pop(1)
0x87a: Pop(0); Push((bool) Stack[-4] == 0)
0x87b: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87c: GOTO 0x89e

0x87d: GOTO 0x893

0x87e: @ irand(Stack[-3], Stack[-6])
0x87f: Pop(0)
0x880: Push((int) 5)
0x881: @ irand(Stack[-3], Stack[-1])
0x882: Pop(1)
0x883: Push((int) 0)
0x884: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x886: Stack[-3] = (int) 0
0x887: Push("all")
0x888: PushEmpty(string, int)
0x889: Stack[-1] = Stack[-6]
0x88a: Call2 0xa31

0x88b: Pop(1)
0x88c: @ PlayAnimation(Stack[-2], Stack[-1])
0x88d: Pop(2)
0x88e: @ WaitForAnimEnd(Stack[-1])
0x88f: Pop(0)
0x890: Pop(0); Push((bool) Stack[-1] == 0)
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: GOTO 0x89e

0x893: PushEmpty(bool)
0x894: Call2 0x8a1

0x895: Pop(0)
0x896: Pop(1); Push((bool) Stack[-1] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: GOTO 0x89e

0x899: @ ResetAAS()
0x89a: Pop(0)
0x89b: Push((int) 1)
0x89c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x89d: GOTO 0x86a

0x89e: @ ResetAAS()
0x89f: Pop(0)
0x8a0: Return(); Pop(12)

0x8a1: Stack[-1] = (bool) 1
0x8a2: Return(); Pop(0)

0x8a3: @ StopAnimation()
0x8a4: Pop(0)
0x8a5: @ StopGroup0()
0x8a6: Pop(0)
0x8a7: Return(); Pop(0)

0x8a8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8a9: @ GetPosition(Stack[-3])
0x8aa: Pop(0)
0x8ab: @@ GetPosition(Stack[-2])
0x8ac: Pop(0)
0x8ad: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8ae: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8af: Return(); Pop(6)

0x8b0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x8b1: @ GetPosition(Stack[-3])
0x8b2: Pop(0)
0x8b3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x8b4: Push(CvectorIndex(Stack[-2], 0))
0x8b5: Push(CvectorIndex(Stack[-3], 2))
0x8b6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x8b7: Pop(2)
0x8b8: Stack[-8] = Stack[-1]
0x8b9: Return(); Pop(6)

0x8ba: PushEmpty(cvector, cvector)
0x8bb: @@ GetPosition(Stack[-1])
0x8bc: Pop(0)
0x8bd: PushEmpty(bool, cvector)
0x8be: Stack[-1] = Stack[-3]
0x8bf: Call2 0x8b0

0x8c0: Stack[-6] = Stack[-2]
0x8c1: Pop(2)
0x8c2: Return(); Pop(2)

0x8c3: PushEmpty(bool, bool)
0x8c4: @ IsLoaded(Stack[-1])
0x8c5: Pop(0)
0x8c6: Stack[-3] = Stack[-1]
0x8c7: Return(); Pop(2)

0x8c8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x8c9: @@ GetPosition(Stack[-8])
0x8ca: Pop(0)
0x8cb: @@ GetEyesHeight(Stack[-9])
0x8cc: Pop(0)
0x8cd: Push(CvectorIndex(Stack[-8], 1))
0x8ce: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8cf: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x8d0: @ GetPosition(Stack[-7])
0x8d1: Pop(0)
0x8d2: @ GetEyesHeight(Stack[-9])
0x8d3: Pop(0)
0x8d4: Push(CvectorIndex(Stack[-7], 1))
0x8d5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x8d6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x8d7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x8d8: Push(CvectorIndex(Stack[-6], 1))
0x8d9: Stack[-1] = (int) 0
0x8da: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x8db: Pop(0); Push(Stack[-6] | Stack[-6]);
0x8dc: Pop(1); Push(Sqrt(Stack[-1]))
0x8dd: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x8de: Stack[-5] = -Stack[-6]; Pop(0);
0x8df: Pop(0); Push(Stack[-6] * Stack[-19]);
0x8e0: PushEmpty(cvector, cvector)
0x8e1: Push(CVector(0.0, 1.0, 0.0))
0x8e2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x8e3: Call2 0x9e2

0x8e4: Pop(1)
0x8e5: Push((int) 25)
0x8e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8e8: Push(CVector(0.0, 10.0, 0.0))
0x8e9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8ea: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x8eb: @ IsOverrideActive(Stack[-2])
0x8ec: Pop(0)
0x8ed: Push(Stack[-2])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ef: Stack[-21] = (bool) 0
0x8f0: Return(); Pop(18)

0x8f1: @ StopWorld()
0x8f2: Pop(0)
0x8f3: @ CameraTransit(Stack[-3], Stack[-5])
0x8f4: Pop(0)
0x8f5: Push(CvectorIndex(Stack[-4], 0))
0x8f6: Push(CvectorIndex(Stack[-5], 2))
0x8f7: @ Rotate(Stack[-2], Stack[-1])
0x8f8: Pop(2)
0x8f9: PushEmpty(bool)
0x8fa: Call2 0xb50

0x8fb: Pop(0)
0x8fc: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fd: GOTO 0x906

0x8fe: Push("head")
0x8ff: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x900: Pop(1)
0x901: Push(Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x903: Push("head")
0x904: @ LookAsyncCamera(Stack[-1])
0x905: Pop(1)
0x906: @ CameraWaitForPlayFinish()
0x907: Pop(0)
0x908: @ ResumeWorld()
0x909: Pop(0)
0x90a: Stack[-21] = (bool) 1
0x90b: Return(); Pop(18)

0x90c: PushEmpty(bool, bool)
0x90d: @ CameraSwitchToNormal()
0x90e: Pop(0)
0x90f: PushEmpty(bool)
0x910: Call2 0xb50

0x911: Pop(0)
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: GOTO 0x91c

0x914: Push("head")
0x915: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x916: Pop(1)
0x917: Push(Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x919: Push("head")
0x91a: @ UnlookAsync(Stack[-1])
0x91b: Pop(1)
0x91c: Return(); Pop(2)

0x91d: PushEmpty(int, int, int, int)
0x91e: Push("voice_common")
0x91f: @ GetVariable(Stack[-1], Stack[-3])
0x920: Pop(1)
0x921: Push(Stack[-2])
0x922: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x923: PushEmpty(bool, object)
0x924: Stack[-1] = Stack[-7]
0x925: Call2 0x957

0x926: Pop(1)
0x927: Pop(1); Push((bool) Stack[-1] == 0)
0x928: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x929: PushEmpty(bool, object)
0x92a: Stack[-1] = Stack[-7]
0x92b: Call2 0x97c

0x92c: Pop(1)
0x92d: Pop(1); Push((bool) Stack[-1] == 0)
0x92e: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92f: Stack[-6] = (bool) 0
0x930: Return(); Pop(4)

0x931: Push((int) 2)
0x932: @ irand(Stack[-2], Stack[-1])
0x933: Pop(1)
0x934: Push(Stack[-1])
0x935: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x936: Push("voice_common")
0x937: Push((int) 1)
0x938: Pop(1); Push(Stack[-4] + Stack[-1]);
0x939: Push((int) 3)
0x93a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x93b: @ SetVariable(Stack[-2], Stack[-1])
0x93c: Pop(2)
0x93d: GOTO 0x942

0x93e: Push("voice_common")
0x93f: Push((int) 0)
0x940: @ SetVariable(Stack[-2], Stack[-1])
0x941: Pop(2)
0x942: GOTO 0x955

0x943: PushEmpty(bool, object)
0x944: Stack[-1] = Stack[-7]
0x945: Call2 0x97c

0x946: Pop(1)
0x947: Pop(1); Push((bool) Stack[-1] == 0)
0x948: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x949: PushEmpty(bool, object)
0x94a: Stack[-1] = Stack[-7]
0x94b: Call2 0x957

0x94c: Pop(1)
0x94d: Pop(1); Push((bool) Stack[-1] == 0)
0x94e: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x94f: Stack[-6] = (bool) 0
0x950: Return(); Pop(4)

0x951: Push("voice_common")
0x952: Push((int) 1)
0x953: @ SetVariable(Stack[-2], Stack[-1])
0x954: Pop(2)
0x955: Stack[-6] = (bool) 1
0x956: Return(); Pop(4)

0x957: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x958: Stack[-5] = "c"
0x959: Stack[-4] = (int) 0
0x95a: Push((int) 1)
0x95b: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x95c: Push((int) 1)
0x95d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x95e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x95f: @@ HasProperty(Stack[-1], Stack[-4])
0x960: Pop(1)
0x961: Pop(0); Push((bool) Stack[-3] == 0)
0x962: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x963: GOTO 0x967

0x964: Push((int) 1)
0x965: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x966: GOTO 0x95a

0x967: Pop(0); Push((bool) Stack[-4] == 0)
0x968: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x969: Stack[-12] = (bool) 0
0x96a: Return(); Pop(10)

0x96b: Stack[-2] = (int) 0
0x96c: Push((int) 1)
0x96d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x96e: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x96f: @ irand(Stack[-2], Stack[-4])
0x970: Pop(0)
0x971: Push((int) 1)
0x972: Pop(1); Push(Stack[-3] + Stack[-1]);
0x973: Pop(1); Push(Stack[-6] + Stack[-1]);
0x974: @@ GetProperty(Stack[-1], Stack[-2])
0x975: Pop(1)
0x976: PushEmpty(bool, string)
0x977: Stack[-1] = Stack[-3]
0x978: Call2 0x9c6

0x979: Stack[-14] = Stack[-2]
0x97a: Pop(2)
0x97b: Return(); Pop(10)

0x97c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x97d: Push("d")
0x97e: PushEmpty(int)
0x97f: Call2 0xa22

0x980: Pop(0)
0x981: Pop(2); Push(Stack[-2] + Stack[-1]);
0x982: Push("m")
0x983: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x984: Stack[-4] = (int) 0
0x985: Push((int) 1)
0x986: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x987: Push((int) 1)
0x988: Pop(1); Push(Stack[-5] + Stack[-1]);
0x989: Pop(1); Push(Stack[-6] + Stack[-1]);
0x98a: @@ HasProperty(Stack[-1], Stack[-4])
0x98b: Pop(1)
0x98c: Pop(0); Push((bool) Stack[-3] == 0)
0x98d: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98e: GOTO 0x992

0x98f: Push((int) 1)
0x990: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x991: GOTO 0x985

0x992: Pop(0); Push((bool) Stack[-4] == 0)
0x993: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x994: Stack[-12] = (bool) 0
0x995: Return(); Pop(10)

0x996: Stack[-2] = (int) 0
0x997: Push((int) 1)
0x998: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x999: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99a: @ irand(Stack[-2], Stack[-4])
0x99b: Pop(0)
0x99c: Push((int) 1)
0x99d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x99e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x99f: @@ GetProperty(Stack[-1], Stack[-2])
0x9a0: Pop(1)
0x9a1: PushEmpty(bool, string)
0x9a2: Stack[-1] = Stack[-3]
0x9a3: Call2 0x9c6

0x9a4: Stack[-14] = Stack[-2]
0x9a5: Pop(2)
0x9a6: Return(); Pop(10)

0x9a7: PushEmpty(bool, float, float, bool, float, float)
0x9a8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x9a9: Pop(0)
0x9aa: Push(Stack[-3])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9ac: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x9ad: Pop(0)
0x9ae: Push((bool) 0)
0x9af: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9b0: Pop(1)
0x9b1: GOTO 0x9b6

0x9b2: Push("Can't find lsh animation : ")
0x9b3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9b4: @ Trace(Stack[-1])
0x9b5: Pop(1)
0x9b6: Return(); Pop(6)

0x9b7: PushEmpty(bool, float, float, bool, float, float)
0x9b8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x9b9: Pop(0)
0x9ba: Push(Stack[-3])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9bc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x9bd: Pop(0)
0x9be: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x9bf: Pop(0)
0x9c0: GOTO 0x9c5

0x9c1: Push("Can't find lsh animation : ")
0x9c2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x9c3: @ Trace(Stack[-1])
0x9c4: Pop(1)
0x9c5: Return(); Pop(6)

0x9c6: PushEmpty(bool, bool)
0x9c7: PushEmpty(bool)
0x9c8: Call2 0xb50

0x9c9: Pop(0)
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9cb: @ lshHasSpeech(Stack[-1], Stack[-3])
0x9cc: Pop(0)
0x9cd: Push(Stack[-1])
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9cf: @ lshPlaySpeech(Stack[-3])
0x9d0: Pop(0)
0x9d1: Stack[-4] = (bool) 1
0x9d2: Return(); Pop(2)

0x9d3: Stack[-4] = (bool) 0
0x9d4: Return(); Pop(2)

0x9d5: PushEmpty(bool)
0x9d6: Call2 0xb50

0x9d7: Pop(0)
0x9d8: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d9: @ lshStopSpeech()
0x9da: Pop(0)
0x9db: Return(); Pop(0)

0x9dc: PushEmpty(object, object)
0x9dd: @ self(Stack[-1])
0x9de: Pop(0)
0x9df: Stack[-3] = Stack[-1]
0x9e0: Return(); Pop(2)

0x9e1: Stack[-1] = 0
0x9e2: PushEmpty(float, float)
0x9e3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x9e4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x9e5: Push((float)0.0)
0x9e6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9e9: Return(); Pop(2)

0x9ea: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9eb: Return(); Pop(2)

0x9ec: PushEmpty(int, int)
0x9ed: @ GetVariable(Stack[-3], Stack[-1])
0x9ee: Pop(0)
0x9ef: Stack[-4] = Stack[-1]
0x9f0: Return(); Pop(2)

0x9f1: PushEmpty(object, object)
0x9f2: @ CreateIntVector(Stack[-1])
0x9f3: Pop(0)
0x9f4: @@ add(Stack[-4])
0x9f5: Pop(0)
0x9f6: @@ add(Stack[-3])
0x9f7: Pop(0)
0x9f8: Push((int) 3)
0x9f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x9fa: Pop(1)
0x9fb: Return(); Pop(2)

0x9fc: Stack[-1] = 0
0x9fd: PushEmpty(int, int, bool, int, int, bool)
0x9fe: @@ GetItemID(Stack[-3])
0x9ff: Pop(0)
0xa00: Push("Category")
0xa01: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa02: Pop(1)
0xa03: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa04: Pop(0)
0xa05: Pop(0); Push((bool) Stack[-1] == 0)
0xa06: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa07: @@ DropItems(Stack[-8], Stack[-7])
0xa08: Pop(0)
0xa09: GOTO 0xa0f

0xa0a: PushEmpty(int, int)
0xa0b: Stack[-2] = Stack[-5]
0xa0c: Stack[-1] = Stack[-9]
0xa0d: Call2 0x9f1

0xa0e: Pop(2)
0xa0f: Return(); Pop(6)

0xa10: PushEmpty(object, object)
0xa11: @ CreateInvItem(Stack[-1])
0xa12: Pop(0)
0xa13: @@ SetItemName(Stack[-4])
0xa14: Pop(0)
0xa15: PushEmpty(object, object, int)
0xa16: Stack[-3] = Stack[-8]
0xa17: Stack[-2] = Stack[-4]
0xa18: Stack[-1] = Stack[-6]
0xa19: Call2 0x9fd

0xa1a: Pop(3)
0xa1b: Return(); Pop(2)

0xa1c: Stack[-1] = 0
0xa1d: PushEmpty(float, float)
0xa1e: @ GetGameTime(Stack[-1])
0xa1f: Pop(0)
0xa20: Stack[-3] = Stack[-1]
0xa21: Return(); Pop(2)

0xa22: PushEmpty(float, float)
0xa23: @ GetGameTime(Stack[-1])
0xa24: Pop(0)
0xa25: Push((int) 1)
0xa26: PushEmpty(int)
0xa27: Push((int) 24)
0xa28: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa29: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa2a: Return(); Pop(2)

0xa2b: PushEmpty()
0xa2c: PushEmpty(int)
0xa2d: Call2 0xa22

0xa2e: Pop(0)
0xa2f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xa30: Return(); Pop(0)

0xa31: PushEmpty(string, string)
0xa32: Stack[-1] = "idle"
0xa33: Push(Stack[-3])
0xa34: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa35: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa36: Stack[-4] = Stack[-1]
0xa37: Return(); Pop(2)

0xa38: PushEmpty(int, bool, int, bool)
0xa39: Stack[-2] = (int) 0
0xa3a: Push("all")
0xa3b: PushEmpty(string, int)
0xa3c: Stack[-1] = Stack[-5]
0xa3d: Call2 0xa31

0xa3e: Pop(1)
0xa3f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(2)
0xa41: Pop(0); Push((bool) Stack[-1] == 0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa43: GOTO 0xa47

0xa44: Push((int) 1)
0xa45: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa46: GOTO 0xa3a

0xa47: Stack[-5] = Stack[-2]
0xa48: Return(); Pop(4)

0xa49: PushEmpty()
0xa4a: Push("k1q03")
0xa4b: Push((int) 2)
0xa4c: @ SetVariable(Stack[-2], Stack[-1])
0xa4d: Pop(2)
0xa4e: PushEmpty()
0xa4f: Call2 0xac2

0xa50: Pop(0)
0xa51: Return(); Pop(0)

0xa52: PushEmpty()
0xa53: Push("k4q01")
0xa54: Push((int) 3)
0xa55: @ SetVariable(Stack[-2], Stack[-1])
0xa56: Pop(2)
0xa57: PushEmpty()
0xa58: Call2 0xacf

0xa59: Pop(0)
0xa5a: Return(); Pop(0)

0xa5b: PushEmpty()
0xa5c: Push("k10q01KnowAboutRubin")
0xa5d: Push((int) 1)
0xa5e: @ SetVariable(Stack[-2], Stack[-1])
0xa5f: Pop(2)
0xa60: Return(); Pop(0)

0xa61: PushEmpty(object, object)
0xa62: PushEmpty(object)
0xa63: Call2 0xb05

0xa64: Stack[-2] = Stack[-1]
0xa65: Pop(1)
0xa66: Push("k10q01NotkinGotoRubin")
0xa67: Push("pt_map_rubin")
0xa68: Push((int) 3)
0xa69: Push((int) 530195)
0xa6a: PushEmpty(float)
0xa6b: Call2 0xa1d

0xa6c: Pop(0)
0xa6d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa6e: Pop(5)
0xa6f: Return(); Pop(2)

0xa70: Stack[-1] = 0
0xa71: PushEmpty()
0xa72: Push("playsound")
0xa73: Push("giveitem")
0xa74: @ TriggerWorld(Stack[-2], Stack[-1])
0xa75: Pop(2)
0xa76: Return(); Pop(0)

0xa77: PushEmpty()
0xa78: Push("Gun is given")
0xa79: @ Trace(Stack[-1])
0xa7a: Pop(1)
0xa7b: PushEmpty(object, string, int)
0xa7c: Stack[-3] = Stack[-5]
0xa7d: Stack[-2] = "Gun"
0xa7e: Stack[-1] = (int) 1
0xa7f: Call2 0xa10

0xa80: Pop(3)
0xa81: Return(); Pop(0)

0xa82: PushEmpty()
0xa83: PushEmpty(object, string, float)
0xa84: PushEmpty(object)
0xa85: Call2 0xb05

0xa86: Stack[-4] = Stack[-1]
0xa87: Pop(1)
0xa88: Stack[-2] = "pt_map_rubin"
0xa89: Stack[-1] = (int) 2
0xa8a: Call2 0xb16

0xa8b: Pop(3)
0xa8c: PushEmpty(object)
0xa8d: Call2 0xb05

0xa8e: Pop(0)
0xa8f: @@ ShowMap(Stack[-1])
0xa90: Pop(1)
0xa91: Return(); Pop(0)

0xa92: PushEmpty()
0xa93: PushEmpty(int, string)
0xa94: Stack[-1] = "k1q01DobermanDead"
0xa95: Call2 0x9ec

0xa96: Pop(1)
0xa97: Push((int) 0)
0xa98: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa99: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa9a: Stack[-2] = (bool) 1
0xa9b: Return(); Pop(0)

0xa9c: Stack[-2] = (bool) 0
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty()
0xa9f: PushEmpty(int, string)
0xaa0: Stack[-1] = "k1q03"
0xaa1: Call2 0x9ec

0xaa2: Pop(1)
0xaa3: Push((int) 1)
0xaa4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xaa5: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xaa6: Stack[-2] = (bool) 1
0xaa7: Return(); Pop(0)

0xaa8: Stack[-2] = (bool) 0
0xaa9: Return(); Pop(0)

0xaaa: PushEmpty()
0xaab: PushEmpty(int, string)
0xaac: Stack[-1] = "k4q01"
0xaad: Call2 0x9ec

0xaae: Pop(1)
0xaaf: Push((int) 2)
0xab0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-2] = (bool) 1
0xab3: Return(); Pop(0)

0xab4: Stack[-2] = (bool) 0
0xab5: Return(); Pop(0)

0xab6: PushEmpty()
0xab7: PushEmpty(int, string)
0xab8: Stack[-1] = "k10q01KnowAboutRubin"
0xab9: Call2 0x9ec

0xaba: Pop(1)
0xabb: Push((int) 0)
0xabc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xabd: IF (Stack[-1] == 0) GOTO 0xac0; Pop(1)

0xabe: Stack[-2] = (bool) 1
0xabf: Return(); Pop(0)

0xac0: Stack[-2] = (bool) 0
0xac1: Return(); Pop(0)

0xac2: PushEmpty(object, object)
0xac3: Push((int) 335)
0xac4: Push((int) 2)
0xac5: Push((int) 524802)
0xac6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xac7: Pop(3)
0xac8: PushEmpty(bool, object, int)
0xac9: Stack[-2] = Stack[-4]
0xaca: Stack[-1] = (int) 333
0xacb: Call2 0xae9

0xacc: Pop(3)
0xacd: Return(); Pop(2)

0xace: Stack[-1] = 0
0xacf: PushEmpty(object, object)
0xad0: Push((int) 371)
0xad1: Push((int) 1)
0xad2: Push((int) 525728)
0xad3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: PushEmpty(bool, object, int)
0xad6: Stack[-2] = Stack[-4]
0xad7: Stack[-1] = (int) 368
0xad8: Call2 0xae9

0xad9: Pop(3)
0xada: Return(); Pop(2)

0xadb: Stack[-1] = 0
0xadc: PushEmpty(object, object)
0xadd: @ GetDiaryRoot(Stack[-1])
0xade: Pop(0)
0xadf: Pop(0); Push((bool) Stack[-1] == 0)
0xae0: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae1: Push("Can't retrieve diary root")
0xae2: @ Trace(Stack[-1])
0xae3: Pop(1)
0xae4: Stack[-3] = (bool) 0
0xae5: Return(); Pop(2)

0xae6: Stack[-3] = Stack[-1]
0xae7: Return(); Pop(2)

0xae8: Stack[-1] = 0
0xae9: PushEmpty(object, object, int, object, object, int)
0xaea: PushEmpty(object)
0xaeb: Call2 0xadc

0xaec: Stack[-4] = Stack[-1]
0xaed: Pop(1)
0xaee: @@ Find(Stack[-7], Stack[-2])
0xaef: Pop(0)
0xaf0: Pop(0); Push((bool) Stack[-2] == 0)
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf2: Push("Can't find diary parent with id: ")
0xaf3: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaf4: @ Trace(Stack[-1])
0xaf5: Pop(1)
0xaf6: Stack[-9] = (bool) 0
0xaf7: Return(); Pop(6)

0xaf8: @@ AddChild(Stack[-8])
0xaf9: Pop(0)
0xafa: Push((int) 7)
0xafb: @ SendWorldWndMessage(Stack[-1])
0xafc: Pop(1)
0xafd: @@ GetCategory(Stack[-1])
0xafe: Pop(0)
0xaff: @ SetDiarySection(Stack[-1])
0xb00: Pop(0)
0xb01: Stack[-9] = (bool) 0
0xb02: Return(); Pop(6)

0xb03: Stack[-2] = 0
0xb04: Stack[-3] = 0
0xb05: PushEmpty(object, object, object, object)
0xb06: @ GetMainOutdoorScene(Stack[-2])
0xb07: Pop(0)
0xb08: Pop(0); Push((bool) Stack[-2] == 0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0a: Push("Can't find main outdoor scene")
0xb0b: @ Trace(Stack[-1])
0xb0c: Pop(1)
0xb0d: Stack[-1] = 0
0xb0e: Stack[-5] = Stack[-1]
0xb0f: Return(); Pop(4)

0xb10: @@ GetMap(Stack[-1])
0xb11: Pop(0)
0xb12: Stack[-5] = Stack[-1]
0xb13: Return(); Pop(4)

0xb14: Stack[-1] = 0
0xb15: Stack[-2] = 0
0xb16: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xb17: @ GetMainOutdoorScene(Stack[-2])
0xb18: Pop(0)
0xb19: Pop(0); Push((bool) Stack[-2] == 0)
0xb1a: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb1b: Push("Can't find main outdoor scene")
0xb1c: @ Trace(Stack[-1])
0xb1d: Pop(1)
0xb1e: Return(); Pop(8)

0xb1f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xb20: Pop(0)
0xb21: Pop(0); Push((bool) Stack[-1] == 0)
0xb22: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb23: Push("Warning: outdoor scene locator ")
0xb24: Pop(1); Push(Stack[-1] + Stack[-11]);
0xb25: Push(" doesnt exist")
0xb26: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb27: @ Trace(Stack[-1])
0xb28: Pop(1)
0xb29: @@ GetMap(Stack[-11])
0xb2a: Pop(0)
0xb2b: Pop(0); Push((bool) Stack[-11] == 0)
0xb2c: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb2d: Push("Can't find map")
0xb2e: @ Trace(Stack[-1])
0xb2f: Pop(1)
0xb30: Return(); Pop(8)

0xb31: Push(CvectorIndex(Stack[-4], 0))
0xb32: Push(CvectorIndex(Stack[-5], 2))
0xb33: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xb34: Pop(2)
0xb35: Return(); Pop(8)

0xb36: Stack[-2] = 0
0xb37: PushEmpty(int, int)
0xb38: Push("branch")
0xb39: @ GetVariable(Stack[-1], Stack[-2])
0xb3a: Pop(1)
0xb3b: Push((int) 0)
0xb3c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3d: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xb3e: Stack[-3] = (int) 1
0xb3f: Return(); Pop(2)

0xb40: GOTO 0xb46

0xb41: Push((int) 1)
0xb42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb43: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb44: Stack[-3] = (int) 2
0xb45: Return(); Pop(2)

0xb46: Stack[-3] = (int) 3
0xb47: Return(); Pop(2)

0xb48: Stack[-1] = (int) 515548
0xb49: Return(); Pop(0)

0xb4a: Stack[-1] = (int) 502873
0xb4b: Return(); Pop(0)

0xb4c: Stack[-1] = "ui/NPC_Notkin.png"
0xb4d: Return(); Pop(0)

0xb4e: Stack[-1] = "ui/NPC_Notkin_b.png"
0xb4f: Return(); Pop(0)

0xb50: Stack[-1] = (bool) 1
0xb51: Return(); Pop(0)

0xb52: PushEmpty()
0xb53: Push(GlobalVars[1])
0xb54: Pop(1); Push((bool) Stack[-1] == 0)
0xb55: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb56: PushEmpty(int, object)
0xb57: Stack[-1] = Stack[-3]
0xb58: Push(-2, 1); TaskCall(2)
0xb59: Call2 0x1f7

0xb5a: Pop(-2, 1); TaskReturn
0xb5b: Pop(2)
0xb5c: Push(GlobalVars[1])
0xb5d: Stack[-1] = (bool) 1
0xb5e: GlobalVars[1] = Stack[-1]; Pop(1)
0xb5f: PushEmpty(bool, int)
0xb60: Stack[-1] = (int) 1
0xb61: Call2 0xa2b

0xb62: Pop(1)
0xb63: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb64: PushEmpty(int, object)
0xb65: Stack[-1] = Stack[-3]
0xb66: Push(-2, 1); TaskCall(0)
0xb67: Call2 0x0

0xb68: Pop(-2, 1); TaskReturn
0xb69: Pop(2)
0xb6a: Return(); Pop(0)

0xb6b: PushEmpty(bool, int)
0xb6c: Stack[-1] = (int) 4
0xb6d: Call2 0xa2b

0xb6e: Pop(1)
0xb6f: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb70: PushEmpty(int, object)
0xb71: Stack[-1] = Stack[-3]
0xb72: Push(-2, 1); TaskCall(4)
0xb73: Call2 0x2c2

0xb74: Pop(-2, 1); TaskReturn
0xb75: Pop(2)
0xb76: Return(); Pop(0)

0xb77: PushEmpty(bool, int)
0xb78: Stack[-1] = (int) 10
0xb79: Call2 0xa2b

0xb7a: Pop(1)
0xb7b: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb7c: PushEmpty(int, object)
0xb7d: Stack[-1] = Stack[-3]
0xb7e: Push(-2, 1); TaskCall(6)
0xb7f: Call2 0x439

0xb80: Pop(-2, 1); TaskReturn
0xb81: Pop(2)
0xb82: Return(); Pop(0)

0xb83: PushEmpty(bool, int)
0xb84: Stack[-1] = (int) 12
0xb85: Call2 0xa2b

0xb86: Pop(1)
0xb87: IF (Stack[-1] == 0) GOTO 0xb8f; Pop(1)

0xb88: PushEmpty(int, object)
0xb89: Stack[-1] = Stack[-3]
0xb8a: Push(-2, 1); TaskCall(8)
0xb8b: Call2 0x5d7

0xb8c: Pop(-2, 1); TaskReturn
0xb8d: Pop(2)
0xb8e: Return(); Pop(0)

0xb8f: PushEmpty(int, object)
0xb90: Stack[-1] = Stack[-3]
0xb91: Push(-2, 1); TaskCall(10)
0xb92: Call2 0x6da

0xb93: Pop(-2, 1); TaskReturn
0xb94: Pop(2)
0xb95: Return(); Pop(0)

