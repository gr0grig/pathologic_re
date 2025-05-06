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

RunOp = 0x628
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9c Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1cf Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x364 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x475 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5fe Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x671 Vars = (int)
		EVENT_6 Op = 0x697 Vars = ()
		EVENT_5 Op = 0x6a6 Vars = ()
		EVENT_45 Op = 0x6b3 Vars = (bool)
		EVENT_0 Op = 0x6bf Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x76a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x939

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x937

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x93b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x93d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa68

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
0x31: Call2 0x87e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x7bf

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
0x48: Call2 0x7ae

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
0x56: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Fear"
0x59: Call2 0x86

0x5a: Pop(1)
0x5b: Push((int) 518278)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518279)
0x61: Push((int) -1)
0x62: Push((int) 19388)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: GOTO 0x68

0x66: Return(); Pop(0)

0x67: GOTO 0x55

0x68: PushEmpty(bool)
0x69: Call2 0x93f

0x6a: Pop(0)
0x6b: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x6c: @ lshWaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: PushEmpty(string)
0x72: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x73: Call2 0x849

0x74: Pop(1)
0x75: GOTO 0x6c

0x76: GOTO 0x85

0x77: Push("all")
0x78: Push("idle")
0x79: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ WaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: Push("all")
0x81: Push("idle")
0x82: @ PlayAnimation(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: GOTO 0x7b

0x85: Return(); Pop(0)

0x86: PushEmpty()
0x87: PushEmpty(bool)
0x88: Call2 0x93f

0x89: Pop(0)
0x8a: Pop(1); Push((bool) Stack[-1] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(0)

0x8d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: PushEmpty(string, bool)
0x91: Stack[-2] = Stack[-3]
0x92: Push("")
0x93: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[-1] = (bool) 0
0x96: GOTO 0x98

0x97: Stack[-1] = (bool) 1
0x98: Call2 0x859

0x99: Pop(2)
0x9a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: Push((int) 1)
0x9e: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0x9f: PushEmpty()
0xa0: Call2 0x877

0xa1: Pop(0)
0xa2: Push((int) 19387)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Fear"
0xa7: Call2 0x86

0xa8: Pop(1)
0xa9: Push((int) 518278)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 518279)
0xaf: Push((int) -1)
0xb0: Push((int) 19388)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: Return(); Pop(0)

0xb4: Push((int) 20613)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb7: Push((int) 20615)
0xb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Love"
0xbc: Call2 0x86

0xbd: Pop(1)
0xbe: Push((int) 519447)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 519451)
0xc4: Push((int) 20620)
0xc5: Push((int) 20619)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 519453)
0xc9: Push((int) 20620)
0xca: Push((int) 20622)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Return(); Pop(0)

0xce: Push((int) 20620)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(string)
0xd2: Stack[-1] = "Fear"
0xd3: Call2 0x86

0xd4: Pop(1)
0xd5: Push((int) 519452)
0xd6: @@ SetMessage(Stack[-1])
0xd7: Pop(1)
0xd8: @@ ClearReplies()
0xd9: Pop(0)
0xda: Push((int) 519448)
0xdb: Push((int) -1)
0xdc: Push((int) 20616)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 519449)
0xe0: Push((int) -1)
0xe1: Push((int) 20617)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe6: PushEmpty(bool)
0xe7: Call2 0x93f

0xe8: Pop(0)
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: @ lshStopAnimation()
0xeb: Pop(0)
0xec: GOTO 0xef

0xed: @ StopAnimation()
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: GOTO 0x9d

0xf1: Return(); Pop(0)

0xf2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf4: PushEmpty(bool, object, float)
0xf5: Stack[-2] = Stack[-12]
0xf6: Stack[-1] = (float) 70.0
0xf7: Call2 0x76a

0xf8: Pop(2)
0xf9: Pop(1); Push((bool) Stack[-1] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Stack[-10] = (int) -2
0xfc: Return(); Pop(8)

0xfd: @ CreateDialog(Stack[-4])
0xfe: Pop(0)
0xff: PushEmpty(int)
0x100: Call2 0x939

0x101: Pop(0)
0x102: @@ SetNPCName(Stack[-1])
0x103: Pop(1)
0x104: PushEmpty(int)
0x105: Call2 0x937

0x106: Pop(0)
0x107: @@ SetNPCDescription(Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(string)
0x10a: Call2 0x93b

0x10b: Pop(0)
0x10c: @@ SetPhoto(Stack[-1])
0x10d: Pop(1)
0x10e: PushEmpty(string)
0x10f: Call2 0x93d

0x110: Pop(0)
0x111: @@ SetPhoto2(Stack[-1])
0x112: Pop(1)
0x113: PushEmpty(int)
0x114: Call2 0xa68

0x115: Pop(0)
0x116: @@ SetPlayerName(Stack[-1])
0x117: Pop(1)
0x118: Stack[-2] = (int) -1
0x119: @ IsOverrideActive(Stack[-3])
0x11a: Pop(0)
0x11b: Push(Stack[-3])
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: Stack[-10] = (int) -2
0x11e: Return(); Pop(8)

0x11f: @ DoDialog(Stack[-4])
0x120: Pop(0)
0x121: PushEmpty(bool, object)
0x122: PushEmpty(object)
0x123: Call2 0x87e

0x124: Stack[-2] = Stack[-1]
0x125: Pop(1)
0x126: Call2 0x7bf

0x127: Pop(2)
0x128: PushEmpty(object, object)
0x129: Stack[-2] = Stack[-11]
0x12a: Stack[-1] = Stack[-6]
0x12b: Push(-2, 4); TaskCall(3)
0x12c: Call2 0x143

0x12d: Pop(-2, 4); TaskReturn
0x12e: Pop(2)
0x12f: @@ IsDialogEnd(Stack[-1])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: @ sync()
0x134: Pop(0)
0x135: @@ IsDialogEnd(Stack[-1])
0x136: Pop(0)
0x137: GOTO 0x131

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[-10]
0x13a: Call2 0x7ae

0x13b: Pop(1)
0x13c: @ StopDialog(Stack[-4])
0x13d: Pop(0)
0x13e: @@ GetReturnValue(Stack[-2])
0x13f: Pop(0)
0x140: Stack[-10] = Stack[-2]
0x141: Return(); Pop(8)

0x142: Stack[-4] = 0
0x143: PushEmpty()
0x144: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x145: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x146: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x147: Push((int) 1)
0x148: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x149: PushEmpty(string)
0x14a: Stack[-1] = "Fear"
0x14b: Call2 0x1b9

0x14c: Pop(1)
0x14d: Push((int) 520203)
0x14e: @@ SetMessage(Stack[-1])
0x14f: Pop(1)
0x150: @@ ClearReplies()
0x151: Pop(0)
0x152: PushEmpty(bool, object)
0x153: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x154: Call2 0x9eb

0x155: Pop(1)
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: Push((int) 520204)
0x158: Push((int) 21397)
0x159: Push((int) 21396)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: PushEmpty(bool)
0x15d: Stack[-1] = (bool) 1
0x15e: PushEmpty(bool)
0x15f: Stack[-1] = (bool) 0
0x160: PushEmpty(bool)
0x161: Stack[-1] = (bool) 0
0x162: PushEmpty(bool, object)
0x163: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x164: Call2 0x9bf

0x165: Pop(1)
0x166: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x9e1

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Stack[-1] = (bool) 1
0x16d: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0x9cb

0x171: Pop(1)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 1
0x174: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x175: PushEmpty(bool)
0x176: Stack[-1] = (bool) 0
0x177: PushEmpty(bool)
0x178: Stack[-1] = (bool) 0
0x179: PushEmpty(bool, object)
0x17a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Call2 0x9d7

0x17c: Pop(1)
0x17d: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x180: Call2 0x9bf

0x181: Pop(1)
0x182: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x183: Stack[-1] = (bool) 1
0x184: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x185: PushEmpty(bool, object)
0x186: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x187: Call2 0x9cb

0x188: Pop(1)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Stack[-1] = (bool) 1
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[-1] = (bool) 0
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Push((int) 520211)
0x18f: Push((int) 21404)
0x190: Push((int) 21403)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 520215)
0x194: Push((int) -1)
0x195: Push((int) 21407)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: GOTO 0x19b

0x199: Return(); Pop(0)

0x19a: GOTO 0x147

0x19b: PushEmpty(bool)
0x19c: Call2 0x93f

0x19d: Pop(0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19f: @ lshWaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1a9

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a6: Call2 0x849

0x1a7: Pop(1)
0x1a8: GOTO 0x19f

0x1a9: GOTO 0x1b8

0x1aa: Push("all")
0x1ab: Push("idle")
0x1ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: @ WaitForAnimEnd()
0x1af: Pop(0)
0x1b0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1b8

0x1b3: Push("all")
0x1b4: Push("idle")
0x1b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: GOTO 0x1ae

0x1b8: Return(); Pop(0)

0x1b9: PushEmpty()
0x1ba: PushEmpty(bool)
0x1bb: Call2 0x93f

0x1bc: Pop(0)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bf: Return(); Pop(0)

0x1c0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(string, bool)
0x1c4: Stack[-2] = Stack[-3]
0x1c5: Push("")
0x1c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Stack[-1] = (bool) 0
0x1c9: GOTO 0x1cb

0x1ca: Stack[-1] = (bool) 1
0x1cb: Call2 0x859

0x1cc: Pop(2)
0x1cd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty()
0x1d0: Push((int) 1)
0x1d1: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x1d2: PushEmpty()
0x1d3: Call2 0x877

0x1d4: Pop(0)
0x1d5: Push((int) 21396)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0x941

0x1dc: Pop(2)
0x1dd: Push((int) 21403)
0x1de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0x967

0x1e4: Pop(2)
0x1e5: Push((int) 21405)
0x1e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object, object)
0x1e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x98e

0x1ec: Pop(2)
0x1ed: Push((int) 26115)
0x1ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f0: PushEmpty(object, object)
0x1f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0x96d

0x1f4: Pop(2)
0x1f5: PushEmpty(object, object)
0x1f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f8: Call2 0x995

0x1f9: Pop(2)
0x1fa: PushEmpty(object, object)
0x1fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fd: Call2 0x960

0x1fe: Pop(2)
0x1ff: Push((int) 21406)
0x200: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x202: PushEmpty(object, object)
0x203: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x204: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x205: Call2 0x96d

0x206: Pop(2)
0x207: PushEmpty(object, object)
0x208: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x209: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20a: Call2 0x995

0x20b: Pop(2)
0x20c: Push((int) 21395)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Fear"
0x211: Call2 0x1b9

0x212: Pop(1)
0x213: Push((int) 520203)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21a: Call2 0x9eb

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: Push((int) 520204)
0x21e: Push((int) 21397)
0x21f: Push((int) 21396)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: PushEmpty(bool)
0x223: Stack[-1] = (bool) 1
0x224: PushEmpty(bool)
0x225: Stack[-1] = (bool) 0
0x226: PushEmpty(bool)
0x227: Stack[-1] = (bool) 0
0x228: PushEmpty(bool, object)
0x229: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22a: Call2 0x9bf

0x22b: Pop(1)
0x22c: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22d: PushEmpty(bool, object)
0x22e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Call2 0x9e1

0x230: Pop(1)
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-1] = (bool) 1
0x233: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x236: Call2 0x9cb

0x237: Pop(1)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[-1] = (bool) 1
0x23a: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x23b: PushEmpty(bool)
0x23c: Stack[-1] = (bool) 0
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: PushEmpty(bool, object)
0x240: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x241: Call2 0x9d7

0x242: Pop(1)
0x243: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x246: Call2 0x9bf

0x247: Pop(1)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24d: Call2 0x9cb

0x24e: Pop(1)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 0
0x253: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x254: Push((int) 520211)
0x255: Push((int) 21404)
0x256: Push((int) 21403)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Push((int) 520215)
0x25a: Push((int) -1)
0x25b: Push((int) 21407)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Push((int) 21404)
0x260: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x262: PushEmpty(string)
0x263: Stack[-1] = "Fear"
0x264: Call2 0x1b9

0x265: Pop(1)
0x266: Push((int) 520212)
0x267: @@ SetMessage(Stack[-1])
0x268: Pop(1)
0x269: @@ ClearReplies()
0x26a: Pop(0)
0x26b: Push((int) 520213)
0x26c: Push((int) 26114)
0x26d: Push((int) 21405)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Push((int) 520214)
0x271: Push((int) -1)
0x272: Push((int) 21406)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Push((int) 26114)
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Fear"
0x27b: Call2 0x1b9

0x27c: Pop(1)
0x27d: Push((int) 524804)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 524805)
0x283: Push((int) -1)
0x284: Push((int) 26115)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Return(); Pop(0)

0x288: Push((int) 21397)
0x289: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x28b: PushEmpty(string)
0x28c: Stack[-1] = "Fear"
0x28d: Call2 0x1b9

0x28e: Pop(1)
0x28f: Push((int) 520205)
0x290: @@ SetMessage(Stack[-1])
0x291: Pop(1)
0x292: @@ ClearReplies()
0x293: Pop(0)
0x294: Push((int) 520206)
0x295: Push((int) 21399)
0x296: Push((int) 21398)
0x297: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x298: Pop(3)
0x299: Push((int) 520210)
0x29a: Push((int) -1)
0x29b: Push((int) 21402)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: Return(); Pop(0)

0x29f: Push((int) 21399)
0x2a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Fear"
0x2a4: Call2 0x1b9

0x2a5: Pop(1)
0x2a6: Push((int) 520207)
0x2a7: @@ SetMessage(Stack[-1])
0x2a8: Pop(1)
0x2a9: @@ ClearReplies()
0x2aa: Pop(0)
0x2ab: Push((int) 520208)
0x2ac: Push((int) -1)
0x2ad: Push((int) 21400)
0x2ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2af: Pop(3)
0x2b0: Push((int) 520209)
0x2b1: Push((int) -1)
0x2b2: Push((int) 21401)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: Return(); Pop(0)

0x2b6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b7: PushEmpty(bool)
0x2b8: Call2 0x93f

0x2b9: Pop(0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bb: @ lshStopAnimation()
0x2bc: Pop(0)
0x2bd: GOTO 0x2c0

0x2be: @ StopAnimation()
0x2bf: Pop(0)
0x2c0: Return(); Pop(0)

0x2c1: GOTO 0x1d0

0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2c5: PushEmpty(bool, object, float)
0x2c6: Stack[-2] = Stack[-12]
0x2c7: Stack[-1] = (float) 70.0
0x2c8: Call2 0x76a

0x2c9: Pop(2)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-10] = (int) -2
0x2cd: Return(); Pop(8)

0x2ce: @ CreateDialog(Stack[-4])
0x2cf: Pop(0)
0x2d0: PushEmpty(int)
0x2d1: Call2 0x939

0x2d2: Pop(0)
0x2d3: @@ SetNPCName(Stack[-1])
0x2d4: Pop(1)
0x2d5: PushEmpty(int)
0x2d6: Call2 0x937

0x2d7: Pop(0)
0x2d8: @@ SetNPCDescription(Stack[-1])
0x2d9: Pop(1)
0x2da: PushEmpty(string)
0x2db: Call2 0x93b

0x2dc: Pop(0)
0x2dd: @@ SetPhoto(Stack[-1])
0x2de: Pop(1)
0x2df: PushEmpty(string)
0x2e0: Call2 0x93d

0x2e1: Pop(0)
0x2e2: @@ SetPhoto2(Stack[-1])
0x2e3: Pop(1)
0x2e4: PushEmpty(int)
0x2e5: Call2 0xa68

0x2e6: Pop(0)
0x2e7: @@ SetPlayerName(Stack[-1])
0x2e8: Pop(1)
0x2e9: Stack[-2] = (int) -1
0x2ea: @ IsOverrideActive(Stack[-3])
0x2eb: Pop(0)
0x2ec: Push(Stack[-3])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ee: Stack[-10] = (int) -2
0x2ef: Return(); Pop(8)

0x2f0: @ DoDialog(Stack[-4])
0x2f1: Pop(0)
0x2f2: PushEmpty(bool, object)
0x2f3: PushEmpty(object)
0x2f4: Call2 0x87e

0x2f5: Stack[-2] = Stack[-1]
0x2f6: Pop(1)
0x2f7: Call2 0x7bf

0x2f8: Pop(2)
0x2f9: PushEmpty(object, object)
0x2fa: Stack[-2] = Stack[-11]
0x2fb: Stack[-1] = Stack[-6]
0x2fc: Push(-2, 4); TaskCall(5)
0x2fd: Call2 0x314

0x2fe: Pop(-2, 4); TaskReturn
0x2ff: Pop(2)
0x300: @@ IsDialogEnd(Stack[-1])
0x301: Pop(0)
0x302: Pop(0); Push((bool) Stack[-1] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x304: @ sync()
0x305: Pop(0)
0x306: @@ IsDialogEnd(Stack[-1])
0x307: Pop(0)
0x308: GOTO 0x302

0x309: PushEmpty(object)
0x30a: Stack[-1] = Stack[-10]
0x30b: Call2 0x7ae

0x30c: Pop(1)
0x30d: @ StopDialog(Stack[-4])
0x30e: Pop(0)
0x30f: @@ GetReturnValue(Stack[-2])
0x310: Pop(0)
0x311: Stack[-10] = Stack[-2]
0x312: Return(); Pop(8)

0x313: Stack[-4] = 0
0x314: PushEmpty()
0x315: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x316: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x317: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x318: Push((int) 1)
0x319: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Fear"
0x31c: Call2 0x34e

0x31d: Pop(1)
0x31e: Push((int) 520716)
0x31f: @@ SetMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ ClearReplies()
0x322: Pop(0)
0x323: Push((int) 520717)
0x324: Push((int) 21929)
0x325: Push((int) 21928)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Push((int) 520721)
0x329: Push((int) 21933)
0x32a: Push((int) 21932)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: GOTO 0x330

0x32e: Return(); Pop(0)

0x32f: GOTO 0x318

0x330: PushEmpty(bool)
0x331: Call2 0x93f

0x332: Pop(0)
0x333: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x334: @ lshWaitForAnimEnd()
0x335: Pop(0)
0x336: Push( Stack[3 + Tasks[-1].StackPointer] )
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: GOTO 0x33e

0x339: PushEmpty(string)
0x33a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x33b: Call2 0x849

0x33c: Pop(1)
0x33d: GOTO 0x334

0x33e: GOTO 0x34d

0x33f: Push("all")
0x340: Push("idle")
0x341: @ PlayAnimation(Stack[-2], Stack[-1])
0x342: Pop(2)
0x343: @ WaitForAnimEnd()
0x344: Pop(0)
0x345: Push( Stack[3 + Tasks[-1].StackPointer] )
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x34d

0x348: Push("all")
0x349: Push("idle")
0x34a: @ PlayAnimation(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: GOTO 0x343

0x34d: Return(); Pop(0)

0x34e: PushEmpty()
0x34f: PushEmpty(bool)
0x350: Call2 0x93f

0x351: Pop(0)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Return(); Pop(0)

0x355: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Return(); Pop(0)

0x358: PushEmpty(string, bool)
0x359: Stack[-2] = Stack[-3]
0x35a: Push("")
0x35b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-1] = (bool) 0
0x35e: GOTO 0x360

0x35f: Stack[-1] = (bool) 1
0x360: Call2 0x859

0x361: Pop(2)
0x362: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x363: Return(); Pop(0)

0x364: PushEmpty()
0x365: Push((int) 1)
0x366: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x367: PushEmpty()
0x368: Call2 0x877

0x369: Pop(0)
0x36a: Push((int) 21927)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Fear"
0x36f: Call2 0x34e

0x370: Pop(1)
0x371: Push((int) 520716)
0x372: @@ SetMessage(Stack[-1])
0x373: Pop(1)
0x374: @@ ClearReplies()
0x375: Pop(0)
0x376: Push((int) 520717)
0x377: Push((int) 21929)
0x378: Push((int) 21928)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Push((int) 520721)
0x37c: Push((int) 21933)
0x37d: Push((int) 21932)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 21933)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Fear"
0x386: Call2 0x34e

0x387: Pop(1)
0x388: Push((int) 520722)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 520723)
0x38e: Push((int) -1)
0x38f: Push((int) 21934)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Push((int) 520724)
0x393: Push((int) -1)
0x394: Push((int) 21935)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: Return(); Pop(0)

0x398: Push((int) 21929)
0x399: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x39b: PushEmpty(string)
0x39c: Stack[-1] = "Fear"
0x39d: Call2 0x34e

0x39e: Pop(1)
0x39f: Push((int) 520718)
0x3a0: @@ SetMessage(Stack[-1])
0x3a1: Pop(1)
0x3a2: @@ ClearReplies()
0x3a3: Pop(0)
0x3a4: Push((int) 520719)
0x3a5: Push((int) -1)
0x3a6: Push((int) 21930)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Push((int) 520720)
0x3aa: Push((int) -1)
0x3ab: Push((int) 21931)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3b0: PushEmpty(bool)
0x3b1: Call2 0x93f

0x3b2: Pop(0)
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b4: @ lshStopAnimation()
0x3b5: Pop(0)
0x3b6: GOTO 0x3b9

0x3b7: @ StopAnimation()
0x3b8: Pop(0)
0x3b9: Return(); Pop(0)

0x3ba: GOTO 0x365

0x3bb: Return(); Pop(0)

0x3bc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3be: PushEmpty(bool, object, float)
0x3bf: Stack[-2] = Stack[-12]
0x3c0: Stack[-1] = (float) 70.0
0x3c1: Call2 0x76a

0x3c2: Pop(2)
0x3c3: Pop(1); Push((bool) Stack[-1] == 0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-10] = (int) -2
0x3c6: Return(); Pop(8)

0x3c7: @ CreateDialog(Stack[-4])
0x3c8: Pop(0)
0x3c9: PushEmpty(int)
0x3ca: Call2 0x939

0x3cb: Pop(0)
0x3cc: @@ SetNPCName(Stack[-1])
0x3cd: Pop(1)
0x3ce: PushEmpty(int)
0x3cf: Call2 0x937

0x3d0: Pop(0)
0x3d1: @@ SetNPCDescription(Stack[-1])
0x3d2: Pop(1)
0x3d3: PushEmpty(string)
0x3d4: Call2 0x93b

0x3d5: Pop(0)
0x3d6: @@ SetPhoto(Stack[-1])
0x3d7: Pop(1)
0x3d8: PushEmpty(string)
0x3d9: Call2 0x93d

0x3da: Pop(0)
0x3db: @@ SetPhoto2(Stack[-1])
0x3dc: Pop(1)
0x3dd: PushEmpty(int)
0x3de: Call2 0xa68

0x3df: Pop(0)
0x3e0: @@ SetPlayerName(Stack[-1])
0x3e1: Pop(1)
0x3e2: Stack[-2] = (int) -1
0x3e3: @ IsOverrideActive(Stack[-3])
0x3e4: Pop(0)
0x3e5: Push(Stack[-3])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-10] = (int) -2
0x3e8: Return(); Pop(8)

0x3e9: @ DoDialog(Stack[-4])
0x3ea: Pop(0)
0x3eb: PushEmpty(bool, object)
0x3ec: PushEmpty(object)
0x3ed: Call2 0x87e

0x3ee: Stack[-2] = Stack[-1]
0x3ef: Pop(1)
0x3f0: Call2 0x7bf

0x3f1: Pop(2)
0x3f2: PushEmpty(object, object)
0x3f3: Stack[-2] = Stack[-11]
0x3f4: Stack[-1] = Stack[-6]
0x3f5: Push(-2, 4); TaskCall(7)
0x3f6: Call2 0x40d

0x3f7: Pop(-2, 4); TaskReturn
0x3f8: Pop(2)
0x3f9: @@ IsDialogEnd(Stack[-1])
0x3fa: Pop(0)
0x3fb: Pop(0); Push((bool) Stack[-1] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: @ sync()
0x3fe: Pop(0)
0x3ff: @@ IsDialogEnd(Stack[-1])
0x400: Pop(0)
0x401: GOTO 0x3fb

0x402: PushEmpty(object)
0x403: Stack[-1] = Stack[-10]
0x404: Call2 0x7ae

0x405: Pop(1)
0x406: @ StopDialog(Stack[-4])
0x407: Pop(0)
0x408: @@ GetReturnValue(Stack[-2])
0x409: Pop(0)
0x40a: Stack[-10] = Stack[-2]
0x40b: Return(); Pop(8)

0x40c: Stack[-4] = 0
0x40d: PushEmpty()
0x40e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x40f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x410: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x413: PushEmpty(string)
0x414: Stack[-1] = "Neutral"
0x415: Call2 0x45f

0x416: Pop(1)
0x417: Push((int) 521552)
0x418: @@ SetMessage(Stack[-1])
0x419: Pop(1)
0x41a: @@ ClearReplies()
0x41b: Pop(0)
0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41e: Call2 0x99b

0x41f: Pop(1)
0x420: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x421: Push((int) 521553)
0x422: Push((int) 22715)
0x423: Push((int) 22714)
0x424: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(3)
0x426: PushEmpty(bool)
0x427: Stack[-1] = (bool) 0
0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call2 0x9a7

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42d: PushEmpty(bool, object)
0x42e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Call2 0x9b3

0x430: Pop(1)
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: Stack[-1] = (bool) 1
0x433: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x434: Push((int) 521609)
0x435: Push((int) 22777)
0x436: Push((int) 22776)
0x437: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: Push((int) 521556)
0x43a: Push((int) -1)
0x43b: Push((int) 22717)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: GOTO 0x441

0x43f: Return(); Pop(0)

0x440: GOTO 0x411

0x441: PushEmpty(bool)
0x442: Call2 0x93f

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x445: @ lshWaitForAnimEnd()
0x446: Pop(0)
0x447: Push( Stack[3 + Tasks[-1].StackPointer] )
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: GOTO 0x44f

0x44a: PushEmpty(string)
0x44b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x44c: Call2 0x849

0x44d: Pop(1)
0x44e: GOTO 0x445

0x44f: GOTO 0x45e

0x450: Push("all")
0x451: Push("idle")
0x452: @ PlayAnimation(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: @ WaitForAnimEnd()
0x455: Pop(0)
0x456: Push( Stack[3 + Tasks[-1].StackPointer] )
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: GOTO 0x45e

0x459: Push("all")
0x45a: Push("idle")
0x45b: @ PlayAnimation(Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: GOTO 0x454

0x45e: Return(); Pop(0)

0x45f: PushEmpty()
0x460: PushEmpty(bool)
0x461: Call2 0x93f

0x462: Pop(0)
0x463: Pop(1); Push((bool) Stack[-1] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: Return(); Pop(0)

0x466: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x467: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x468: Return(); Pop(0)

0x469: PushEmpty(string, bool)
0x46a: Stack[-2] = Stack[-3]
0x46b: Push("")
0x46c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-1] = (bool) 0
0x46f: GOTO 0x471

0x470: Stack[-1] = (bool) 1
0x471: Call2 0x859

0x472: Pop(2)
0x473: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x474: Return(); Pop(0)

0x475: PushEmpty()
0x476: Push((int) 1)
0x477: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x478: PushEmpty()
0x479: Call2 0x877

0x47a: Pop(0)
0x47b: Push((int) 23411)
0x47c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: PushEmpty(object, object)
0x47f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x480: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x481: Call2 0x94d

0x482: Pop(2)
0x483: Push((int) 23412)
0x484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x486: PushEmpty(object, object)
0x487: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x488: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x489: Call2 0x94d

0x48a: Pop(2)
0x48b: Push((int) 22716)
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: PushEmpty(object, object)
0x48f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x490: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x491: Call2 0x94d

0x492: Pop(2)
0x493: Push((int) 22776)
0x494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: PushEmpty(object, object)
0x497: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x498: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x499: Call2 0x947

0x49a: Pop(2)
0x49b: Push((int) 22778)
0x49c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49d: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x49e: PushEmpty(object, object)
0x49f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a1: Call2 0x97d

0x4a2: Pop(2)
0x4a3: PushEmpty(object, object)
0x4a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a6: Call2 0x983

0x4a7: Pop(2)
0x4a8: Push((int) 22713)
0x4a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4ab: PushEmpty(string)
0x4ac: Stack[-1] = "Neutral"
0x4ad: Call2 0x45f

0x4ae: Pop(1)
0x4af: Push((int) 521552)
0x4b0: @@ SetMessage(Stack[-1])
0x4b1: Pop(1)
0x4b2: @@ ClearReplies()
0x4b3: Pop(0)
0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b6: Call2 0x99b

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b9: Push((int) 521553)
0x4ba: Push((int) 22715)
0x4bb: Push((int) 22714)
0x4bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bd: Pop(3)
0x4be: PushEmpty(bool)
0x4bf: Stack[-1] = (bool) 0
0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c2: Call2 0x9a7

0x4c3: Pop(1)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c5: PushEmpty(bool, object)
0x4c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c7: Call2 0x9b3

0x4c8: Pop(1)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Stack[-1] = (bool) 1
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cc: Push((int) 521609)
0x4cd: Push((int) 22777)
0x4ce: Push((int) 22776)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Push((int) 521556)
0x4d2: Push((int) -1)
0x4d3: Push((int) 22717)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: Return(); Pop(0)

0x4d7: Push((int) 22777)
0x4d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4da: PushEmpty(string)
0x4db: Stack[-1] = "Fear"
0x4dc: Call2 0x45f

0x4dd: Pop(1)
0x4de: Push((int) 521610)
0x4df: @@ SetMessage(Stack[-1])
0x4e0: Pop(1)
0x4e1: @@ ClearReplies()
0x4e2: Pop(0)
0x4e3: Push((int) 522261)
0x4e4: Push((int) 23414)
0x4e5: Push((int) 23413)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 23414)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Fear"
0x4ee: Call2 0x45f

0x4ef: Pop(1)
0x4f0: Push((int) 522262)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 522263)
0x4f6: Push((int) 23418)
0x4f7: Push((int) 23415)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 23417)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fe: Push((int) 23418)
0x4ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x501: PushEmpty(string)
0x502: Stack[-1] = "Love"
0x503: Call2 0x45f

0x504: Pop(1)
0x505: Push((int) 522266)
0x506: @@ SetMessage(Stack[-1])
0x507: Pop(1)
0x508: @@ ClearReplies()
0x509: Pop(0)
0x50a: Push((int) 522267)
0x50b: Push((int) 23420)
0x50c: Push((int) 23419)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 23420)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Love"
0x515: Call2 0x45f

0x516: Pop(1)
0x517: Push((int) 522268)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 521611)
0x51d: Push((int) -1)
0x51e: Push((int) 22778)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Return(); Pop(0)

0x522: Push((int) 22715)
0x523: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x525: PushEmpty(string)
0x526: Stack[-1] = "Fear"
0x527: Call2 0x45f

0x528: Pop(1)
0x529: Push((int) 521554)
0x52a: @@ SetMessage(Stack[-1])
0x52b: Pop(1)
0x52c: @@ ClearReplies()
0x52d: Pop(0)
0x52e: Push((int) 522257)
0x52f: Push((int) 23410)
0x530: Push((int) 23409)
0x531: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x532: Pop(3)
0x533: Push((int) 521555)
0x534: Push((int) -1)
0x535: Push((int) 22716)
0x536: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x537: Pop(3)
0x538: Return(); Pop(0)

0x539: Push((int) 23410)
0x53a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x53c: PushEmpty(string)
0x53d: Stack[-1] = "Fear"
0x53e: Call2 0x45f

0x53f: Pop(1)
0x540: Push((int) 522258)
0x541: @@ SetMessage(Stack[-1])
0x542: Pop(1)
0x543: @@ ClearReplies()
0x544: Pop(0)
0x545: Push((int) 522259)
0x546: Push((int) -1)
0x547: Push((int) 23411)
0x548: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x549: Pop(3)
0x54a: Push((int) 522260)
0x54b: Push((int) -1)
0x54c: Push((int) 23412)
0x54d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54e: Pop(3)
0x54f: Return(); Pop(0)

0x550: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x551: PushEmpty(bool)
0x552: Call2 0x93f

0x553: Pop(0)
0x554: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x555: @ lshStopAnimation()
0x556: Pop(0)
0x557: GOTO 0x55a

0x558: @ StopAnimation()
0x559: Pop(0)
0x55a: Return(); Pop(0)

0x55b: GOTO 0x476

0x55c: Return(); Pop(0)

0x55d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x55e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x55f: PushEmpty(bool, object, float)
0x560: Stack[-2] = Stack[-12]
0x561: Stack[-1] = (float) 70.0
0x562: Call2 0x76a

0x563: Pop(2)
0x564: Pop(1); Push((bool) Stack[-1] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: Stack[-10] = (int) -2
0x567: Return(); Pop(8)

0x568: @ CreateDialog(Stack[-4])
0x569: Pop(0)
0x56a: PushEmpty(int)
0x56b: Call2 0x939

0x56c: Pop(0)
0x56d: @@ SetNPCName(Stack[-1])
0x56e: Pop(1)
0x56f: PushEmpty(int)
0x570: Call2 0x937

0x571: Pop(0)
0x572: @@ SetNPCDescription(Stack[-1])
0x573: Pop(1)
0x574: PushEmpty(string)
0x575: Call2 0x93b

0x576: Pop(0)
0x577: @@ SetPhoto(Stack[-1])
0x578: Pop(1)
0x579: PushEmpty(string)
0x57a: Call2 0x93d

0x57b: Pop(0)
0x57c: @@ SetPhoto2(Stack[-1])
0x57d: Pop(1)
0x57e: PushEmpty(int)
0x57f: Call2 0xa68

0x580: Pop(0)
0x581: @@ SetPlayerName(Stack[-1])
0x582: Pop(1)
0x583: Stack[-2] = (int) -1
0x584: @ IsOverrideActive(Stack[-3])
0x585: Pop(0)
0x586: Push(Stack[-3])
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-10] = (int) -2
0x589: Return(); Pop(8)

0x58a: @ DoDialog(Stack[-4])
0x58b: Pop(0)
0x58c: PushEmpty(bool, object)
0x58d: PushEmpty(object)
0x58e: Call2 0x87e

0x58f: Stack[-2] = Stack[-1]
0x590: Pop(1)
0x591: Call2 0x7bf

0x592: Pop(2)
0x593: PushEmpty(object, object)
0x594: Stack[-2] = Stack[-11]
0x595: Stack[-1] = Stack[-6]
0x596: Push(-2, 4); TaskCall(9)
0x597: Call2 0x5ae

0x598: Pop(-2, 4); TaskReturn
0x599: Pop(2)
0x59a: @@ IsDialogEnd(Stack[-1])
0x59b: Pop(0)
0x59c: Pop(0); Push((bool) Stack[-1] == 0)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59e: @ sync()
0x59f: Pop(0)
0x5a0: @@ IsDialogEnd(Stack[-1])
0x5a1: Pop(0)
0x5a2: GOTO 0x59c

0x5a3: PushEmpty(object)
0x5a4: Stack[-1] = Stack[-10]
0x5a5: Call2 0x7ae

0x5a6: Pop(1)
0x5a7: @ StopDialog(Stack[-4])
0x5a8: Pop(0)
0x5a9: @@ GetReturnValue(Stack[-2])
0x5aa: Pop(0)
0x5ab: Stack[-10] = Stack[-2]
0x5ac: Return(); Pop(8)

0x5ad: Stack[-4] = 0
0x5ae: PushEmpty()
0x5af: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5b0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5b1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5b2: Push((int) 1)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Neutral"
0x5b6: Call2 0x5e8

0x5b7: Pop(1)
0x5b8: Push((int) 540551)
0x5b9: @@ SetMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: @@ ClearReplies()
0x5bc: Pop(0)
0x5bd: Push((int) 540552)
0x5be: Push((int) -1)
0x5bf: Push((int) 42561)
0x5c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c1: Pop(3)
0x5c2: Push((int) 540795)
0x5c3: Push((int) -1)
0x5c4: Push((int) 42844)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: GOTO 0x5ca

0x5c8: Return(); Pop(0)

0x5c9: GOTO 0x5b2

0x5ca: PushEmpty(bool)
0x5cb: Call2 0x93f

0x5cc: Pop(0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5ce: @ lshWaitForAnimEnd()
0x5cf: Pop(0)
0x5d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: GOTO 0x5d8

0x5d3: PushEmpty(string)
0x5d4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5d5: Call2 0x849

0x5d6: Pop(1)
0x5d7: GOTO 0x5ce

0x5d8: GOTO 0x5e7

0x5d9: Push("all")
0x5da: Push("idle")
0x5db: @ PlayAnimation(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: @ WaitForAnimEnd()
0x5de: Pop(0)
0x5df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e1: GOTO 0x5e7

0x5e2: Push("all")
0x5e3: Push("idle")
0x5e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e5: Pop(2)
0x5e6: GOTO 0x5dd

0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty(bool)
0x5ea: Call2 0x93f

0x5eb: Pop(0)
0x5ec: Pop(1); Push((bool) Stack[-1] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: Return(); Pop(0)

0x5ef: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: Return(); Pop(0)

0x5f2: PushEmpty(string, bool)
0x5f3: Stack[-2] = Stack[-3]
0x5f4: Push("")
0x5f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: Stack[-1] = (bool) 0
0x5f8: GOTO 0x5fa

0x5f9: Stack[-1] = (bool) 1
0x5fa: Call2 0x859

0x5fb: Pop(2)
0x5fc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: Push((int) 1)
0x600: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x601: PushEmpty()
0x602: Call2 0x877

0x603: Pop(0)
0x604: Push((int) 42560)
0x605: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x606: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x607: PushEmpty(string)
0x608: Stack[-1] = "Neutral"
0x609: Call2 0x5e8

0x60a: Pop(1)
0x60b: Push((int) 540551)
0x60c: @@ SetMessage(Stack[-1])
0x60d: Pop(1)
0x60e: @@ ClearReplies()
0x60f: Pop(0)
0x610: Push((int) 540552)
0x611: Push((int) -1)
0x612: Push((int) 42561)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: Push((int) 540795)
0x616: Push((int) -1)
0x617: Push((int) 42844)
0x618: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x619: Pop(3)
0x61a: Return(); Pop(0)

0x61b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x61c: PushEmpty(bool)
0x61d: Call2 0x93f

0x61e: Pop(0)
0x61f: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x620: @ lshStopAnimation()
0x621: Pop(0)
0x622: GOTO 0x625

0x623: @ StopAnimation()
0x624: Pop(0)
0x625: Return(); Pop(0)

0x626: GOTO 0x5ff

0x627: Return(); Pop(0)

0x628: PushEmpty()
0x629: Call2 0x62c

0x62a: Pop(0)
0x62b: Return(); Pop(0)

0x62c: PushEmpty(bool)
0x62d: Call2 0x765

0x62e: Pop(0)
0x62f: Pop(1); Push((bool) Stack[-1] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: @ Hold()
0x632: Pop(0)
0x633: @ GetDirection(Stack[-0])
0x634: Pop(0)
0x635: PushEmpty()
0x636: Call2 0x6dc

0x637: Pop(0)
0x638: GOTO 0x635

0x639: Return(); Pop(0)

0x63a: PushEmpty(object, object)
0x63b: Push("player")
0x63c: @ FindActor(Stack[-2], Stack[-1])
0x63d: Pop(1)
0x63e: Pop(0); Push((bool) Stack[-1] == 0)
0x63f: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x640: Stack[-3] = (bool) 0
0x641: Return(); Pop(2)

0x642: PushEmpty(bool, object)
0x643: Stack[-1] = Stack[-3]
0x644: Call2 0x75c

0x645: Stack[-5] = Stack[-2]
0x646: Pop(2)
0x647: Return(); Pop(2)

0x648: Stack[-1] = 0
0x649: Push(CvectorIndex(Stack[-0], 0))
0x64a: Push(CvectorIndex(Stack[-0], 2))
0x64b: @ RotateAsync(Stack[-2], Stack[-1])
0x64c: Pop(2)
0x64d: Return(); Pop(0)

0x64e: PushEmpty(object, bool, object, bool)
0x64f: Push("player")
0x650: @ FindActor(Stack[-3], Stack[-1])
0x651: Pop(1)
0x652: Pop(0); Push((bool) Stack[-2] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x654: Stack[-5] = (bool) 0
0x655: Return(); Pop(4)

0x656: PushEmpty(float, object)
0x657: Stack[-1] = Stack[-4]
0x658: Call2 0x728

0x659: Pop(1)
0x65a: Push((float)90000.0)
0x65b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-5] = (bool) 0
0x65e: Return(); Pop(4)

0x65f: @ CanSee(Stack[-1], Stack[-2])
0x660: Pop(0)
0x661: Stack[-5] = Stack[-1]
0x662: Return(); Pop(4)

0x663: Stack[-2] = 0
0x664: PushEmpty(float, float)
0x665: Push((int) 8)
0x666: Push((int) 16)
0x667: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: Push((int) 10)
0x66a: @ SetTimer(Stack[-1], Stack[-2])
0x66b: Pop(1)
0x66c: Return(); Pop(2)

0x66d: Push((int) 10)
0x66e: @ KillTimer(Stack[-1])
0x66f: Pop(1)
0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Push((int) 10)
0x673: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x675: PushEmpty()
0x676: Call2 0x66d

0x677: Pop(0)
0x678: PushEmpty(bool)
0x679: Stack[-1] = (bool) 0
0x67a: PushEmpty(bool)
0x67b: Call2 0x765

0x67c: Pop(0)
0x67d: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67e: PushEmpty(bool)
0x67f: Call2 0x64e

0x680: Pop(0)
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: Stack[-1] = (bool) 1
0x683: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x684: PushEmpty(bool)
0x685: Call2 0x63a

0x686: Pop(0)
0x687: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x688: PushEmpty(bool, object)
0x689: PushEmpty(object)
0x68a: Call2 0x87e

0x68b: Stack[-2] = Stack[-1]
0x68c: Pop(1)
0x68d: Call2 0x7f9

0x68e: Pop(2)
0x68f: GOTO 0x696

0x690: PushEmpty()
0x691: Call2 0x649

0x692: Pop(0)
0x693: PushEmpty()
0x694: Call2 0x664

0x695: Pop(0)
0x696: Return(); Pop(0)

0x697: PushEmpty()
0x698: Call2 0x723

0x699: Pop(0)
0x69a: PushEmpty()
0x69b: Call2 0x66d

0x69c: Pop(0)
0x69d: @ lshStopSpeech()
0x69e: Pop(0)
0x69f: @ lshStopAnimation()
0x6a0: Pop(0)
0x6a1: @ StopAsync()
0x6a2: Pop(0)
0x6a3: @ Hold()
0x6a4: Pop(0)
0x6a5: Return(); Pop(0)

0x6a6: @ StopGroup0()
0x6a7: Pop(0)
0x6a8: PushEmpty()
0x6a9: Call2 0x66d

0x6aa: Pop(0)
0x6ab: PushEmpty(string)
0x6ac: Stack[-1] = "Neutral"
0x6ad: Call2 0x849

0x6ae: Pop(1)
0x6af: PushEmpty()
0x6b0: Call2 0x664

0x6b1: Pop(0)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty()
0x6b4: Push(Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b6: PushEmpty()
0x6b7: Call2 0x664

0x6b8: Pop(0)
0x6b9: GOTO 0x6be

0x6ba: PushEmpty(string)
0x6bb: Stack[-1] = "Neutral"
0x6bc: Call2 0x849

0x6bd: Pop(1)
0x6be: Return(); Pop(0)

0x6bf: PushEmpty(bool, bool)
0x6c0: @ IsOverrideActive(Stack[-1])
0x6c1: Pop(0)
0x6c2: Pop(0); Push((bool) Stack[-1] == 0)
0x6c3: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6c4: EventDisable(0)
0x6c5: PushEmpty()
0x6c6: Call2 0x723

0x6c7: Pop(0)
0x6c8: PushEmpty(bool, object)
0x6c9: Stack[-1] = Stack[-5]
0x6ca: Call2 0x75c

0x6cb: Pop(2)
0x6cc: EventEnable(0)
0x6cd: PushEmpty(object)
0x6ce: Stack[-1] = Stack[-4]
0x6cf: Call2 0xa79

0x6d0: Pop(1)
0x6d1: PushEmpty(string)
0x6d2: Stack[-1] = "Neutral"
0x6d3: Call2 0x849

0x6d4: Pop(1)
0x6d5: PushEmpty()
0x6d6: Call2 0x66d

0x6d7: Pop(0)
0x6d8: PushEmpty()
0x6d9: Call2 0x664

0x6da: Pop(0)
0x6db: Return(); Pop(2)

0x6dc: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6dd: @ WaitForAnimEnd()
0x6de: Pop(0)
0x6df: PushEmpty(bool)
0x6e0: Call2 0x765

0x6e1: Pop(0)
0x6e2: Pop(1); Push((bool) Stack[-1] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: Return(); Pop(12)

0x6e5: PushEmpty(int)
0x6e6: Call2 0x926

0x6e7: Stack[-7] = Stack[-1]
0x6e8: Pop(1)
0x6e9: Stack[-5] = (int) 0
0x6ea: PushEmpty(bool)
0x6eb: Stack[-1] = (bool) 0
0x6ec: Push((int) 5)
0x6ed: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6ef: PushEmpty(bool)
0x6f0: Call2 0x765

0x6f1: Pop(0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Stack[-1] = (bool) 1
0x6f4: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x6f5: Pop(0); Push((bool) Stack[-6] == 0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f7: Push((int) 3)
0x6f8: @ Sleep(Stack[-1], Stack[-5])
0x6f9: Pop(1)
0x6fa: Pop(0); Push((bool) Stack[-4] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: GOTO 0x71e

0x6fd: GOTO 0x713

0x6fe: @ irand(Stack[-3], Stack[-6])
0x6ff: Pop(0)
0x700: Push((int) 5)
0x701: @ irand(Stack[-3], Stack[-1])
0x702: Pop(1)
0x703: Push((int) 0)
0x704: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Stack[-3] = (int) 0
0x707: Push("all")
0x708: PushEmpty(string, int)
0x709: Stack[-1] = Stack[-6]
0x70a: Call2 0x91f

0x70b: Pop(1)
0x70c: @ PlayAnimation(Stack[-2], Stack[-1])
0x70d: Pop(2)
0x70e: @ WaitForAnimEnd(Stack[-1])
0x70f: Pop(0)
0x710: Pop(0); Push((bool) Stack[-1] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: GOTO 0x71e

0x713: PushEmpty(bool)
0x714: Call2 0x721

0x715: Pop(0)
0x716: Pop(1); Push((bool) Stack[-1] == 0)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: GOTO 0x71e

0x719: @ ResetAAS()
0x71a: Pop(0)
0x71b: Push((int) 1)
0x71c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x71d: GOTO 0x6ea

0x71e: @ ResetAAS()
0x71f: Pop(0)
0x720: Return(); Pop(12)

0x721: Stack[-1] = (bool) 1
0x722: Return(); Pop(0)

0x723: @ StopAnimation()
0x724: Pop(0)
0x725: @ StopGroup0()
0x726: Pop(0)
0x727: Return(); Pop(0)

0x728: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x729: @ GetPosition(Stack[-3])
0x72a: Pop(0)
0x72b: @@ GetPosition(Stack[-2])
0x72c: Pop(0)
0x72d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x72e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x72f: Return(); Pop(6)

0x730: PushEmpty(bool, bool)
0x731: Push("HasProperty")
0x732: Push((int) 2)
0x733: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x734: Pop(1); Push((bool) Stack[-1] == 0)
0x735: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x736: Stack[-5] = (bool) 0
0x737: Return(); Pop(2)

0x738: @@ HasProperty(Stack[-3], Stack[-1])
0x739: Pop(0)
0x73a: Stack[-5] = Stack[-1]
0x73b: Return(); Pop(2)

0x73c: PushEmpty(float, float)
0x73d: PushEmpty(bool, object, string)
0x73e: Stack[-2] = Stack[-10]
0x73f: Stack[-1] = Stack[-9]
0x740: Call2 0x730

0x741: Pop(2)
0x742: Pop(1); Push((bool) Stack[-1] == 0)
0x743: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x744: Stack[-8] = (bool) 0
0x745: Return(); Pop(2)

0x746: @@ GetProperty(Stack[-6], Stack[-1])
0x747: Pop(0)
0x748: PushEmpty(float, float, float, float)
0x749: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x74a: Stack[-2] = Stack[-8]
0x74b: Stack[-1] = Stack[-7]
0x74c: Call2 0x88e

0x74d: Pop(3)
0x74e: @@ SetProperty(Stack[-7], Stack[-1])
0x74f: Pop(1)
0x750: Stack[-8] = (bool) 1
0x751: Return(); Pop(2)

0x752: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x753: @ GetPosition(Stack[-3])
0x754: Pop(0)
0x755: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x756: Push(CvectorIndex(Stack[-2], 0))
0x757: Push(CvectorIndex(Stack[-3], 2))
0x758: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x759: Pop(2)
0x75a: Stack[-8] = Stack[-1]
0x75b: Return(); Pop(6)

0x75c: PushEmpty(cvector, cvector)
0x75d: @@ GetPosition(Stack[-1])
0x75e: Pop(0)
0x75f: PushEmpty(bool, cvector)
0x760: Stack[-1] = Stack[-3]
0x761: Call2 0x752

0x762: Stack[-6] = Stack[-2]
0x763: Pop(2)
0x764: Return(); Pop(2)

0x765: PushEmpty(bool, bool)
0x766: @ IsLoaded(Stack[-1])
0x767: Pop(0)
0x768: Stack[-3] = Stack[-1]
0x769: Return(); Pop(2)

0x76a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x76b: @@ GetPosition(Stack[-8])
0x76c: Pop(0)
0x76d: @@ GetEyesHeight(Stack[-9])
0x76e: Pop(0)
0x76f: Push(CvectorIndex(Stack[-8], 1))
0x770: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x771: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x772: @ GetPosition(Stack[-7])
0x773: Pop(0)
0x774: @ GetEyesHeight(Stack[-9])
0x775: Pop(0)
0x776: Push(CvectorIndex(Stack[-7], 1))
0x777: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x778: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x779: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x77a: Push(CvectorIndex(Stack[-6], 1))
0x77b: Stack[-1] = (int) 0
0x77c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x77d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x77e: Pop(1); Push(Sqrt(Stack[-1]))
0x77f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x780: Stack[-5] = -Stack[-6]; Pop(0);
0x781: Pop(0); Push(Stack[-6] * Stack[-19]);
0x782: PushEmpty(cvector, cvector)
0x783: Push(CVector(0.0, 1.0, 0.0))
0x784: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x785: Call2 0x884

0x786: Pop(1)
0x787: Push((int) 25)
0x788: Pop(2); Push(Stack[-2] * Stack[-1]);
0x789: Pop(2); Push(Stack[-2] + Stack[-1]);
0x78a: Push(CVector(0.0, 10.0, 0.0))
0x78b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x78c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x78d: @ IsOverrideActive(Stack[-2])
0x78e: Pop(0)
0x78f: Push(Stack[-2])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-21] = (bool) 0
0x792: Return(); Pop(18)

0x793: @ StopWorld()
0x794: Pop(0)
0x795: @ CameraTransit(Stack[-3], Stack[-5])
0x796: Pop(0)
0x797: Push(CvectorIndex(Stack[-4], 0))
0x798: Push(CvectorIndex(Stack[-5], 2))
0x799: @ Rotate(Stack[-2], Stack[-1])
0x79a: Pop(2)
0x79b: PushEmpty(bool)
0x79c: Call2 0x93f

0x79d: Pop(0)
0x79e: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79f: GOTO 0x7a8

0x7a0: Push("head")
0x7a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7a2: Pop(1)
0x7a3: Push(Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a5: Push("head")
0x7a6: @ LookAsyncCamera(Stack[-1])
0x7a7: Pop(1)
0x7a8: @ CameraWaitForPlayFinish()
0x7a9: Pop(0)
0x7aa: @ ResumeWorld()
0x7ab: Pop(0)
0x7ac: Stack[-21] = (bool) 1
0x7ad: Return(); Pop(18)

0x7ae: PushEmpty(bool, bool)
0x7af: @ CameraSwitchToNormal()
0x7b0: Pop(0)
0x7b1: PushEmpty(bool)
0x7b2: Call2 0x93f

0x7b3: Pop(0)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b5: GOTO 0x7be

0x7b6: Push("head")
0x7b7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7b8: Pop(1)
0x7b9: Push(Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bb: Push("head")
0x7bc: @ UnlookAsync(Stack[-1])
0x7bd: Pop(1)
0x7be: Return(); Pop(2)

0x7bf: PushEmpty(int, int, int, int)
0x7c0: Push("voice_common")
0x7c1: @ GetVariable(Stack[-1], Stack[-3])
0x7c2: Pop(1)
0x7c3: Push(Stack[-2])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7c5: PushEmpty(bool, object)
0x7c6: Stack[-1] = Stack[-7]
0x7c7: Call2 0x7f9

0x7c8: Pop(1)
0x7c9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cb: PushEmpty(bool, object)
0x7cc: Stack[-1] = Stack[-7]
0x7cd: Call2 0x81e

0x7ce: Pop(1)
0x7cf: Pop(1); Push((bool) Stack[-1] == 0)
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-6] = (bool) 0
0x7d2: Return(); Pop(4)

0x7d3: Push((int) 2)
0x7d4: @ irand(Stack[-2], Stack[-1])
0x7d5: Pop(1)
0x7d6: Push(Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d8: Push("voice_common")
0x7d9: Push((int) 1)
0x7da: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7db: Push((int) 3)
0x7dc: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7dd: @ SetVariable(Stack[-2], Stack[-1])
0x7de: Pop(2)
0x7df: GOTO 0x7e4

0x7e0: Push("voice_common")
0x7e1: Push((int) 0)
0x7e2: @ SetVariable(Stack[-2], Stack[-1])
0x7e3: Pop(2)
0x7e4: GOTO 0x7f7

0x7e5: PushEmpty(bool, object)
0x7e6: Stack[-1] = Stack[-7]
0x7e7: Call2 0x81e

0x7e8: Pop(1)
0x7e9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7eb: PushEmpty(bool, object)
0x7ec: Stack[-1] = Stack[-7]
0x7ed: Call2 0x7f9

0x7ee: Pop(1)
0x7ef: Pop(1); Push((bool) Stack[-1] == 0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f1: Stack[-6] = (bool) 0
0x7f2: Return(); Pop(4)

0x7f3: Push("voice_common")
0x7f4: Push((int) 1)
0x7f5: @ SetVariable(Stack[-2], Stack[-1])
0x7f6: Pop(2)
0x7f7: Stack[-6] = (bool) 1
0x7f8: Return(); Pop(4)

0x7f9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7fa: Stack[-5] = "c"
0x7fb: Stack[-4] = (int) 0
0x7fc: Push((int) 1)
0x7fd: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x7fe: Push((int) 1)
0x7ff: Pop(1); Push(Stack[-5] + Stack[-1]);
0x800: Pop(1); Push(Stack[-6] + Stack[-1]);
0x801: @@ HasProperty(Stack[-1], Stack[-4])
0x802: Pop(1)
0x803: Pop(0); Push((bool) Stack[-3] == 0)
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: GOTO 0x809

0x806: Push((int) 1)
0x807: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x808: GOTO 0x7fc

0x809: Pop(0); Push((bool) Stack[-4] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-12] = (bool) 0
0x80c: Return(); Pop(10)

0x80d: Stack[-2] = (int) 0
0x80e: Push((int) 1)
0x80f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x811: @ irand(Stack[-2], Stack[-4])
0x812: Pop(0)
0x813: Push((int) 1)
0x814: Pop(1); Push(Stack[-3] + Stack[-1]);
0x815: Pop(1); Push(Stack[-6] + Stack[-1]);
0x816: @@ GetProperty(Stack[-1], Stack[-2])
0x817: Pop(1)
0x818: PushEmpty(bool, string)
0x819: Stack[-1] = Stack[-3]
0x81a: Call2 0x868

0x81b: Stack[-14] = Stack[-2]
0x81c: Pop(2)
0x81d: Return(); Pop(10)

0x81e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x81f: Push("d")
0x820: PushEmpty(int)
0x821: Call2 0x908

0x822: Pop(0)
0x823: Pop(2); Push(Stack[-2] + Stack[-1]);
0x824: Push("m")
0x825: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x826: Stack[-4] = (int) 0
0x827: Push((int) 1)
0x828: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x829: Push((int) 1)
0x82a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x82b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x82c: @@ HasProperty(Stack[-1], Stack[-4])
0x82d: Pop(1)
0x82e: Pop(0); Push((bool) Stack[-3] == 0)
0x82f: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x830: GOTO 0x834

0x831: Push((int) 1)
0x832: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x833: GOTO 0x827

0x834: Pop(0); Push((bool) Stack[-4] == 0)
0x835: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x836: Stack[-12] = (bool) 0
0x837: Return(); Pop(10)

0x838: Stack[-2] = (int) 0
0x839: Push((int) 1)
0x83a: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x83b: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83c: @ irand(Stack[-2], Stack[-4])
0x83d: Pop(0)
0x83e: Push((int) 1)
0x83f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x840: Pop(1); Push(Stack[-6] + Stack[-1]);
0x841: @@ GetProperty(Stack[-1], Stack[-2])
0x842: Pop(1)
0x843: PushEmpty(bool, string)
0x844: Stack[-1] = Stack[-3]
0x845: Call2 0x868

0x846: Stack[-14] = Stack[-2]
0x847: Pop(2)
0x848: Return(); Pop(10)

0x849: PushEmpty(bool, float, float, bool, float, float)
0x84a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x84b: Pop(0)
0x84c: Push(Stack[-3])
0x84d: IF (Stack[-1] == 0) GOTO 0x854; Pop(1)

0x84e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x84f: Pop(0)
0x850: Push((bool) 0)
0x851: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x852: Pop(1)
0x853: GOTO 0x858

0x854: Push("Can't find lsh animation : ")
0x855: Pop(1); Push(Stack[-1] + Stack[-8]);
0x856: @ Trace(Stack[-1])
0x857: Pop(1)
0x858: Return(); Pop(6)

0x859: PushEmpty(bool, float, float, bool, float, float)
0x85a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x85b: Pop(0)
0x85c: Push(Stack[-3])
0x85d: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x85e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x85f: Pop(0)
0x860: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x861: Pop(0)
0x862: GOTO 0x867

0x863: Push("Can't find lsh animation : ")
0x864: Pop(1); Push(Stack[-1] + Stack[-9]);
0x865: @ Trace(Stack[-1])
0x866: Pop(1)
0x867: Return(); Pop(6)

0x868: PushEmpty(bool, bool)
0x869: PushEmpty(bool)
0x86a: Call2 0x93f

0x86b: Pop(0)
0x86c: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x86d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x86e: Pop(0)
0x86f: Push(Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x871: @ lshPlaySpeech(Stack[-3])
0x872: Pop(0)
0x873: Stack[-4] = (bool) 1
0x874: Return(); Pop(2)

0x875: Stack[-4] = (bool) 0
0x876: Return(); Pop(2)

0x877: PushEmpty(bool)
0x878: Call2 0x93f

0x879: Pop(0)
0x87a: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87b: @ lshStopSpeech()
0x87c: Pop(0)
0x87d: Return(); Pop(0)

0x87e: PushEmpty(object, object)
0x87f: @ self(Stack[-1])
0x880: Pop(0)
0x881: Stack[-3] = Stack[-1]
0x882: Return(); Pop(2)

0x883: Stack[-1] = 0
0x884: PushEmpty(float, float)
0x885: Pop(0); Push(Stack[-3] | Stack[-3]);
0x886: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x887: Push((float)0.0)
0x888: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x88b: Return(); Pop(2)

0x88c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x88d: Return(); Pop(2)

0x88e: PushEmpty()
0x88f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x890: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x891: Stack[-4] = Stack[-2]
0x892: Return(); Pop(0)

0x893: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-4] = Stack[-1]
0x896: Return(); Pop(0)

0x897: Stack[-4] = Stack[-3]
0x898: Return(); Pop(0)

0x899: PushEmpty(int, int)
0x89a: @ GetVariable(Stack[-3], Stack[-1])
0x89b: Pop(0)
0x89c: Stack[-4] = Stack[-1]
0x89d: Return(); Pop(2)

0x89e: PushEmpty(object, object)
0x89f: @ CreateIntVector(Stack[-1])
0x8a0: Pop(0)
0x8a1: @@ add(Stack[-4])
0x8a2: Pop(0)
0x8a3: @@ add(Stack[-3])
0x8a4: Pop(0)
0x8a5: Push((int) 3)
0x8a6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8a7: Pop(1)
0x8a8: Return(); Pop(2)

0x8a9: Stack[-1] = 0
0x8aa: PushEmpty(int, int, bool, int, int, bool)
0x8ab: @@ GetItemID(Stack[-3])
0x8ac: Pop(0)
0x8ad: Push("Category")
0x8ae: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x8af: Pop(1)
0x8b0: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x8b1: Pop(0)
0x8b2: Pop(0); Push((bool) Stack[-1] == 0)
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b4: @@ DropItems(Stack[-8], Stack[-7])
0x8b5: Pop(0)
0x8b6: GOTO 0x8bc

0x8b7: PushEmpty(int, int)
0x8b8: Stack[-2] = Stack[-5]
0x8b9: Stack[-1] = Stack[-9]
0x8ba: Call2 0x89e

0x8bb: Pop(2)
0x8bc: Return(); Pop(6)

0x8bd: PushEmpty(object, object)
0x8be: @ CreateInvItem(Stack[-1])
0x8bf: Pop(0)
0x8c0: @@ SetItemName(Stack[-4])
0x8c1: Pop(0)
0x8c2: PushEmpty(object, object, int)
0x8c3: Stack[-3] = Stack[-8]
0x8c4: Stack[-2] = Stack[-4]
0x8c5: Stack[-1] = Stack[-6]
0x8c6: Call2 0x8aa

0x8c7: Pop(3)
0x8c8: Return(); Pop(2)

0x8c9: Stack[-1] = 0
0x8ca: PushEmpty()
0x8cb: Pop(0); Push((bool) Stack[-2] == 0)
0x8cc: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8cd: Stack[-3] = (bool) 0
0x8ce: Return(); Pop(0)

0x8cf: Push((int) 0)
0x8d0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d2: Push((int) 8)
0x8d3: @ SendWorldWndMessage(Stack[-1])
0x8d4: Pop(1)
0x8d5: GOTO 0x8df

0x8d6: Push((int) 0)
0x8d7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8d9: Push((int) 9)
0x8da: @ SendWorldWndMessage(Stack[-1])
0x8db: Pop(1)
0x8dc: GOTO 0x8df

0x8dd: Stack[-3] = (bool) 0
0x8de: Return(); Pop(0)

0x8df: PushEmpty(float)
0x8e0: Stack[-1] = Stack[-2]
0x8e1: Call2 0x8ed

0x8e2: Pop(1)
0x8e3: PushEmpty(bool, object, string, float, float, float)
0x8e4: Stack[-5] = Stack[-8]
0x8e5: Stack[-4] = "reputation"
0x8e6: Stack[-3] = Stack[-7]
0x8e7: Stack[-2] = (int) 0
0x8e8: Stack[-1] = (int) 1
0x8e9: Call2 0x73c

0x8ea: Pop(6)
0x8eb: Stack[-3] = (bool) 1
0x8ec: Return(); Pop(0)

0x8ed: PushEmpty(object, object)
0x8ee: @ CreateFloatVector(Stack[-1])
0x8ef: Pop(0)
0x8f0: @@ add(Stack[-3])
0x8f1: Pop(0)
0x8f2: Push((int) 16)
0x8f3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8f4: Pop(1)
0x8f5: Return(); Pop(2)

0x8f6: Stack[-1] = 0
0x8f7: PushEmpty(object, object)
0x8f8: @ FindActor(Stack[-1], Stack[-4])
0x8f9: Pop(0)
0x8fa: Pop(0); Push((bool) Stack[-1] == 0)
0x8fb: IF (Stack[-1] == 0) GOTO 0x8fe; Pop(1)

0x8fc: Stack[-5] = (bool) 0
0x8fd: Return(); Pop(2)

0x8fe: @ Trigger(Stack[-1], Stack[-3])
0x8ff: Pop(0)
0x900: Stack[-5] = (bool) 1
0x901: Return(); Pop(2)

0x902: Stack[-1] = 0
0x903: PushEmpty(float, float)
0x904: @ GetGameTime(Stack[-1])
0x905: Pop(0)
0x906: Stack[-3] = Stack[-1]
0x907: Return(); Pop(2)

0x908: PushEmpty(float, float)
0x909: @ GetGameTime(Stack[-1])
0x90a: Pop(0)
0x90b: Push((int) 1)
0x90c: PushEmpty(int)
0x90d: Push((int) 24)
0x90e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x90f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x910: Return(); Pop(2)

0x911: PushEmpty(float, float)
0x912: @ GetGameTime(Stack[-1])
0x913: Pop(0)
0x914: PushEmpty(int)
0x915: Stack[-1] = Stack[-2]
0x916: Push((int) 24)
0x917: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x918: Return(); Pop(2)

0x919: PushEmpty()
0x91a: PushEmpty(int)
0x91b: Call2 0x908

0x91c: Pop(0)
0x91d: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x91e: Return(); Pop(0)

0x91f: PushEmpty(string, string)
0x920: Stack[-1] = "idle"
0x921: Push(Stack[-3])
0x922: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x923: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x924: Stack[-4] = Stack[-1]
0x925: Return(); Pop(2)

0x926: PushEmpty(int, bool, int, bool)
0x927: Stack[-2] = (int) 0
0x928: Push("all")
0x929: PushEmpty(string, int)
0x92a: Stack[-1] = Stack[-5]
0x92b: Call2 0x91f

0x92c: Pop(1)
0x92d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x92e: Pop(2)
0x92f: Pop(0); Push((bool) Stack[-1] == 0)
0x930: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x931: GOTO 0x935

0x932: Push((int) 1)
0x933: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x934: GOTO 0x928

0x935: Stack[-5] = Stack[-2]
0x936: Return(); Pop(4)

0x937: Stack[-1] = (int) 515533
0x938: Return(); Pop(0)

0x939: Stack[-1] = (int) 502858
0x93a: Return(); Pop(0)

0x93b: Stack[-1] = "ui/NPC_Eva.png"
0x93c: Return(); Pop(0)

0x93d: Stack[-1] = "ui/NPC_Eva_b.png"
0x93e: Return(); Pop(0)

0x93f: Stack[-1] = (bool) 1
0x940: Return(); Pop(0)

0x941: PushEmpty()
0x942: Push("oob1Eva1")
0x943: Push((int) 1)
0x944: @ SetVariable(Stack[-2], Stack[-1])
0x945: Pop(2)
0x946: Return(); Pop(0)

0x947: PushEmpty()
0x948: Push("oob9Eva1")
0x949: Push((int) 1)
0x94a: @ SetVariable(Stack[-2], Stack[-1])
0x94b: Pop(2)
0x94c: Return(); Pop(0)

0x94d: PushEmpty()
0x94e: Push("b9q01")
0x94f: Push((int) 2)
0x950: @ SetVariable(Stack[-2], Stack[-1])
0x951: Pop(2)
0x952: PushEmpty()
0x953: Call2 0xa21

0x954: Pop(0)
0x955: PushEmpty(bool, string, string)
0x956: Stack[-2] = "quest_b9_01"
0x957: Stack[-1] = "place_mdoberman"
0x958: Call2 0x8f7

0x959: Pop(3)
0x95a: PushEmpty(bool, string, string)
0x95b: Stack[-2] = "quest_b9_01"
0x95c: Stack[-1] = "init_factory"
0x95d: Call2 0x8f7

0x95e: Pop(3)
0x95f: Return(); Pop(0)

0x960: PushEmpty()
0x961: PushEmpty(bool, object, float)
0x962: Stack[-2] = Stack[-5]
0x963: Stack[-1] = (float) -0.05
0x964: Call2 0x8ca

0x965: Pop(3)
0x966: Return(); Pop(0)

0x967: PushEmpty()
0x968: Push("oob1Eva2")
0x969: Push((int) 1)
0x96a: @ SetVariable(Stack[-2], Stack[-1])
0x96b: Pop(2)
0x96c: Return(); Pop(0)

0x96d: PushEmpty(object, object)
0x96e: PushEmpty(object)
0x96f: Call2 0xa57

0x970: Stack[-2] = Stack[-1]
0x971: Pop(1)
0x972: Push("b1q01BakWillBeAt18")
0x973: Push("pt_map_eva")
0x974: Push((int) 3)
0x975: Push((int) 524806)
0x976: PushEmpty(float)
0x977: Call2 0x903

0x978: Pop(0)
0x979: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x97a: Pop(5)
0x97b: Return(); Pop(2)

0x97c: Stack[-1] = 0
0x97d: PushEmpty()
0x97e: Push("playsound")
0x97f: Push("giveitem")
0x980: @ TriggerWorld(Stack[-2], Stack[-1])
0x981: Pop(2)
0x982: Return(); Pop(0)

0x983: PushEmpty()
0x984: Push("rifle ammo30 is given")
0x985: @ Trace(Stack[-1])
0x986: Pop(1)
0x987: PushEmpty(object, string, int)
0x988: Stack[-3] = Stack[-5]
0x989: Stack[-2] = "rifle_ammo"
0x98a: Stack[-1] = (int) 30
0x98b: Call2 0x8bd

0x98c: Pop(3)
0x98d: Return(); Pop(0)

0x98e: PushEmpty()
0x98f: PushEmpty(bool, object, float)
0x990: Stack[-2] = Stack[-5]
0x991: Stack[-1] = (float) -0.02
0x992: Call2 0x8ca

0x993: Pop(3)
0x994: Return(); Pop(0)

0x995: PushEmpty()
0x996: Push("playsound")
0x997: Push("mapmark")
0x998: @ TriggerWorld(Stack[-2], Stack[-1])
0x999: Pop(2)
0x99a: Return(); Pop(0)

0x99b: PushEmpty()
0x99c: PushEmpty(int, string)
0x99d: Stack[-1] = "b9q01"
0x99e: Call2 0x899

0x99f: Pop(1)
0x9a0: Push((int) 1)
0x9a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a3: Stack[-2] = (bool) 1
0x9a4: Return(); Pop(0)

0x9a5: Stack[-2] = (bool) 0
0x9a6: Return(); Pop(0)

0x9a7: PushEmpty()
0x9a8: PushEmpty(int, string)
0x9a9: Stack[-1] = "oob9Eva1"
0x9aa: Call2 0x899

0x9ab: Pop(1)
0x9ac: Push((int) 0)
0x9ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9af: Stack[-2] = (bool) 1
0x9b0: Return(); Pop(0)

0x9b1: Stack[-2] = (bool) 0
0x9b2: Return(); Pop(0)

0x9b3: PushEmpty()
0x9b4: PushEmpty(int, string)
0x9b5: Stack[-1] = "b9q01DankoAmmo"
0x9b6: Call2 0x899

0x9b7: Pop(1)
0x9b8: Push((int) 0)
0x9b9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9ba: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bb: Stack[-2] = (bool) 1
0x9bc: Return(); Pop(0)

0x9bd: Stack[-2] = (bool) 0
0x9be: Return(); Pop(0)

0x9bf: PushEmpty()
0x9c0: PushEmpty(int, string)
0x9c1: Stack[-1] = "oob1Eva2"
0x9c2: Call2 0x899

0x9c3: Pop(1)
0x9c4: Push((int) 0)
0x9c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c6: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c7: Stack[-2] = (bool) 1
0x9c8: Return(); Pop(0)

0x9c9: Stack[-2] = (bool) 0
0x9ca: Return(); Pop(0)

0x9cb: PushEmpty()
0x9cc: PushEmpty(int, string)
0x9cd: Stack[-1] = "b1q01GrifToldAboutDanko"
0x9ce: Call2 0x899

0x9cf: Pop(1)
0x9d0: Push((int) 0)
0x9d1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d5; Pop(1)

0x9d3: Stack[-2] = (bool) 1
0x9d4: Return(); Pop(0)

0x9d5: Stack[-2] = (bool) 0
0x9d6: Return(); Pop(0)

0x9d7: PushEmpty()
0x9d8: PushEmpty(bool, object)
0x9d9: Stack[-1] = Stack[-3]
0x9da: Call2 0x9f7

0x9db: Pop(1)
0x9dc: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dd: Stack[-2] = (bool) 1
0x9de: Return(); Pop(0)

0x9df: Stack[-2] = (bool) 0
0x9e0: Return(); Pop(0)

0x9e1: PushEmpty()
0x9e2: PushEmpty(bool, object)
0x9e3: Stack[-1] = Stack[-3]
0x9e4: Call2 0xa0c

0x9e5: Pop(1)
0x9e6: IF (Stack[-1] == 0) GOTO 0x9e9; Pop(1)

0x9e7: Stack[-2] = (bool) 1
0x9e8: Return(); Pop(0)

0x9e9: Stack[-2] = (bool) 0
0x9ea: Return(); Pop(0)

0x9eb: PushEmpty()
0x9ec: PushEmpty(int, string)
0x9ed: Stack[-1] = "oob1Eva1"
0x9ee: Call2 0x899

0x9ef: Pop(1)
0x9f0: Push((int) 0)
0x9f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f3: Stack[-2] = (bool) 1
0x9f4: Return(); Pop(0)

0x9f5: Stack[-2] = (bool) 0
0x9f6: Return(); Pop(0)

0x9f7: PushEmpty()
0x9f8: PushEmpty(bool)
0x9f9: Stack[-1] = (bool) 0
0x9fa: PushEmpty(int)
0x9fb: Call2 0x911

0x9fc: Pop(0)
0x9fd: Push((int) 12)
0x9fe: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa00: PushEmpty(int)
0xa01: Call2 0x911

0xa02: Pop(0)
0xa03: Push((int) 18)
0xa04: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa05: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa06: Stack[-1] = (bool) 1
0xa07: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa08: Stack[-2] = (bool) 1
0xa09: Return(); Pop(0)

0xa0a: Stack[-2] = (bool) 0
0xa0b: Return(); Pop(0)

0xa0c: PushEmpty()
0xa0d: PushEmpty(bool)
0xa0e: Stack[-1] = (bool) 0
0xa0f: PushEmpty(int)
0xa10: Call2 0x911

0xa11: Pop(0)
0xa12: Push((int) 0)
0xa13: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa14: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa15: PushEmpty(int)
0xa16: Call2 0x911

0xa17: Pop(0)
0xa18: Push((int) 12)
0xa19: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa1a: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1b: Stack[-1] = (bool) 1
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1d: Stack[-2] = (bool) 1
0xa1e: Return(); Pop(0)

0xa1f: Stack[-2] = (bool) 0
0xa20: Return(); Pop(0)

0xa21: PushEmpty(object, object)
0xa22: Push((int) 299)
0xa23: Push((int) 1)
0xa24: Push((int) 521614)
0xa25: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa26: Pop(3)
0xa27: PushEmpty(bool, object, int)
0xa28: Stack[-2] = Stack[-4]
0xa29: Stack[-1] = (int) 297
0xa2a: Call2 0xa3b

0xa2b: Pop(3)
0xa2c: Return(); Pop(2)

0xa2d: Stack[-1] = 0
0xa2e: PushEmpty(object, object)
0xa2f: @ GetDiaryRoot(Stack[-1])
0xa30: Pop(0)
0xa31: Pop(0); Push((bool) Stack[-1] == 0)
0xa32: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa33: Push("Can't retrieve diary root")
0xa34: @ Trace(Stack[-1])
0xa35: Pop(1)
0xa36: Stack[-3] = (bool) 0
0xa37: Return(); Pop(2)

0xa38: Stack[-3] = Stack[-1]
0xa39: Return(); Pop(2)

0xa3a: Stack[-1] = 0
0xa3b: PushEmpty(object, object, int, object, object, int)
0xa3c: PushEmpty(object)
0xa3d: Call2 0xa2e

0xa3e: Stack[-4] = Stack[-1]
0xa3f: Pop(1)
0xa40: @@ Find(Stack[-7], Stack[-2])
0xa41: Pop(0)
0xa42: Pop(0); Push((bool) Stack[-2] == 0)
0xa43: IF (Stack[-1] == 0) GOTO 0xa4a; Pop(1)

0xa44: Push("Can't find diary parent with id: ")
0xa45: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa46: @ Trace(Stack[-1])
0xa47: Pop(1)
0xa48: Stack[-9] = (bool) 0
0xa49: Return(); Pop(6)

0xa4a: @@ AddChild(Stack[-8])
0xa4b: Pop(0)
0xa4c: Push((int) 7)
0xa4d: @ SendWorldWndMessage(Stack[-1])
0xa4e: Pop(1)
0xa4f: @@ GetCategory(Stack[-1])
0xa50: Pop(0)
0xa51: @ SetDiarySection(Stack[-1])
0xa52: Pop(0)
0xa53: Stack[-9] = (bool) 0
0xa54: Return(); Pop(6)

0xa55: Stack[-2] = 0
0xa56: Stack[-3] = 0
0xa57: PushEmpty(object, object, object, object)
0xa58: @ GetMainOutdoorScene(Stack[-2])
0xa59: Pop(0)
0xa5a: Pop(0); Push((bool) Stack[-2] == 0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5c: Push("Can't find main outdoor scene")
0xa5d: @ Trace(Stack[-1])
0xa5e: Pop(1)
0xa5f: Stack[-1] = 0
0xa60: Stack[-5] = Stack[-1]
0xa61: Return(); Pop(4)

0xa62: @@ GetMap(Stack[-1])
0xa63: Pop(0)
0xa64: Stack[-5] = Stack[-1]
0xa65: Return(); Pop(4)

0xa66: Stack[-1] = 0
0xa67: Stack[-2] = 0
0xa68: PushEmpty(int, int)
0xa69: Push("branch")
0xa6a: @ GetVariable(Stack[-1], Stack[-2])
0xa6b: Pop(1)
0xa6c: Push((int) 0)
0xa6d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa6f: Stack[-3] = (int) 1
0xa70: Return(); Pop(2)

0xa71: GOTO 0xa77

0xa72: Push((int) 1)
0xa73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa75: Stack[-3] = (int) 2
0xa76: Return(); Pop(2)

0xa77: Stack[-3] = (int) 3
0xa78: Return(); Pop(2)

0xa79: PushEmpty(int, int)
0xa7a: Push("mt_eva")
0xa7b: @ GetVariable(Stack[-1], Stack[-2])
0xa7c: Pop(1)
0xa7d: Pop(0); Push((bool) Stack[-1] == 0)
0xa7e: IF (Stack[-1] == 0) GOTO 0xa89; Pop(1)

0xa7f: PushEmpty(int, object)
0xa80: Stack[-1] = Stack[-5]
0xa81: Push(-2, 1); TaskCall(4)
0xa82: Call2 0x2c3

0xa83: Pop(-2, 1); TaskReturn
0xa84: Pop(2)
0xa85: Push("mt_eva")
0xa86: Push((int) 1)
0xa87: @ SetVariable(Stack[-2], Stack[-1])
0xa88: Pop(2)
0xa89: PushEmpty(bool, int)
0xa8a: Stack[-1] = (int) 1
0xa8b: Call2 0x919

0xa8c: Pop(1)
0xa8d: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa8e: PushEmpty(int, object)
0xa8f: Stack[-1] = Stack[-5]
0xa90: Push(-2, 1); TaskCall(2)
0xa91: Call2 0xf2

0xa92: Pop(-2, 1); TaskReturn
0xa93: Pop(2)
0xa94: Return(); Pop(2)

0xa95: PushEmpty(bool, int)
0xa96: Stack[-1] = (int) 2
0xa97: Call2 0x919

0xa98: Pop(1)
0xa99: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9a: PushEmpty(int, object)
0xa9b: Stack[-1] = Stack[-5]
0xa9c: Push(-2, 1); TaskCall(0)
0xa9d: Call2 0x0

0xa9e: Pop(-2, 1); TaskReturn
0xa9f: Pop(2)
0xaa0: Return(); Pop(2)

0xaa1: PushEmpty(bool, int)
0xaa2: Stack[-1] = (int) 9
0xaa3: Call2 0x919

0xaa4: Pop(1)
0xaa5: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaa6: PushEmpty(int, object)
0xaa7: Stack[-1] = Stack[-5]
0xaa8: Push(-2, 1); TaskCall(6)
0xaa9: Call2 0x3bc

0xaaa: Pop(-2, 1); TaskReturn
0xaab: Pop(2)
0xaac: Return(); Pop(2)

0xaad: PushEmpty(int, object)
0xaae: Stack[-1] = Stack[-5]
0xaaf: Push(-2, 1); TaskCall(8)
0xab0: Call2 0x55d

0xab1: Pop(-2, 1); TaskReturn
0xab2: Pop(2)
0xab3: Return(); Pop(2)

