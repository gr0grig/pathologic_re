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
	Fear
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Love
	Neutral
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
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Eva.png
	ui/NPC_Eva_b.png
	oob1Eva1
	oob2Eva1
	oob9Eva1
	b9q01
	quest_b9_01
	place_mdoberman
	init_factory
	oob1Eva2
	b1q01BakWillBeAt18
	pt_map_eva
	AddMark
	playsound
	giveitem
	rifle ammo30 is given
	rifle_ammo
	mapmark
	b9q01DankoAmmo
	b1q01GrifToldAboutDanko
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	mt_eva

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

RunOp = 0x671
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ff Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x394 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4a5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x647 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6ba Vars = (int)
		EVENT_6 Op = 0x6e0 Vars = ()
		EVENT_5 Op = 0x6ef Vars = ()
		EVENT_45 Op = 0x6fc Vars = (bool)
		EVENT_0 Op = 0x708 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7b3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x984

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x982

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x986

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x988

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xac5

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
0x31: Call2 0x8c9

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x80a

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
0x48: Call2 0x7f8

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
0x58: Stack[-1] = "Fear"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 518278)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0xa48

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 519444)
0x66: Push((int) 20613)
0x67: Push((int) 20612)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 518279)
0x6b: Push((int) -1)
0x6c: Push((int) 19388)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x98a

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x894

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
0x92: Call2 0x98a

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
0xa2: Call2 0x8a4

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x8c2

0xab: Pop(0)
0xac: Push((int) 20612)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x992

0xb3: Pop(2)
0xb4: Push((int) 19387)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Fear"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 518278)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0xa48

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 519444)
0xc6: Push((int) 20613)
0xc7: Push((int) 20612)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 518279)
0xcb: Push((int) -1)
0xcc: Push((int) 19388)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 20613)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Love"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 519445)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 519446)
0xdd: Push((int) 20615)
0xde: Push((int) 20614)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 519450)
0xe2: Push((int) 20620)
0xe3: Push((int) 20618)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 20615)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Love"
0xec: Call2 0x90

0xed: Pop(1)
0xee: Push((int) 519447)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 519451)
0xf4: Push((int) 20620)
0xf5: Push((int) 20619)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 519453)
0xf9: Push((int) 20620)
0xfa: Push((int) 20622)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: Push((int) 20620)
0xff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Fear"
0x103: Call2 0x90

0x104: Pop(1)
0x105: Push((int) 519452)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: Push((int) 519448)
0x10b: Push((int) -1)
0x10c: Push((int) 20616)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Push((int) 519449)
0x110: Push((int) -1)
0x111: Push((int) 20617)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x116: PushEmpty(bool)
0x117: Call2 0x98a

0x118: Pop(0)
0x119: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11a: @ lshStopAnimation()
0x11b: Pop(0)
0x11c: GOTO 0x11f

0x11d: @ StopAnimation()
0x11e: Pop(0)
0x11f: Return(); Pop(0)

0x120: GOTO 0xa7

0x121: Return(); Pop(0)

0x122: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x123: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x124: PushEmpty(bool, object, float)
0x125: Stack[-2] = Stack[-12]
0x126: Stack[-1] = (float) 70.0
0x127: Call2 0x7b3

0x128: Pop(2)
0x129: Pop(1); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-10] = (int) -2
0x12c: Return(); Pop(8)

0x12d: @ CreateDialog(Stack[-4])
0x12e: Pop(0)
0x12f: PushEmpty(int)
0x130: Call2 0x984

0x131: Pop(0)
0x132: @@ SetNPCName(Stack[-1])
0x133: Pop(1)
0x134: PushEmpty(int)
0x135: Call2 0x982

0x136: Pop(0)
0x137: @@ SetNPCDescription(Stack[-1])
0x138: Pop(1)
0x139: PushEmpty(string)
0x13a: Call2 0x986

0x13b: Pop(0)
0x13c: @@ SetPhoto(Stack[-1])
0x13d: Pop(1)
0x13e: PushEmpty(string)
0x13f: Call2 0x988

0x140: Pop(0)
0x141: @@ SetPhoto2(Stack[-1])
0x142: Pop(1)
0x143: PushEmpty(int)
0x144: Call2 0xac5

0x145: Pop(0)
0x146: @@ SetPlayerName(Stack[-1])
0x147: Pop(1)
0x148: Stack[-2] = (int) -1
0x149: @ IsOverrideActive(Stack[-3])
0x14a: Pop(0)
0x14b: Push(Stack[-3])
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: Stack[-10] = (int) -2
0x14e: Return(); Pop(8)

0x14f: @ DoDialog(Stack[-4])
0x150: Pop(0)
0x151: PushEmpty(bool, object)
0x152: PushEmpty(object)
0x153: Call2 0x8c9

0x154: Stack[-2] = Stack[-1]
0x155: Pop(1)
0x156: Call2 0x80a

0x157: Pop(2)
0x158: PushEmpty(object, object)
0x159: Stack[-2] = Stack[-11]
0x15a: Stack[-1] = Stack[-6]
0x15b: Push(-2, 4); TaskCall(3)
0x15c: Call2 0x173

0x15d: Pop(-2, 4); TaskReturn
0x15e: Pop(2)
0x15f: @@ IsDialogEnd(Stack[-1])
0x160: Pop(0)
0x161: Pop(0); Push((bool) Stack[-1] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: @ sync()
0x164: Pop(0)
0x165: @@ IsDialogEnd(Stack[-1])
0x166: Pop(0)
0x167: GOTO 0x161

0x168: PushEmpty(object)
0x169: Stack[-1] = Stack[-10]
0x16a: Call2 0x7f8

0x16b: Pop(1)
0x16c: @ StopDialog(Stack[-4])
0x16d: Pop(0)
0x16e: @@ GetReturnValue(Stack[-2])
0x16f: Pop(0)
0x170: Stack[-10] = Stack[-2]
0x171: Return(); Pop(8)

0x172: Stack[-4] = 0
0x173: PushEmpty()
0x174: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x175: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x176: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x177: Push((int) 1)
0x178: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x179: PushEmpty(string)
0x17a: Stack[-1] = "Fear"
0x17b: Call2 0x1e9

0x17c: Pop(1)
0x17d: Push((int) 520203)
0x17e: @@ SetMessage(Stack[-1])
0x17f: Pop(1)
0x180: @@ ClearReplies()
0x181: Pop(0)
0x182: PushEmpty(bool, object)
0x183: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x184: Call2 0xa3c

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x187: Push((int) 520204)
0x188: Push((int) 21397)
0x189: Push((int) 21396)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: PushEmpty(bool)
0x18d: Stack[-1] = (bool) 1
0x18e: PushEmpty(bool)
0x18f: Stack[-1] = (bool) 0
0x190: PushEmpty(bool)
0x191: Stack[-1] = (bool) 0
0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x194: Call2 0xa10

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0xa32

0x19a: Pop(1)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: Stack[-1] = (bool) 1
0x19d: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19e: PushEmpty(bool, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Call2 0xa1c

0x1a1: Pop(1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Stack[-1] = (bool) 1
0x1a4: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1a5: PushEmpty(bool)
0x1a6: Stack[-1] = (bool) 0
0x1a7: PushEmpty(bool)
0x1a8: Stack[-1] = (bool) 0
0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0xa28

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b0: Call2 0xa10

0x1b1: Pop(1)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call2 0xa1c

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = (bool) 1
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 0
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: Push((int) 520211)
0x1bf: Push((int) 21404)
0x1c0: Push((int) 21403)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 520215)
0x1c4: Push((int) -1)
0x1c5: Push((int) 21407)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: GOTO 0x1cb

0x1c9: Return(); Pop(0)

0x1ca: GOTO 0x177

0x1cb: PushEmpty(bool)
0x1cc: Call2 0x98a

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cf: @ lshWaitForAnimEnd()
0x1d0: Pop(0)
0x1d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: GOTO 0x1d9

0x1d4: PushEmpty(string)
0x1d5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1d6: Call2 0x894

0x1d7: Pop(1)
0x1d8: GOTO 0x1cf

0x1d9: GOTO 0x1e8

0x1da: Push("all")
0x1db: Push("idle")
0x1dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: @ WaitForAnimEnd()
0x1df: Pop(0)
0x1e0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: GOTO 0x1e8

0x1e3: Push("all")
0x1e4: Push("idle")
0x1e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: GOTO 0x1de

0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: PushEmpty(bool)
0x1eb: Call2 0x98a

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Return(); Pop(0)

0x1f0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(string, bool)
0x1f4: Stack[-2] = Stack[-3]
0x1f5: Push("")
0x1f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f8: Stack[-1] = (bool) 0
0x1f9: GOTO 0x1fb

0x1fa: Stack[-1] = (bool) 1
0x1fb: Call2 0x8a4

0x1fc: Pop(2)
0x1fd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty()
0x200: Push((int) 1)
0x201: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x202: PushEmpty()
0x203: Call2 0x8c2

0x204: Pop(0)
0x205: Push((int) 21396)
0x206: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: PushEmpty(object, object)
0x209: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20b: Call2 0x98c

0x20c: Pop(2)
0x20d: Push((int) 21403)
0x20e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: PushEmpty(object, object)
0x211: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x212: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x213: Call2 0x9b8

0x214: Pop(2)
0x215: Push((int) 21405)
0x216: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: PushEmpty(object, object)
0x219: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21b: Call2 0x9df

0x21c: Pop(2)
0x21d: Push((int) 26115)
0x21e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(object, object)
0x221: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x222: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x223: Call2 0x9be

0x224: Pop(2)
0x225: PushEmpty(object, object)
0x226: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x227: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x228: Call2 0x9e6

0x229: Pop(2)
0x22a: PushEmpty(object, object)
0x22b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22d: Call2 0x9b1

0x22e: Pop(2)
0x22f: Push((int) 21406)
0x230: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x232: PushEmpty(object, object)
0x233: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x234: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x235: Call2 0x9be

0x236: Pop(2)
0x237: PushEmpty(object, object)
0x238: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x239: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23a: Call2 0x9e6

0x23b: Pop(2)
0x23c: Push((int) 21395)
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Fear"
0x241: Call2 0x1e9

0x242: Pop(1)
0x243: Push((int) 520203)
0x244: @@ SetMessage(Stack[-1])
0x245: Pop(1)
0x246: @@ ClearReplies()
0x247: Pop(0)
0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0xa3c

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24d: Push((int) 520204)
0x24e: Push((int) 21397)
0x24f: Push((int) 21396)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 1
0x254: PushEmpty(bool)
0x255: Stack[-1] = (bool) 0
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Call2 0xa10

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Call2 0xa32

0x260: Pop(1)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[-1] = (bool) 1
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x266: Call2 0xa1c

0x267: Pop(1)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x26b: PushEmpty(bool)
0x26c: Stack[-1] = (bool) 0
0x26d: PushEmpty(bool)
0x26e: Stack[-1] = (bool) 0
0x26f: PushEmpty(bool, object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call2 0xa28

0x272: Pop(1)
0x273: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0xa10

0x277: Pop(1)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: Stack[-1] = (bool) 1
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call2 0xa1c

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: Stack[-1] = (bool) 1
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Stack[-1] = (bool) 0
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: Push((int) 520211)
0x285: Push((int) 21404)
0x286: Push((int) 21403)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Push((int) 520215)
0x28a: Push((int) -1)
0x28b: Push((int) 21407)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Return(); Pop(0)

0x28f: Push((int) 21404)
0x290: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x292: PushEmpty(string)
0x293: Stack[-1] = "Fear"
0x294: Call2 0x1e9

0x295: Pop(1)
0x296: Push((int) 520212)
0x297: @@ SetMessage(Stack[-1])
0x298: Pop(1)
0x299: @@ ClearReplies()
0x29a: Pop(0)
0x29b: Push((int) 520213)
0x29c: Push((int) 26114)
0x29d: Push((int) 21405)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: Push((int) 520214)
0x2a1: Push((int) -1)
0x2a2: Push((int) 21406)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Push((int) 26114)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Fear"
0x2ab: Call2 0x1e9

0x2ac: Pop(1)
0x2ad: Push((int) 524804)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 524805)
0x2b3: Push((int) -1)
0x2b4: Push((int) 26115)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 21397)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Fear"
0x2bd: Call2 0x1e9

0x2be: Pop(1)
0x2bf: Push((int) 520205)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 520206)
0x2c5: Push((int) 21399)
0x2c6: Push((int) 21398)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Push((int) 520210)
0x2ca: Push((int) -1)
0x2cb: Push((int) 21402)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 21399)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Fear"
0x2d4: Call2 0x1e9

0x2d5: Pop(1)
0x2d6: Push((int) 520207)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 520208)
0x2dc: Push((int) -1)
0x2dd: Push((int) 21400)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Push((int) 520209)
0x2e1: Push((int) -1)
0x2e2: Push((int) 21401)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Return(); Pop(0)

0x2e6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e7: PushEmpty(bool)
0x2e8: Call2 0x98a

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: @ lshStopAnimation()
0x2ec: Pop(0)
0x2ed: GOTO 0x2f0

0x2ee: @ StopAnimation()
0x2ef: Pop(0)
0x2f0: Return(); Pop(0)

0x2f1: GOTO 0x200

0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2f5: PushEmpty(bool, object, float)
0x2f6: Stack[-2] = Stack[-12]
0x2f7: Stack[-1] = (float) 70.0
0x2f8: Call2 0x7b3

0x2f9: Pop(2)
0x2fa: Pop(1); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-10] = (int) -2
0x2fd: Return(); Pop(8)

0x2fe: @ CreateDialog(Stack[-4])
0x2ff: Pop(0)
0x300: PushEmpty(int)
0x301: Call2 0x984

0x302: Pop(0)
0x303: @@ SetNPCName(Stack[-1])
0x304: Pop(1)
0x305: PushEmpty(int)
0x306: Call2 0x982

0x307: Pop(0)
0x308: @@ SetNPCDescription(Stack[-1])
0x309: Pop(1)
0x30a: PushEmpty(string)
0x30b: Call2 0x986

0x30c: Pop(0)
0x30d: @@ SetPhoto(Stack[-1])
0x30e: Pop(1)
0x30f: PushEmpty(string)
0x310: Call2 0x988

0x311: Pop(0)
0x312: @@ SetPhoto2(Stack[-1])
0x313: Pop(1)
0x314: PushEmpty(int)
0x315: Call2 0xac5

0x316: Pop(0)
0x317: @@ SetPlayerName(Stack[-1])
0x318: Pop(1)
0x319: Stack[-2] = (int) -1
0x31a: @ IsOverrideActive(Stack[-3])
0x31b: Pop(0)
0x31c: Push(Stack[-3])
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: Stack[-10] = (int) -2
0x31f: Return(); Pop(8)

0x320: @ DoDialog(Stack[-4])
0x321: Pop(0)
0x322: PushEmpty(bool, object)
0x323: PushEmpty(object)
0x324: Call2 0x8c9

0x325: Stack[-2] = Stack[-1]
0x326: Pop(1)
0x327: Call2 0x80a

0x328: Pop(2)
0x329: PushEmpty(object, object)
0x32a: Stack[-2] = Stack[-11]
0x32b: Stack[-1] = Stack[-6]
0x32c: Push(-2, 4); TaskCall(5)
0x32d: Call2 0x344

0x32e: Pop(-2, 4); TaskReturn
0x32f: Pop(2)
0x330: @@ IsDialogEnd(Stack[-1])
0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[-1] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x334: @ sync()
0x335: Pop(0)
0x336: @@ IsDialogEnd(Stack[-1])
0x337: Pop(0)
0x338: GOTO 0x332

0x339: PushEmpty(object)
0x33a: Stack[-1] = Stack[-10]
0x33b: Call2 0x7f8

0x33c: Pop(1)
0x33d: @ StopDialog(Stack[-4])
0x33e: Pop(0)
0x33f: @@ GetReturnValue(Stack[-2])
0x340: Pop(0)
0x341: Stack[-10] = Stack[-2]
0x342: Return(); Pop(8)

0x343: Stack[-4] = 0
0x344: PushEmpty()
0x345: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x346: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x347: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x348: Push((int) 1)
0x349: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x34a: PushEmpty(string)
0x34b: Stack[-1] = "Fear"
0x34c: Call2 0x37e

0x34d: Pop(1)
0x34e: Push((int) 520716)
0x34f: @@ SetMessage(Stack[-1])
0x350: Pop(1)
0x351: @@ ClearReplies()
0x352: Pop(0)
0x353: Push((int) 520717)
0x354: Push((int) 21929)
0x355: Push((int) 21928)
0x356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: Push((int) 520721)
0x359: Push((int) 21933)
0x35a: Push((int) 21932)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: GOTO 0x360

0x35e: Return(); Pop(0)

0x35f: GOTO 0x348

0x360: PushEmpty(bool)
0x361: Call2 0x98a

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x364: @ lshWaitForAnimEnd()
0x365: Pop(0)
0x366: Push( Stack[3 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: GOTO 0x36e

0x369: PushEmpty(string)
0x36a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x36b: Call2 0x894

0x36c: Pop(1)
0x36d: GOTO 0x364

0x36e: GOTO 0x37d

0x36f: Push("all")
0x370: Push("idle")
0x371: @ PlayAnimation(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: @ WaitForAnimEnd()
0x374: Pop(0)
0x375: Push( Stack[3 + Tasks[-1].StackPointer] )
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: GOTO 0x37d

0x378: Push("all")
0x379: Push("idle")
0x37a: @ PlayAnimation(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: GOTO 0x373

0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: PushEmpty(bool)
0x380: Call2 0x98a

0x381: Pop(0)
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Return(); Pop(0)

0x385: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Return(); Pop(0)

0x388: PushEmpty(string, bool)
0x389: Stack[-2] = Stack[-3]
0x38a: Push("")
0x38b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-1] = (bool) 0
0x38e: GOTO 0x390

0x38f: Stack[-1] = (bool) 1
0x390: Call2 0x8a4

0x391: Pop(2)
0x392: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x393: Return(); Pop(0)

0x394: PushEmpty()
0x395: Push((int) 1)
0x396: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x397: PushEmpty()
0x398: Call2 0x8c2

0x399: Pop(0)
0x39a: Push((int) 21927)
0x39b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x39d: PushEmpty(string)
0x39e: Stack[-1] = "Fear"
0x39f: Call2 0x37e

0x3a0: Pop(1)
0x3a1: Push((int) 520716)
0x3a2: @@ SetMessage(Stack[-1])
0x3a3: Pop(1)
0x3a4: @@ ClearReplies()
0x3a5: Pop(0)
0x3a6: Push((int) 520717)
0x3a7: Push((int) 21929)
0x3a8: Push((int) 21928)
0x3a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3aa: Pop(3)
0x3ab: Push((int) 520721)
0x3ac: Push((int) 21933)
0x3ad: Push((int) 21932)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 21933)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Fear"
0x3b6: Call2 0x37e

0x3b7: Pop(1)
0x3b8: Push((int) 520722)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 520723)
0x3be: Push((int) -1)
0x3bf: Push((int) 21934)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Push((int) 520724)
0x3c3: Push((int) -1)
0x3c4: Push((int) 21935)
0x3c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c6: Pop(3)
0x3c7: Return(); Pop(0)

0x3c8: Push((int) 21929)
0x3c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "Fear"
0x3cd: Call2 0x37e

0x3ce: Pop(1)
0x3cf: Push((int) 520718)
0x3d0: @@ SetMessage(Stack[-1])
0x3d1: Pop(1)
0x3d2: @@ ClearReplies()
0x3d3: Pop(0)
0x3d4: Push((int) 520719)
0x3d5: Push((int) -1)
0x3d6: Push((int) 21930)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Push((int) 520720)
0x3da: Push((int) -1)
0x3db: Push((int) 21931)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Return(); Pop(0)

0x3df: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3e0: PushEmpty(bool)
0x3e1: Call2 0x98a

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e4: @ lshStopAnimation()
0x3e5: Pop(0)
0x3e6: GOTO 0x3e9

0x3e7: @ StopAnimation()
0x3e8: Pop(0)
0x3e9: Return(); Pop(0)

0x3ea: GOTO 0x395

0x3eb: Return(); Pop(0)

0x3ec: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ee: PushEmpty(bool, object, float)
0x3ef: Stack[-2] = Stack[-12]
0x3f0: Stack[-1] = (float) 70.0
0x3f1: Call2 0x7b3

0x3f2: Pop(2)
0x3f3: Pop(1); Push((bool) Stack[-1] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-10] = (int) -2
0x3f6: Return(); Pop(8)

0x3f7: @ CreateDialog(Stack[-4])
0x3f8: Pop(0)
0x3f9: PushEmpty(int)
0x3fa: Call2 0x984

0x3fb: Pop(0)
0x3fc: @@ SetNPCName(Stack[-1])
0x3fd: Pop(1)
0x3fe: PushEmpty(int)
0x3ff: Call2 0x982

0x400: Pop(0)
0x401: @@ SetNPCDescription(Stack[-1])
0x402: Pop(1)
0x403: PushEmpty(string)
0x404: Call2 0x986

0x405: Pop(0)
0x406: @@ SetPhoto(Stack[-1])
0x407: Pop(1)
0x408: PushEmpty(string)
0x409: Call2 0x988

0x40a: Pop(0)
0x40b: @@ SetPhoto2(Stack[-1])
0x40c: Pop(1)
0x40d: PushEmpty(int)
0x40e: Call2 0xac5

0x40f: Pop(0)
0x410: @@ SetPlayerName(Stack[-1])
0x411: Pop(1)
0x412: Stack[-2] = (int) -1
0x413: @ IsOverrideActive(Stack[-3])
0x414: Pop(0)
0x415: Push(Stack[-3])
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Stack[-10] = (int) -2
0x418: Return(); Pop(8)

0x419: @ DoDialog(Stack[-4])
0x41a: Pop(0)
0x41b: PushEmpty(bool, object)
0x41c: PushEmpty(object)
0x41d: Call2 0x8c9

0x41e: Stack[-2] = Stack[-1]
0x41f: Pop(1)
0x420: Call2 0x80a

0x421: Pop(2)
0x422: PushEmpty(object, object)
0x423: Stack[-2] = Stack[-11]
0x424: Stack[-1] = Stack[-6]
0x425: Push(-2, 4); TaskCall(7)
0x426: Call2 0x43d

0x427: Pop(-2, 4); TaskReturn
0x428: Pop(2)
0x429: @@ IsDialogEnd(Stack[-1])
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-1] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: @ sync()
0x42e: Pop(0)
0x42f: @@ IsDialogEnd(Stack[-1])
0x430: Pop(0)
0x431: GOTO 0x42b

0x432: PushEmpty(object)
0x433: Stack[-1] = Stack[-10]
0x434: Call2 0x7f8

0x435: Pop(1)
0x436: @ StopDialog(Stack[-4])
0x437: Pop(0)
0x438: @@ GetReturnValue(Stack[-2])
0x439: Pop(0)
0x43a: Stack[-10] = Stack[-2]
0x43b: Return(); Pop(8)

0x43c: Stack[-4] = 0
0x43d: PushEmpty()
0x43e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x43f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x440: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x441: Push((int) 1)
0x442: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x443: PushEmpty(string)
0x444: Stack[-1] = "Neutral"
0x445: Call2 0x48f

0x446: Pop(1)
0x447: Push((int) 521552)
0x448: @@ SetMessage(Stack[-1])
0x449: Pop(1)
0x44a: @@ ClearReplies()
0x44b: Pop(0)
0x44c: PushEmpty(bool, object)
0x44d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44e: Call2 0x9ec

0x44f: Pop(1)
0x450: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x451: Push((int) 521553)
0x452: Push((int) 22715)
0x453: Push((int) 22714)
0x454: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x455: Pop(3)
0x456: PushEmpty(bool)
0x457: Stack[-1] = (bool) 0
0x458: PushEmpty(bool, object)
0x459: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45a: Call2 0x9f8

0x45b: Pop(1)
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: PushEmpty(bool, object)
0x45e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45f: Call2 0xa04

0x460: Pop(1)
0x461: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x462: Stack[-1] = (bool) 1
0x463: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x464: Push((int) 521609)
0x465: Push((int) 22777)
0x466: Push((int) 22776)
0x467: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: Push((int) 521556)
0x46a: Push((int) -1)
0x46b: Push((int) 22717)
0x46c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46d: Pop(3)
0x46e: GOTO 0x471

0x46f: Return(); Pop(0)

0x470: GOTO 0x441

0x471: PushEmpty(bool)
0x472: Call2 0x98a

0x473: Pop(0)
0x474: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x475: @ lshWaitForAnimEnd()
0x476: Pop(0)
0x477: Push( Stack[3 + Tasks[-1].StackPointer] )
0x478: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x479: GOTO 0x47f

0x47a: PushEmpty(string)
0x47b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x47c: Call2 0x894

0x47d: Pop(1)
0x47e: GOTO 0x475

0x47f: GOTO 0x48e

0x480: Push("all")
0x481: Push("idle")
0x482: @ PlayAnimation(Stack[-2], Stack[-1])
0x483: Pop(2)
0x484: @ WaitForAnimEnd()
0x485: Pop(0)
0x486: Push( Stack[3 + Tasks[-1].StackPointer] )
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: GOTO 0x48e

0x489: Push("all")
0x48a: Push("idle")
0x48b: @ PlayAnimation(Stack[-2], Stack[-1])
0x48c: Pop(2)
0x48d: GOTO 0x484

0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: PushEmpty(bool)
0x491: Call2 0x98a

0x492: Pop(0)
0x493: Pop(1); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Return(); Pop(0)

0x496: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x497: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x498: Return(); Pop(0)

0x499: PushEmpty(string, bool)
0x49a: Stack[-2] = Stack[-3]
0x49b: Push("")
0x49c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49e: Stack[-1] = (bool) 0
0x49f: GOTO 0x4a1

0x4a0: Stack[-1] = (bool) 1
0x4a1: Call2 0x8a4

0x4a2: Pop(2)
0x4a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: Push((int) 1)
0x4a7: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x4a8: PushEmpty()
0x4a9: Call2 0x8c2

0x4aa: Pop(0)
0x4ab: Push((int) 23411)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(object, object)
0x4af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b1: Call2 0x99e

0x4b2: Pop(2)
0x4b3: Push((int) 23412)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b6: PushEmpty(object, object)
0x4b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0x99e

0x4ba: Pop(2)
0x4bb: Push((int) 22716)
0x4bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4be: PushEmpty(object, object)
0x4bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c1: Call2 0x99e

0x4c2: Pop(2)
0x4c3: Push((int) 22776)
0x4c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c6: PushEmpty(object, object)
0x4c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c9: Call2 0x998

0x4ca: Pop(2)
0x4cb: Push((int) 22778)
0x4cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4ce: PushEmpty(object, object)
0x4cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d1: Call2 0x9ce

0x4d2: Pop(2)
0x4d3: PushEmpty(object, object)
0x4d4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d6: Call2 0x9d4

0x4d7: Pop(2)
0x4d8: Push((int) 22713)
0x4d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4db: PushEmpty(string)
0x4dc: Stack[-1] = "Neutral"
0x4dd: Call2 0x48f

0x4de: Pop(1)
0x4df: Push((int) 521552)
0x4e0: @@ SetMessage(Stack[-1])
0x4e1: Pop(1)
0x4e2: @@ ClearReplies()
0x4e3: Pop(0)
0x4e4: PushEmpty(bool, object)
0x4e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e6: Call2 0x9ec

0x4e7: Pop(1)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4e9: Push((int) 521553)
0x4ea: Push((int) 22715)
0x4eb: Push((int) 22714)
0x4ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ed: Pop(3)
0x4ee: PushEmpty(bool)
0x4ef: Stack[-1] = (bool) 0
0x4f0: PushEmpty(bool, object)
0x4f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f2: Call2 0x9f8

0x4f3: Pop(1)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f5: PushEmpty(bool, object)
0x4f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f7: Call2 0xa04

0x4f8: Pop(1)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: Stack[-1] = (bool) 1
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: Push((int) 521609)
0x4fd: Push((int) 22777)
0x4fe: Push((int) 22776)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Push((int) 521556)
0x502: Push((int) -1)
0x503: Push((int) 22717)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 22777)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Fear"
0x50c: Call2 0x48f

0x50d: Pop(1)
0x50e: Push((int) 521610)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: Push((int) 522261)
0x514: Push((int) 23414)
0x515: Push((int) 23413)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 23414)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Fear"
0x51e: Call2 0x48f

0x51f: Pop(1)
0x520: Push((int) 522262)
0x521: @@ SetMessage(Stack[-1])
0x522: Pop(1)
0x523: @@ ClearReplies()
0x524: Pop(0)
0x525: Push((int) 522263)
0x526: Push((int) 23418)
0x527: Push((int) 23415)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Push((int) 522264)
0x52b: Push((int) 23417)
0x52c: Push((int) 23416)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 23417)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Love"
0x535: Call2 0x48f

0x536: Pop(1)
0x537: Push((int) 522265)
0x538: @@ SetMessage(Stack[-1])
0x539: Pop(1)
0x53a: @@ ClearReplies()
0x53b: Pop(0)
0x53c: Push((int) 522269)
0x53d: Push((int) 23418)
0x53e: Push((int) 23421)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Push((int) 522271)
0x542: Push((int) -1)
0x543: Push((int) 23423)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Push((int) 23418)
0x548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x54a: PushEmpty(string)
0x54b: Stack[-1] = "Love"
0x54c: Call2 0x48f

0x54d: Pop(1)
0x54e: Push((int) 522266)
0x54f: @@ SetMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ ClearReplies()
0x552: Pop(0)
0x553: Push((int) 522267)
0x554: Push((int) 23420)
0x555: Push((int) 23419)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Return(); Pop(0)

0x559: Push((int) 23420)
0x55a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x55c: PushEmpty(string)
0x55d: Stack[-1] = "Love"
0x55e: Call2 0x48f

0x55f: Pop(1)
0x560: Push((int) 522268)
0x561: @@ SetMessage(Stack[-1])
0x562: Pop(1)
0x563: @@ ClearReplies()
0x564: Pop(0)
0x565: Push((int) 521611)
0x566: Push((int) -1)
0x567: Push((int) 22778)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: Return(); Pop(0)

0x56b: Push((int) 22715)
0x56c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Fear"
0x570: Call2 0x48f

0x571: Pop(1)
0x572: Push((int) 521554)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 522257)
0x578: Push((int) 23410)
0x579: Push((int) 23409)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Push((int) 521555)
0x57d: Push((int) -1)
0x57e: Push((int) 22716)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: Push((int) 23410)
0x583: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x585: PushEmpty(string)
0x586: Stack[-1] = "Fear"
0x587: Call2 0x48f

0x588: Pop(1)
0x589: Push((int) 522258)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: Push((int) 522259)
0x58f: Push((int) -1)
0x590: Push((int) 23411)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Push((int) 522260)
0x594: Push((int) -1)
0x595: Push((int) 23412)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: Return(); Pop(0)

0x599: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x59a: PushEmpty(bool)
0x59b: Call2 0x98a

0x59c: Pop(0)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59e: @ lshStopAnimation()
0x59f: Pop(0)
0x5a0: GOTO 0x5a3

0x5a1: @ StopAnimation()
0x5a2: Pop(0)
0x5a3: Return(); Pop(0)

0x5a4: GOTO 0x4a6

0x5a5: Return(); Pop(0)

0x5a6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5a8: PushEmpty(bool, object, float)
0x5a9: Stack[-2] = Stack[-12]
0x5aa: Stack[-1] = (float) 70.0
0x5ab: Call2 0x7b3

0x5ac: Pop(2)
0x5ad: Pop(1); Push((bool) Stack[-1] == 0)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5af: Stack[-10] = (int) -2
0x5b0: Return(); Pop(8)

0x5b1: @ CreateDialog(Stack[-4])
0x5b2: Pop(0)
0x5b3: PushEmpty(int)
0x5b4: Call2 0x984

0x5b5: Pop(0)
0x5b6: @@ SetNPCName(Stack[-1])
0x5b7: Pop(1)
0x5b8: PushEmpty(int)
0x5b9: Call2 0x982

0x5ba: Pop(0)
0x5bb: @@ SetNPCDescription(Stack[-1])
0x5bc: Pop(1)
0x5bd: PushEmpty(string)
0x5be: Call2 0x986

0x5bf: Pop(0)
0x5c0: @@ SetPhoto(Stack[-1])
0x5c1: Pop(1)
0x5c2: PushEmpty(string)
0x5c3: Call2 0x988

0x5c4: Pop(0)
0x5c5: @@ SetPhoto2(Stack[-1])
0x5c6: Pop(1)
0x5c7: PushEmpty(int)
0x5c8: Call2 0xac5

0x5c9: Pop(0)
0x5ca: @@ SetPlayerName(Stack[-1])
0x5cb: Pop(1)
0x5cc: Stack[-2] = (int) -1
0x5cd: @ IsOverrideActive(Stack[-3])
0x5ce: Pop(0)
0x5cf: Push(Stack[-3])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-10] = (int) -2
0x5d2: Return(); Pop(8)

0x5d3: @ DoDialog(Stack[-4])
0x5d4: Pop(0)
0x5d5: PushEmpty(bool, object)
0x5d6: PushEmpty(object)
0x5d7: Call2 0x8c9

0x5d8: Stack[-2] = Stack[-1]
0x5d9: Pop(1)
0x5da: Call2 0x80a

0x5db: Pop(2)
0x5dc: PushEmpty(object, object)
0x5dd: Stack[-2] = Stack[-11]
0x5de: Stack[-1] = Stack[-6]
0x5df: Push(-2, 4); TaskCall(9)
0x5e0: Call2 0x5f7

0x5e1: Pop(-2, 4); TaskReturn
0x5e2: Pop(2)
0x5e3: @@ IsDialogEnd(Stack[-1])
0x5e4: Pop(0)
0x5e5: Pop(0); Push((bool) Stack[-1] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e7: @ sync()
0x5e8: Pop(0)
0x5e9: @@ IsDialogEnd(Stack[-1])
0x5ea: Pop(0)
0x5eb: GOTO 0x5e5

0x5ec: PushEmpty(object)
0x5ed: Stack[-1] = Stack[-10]
0x5ee: Call2 0x7f8

0x5ef: Pop(1)
0x5f0: @ StopDialog(Stack[-4])
0x5f1: Pop(0)
0x5f2: @@ GetReturnValue(Stack[-2])
0x5f3: Pop(0)
0x5f4: Stack[-10] = Stack[-2]
0x5f5: Return(); Pop(8)

0x5f6: Stack[-4] = 0
0x5f7: PushEmpty()
0x5f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5fb: Push((int) 1)
0x5fc: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x5fd: PushEmpty(string)
0x5fe: Stack[-1] = "Neutral"
0x5ff: Call2 0x631

0x600: Pop(1)
0x601: Push((int) 540551)
0x602: @@ SetMessage(Stack[-1])
0x603: Pop(1)
0x604: @@ ClearReplies()
0x605: Pop(0)
0x606: Push((int) 540552)
0x607: Push((int) -1)
0x608: Push((int) 42561)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: Push((int) 540795)
0x60c: Push((int) -1)
0x60d: Push((int) 42844)
0x60e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: GOTO 0x613

0x611: Return(); Pop(0)

0x612: GOTO 0x5fb

0x613: PushEmpty(bool)
0x614: Call2 0x98a

0x615: Pop(0)
0x616: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x617: @ lshWaitForAnimEnd()
0x618: Pop(0)
0x619: Push( Stack[3 + Tasks[-1].StackPointer] )
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: GOTO 0x621

0x61c: PushEmpty(string)
0x61d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61e: Call2 0x894

0x61f: Pop(1)
0x620: GOTO 0x617

0x621: GOTO 0x630

0x622: Push("all")
0x623: Push("idle")
0x624: @ PlayAnimation(Stack[-2], Stack[-1])
0x625: Pop(2)
0x626: @ WaitForAnimEnd()
0x627: Pop(0)
0x628: Push( Stack[3 + Tasks[-1].StackPointer] )
0x629: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x62a: GOTO 0x630

0x62b: Push("all")
0x62c: Push("idle")
0x62d: @ PlayAnimation(Stack[-2], Stack[-1])
0x62e: Pop(2)
0x62f: GOTO 0x626

0x630: Return(); Pop(0)

0x631: PushEmpty()
0x632: PushEmpty(bool)
0x633: Call2 0x98a

0x634: Pop(0)
0x635: Pop(1); Push((bool) Stack[-1] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: Return(); Pop(0)

0x638: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x639: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x63a: Return(); Pop(0)

0x63b: PushEmpty(string, bool)
0x63c: Stack[-2] = Stack[-3]
0x63d: Push("")
0x63e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-1] = (bool) 0
0x641: GOTO 0x643

0x642: Stack[-1] = (bool) 1
0x643: Call2 0x8a4

0x644: Pop(2)
0x645: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x646: Return(); Pop(0)

0x647: PushEmpty()
0x648: Push((int) 1)
0x649: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x64a: PushEmpty()
0x64b: Call2 0x8c2

0x64c: Pop(0)
0x64d: Push((int) 42560)
0x64e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x650: PushEmpty(string)
0x651: Stack[-1] = "Neutral"
0x652: Call2 0x631

0x653: Pop(1)
0x654: Push((int) 540551)
0x655: @@ SetMessage(Stack[-1])
0x656: Pop(1)
0x657: @@ ClearReplies()
0x658: Pop(0)
0x659: Push((int) 540552)
0x65a: Push((int) -1)
0x65b: Push((int) 42561)
0x65c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(3)
0x65e: Push((int) 540795)
0x65f: Push((int) -1)
0x660: Push((int) 42844)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Return(); Pop(0)

0x664: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x665: PushEmpty(bool)
0x666: Call2 0x98a

0x667: Pop(0)
0x668: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x669: @ lshStopAnimation()
0x66a: Pop(0)
0x66b: GOTO 0x66e

0x66c: @ StopAnimation()
0x66d: Pop(0)
0x66e: Return(); Pop(0)

0x66f: GOTO 0x648

0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Call2 0x675

0x673: Pop(0)
0x674: Return(); Pop(0)

0x675: PushEmpty(bool)
0x676: Call2 0x7ae

0x677: Pop(0)
0x678: Pop(1); Push((bool) Stack[-1] == 0)
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: @ Hold()
0x67b: Pop(0)
0x67c: @ GetDirection(Stack[-0])
0x67d: Pop(0)
0x67e: PushEmpty()
0x67f: Call2 0x725

0x680: Pop(0)
0x681: GOTO 0x67e

0x682: Return(); Pop(0)

0x683: PushEmpty(object, object)
0x684: Push("player")
0x685: @ FindActor(Stack[-2], Stack[-1])
0x686: Pop(1)
0x687: Pop(0); Push((bool) Stack[-1] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-3] = (bool) 0
0x68a: Return(); Pop(2)

0x68b: PushEmpty(bool, object)
0x68c: Stack[-1] = Stack[-3]
0x68d: Call2 0x7a5

0x68e: Stack[-5] = Stack[-2]
0x68f: Pop(2)
0x690: Return(); Pop(2)

0x691: Stack[-1] = 0
0x692: Push(CvectorIndex(Stack[-0], 0))
0x693: Push(CvectorIndex(Stack[-0], 2))
0x694: @ RotateAsync(Stack[-2], Stack[-1])
0x695: Pop(2)
0x696: Return(); Pop(0)

0x697: PushEmpty(object, bool, object, bool)
0x698: Push("player")
0x699: @ FindActor(Stack[-3], Stack[-1])
0x69a: Pop(1)
0x69b: Pop(0); Push((bool) Stack[-2] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69d: Stack[-5] = (bool) 0
0x69e: Return(); Pop(4)

0x69f: PushEmpty(float, object)
0x6a0: Stack[-1] = Stack[-4]
0x6a1: Call2 0x771

0x6a2: Pop(1)
0x6a3: Push((float)90000.0)
0x6a4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-5] = (bool) 0
0x6a7: Return(); Pop(4)

0x6a8: @ CanSee(Stack[-1], Stack[-2])
0x6a9: Pop(0)
0x6aa: Stack[-5] = Stack[-1]
0x6ab: Return(); Pop(4)

0x6ac: Stack[-2] = 0
0x6ad: PushEmpty(float, float)
0x6ae: Push((int) 8)
0x6af: Push((int) 16)
0x6b0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(2)
0x6b2: Push((int) 10)
0x6b3: @ SetTimer(Stack[-1], Stack[-2])
0x6b4: Pop(1)
0x6b5: Return(); Pop(2)

0x6b6: Push((int) 10)
0x6b7: @ KillTimer(Stack[-1])
0x6b8: Pop(1)
0x6b9: Return(); Pop(0)

0x6ba: PushEmpty()
0x6bb: Push((int) 10)
0x6bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6be: PushEmpty()
0x6bf: Call2 0x6b6

0x6c0: Pop(0)
0x6c1: PushEmpty(bool)
0x6c2: Stack[-1] = (bool) 0
0x6c3: PushEmpty(bool)
0x6c4: Call2 0x7ae

0x6c5: Pop(0)
0x6c6: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c7: PushEmpty(bool)
0x6c8: Call2 0x697

0x6c9: Pop(0)
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6cb: Stack[-1] = (bool) 1
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6cd: PushEmpty(bool)
0x6ce: Call2 0x683

0x6cf: Pop(0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d1: PushEmpty(bool, object)
0x6d2: PushEmpty(object)
0x6d3: Call2 0x8c9

0x6d4: Stack[-2] = Stack[-1]
0x6d5: Pop(1)
0x6d6: Call2 0x844

0x6d7: Pop(2)
0x6d8: GOTO 0x6df

0x6d9: PushEmpty()
0x6da: Call2 0x692

0x6db: Pop(0)
0x6dc: PushEmpty()
0x6dd: Call2 0x6ad

0x6de: Pop(0)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: Call2 0x76c

0x6e2: Pop(0)
0x6e3: PushEmpty()
0x6e4: Call2 0x6b6

0x6e5: Pop(0)
0x6e6: @ lshStopSpeech()
0x6e7: Pop(0)
0x6e8: @ lshStopAnimation()
0x6e9: Pop(0)
0x6ea: @ StopAsync()
0x6eb: Pop(0)
0x6ec: @ Hold()
0x6ed: Pop(0)
0x6ee: Return(); Pop(0)

0x6ef: @ StopGroup0()
0x6f0: Pop(0)
0x6f1: PushEmpty()
0x6f2: Call2 0x6b6

0x6f3: Pop(0)
0x6f4: PushEmpty(string)
0x6f5: Stack[-1] = "Neutral"
0x6f6: Call2 0x894

0x6f7: Pop(1)
0x6f8: PushEmpty()
0x6f9: Call2 0x6ad

0x6fa: Pop(0)
0x6fb: Return(); Pop(0)

0x6fc: PushEmpty()
0x6fd: Push(Stack[-1])
0x6fe: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6ff: PushEmpty()
0x700: Call2 0x6ad

0x701: Pop(0)
0x702: GOTO 0x707

0x703: PushEmpty(string)
0x704: Stack[-1] = "Neutral"
0x705: Call2 0x894

0x706: Pop(1)
0x707: Return(); Pop(0)

0x708: PushEmpty(bool, bool)
0x709: @ IsOverrideActive(Stack[-1])
0x70a: Pop(0)
0x70b: Pop(0); Push((bool) Stack[-1] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x70d: EventDisable(0)
0x70e: PushEmpty()
0x70f: Call2 0x76c

0x710: Pop(0)
0x711: PushEmpty(bool, object)
0x712: Stack[-1] = Stack[-5]
0x713: Call2 0x7a5

0x714: Pop(2)
0x715: EventEnable(0)
0x716: PushEmpty(object)
0x717: Stack[-1] = Stack[-4]
0x718: Call2 0xad6

0x719: Pop(1)
0x71a: PushEmpty(string)
0x71b: Stack[-1] = "Neutral"
0x71c: Call2 0x894

0x71d: Pop(1)
0x71e: PushEmpty()
0x71f: Call2 0x6b6

0x720: Pop(0)
0x721: PushEmpty()
0x722: Call2 0x6ad

0x723: Pop(0)
0x724: Return(); Pop(2)

0x725: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x726: @ WaitForAnimEnd()
0x727: Pop(0)
0x728: PushEmpty(bool)
0x729: Call2 0x7ae

0x72a: Pop(0)
0x72b: Pop(1); Push((bool) Stack[-1] == 0)
0x72c: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72d: Return(); Pop(12)

0x72e: PushEmpty(int)
0x72f: Call2 0x971

0x730: Stack[-7] = Stack[-1]
0x731: Pop(1)
0x732: Stack[-5] = (int) 0
0x733: PushEmpty(bool)
0x734: Stack[-1] = (bool) 0
0x735: Push((int) 5)
0x736: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: PushEmpty(bool)
0x739: Call2 0x7ae

0x73a: Pop(0)
0x73b: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73c: Stack[-1] = (bool) 1
0x73d: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x73e: Pop(0); Push((bool) Stack[-6] == 0)
0x73f: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x740: Push((int) 3)
0x741: @ Sleep(Stack[-1], Stack[-5])
0x742: Pop(1)
0x743: Pop(0); Push((bool) Stack[-4] == 0)
0x744: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x745: GOTO 0x767

0x746: GOTO 0x75c

0x747: @ irand(Stack[-3], Stack[-6])
0x748: Pop(0)
0x749: Push((int) 5)
0x74a: @ irand(Stack[-3], Stack[-1])
0x74b: Pop(1)
0x74c: Push((int) 0)
0x74d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74f: Stack[-3] = (int) 0
0x750: Push("all")
0x751: PushEmpty(string, int)
0x752: Stack[-1] = Stack[-6]
0x753: Call2 0x96a

0x754: Pop(1)
0x755: @ PlayAnimation(Stack[-2], Stack[-1])
0x756: Pop(2)
0x757: @ WaitForAnimEnd(Stack[-1])
0x758: Pop(0)
0x759: Pop(0); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: GOTO 0x767

0x75c: PushEmpty(bool)
0x75d: Call2 0x76a

0x75e: Pop(0)
0x75f: Pop(1); Push((bool) Stack[-1] == 0)
0x760: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x761: GOTO 0x767

0x762: @ ResetAAS()
0x763: Pop(0)
0x764: Push((int) 1)
0x765: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x766: GOTO 0x733

0x767: @ ResetAAS()
0x768: Pop(0)
0x769: Return(); Pop(12)

0x76a: Stack[-1] = (bool) 1
0x76b: Return(); Pop(0)

0x76c: @ StopAnimation()
0x76d: Pop(0)
0x76e: @ StopGroup0()
0x76f: Pop(0)
0x770: Return(); Pop(0)

0x771: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x772: @ GetPosition(Stack[-3])
0x773: Pop(0)
0x774: @@ GetPosition(Stack[-2])
0x775: Pop(0)
0x776: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x777: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x778: Return(); Pop(6)

0x779: PushEmpty(bool, bool)
0x77a: Push("HasProperty")
0x77b: Push((int) 2)
0x77c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x77d: Pop(1); Push((bool) Stack[-1] == 0)
0x77e: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77f: Stack[-5] = (bool) 0
0x780: Return(); Pop(2)

0x781: @@ HasProperty(Stack[-3], Stack[-1])
0x782: Pop(0)
0x783: Stack[-5] = Stack[-1]
0x784: Return(); Pop(2)

0x785: PushEmpty(float, float)
0x786: PushEmpty(bool, object, string)
0x787: Stack[-2] = Stack[-10]
0x788: Stack[-1] = Stack[-9]
0x789: Call2 0x779

0x78a: Pop(2)
0x78b: Pop(1); Push((bool) Stack[-1] == 0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-8] = (bool) 0
0x78e: Return(); Pop(2)

0x78f: @@ GetProperty(Stack[-6], Stack[-1])
0x790: Pop(0)
0x791: PushEmpty(float, float, float, float)
0x792: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x793: Stack[-2] = Stack[-8]
0x794: Stack[-1] = Stack[-7]
0x795: Call2 0x8d9

0x796: Pop(3)
0x797: @@ SetProperty(Stack[-7], Stack[-1])
0x798: Pop(1)
0x799: Stack[-8] = (bool) 1
0x79a: Return(); Pop(2)

0x79b: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x79c: @ GetPosition(Stack[-3])
0x79d: Pop(0)
0x79e: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x79f: Push(CvectorIndex(Stack[-2], 0))
0x7a0: Push(CvectorIndex(Stack[-3], 2))
0x7a1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x7a2: Pop(2)
0x7a3: Stack[-8] = Stack[-1]
0x7a4: Return(); Pop(6)

0x7a5: PushEmpty(cvector, cvector)
0x7a6: @@ GetPosition(Stack[-1])
0x7a7: Pop(0)
0x7a8: PushEmpty(bool, cvector)
0x7a9: Stack[-1] = Stack[-3]
0x7aa: Call2 0x79b

0x7ab: Stack[-6] = Stack[-2]
0x7ac: Pop(2)
0x7ad: Return(); Pop(2)

0x7ae: PushEmpty(bool, bool)
0x7af: @ IsLoaded(Stack[-1])
0x7b0: Pop(0)
0x7b1: Stack[-3] = Stack[-1]
0x7b2: Return(); Pop(2)

0x7b3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7b4: @@ GetPosition(Stack[-8])
0x7b5: Pop(0)
0x7b6: @@ GetEyesHeight(Stack[-9])
0x7b7: Pop(0)
0x7b8: Push(CvectorIndex(Stack[-8], 1))
0x7b9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7ba: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7bb: @ GetPosition(Stack[-7])
0x7bc: Pop(0)
0x7bd: @ GetEyesHeight(Stack[-9])
0x7be: Pop(0)
0x7bf: Push(CvectorIndex(Stack[-7], 1))
0x7c0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7c1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7c2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7c3: Push(CvectorIndex(Stack[-6], 1))
0x7c4: Stack[-1] = (int) 0
0x7c5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7c6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7c7: Pop(1); Push(Sqrt(Stack[-1]))
0x7c8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7c9: Stack[-5] = -Stack[-6]; Pop(0);
0x7ca: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7cb: PushEmpty(cvector, cvector)
0x7cc: Push(CVector(0.0, 1.0, 0.0))
0x7cd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7ce: Call2 0x8cf

0x7cf: Pop(1)
0x7d0: Push((int) 25)
0x7d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7d3: Push(CVector(0.0, 10.0, 0.0))
0x7d4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7d5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7d6: @ IsOverrideActive(Stack[-2])
0x7d7: Pop(0)
0x7d8: Push(Stack[-2])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7da: Stack[-21] = (bool) 0
0x7db: Return(); Pop(18)

0x7dc: @ StopWorld()
0x7dd: Pop(0)
0x7de: Push((bool) 1)
0x7df: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x7e0: Pop(1)
0x7e1: Push(CvectorIndex(Stack[-4], 0))
0x7e2: Push(CvectorIndex(Stack[-5], 2))
0x7e3: @ Rotate(Stack[-2], Stack[-1])
0x7e4: Pop(2)
0x7e5: PushEmpty(bool)
0x7e6: Call2 0x98a

0x7e7: Pop(0)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: GOTO 0x7f2

0x7ea: Push("head")
0x7eb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7ec: Pop(1)
0x7ed: Push(Stack[-1])
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ef: Push("head")
0x7f0: @ LookAsyncCamera(Stack[-1])
0x7f1: Pop(1)
0x7f2: @ CameraWaitForPlayFinish()
0x7f3: Pop(0)
0x7f4: @ ResumeWorld()
0x7f5: Pop(0)
0x7f6: Stack[-21] = (bool) 1
0x7f7: Return(); Pop(18)

0x7f8: PushEmpty(bool, bool)
0x7f9: Push((bool) 1)
0x7fa: @ CameraSwitchToNormal(Stack[-1])
0x7fb: Pop(1)
0x7fc: PushEmpty(bool)
0x7fd: Call2 0x98a

0x7fe: Pop(0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: GOTO 0x809

0x801: Push("head")
0x802: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x803: Pop(1)
0x804: Push(Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x806: Push("head")
0x807: @ UnlookAsync(Stack[-1])
0x808: Pop(1)
0x809: Return(); Pop(2)

0x80a: PushEmpty(int, int, int, int)
0x80b: Push("voice_common")
0x80c: @ GetVariable(Stack[-1], Stack[-3])
0x80d: Pop(1)
0x80e: Push(Stack[-2])
0x80f: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x810: PushEmpty(bool, object)
0x811: Stack[-1] = Stack[-7]
0x812: Call2 0x844

0x813: Pop(1)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x816: PushEmpty(bool, object)
0x817: Stack[-1] = Stack[-7]
0x818: Call2 0x869

0x819: Pop(1)
0x81a: Pop(1); Push((bool) Stack[-1] == 0)
0x81b: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81c: Stack[-6] = (bool) 0
0x81d: Return(); Pop(4)

0x81e: Push((int) 2)
0x81f: @ irand(Stack[-2], Stack[-1])
0x820: Pop(1)
0x821: Push(Stack[-1])
0x822: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x823: Push("voice_common")
0x824: Push((int) 1)
0x825: Pop(1); Push(Stack[-4] + Stack[-1]);
0x826: Push((int) 3)
0x827: Pop(2); Push(Stack[-2] % Stack[-1]);
0x828: @ SetVariable(Stack[-2], Stack[-1])
0x829: Pop(2)
0x82a: GOTO 0x82f

0x82b: Push("voice_common")
0x82c: Push((int) 0)
0x82d: @ SetVariable(Stack[-2], Stack[-1])
0x82e: Pop(2)
0x82f: GOTO 0x842

0x830: PushEmpty(bool, object)
0x831: Stack[-1] = Stack[-7]
0x832: Call2 0x869

0x833: Pop(1)
0x834: Pop(1); Push((bool) Stack[-1] == 0)
0x835: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x836: PushEmpty(bool, object)
0x837: Stack[-1] = Stack[-7]
0x838: Call2 0x844

0x839: Pop(1)
0x83a: Pop(1); Push((bool) Stack[-1] == 0)
0x83b: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83c: Stack[-6] = (bool) 0
0x83d: Return(); Pop(4)

0x83e: Push("voice_common")
0x83f: Push((int) 1)
0x840: @ SetVariable(Stack[-2], Stack[-1])
0x841: Pop(2)
0x842: Stack[-6] = (bool) 1
0x843: Return(); Pop(4)

0x844: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x845: Stack[-5] = "c"
0x846: Stack[-4] = (int) 0
0x847: Push((int) 1)
0x848: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x849: Push((int) 1)
0x84a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x84b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x84c: @@ HasProperty(Stack[-1], Stack[-4])
0x84d: Pop(1)
0x84e: Pop(0); Push((bool) Stack[-3] == 0)
0x84f: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x850: GOTO 0x854

0x851: Push((int) 1)
0x852: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x853: GOTO 0x847

0x854: Pop(0); Push((bool) Stack[-4] == 0)
0x855: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x856: Stack[-12] = (bool) 0
0x857: Return(); Pop(10)

0x858: Stack[-2] = (int) 0
0x859: Push((int) 1)
0x85a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85c: @ irand(Stack[-2], Stack[-4])
0x85d: Pop(0)
0x85e: Push((int) 1)
0x85f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x860: Pop(1); Push(Stack[-6] + Stack[-1]);
0x861: @@ GetProperty(Stack[-1], Stack[-2])
0x862: Pop(1)
0x863: PushEmpty(bool, string)
0x864: Stack[-1] = Stack[-3]
0x865: Call2 0x8b3

0x866: Stack[-14] = Stack[-2]
0x867: Pop(2)
0x868: Return(); Pop(10)

0x869: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x86a: Push("d")
0x86b: PushEmpty(int)
0x86c: Call2 0x953

0x86d: Pop(0)
0x86e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86f: Push("m")
0x870: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x871: Stack[-4] = (int) 0
0x872: Push((int) 1)
0x873: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x874: Push((int) 1)
0x875: Pop(1); Push(Stack[-5] + Stack[-1]);
0x876: Pop(1); Push(Stack[-6] + Stack[-1]);
0x877: @@ HasProperty(Stack[-1], Stack[-4])
0x878: Pop(1)
0x879: Pop(0); Push((bool) Stack[-3] == 0)
0x87a: IF (Stack[-1] == 0) GOTO 0x87c; Pop(1)

0x87b: GOTO 0x87f

0x87c: Push((int) 1)
0x87d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x87e: GOTO 0x872

0x87f: Pop(0); Push((bool) Stack[-4] == 0)
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-12] = (bool) 0
0x882: Return(); Pop(10)

0x883: Stack[-2] = (int) 0
0x884: Push((int) 1)
0x885: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x887: @ irand(Stack[-2], Stack[-4])
0x888: Pop(0)
0x889: Push((int) 1)
0x88a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x88b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x88c: @@ GetProperty(Stack[-1], Stack[-2])
0x88d: Pop(1)
0x88e: PushEmpty(bool, string)
0x88f: Stack[-1] = Stack[-3]
0x890: Call2 0x8b3

0x891: Stack[-14] = Stack[-2]
0x892: Pop(2)
0x893: Return(); Pop(10)

0x894: PushEmpty(bool, float, float, bool, float, float)
0x895: @ lshHasAnimation(Stack[-3], Stack[-7])
0x896: Pop(0)
0x897: Push(Stack[-3])
0x898: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x899: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x89a: Pop(0)
0x89b: Push((bool) 0)
0x89c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x89d: Pop(1)
0x89e: GOTO 0x8a3

0x89f: Push("Can't find lsh animation : ")
0x8a0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8a1: @ Trace(Stack[-1])
0x8a2: Pop(1)
0x8a3: Return(); Pop(6)

0x8a4: PushEmpty(bool, float, float, bool, float, float)
0x8a5: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8a6: Pop(0)
0x8a7: Push(Stack[-3])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8a9: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8aa: Pop(0)
0x8ab: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8ac: Pop(0)
0x8ad: GOTO 0x8b2

0x8ae: Push("Can't find lsh animation : ")
0x8af: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8b0: @ Trace(Stack[-1])
0x8b1: Pop(1)
0x8b2: Return(); Pop(6)

0x8b3: PushEmpty(bool, bool)
0x8b4: PushEmpty(bool)
0x8b5: Call2 0x98a

0x8b6: Pop(0)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8b8: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8b9: Pop(0)
0x8ba: Push(Stack[-1])
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8bc: @ lshPlaySpeech(Stack[-3])
0x8bd: Pop(0)
0x8be: Stack[-4] = (bool) 1
0x8bf: Return(); Pop(2)

0x8c0: Stack[-4] = (bool) 0
0x8c1: Return(); Pop(2)

0x8c2: PushEmpty(bool)
0x8c3: Call2 0x98a

0x8c4: Pop(0)
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: @ lshStopSpeech()
0x8c7: Pop(0)
0x8c8: Return(); Pop(0)

0x8c9: PushEmpty(object, object)
0x8ca: @ self(Stack[-1])
0x8cb: Pop(0)
0x8cc: Stack[-3] = Stack[-1]
0x8cd: Return(); Pop(2)

0x8ce: Stack[-1] = 0
0x8cf: PushEmpty(float, float)
0x8d0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8d1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8d2: Push((float)0.0)
0x8d3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8d6: Return(); Pop(2)

0x8d7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8d8: Return(); Pop(2)

0x8d9: PushEmpty()
0x8da: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8db: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dc: Stack[-4] = Stack[-2]
0x8dd: Return(); Pop(0)

0x8de: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8df: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e0: Stack[-4] = Stack[-1]
0x8e1: Return(); Pop(0)

0x8e2: Stack[-4] = Stack[-3]
0x8e3: Return(); Pop(0)

0x8e4: PushEmpty(int, int)
0x8e5: @ GetVariable(Stack[-3], Stack[-1])
0x8e6: Pop(0)
0x8e7: Stack[-4] = Stack[-1]
0x8e8: Return(); Pop(2)

0x8e9: PushEmpty(object, object)
0x8ea: @ CreateIntVector(Stack[-1])
0x8eb: Pop(0)
0x8ec: @@ add(Stack[-4])
0x8ed: Pop(0)
0x8ee: @@ add(Stack[-3])
0x8ef: Pop(0)
0x8f0: Push((int) 3)
0x8f1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8f2: Pop(1)
0x8f3: Return(); Pop(2)

0x8f4: Stack[-1] = 0
0x8f5: PushEmpty(int, int, bool, int, int, bool)
0x8f6: @@ GetItemID(Stack[-3])
0x8f7: Pop(0)
0x8f8: Push("Category")
0x8f9: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x8fa: Pop(1)
0x8fb: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x8fc: Pop(0)
0x8fd: Pop(0); Push((bool) Stack[-1] == 0)
0x8fe: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ff: @@ DropItems(Stack[-8], Stack[-7])
0x900: Pop(0)
0x901: GOTO 0x907

0x902: PushEmpty(int, int)
0x903: Stack[-2] = Stack[-5]
0x904: Stack[-1] = Stack[-9]
0x905: Call2 0x8e9

0x906: Pop(2)
0x907: Return(); Pop(6)

0x908: PushEmpty(object, object)
0x909: @ CreateInvItem(Stack[-1])
0x90a: Pop(0)
0x90b: @@ SetItemName(Stack[-4])
0x90c: Pop(0)
0x90d: PushEmpty(object, object, int)
0x90e: Stack[-3] = Stack[-8]
0x90f: Stack[-2] = Stack[-4]
0x910: Stack[-1] = Stack[-6]
0x911: Call2 0x8f5

0x912: Pop(3)
0x913: Return(); Pop(2)

0x914: Stack[-1] = 0
0x915: PushEmpty()
0x916: Pop(0); Push((bool) Stack[-2] == 0)
0x917: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x918: Stack[-3] = (bool) 0
0x919: Return(); Pop(0)

0x91a: Push((int) 0)
0x91b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91d: Push((int) 8)
0x91e: @ SendWorldWndMessage(Stack[-1])
0x91f: Pop(1)
0x920: GOTO 0x92a

0x921: Push((int) 0)
0x922: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x924: Push((int) 9)
0x925: @ SendWorldWndMessage(Stack[-1])
0x926: Pop(1)
0x927: GOTO 0x92a

0x928: Stack[-3] = (bool) 0
0x929: Return(); Pop(0)

0x92a: PushEmpty(float)
0x92b: Stack[-1] = Stack[-2]
0x92c: Call2 0x938

0x92d: Pop(1)
0x92e: PushEmpty(bool, object, string, float, float, float)
0x92f: Stack[-5] = Stack[-8]
0x930: Stack[-4] = "reputation"
0x931: Stack[-3] = Stack[-7]
0x932: Stack[-2] = (int) 0
0x933: Stack[-1] = (int) 1
0x934: Call2 0x785

0x935: Pop(6)
0x936: Stack[-3] = (bool) 1
0x937: Return(); Pop(0)

0x938: PushEmpty(object, object)
0x939: @ CreateFloatVector(Stack[-1])
0x93a: Pop(0)
0x93b: @@ add(Stack[-3])
0x93c: Pop(0)
0x93d: Push((int) 16)
0x93e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x93f: Pop(1)
0x940: Return(); Pop(2)

0x941: Stack[-1] = 0
0x942: PushEmpty(object, object)
0x943: @ FindActor(Stack[-1], Stack[-4])
0x944: Pop(0)
0x945: Pop(0); Push((bool) Stack[-1] == 0)
0x946: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x947: Stack[-5] = (bool) 0
0x948: Return(); Pop(2)

0x949: @ Trigger(Stack[-1], Stack[-3])
0x94a: Pop(0)
0x94b: Stack[-5] = (bool) 1
0x94c: Return(); Pop(2)

0x94d: Stack[-1] = 0
0x94e: PushEmpty(float, float)
0x94f: @ GetGameTime(Stack[-1])
0x950: Pop(0)
0x951: Stack[-3] = Stack[-1]
0x952: Return(); Pop(2)

0x953: PushEmpty(float, float)
0x954: @ GetGameTime(Stack[-1])
0x955: Pop(0)
0x956: Push((int) 1)
0x957: PushEmpty(int)
0x958: Push((int) 24)
0x959: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x95a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x95b: Return(); Pop(2)

0x95c: PushEmpty(float, float)
0x95d: @ GetGameTime(Stack[-1])
0x95e: Pop(0)
0x95f: PushEmpty(int)
0x960: Stack[-1] = Stack[-2]
0x961: Push((int) 24)
0x962: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x963: Return(); Pop(2)

0x964: PushEmpty()
0x965: PushEmpty(int)
0x966: Call2 0x953

0x967: Pop(0)
0x968: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x969: Return(); Pop(0)

0x96a: PushEmpty(string, string)
0x96b: Stack[-1] = "idle"
0x96c: Push(Stack[-3])
0x96d: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x96f: Stack[-4] = Stack[-1]
0x970: Return(); Pop(2)

0x971: PushEmpty(int, bool, int, bool)
0x972: Stack[-2] = (int) 0
0x973: Push("all")
0x974: PushEmpty(string, int)
0x975: Stack[-1] = Stack[-5]
0x976: Call2 0x96a

0x977: Pop(1)
0x978: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x979: Pop(2)
0x97a: Pop(0); Push((bool) Stack[-1] == 0)
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: GOTO 0x980

0x97d: Push((int) 1)
0x97e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x97f: GOTO 0x973

0x980: Stack[-5] = Stack[-2]
0x981: Return(); Pop(4)

0x982: Stack[-1] = (int) 515533
0x983: Return(); Pop(0)

0x984: Stack[-1] = (int) 502858
0x985: Return(); Pop(0)

0x986: Stack[-1] = "ui/NPC_Eva.png"
0x987: Return(); Pop(0)

0x988: Stack[-1] = "ui/NPC_Eva_b.png"
0x989: Return(); Pop(0)

0x98a: Stack[-1] = (bool) 1
0x98b: Return(); Pop(0)

0x98c: PushEmpty()
0x98d: Push("oob1Eva1")
0x98e: Push((int) 1)
0x98f: @ SetVariable(Stack[-2], Stack[-1])
0x990: Pop(2)
0x991: Return(); Pop(0)

0x992: PushEmpty()
0x993: Push("oob2Eva1")
0x994: Push((int) 1)
0x995: @ SetVariable(Stack[-2], Stack[-1])
0x996: Pop(2)
0x997: Return(); Pop(0)

0x998: PushEmpty()
0x999: Push("oob9Eva1")
0x99a: Push((int) 1)
0x99b: @ SetVariable(Stack[-2], Stack[-1])
0x99c: Pop(2)
0x99d: Return(); Pop(0)

0x99e: PushEmpty()
0x99f: Push("b9q01")
0x9a0: Push((int) 2)
0x9a1: @ SetVariable(Stack[-2], Stack[-1])
0x9a2: Pop(2)
0x9a3: PushEmpty()
0x9a4: Call2 0xa7e

0x9a5: Pop(0)
0x9a6: PushEmpty(bool, string, string)
0x9a7: Stack[-2] = "quest_b9_01"
0x9a8: Stack[-1] = "place_mdoberman"
0x9a9: Call2 0x942

0x9aa: Pop(3)
0x9ab: PushEmpty(bool, string, string)
0x9ac: Stack[-2] = "quest_b9_01"
0x9ad: Stack[-1] = "init_factory"
0x9ae: Call2 0x942

0x9af: Pop(3)
0x9b0: Return(); Pop(0)

0x9b1: PushEmpty()
0x9b2: PushEmpty(bool, object, float)
0x9b3: Stack[-2] = Stack[-5]
0x9b4: Stack[-1] = (float) -0.05
0x9b5: Call2 0x915

0x9b6: Pop(3)
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty()
0x9b9: Push("oob1Eva2")
0x9ba: Push((int) 1)
0x9bb: @ SetVariable(Stack[-2], Stack[-1])
0x9bc: Pop(2)
0x9bd: Return(); Pop(0)

0x9be: PushEmpty(object, object)
0x9bf: PushEmpty(object)
0x9c0: Call2 0xab4

0x9c1: Stack[-2] = Stack[-1]
0x9c2: Pop(1)
0x9c3: Push("b1q01BakWillBeAt18")
0x9c4: Push("pt_map_eva")
0x9c5: Push((int) 3)
0x9c6: Push((int) 524806)
0x9c7: PushEmpty(float)
0x9c8: Call2 0x94e

0x9c9: Pop(0)
0x9ca: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9cb: Pop(5)
0x9cc: Return(); Pop(2)

0x9cd: Stack[-1] = 0
0x9ce: PushEmpty()
0x9cf: Push("playsound")
0x9d0: Push("giveitem")
0x9d1: @ TriggerWorld(Stack[-2], Stack[-1])
0x9d2: Pop(2)
0x9d3: Return(); Pop(0)

0x9d4: PushEmpty()
0x9d5: Push("rifle ammo30 is given")
0x9d6: @ Trace(Stack[-1])
0x9d7: Pop(1)
0x9d8: PushEmpty(object, string, int)
0x9d9: Stack[-3] = Stack[-5]
0x9da: Stack[-2] = "rifle_ammo"
0x9db: Stack[-1] = (int) 30
0x9dc: Call2 0x908

0x9dd: Pop(3)
0x9de: Return(); Pop(0)

0x9df: PushEmpty()
0x9e0: PushEmpty(bool, object, float)
0x9e1: Stack[-2] = Stack[-5]
0x9e2: Stack[-1] = (float) -0.02
0x9e3: Call2 0x915

0x9e4: Pop(3)
0x9e5: Return(); Pop(0)

0x9e6: PushEmpty()
0x9e7: Push("playsound")
0x9e8: Push("mapmark")
0x9e9: @ TriggerWorld(Stack[-2], Stack[-1])
0x9ea: Pop(2)
0x9eb: Return(); Pop(0)

0x9ec: PushEmpty()
0x9ed: PushEmpty(int, string)
0x9ee: Stack[-1] = "b9q01"
0x9ef: Call2 0x8e4

0x9f0: Pop(1)
0x9f1: Push((int) 1)
0x9f2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9f4: Stack[-2] = (bool) 1
0x9f5: Return(); Pop(0)

0x9f6: Stack[-2] = (bool) 0
0x9f7: Return(); Pop(0)

0x9f8: PushEmpty()
0x9f9: PushEmpty(int, string)
0x9fa: Stack[-1] = "oob9Eva1"
0x9fb: Call2 0x8e4

0x9fc: Pop(1)
0x9fd: Push((int) 0)
0x9fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0xa00: Stack[-2] = (bool) 1
0xa01: Return(); Pop(0)

0xa02: Stack[-2] = (bool) 0
0xa03: Return(); Pop(0)

0xa04: PushEmpty()
0xa05: PushEmpty(int, string)
0xa06: Stack[-1] = "b9q01DankoAmmo"
0xa07: Call2 0x8e4

0xa08: Pop(1)
0xa09: Push((int) 0)
0xa0a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0c: Stack[-2] = (bool) 1
0xa0d: Return(); Pop(0)

0xa0e: Stack[-2] = (bool) 0
0xa0f: Return(); Pop(0)

0xa10: PushEmpty()
0xa11: PushEmpty(int, string)
0xa12: Stack[-1] = "oob1Eva2"
0xa13: Call2 0x8e4

0xa14: Pop(1)
0xa15: Push((int) 0)
0xa16: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-2] = (bool) 1
0xa19: Return(); Pop(0)

0xa1a: Stack[-2] = (bool) 0
0xa1b: Return(); Pop(0)

0xa1c: PushEmpty()
0xa1d: PushEmpty(int, string)
0xa1e: Stack[-1] = "b1q01GrifToldAboutDanko"
0xa1f: Call2 0x8e4

0xa20: Pop(1)
0xa21: Push((int) 0)
0xa22: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa24: Stack[-2] = (bool) 1
0xa25: Return(); Pop(0)

0xa26: Stack[-2] = (bool) 0
0xa27: Return(); Pop(0)

0xa28: PushEmpty()
0xa29: PushEmpty(bool, object)
0xa2a: Stack[-1] = Stack[-3]
0xa2b: Call2 0xa54

0xa2c: Pop(1)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2e: Stack[-2] = (bool) 1
0xa2f: Return(); Pop(0)

0xa30: Stack[-2] = (bool) 0
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: PushEmpty(bool, object)
0xa34: Stack[-1] = Stack[-3]
0xa35: Call2 0xa69

0xa36: Pop(1)
0xa37: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa38: Stack[-2] = (bool) 1
0xa39: Return(); Pop(0)

0xa3a: Stack[-2] = (bool) 0
0xa3b: Return(); Pop(0)

0xa3c: PushEmpty()
0xa3d: PushEmpty(int, string)
0xa3e: Stack[-1] = "oob1Eva1"
0xa3f: Call2 0x8e4

0xa40: Pop(1)
0xa41: Push((int) 0)
0xa42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa43: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa44: Stack[-2] = (bool) 1
0xa45: Return(); Pop(0)

0xa46: Stack[-2] = (bool) 0
0xa47: Return(); Pop(0)

0xa48: PushEmpty()
0xa49: PushEmpty(int, string)
0xa4a: Stack[-1] = "oob2Eva1"
0xa4b: Call2 0x8e4

0xa4c: Pop(1)
0xa4d: Push((int) 0)
0xa4e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa52; Pop(1)

0xa50: Stack[-2] = (bool) 1
0xa51: Return(); Pop(0)

0xa52: Stack[-2] = (bool) 0
0xa53: Return(); Pop(0)

0xa54: PushEmpty()
0xa55: PushEmpty(bool)
0xa56: Stack[-1] = (bool) 0
0xa57: PushEmpty(int)
0xa58: Call2 0x95c

0xa59: Pop(0)
0xa5a: Push((int) 12)
0xa5b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa5c: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa5d: PushEmpty(int)
0xa5e: Call2 0x95c

0xa5f: Pop(0)
0xa60: Push((int) 18)
0xa61: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa63: Stack[-1] = (bool) 1
0xa64: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa65: Stack[-2] = (bool) 1
0xa66: Return(); Pop(0)

0xa67: Stack[-2] = (bool) 0
0xa68: Return(); Pop(0)

0xa69: PushEmpty()
0xa6a: PushEmpty(bool)
0xa6b: Stack[-1] = (bool) 0
0xa6c: PushEmpty(int)
0xa6d: Call2 0x95c

0xa6e: Pop(0)
0xa6f: Push((int) 0)
0xa70: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa71: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa72: PushEmpty(int)
0xa73: Call2 0x95c

0xa74: Pop(0)
0xa75: Push((int) 12)
0xa76: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa78: Stack[-1] = (bool) 1
0xa79: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7a: Stack[-2] = (bool) 1
0xa7b: Return(); Pop(0)

0xa7c: Stack[-2] = (bool) 0
0xa7d: Return(); Pop(0)

0xa7e: PushEmpty(object, object)
0xa7f: Push((int) 299)
0xa80: Push((int) 1)
0xa81: Push((int) 521614)
0xa82: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa83: Pop(3)
0xa84: PushEmpty(bool, object, int)
0xa85: Stack[-2] = Stack[-4]
0xa86: Stack[-1] = (int) 297
0xa87: Call2 0xa98

0xa88: Pop(3)
0xa89: Return(); Pop(2)

0xa8a: Stack[-1] = 0
0xa8b: PushEmpty(object, object)
0xa8c: @ GetDiaryRoot(Stack[-1])
0xa8d: Pop(0)
0xa8e: Pop(0); Push((bool) Stack[-1] == 0)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa90: Push("Can't retrieve diary root")
0xa91: @ Trace(Stack[-1])
0xa92: Pop(1)
0xa93: Stack[-3] = (bool) 0
0xa94: Return(); Pop(2)

0xa95: Stack[-3] = Stack[-1]
0xa96: Return(); Pop(2)

0xa97: Stack[-1] = 0
0xa98: PushEmpty(object, object, int, object, object, int)
0xa99: PushEmpty(object)
0xa9a: Call2 0xa8b

0xa9b: Stack[-4] = Stack[-1]
0xa9c: Pop(1)
0xa9d: @@ Find(Stack[-7], Stack[-2])
0xa9e: Pop(0)
0xa9f: Pop(0); Push((bool) Stack[-2] == 0)
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa1: Push("Can't find diary parent with id: ")
0xaa2: Pop(1); Push(Stack[-1] + Stack[-8]);
0xaa3: @ Trace(Stack[-1])
0xaa4: Pop(1)
0xaa5: Stack[-9] = (bool) 0
0xaa6: Return(); Pop(6)

0xaa7: @@ AddChild(Stack[-8])
0xaa8: Pop(0)
0xaa9: Push((int) 7)
0xaaa: @ SendWorldWndMessage(Stack[-1])
0xaab: Pop(1)
0xaac: @@ GetCategory(Stack[-1])
0xaad: Pop(0)
0xaae: @ SetDiarySection(Stack[-1])
0xaaf: Pop(0)
0xab0: Stack[-9] = (bool) 0
0xab1: Return(); Pop(6)

0xab2: Stack[-2] = 0
0xab3: Stack[-3] = 0
0xab4: PushEmpty(object, object, object, object)
0xab5: @ GetMainOutdoorScene(Stack[-2])
0xab6: Pop(0)
0xab7: Pop(0); Push((bool) Stack[-2] == 0)
0xab8: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xab9: Push("Can't find main outdoor scene")
0xaba: @ Trace(Stack[-1])
0xabb: Pop(1)
0xabc: Stack[-1] = 0
0xabd: Stack[-5] = Stack[-1]
0xabe: Return(); Pop(4)

0xabf: @@ GetMap(Stack[-1])
0xac0: Pop(0)
0xac1: Stack[-5] = Stack[-1]
0xac2: Return(); Pop(4)

0xac3: Stack[-1] = 0
0xac4: Stack[-2] = 0
0xac5: PushEmpty(int, int)
0xac6: Push("branch")
0xac7: @ GetVariable(Stack[-1], Stack[-2])
0xac8: Pop(1)
0xac9: Push((int) 0)
0xaca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xacb: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xacc: Stack[-3] = (int) 1
0xacd: Return(); Pop(2)

0xace: GOTO 0xad4

0xacf: Push((int) 1)
0xad0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xad2: Stack[-3] = (int) 2
0xad3: Return(); Pop(2)

0xad4: Stack[-3] = (int) 3
0xad5: Return(); Pop(2)

0xad6: PushEmpty(int, int)
0xad7: Push("mt_eva")
0xad8: @ GetVariable(Stack[-1], Stack[-2])
0xad9: Pop(1)
0xada: Pop(0); Push((bool) Stack[-1] == 0)
0xadb: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xadc: PushEmpty(int, object)
0xadd: Stack[-1] = Stack[-5]
0xade: Push(-2, 1); TaskCall(4)
0xadf: Call2 0x2f3

0xae0: Pop(-2, 1); TaskReturn
0xae1: Pop(2)
0xae2: Push("mt_eva")
0xae3: Push((int) 1)
0xae4: @ SetVariable(Stack[-2], Stack[-1])
0xae5: Pop(2)
0xae6: PushEmpty(bool, int)
0xae7: Stack[-1] = (int) 1
0xae8: Call2 0x964

0xae9: Pop(1)
0xaea: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xaeb: PushEmpty(int, object)
0xaec: Stack[-1] = Stack[-5]
0xaed: Push(-2, 1); TaskCall(2)
0xaee: Call2 0x122

0xaef: Pop(-2, 1); TaskReturn
0xaf0: Pop(2)
0xaf1: Return(); Pop(2)

0xaf2: PushEmpty(bool, int)
0xaf3: Stack[-1] = (int) 2
0xaf4: Call2 0x964

0xaf5: Pop(1)
0xaf6: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xaf7: PushEmpty(int, object)
0xaf8: Stack[-1] = Stack[-5]
0xaf9: Push(-2, 1); TaskCall(0)
0xafa: Call2 0x0

0xafb: Pop(-2, 1); TaskReturn
0xafc: Pop(2)
0xafd: Return(); Pop(2)

0xafe: PushEmpty(bool, int)
0xaff: Stack[-1] = (int) 9
0xb00: Call2 0x964

0xb01: Pop(1)
0xb02: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb03: PushEmpty(int, object)
0xb04: Stack[-1] = Stack[-5]
0xb05: Push(-2, 1); TaskCall(6)
0xb06: Call2 0x3ec

0xb07: Pop(-2, 1); TaskReturn
0xb08: Pop(2)
0xb09: Return(); Pop(2)

0xb0a: PushEmpty(int, object)
0xb0b: Stack[-1] = Stack[-5]
0xb0c: Push(-2, 1); TaskCall(8)
0xb0d: Call2 0x5a6

0xb0e: Pop(-2, 1); TaskReturn
0xb0f: Pop(2)
0xb10: Return(); Pop(2)

