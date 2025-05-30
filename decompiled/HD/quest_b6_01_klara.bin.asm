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
	Smile
	Neutral
	Sly
	b6q01KlaraLaska
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
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	oob6Klara1
	b6q01
	b6q01KlaraGotoTermitnik2
	pt_map_termitnik2
	AddMark
	quest_b6_01
	remove_klara
	init_termitnik
	oob6Klara2
	oob6Klara3
	termitnik2@door1
	ShowMap
	b6q01KlaraVisit
	fail
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
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	SetVariable (2 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x292
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdc Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_32 Op = 0x2a2 Vars = ()
		EVENT_26 Op = 0x2ab Vars = (string)
		EVENT_6 Op = 0x2bf Vars = ()
		EVENT_5 Op = 0x2cc Vars = ()
		EVENT_7 Op = 0x315 Vars = (int)
		EVENT_45 Op = 0x357 Vars = (bool)
		EVENT_0 Op = 0x363 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3ec

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x66c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x66a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x66e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x670

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x659

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
0x31: Call2 0x502

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x443

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
0x48: Call2 0x431

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
0x56: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0x5a4

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Fear"
0x5e: Call2 0xc6

0x5f: Pop(1)
0x60: Push((int) 520559)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: PushEmpty(bool)
0x66: Stack[-1] = (bool) 0
0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0x5b4

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x5c0

0x6f: Pop(1)
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Stack[-1] = (bool) 1
0x72: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x73: Push((int) 520560)
0x74: Push((int) 21763)
0x75: Push((int) 21762)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x5b4

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x5cc

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 1
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: Push((int) 520583)
0x88: Push((int) 21789)
0x89: Push((int) 21788)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: PushEmpty(bool)
0x8d: Stack[-1] = (bool) 0
0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x5b4

0x91: Pop(1)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x5d8

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: Push((int) 520588)
0x9c: Push((int) 21794)
0x9d: Push((int) 21793)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 520593)
0xa1: Push((int) -1)
0xa2: Push((int) 21798)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: GOTO 0xa8

0xa6: Return(); Pop(0)

0xa7: GOTO 0x55

0xa8: PushEmpty(bool)
0xa9: Call2 0x672

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xac: @ lshWaitForAnimEnd()
0xad: Pop(0)
0xae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: GOTO 0xb6

0xb1: PushEmpty(string)
0xb2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb3: Call2 0x4cd

0xb4: Pop(1)
0xb5: GOTO 0xac

0xb6: GOTO 0xc5

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: @ WaitForAnimEnd()
0xbc: Pop(0)
0xbd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: GOTO 0xc5

0xc0: Push("all")
0xc1: Push("idle")
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: GOTO 0xbb

0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: PushEmpty(bool)
0xc8: Call2 0x672

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: Return(); Pop(0)

0xcd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Return(); Pop(0)

0xd0: PushEmpty(string, bool)
0xd1: Stack[-2] = Stack[-3]
0xd2: Push("")
0xd3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd5: Stack[-1] = (bool) 0
0xd6: GOTO 0xd8

0xd7: Stack[-1] = (bool) 1
0xd8: Call2 0x4dd

0xd9: Pop(2)
0xda: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Push((int) 1)
0xde: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0xdf: PushEmpty()
0xe0: Call2 0x4fb

0xe1: Pop(0)
0xe2: Push((int) 21762)
0xe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(object, object)
0xe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8: Call2 0x55a

0xe9: Pop(2)
0xea: Push((int) 21883)
0xeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x560

0xf1: Pop(2)
0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x58d

0xf6: Pop(2)
0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x594

0xfb: Pop(2)
0xfc: Push((int) 21780)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x5aa

0x103: Pop(2)
0x104: Push((int) 21788)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x581

0x10b: Pop(2)
0x10c: Push((int) 21793)
0x10d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: PushEmpty(object, object)
0x110: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x111: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x112: Call2 0x587

0x113: Pop(2)
0x114: Push((int) 21761)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x5a4

0x11b: Pop(2)
0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Fear"
0x11e: Call2 0xc6

0x11f: Pop(1)
0x120: Push((int) 520559)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: PushEmpty(bool)
0x126: Stack[-1] = (bool) 0
0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x5b4

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x5c0

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Stack[-1] = (bool) 1
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: Push((int) 520560)
0x134: Push((int) 21763)
0x135: Push((int) 21762)
0x136: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: PushEmpty(bool)
0x139: Stack[-1] = (bool) 0
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call2 0x5b4

0x13d: Pop(1)
0x13e: Pop(1); Push((bool) Stack[-1] == 0)
0x13f: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x5cc

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[-1] = (bool) 1
0x146: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x147: Push((int) 520583)
0x148: Push((int) 21789)
0x149: Push((int) 21788)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: PushEmpty(bool, object)
0x14f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x150: Call2 0x5b4

0x151: Pop(1)
0x152: Pop(1); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call2 0x5d8

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = (bool) 1
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: Push((int) 520588)
0x15c: Push((int) 21794)
0x15d: Push((int) 21793)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 520593)
0x161: Push((int) -1)
0x162: Push((int) 21798)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 21794)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Fear"
0x16b: Call2 0xc6

0x16c: Pop(1)
0x16d: Push((int) 520589)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 520590)
0x173: Push((int) 21796)
0x174: Push((int) 21795)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 21796)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Fear"
0x17d: Call2 0xc6

0x17e: Pop(1)
0x17f: Push((int) 520591)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 520592)
0x185: Push((int) -1)
0x186: Push((int) 21797)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 21789)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Smile"
0x18f: Call2 0xc6

0x190: Pop(1)
0x191: Push((int) 520584)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 520585)
0x197: Push((int) 21791)
0x198: Push((int) 21790)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 21791)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Smile"
0x1a1: Call2 0xc6

0x1a2: Pop(1)
0x1a3: Push((int) 520586)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 520587)
0x1a9: Push((int) -1)
0x1aa: Push((int) 21792)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 528358)
0x1ae: Push((int) 29730)
0x1af: Push((int) 29729)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 29730)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Smile"
0x1b8: Call2 0xc6

0x1b9: Pop(1)
0x1ba: Push((int) 528359)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 528360)
0x1c0: Push((int) -1)
0x1c1: Push((int) 29731)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 21763)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Fear"
0x1ca: Call2 0xc6

0x1cb: Pop(1)
0x1cc: Push((int) 520561)
0x1cd: @@ SetMessage(Stack[-1])
0x1ce: Pop(1)
0x1cf: @@ ClearReplies()
0x1d0: Pop(0)
0x1d1: Push((int) 520562)
0x1d2: Push((int) 21765)
0x1d3: Push((int) 21764)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Push((int) 520582)
0x1d7: Push((int) 21769)
0x1d8: Push((int) 21787)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 21765)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0xc6

0x1e2: Pop(1)
0x1e3: Push((int) 520563)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 520564)
0x1e9: Push((int) 21767)
0x1ea: Push((int) 21766)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 21767)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call2 0xc6

0x1f4: Pop(1)
0x1f5: Push((int) 520565)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 520566)
0x1fb: Push((int) 21769)
0x1fc: Push((int) 21768)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 528361)
0x200: Push((int) 21769)
0x201: Push((int) 29732)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 21769)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Sly"
0x20a: Call2 0xc6

0x20b: Pop(1)
0x20c: Push((int) 520567)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 520568)
0x212: Push((int) 21771)
0x213: Push((int) 21770)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 520581)
0x217: Push((int) 21771)
0x218: Push((int) 21785)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 21771)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call2 0xc6

0x222: Pop(1)
0x223: Push((int) 520569)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 520570)
0x229: Push((int) 21773)
0x22a: Push((int) 21772)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 520580)
0x22e: Push((int) 21773)
0x22f: Push((int) 21783)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 21773)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call2 0xc6

0x239: Pop(1)
0x23a: Push((int) 520571)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 520572)
0x240: Push((int) 21775)
0x241: Push((int) 21774)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 520579)
0x245: Push((int) 21775)
0x246: Push((int) 21781)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 21775)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral"
0x24f: Call2 0xc6

0x250: Pop(1)
0x251: Push((int) 520573)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 520574)
0x257: Push((int) 21777)
0x258: Push((int) 21776)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 21777)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Smile"
0x261: Call2 0xc6

0x262: Pop(1)
0x263: Push((int) 520575)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: Push((int) 520576)
0x269: Push((int) 21779)
0x26a: Push((int) 21778)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Push((int) 520578)
0x26e: Push((int) -1)
0x26f: Push((int) 21780)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 21779)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Smile"
0x278: Call2 0xc6

0x279: Pop(1)
0x27a: Push((int) 520577)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 520675)
0x280: Push((int) -1)
0x281: Push((int) 21883)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x286: PushEmpty(bool)
0x287: Call2 0x672

0x288: Pop(0)
0x289: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28a: @ lshStopAnimation()
0x28b: Pop(0)
0x28c: GOTO 0x28f

0x28d: @ StopAnimation()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: GOTO 0xdd

0x291: Return(); Pop(0)

0x292: Push("b6q01KlaraLaska")
0x293: Push((int) 1)
0x294: @ SetVariable(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: PushEmpty()
0x297: Call2 0x2a7

0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty()
0x29b: PushEmpty(int, object)
0x29c: Stack[-1] = Stack[-3]
0x29d: Push(-2, 1); TaskCall(0)
0x29e: Call2 0x0

0x29f: Pop(-2, 1); TaskReturn
0x2a0: Pop(2)
0x2a1: Return(); Pop(0)

0x2a2: Push("b6q01KlaraLaska")
0x2a3: Push((int) 0)
0x2a4: @ SetVariable(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: Call2 0x2d0

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, bool)
0x2ac: Push("cleanup")
0x2ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2af: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x2b0: @ IsLoaded(Stack[-1])
0x2b1: Pop(0)
0x2b2: Pop(0); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: PushEmpty(object)
0x2b5: Call2 0x502

0x2b6: Pop(0)
0x2b7: @ RemoveActor(Stack[-1])
0x2b8: Pop(1)
0x2b9: GOTO 0x2be

0x2ba: Push("restore")
0x2bb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2be: Return(); Pop(2)

0x2bf: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c1: PushEmpty(object)
0x2c2: Call2 0x502

0x2c3: Pop(0)
0x2c4: @ RemoveActor(Stack[-1])
0x2c5: Pop(1)
0x2c6: @ Hold()
0x2c7: Pop(0)
0x2c8: PushEmpty()
0x2c9: Call2 0x33b

0x2ca: Pop(0)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: Call2 0x34a

0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: PushEmpty(bool)
0x2d1: Call2 0x3e7

0x2d2: Pop(0)
0x2d3: Pop(1); Push((bool) Stack[-1] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d5: @ Hold()
0x2d6: Pop(0)
0x2d7: @ GetDirection(Stack[-0])
0x2d8: Pop(0)
0x2d9: PushEmpty()
0x2da: Call2 0x380

0x2db: Pop(0)
0x2dc: GOTO 0x2d9

0x2dd: Return(); Pop(0)

0x2de: PushEmpty(object, object)
0x2df: Push("player")
0x2e0: @ FindActor(Stack[-2], Stack[-1])
0x2e1: Pop(1)
0x2e2: Pop(0); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e4: Stack[-3] = (bool) 0
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[-3]
0x2e8: Call2 0x3de

0x2e9: Stack[-5] = Stack[-2]
0x2ea: Pop(2)
0x2eb: Return(); Pop(2)

0x2ec: Stack[-1] = 0
0x2ed: Push(CvectorIndex(Stack[-0], 0))
0x2ee: Push(CvectorIndex(Stack[-0], 2))
0x2ef: @ RotateAsync(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(object, bool, object, bool)
0x2f3: Push("player")
0x2f4: @ FindActor(Stack[-3], Stack[-1])
0x2f5: Pop(1)
0x2f6: Pop(0); Push((bool) Stack[-2] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-5] = (bool) 0
0x2f9: Return(); Pop(4)

0x2fa: PushEmpty(float, object)
0x2fb: Stack[-1] = Stack[-4]
0x2fc: Call2 0x3cc

0x2fd: Pop(1)
0x2fe: Push((float)90000.0)
0x2ff: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x301: Stack[-5] = (bool) 0
0x302: Return(); Pop(4)

0x303: @ CanSee(Stack[-1], Stack[-2])
0x304: Pop(0)
0x305: Stack[-5] = Stack[-1]
0x306: Return(); Pop(4)

0x307: Stack[-2] = 0
0x308: PushEmpty(float, float)
0x309: Push((int) 8)
0x30a: Push((int) 16)
0x30b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: Push((int) 10)
0x30e: @ SetTimer(Stack[-1], Stack[-2])
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: Push((int) 10)
0x312: @ KillTimer(Stack[-1])
0x313: Pop(1)
0x314: Return(); Pop(0)

0x315: PushEmpty()
0x316: Push((int) 10)
0x317: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x319: PushEmpty()
0x31a: Call2 0x311

0x31b: Pop(0)
0x31c: PushEmpty(bool)
0x31d: Stack[-1] = (bool) 0
0x31e: PushEmpty(bool)
0x31f: Call2 0x3e7

0x320: Pop(0)
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(bool)
0x323: Call2 0x2f2

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[-1] = (bool) 1
0x327: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x328: PushEmpty(bool)
0x329: Call2 0x2de

0x32a: Pop(0)
0x32b: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32c: PushEmpty(bool, object)
0x32d: PushEmpty(object)
0x32e: Call2 0x502

0x32f: Stack[-2] = Stack[-1]
0x330: Pop(1)
0x331: Call2 0x47d

0x332: Pop(2)
0x333: GOTO 0x33a

0x334: PushEmpty()
0x335: Call2 0x2ed

0x336: Pop(0)
0x337: PushEmpty()
0x338: Call2 0x308

0x339: Pop(0)
0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: Call2 0x3c7

0x33d: Pop(0)
0x33e: PushEmpty()
0x33f: Call2 0x311

0x340: Pop(0)
0x341: @ lshStopSpeech()
0x342: Pop(0)
0x343: @ lshStopAnimation()
0x344: Pop(0)
0x345: @ StopAsync()
0x346: Pop(0)
0x347: @ Hold()
0x348: Pop(0)
0x349: Return(); Pop(0)

0x34a: @ StopGroup0()
0x34b: Pop(0)
0x34c: PushEmpty()
0x34d: Call2 0x311

0x34e: Pop(0)
0x34f: PushEmpty(string)
0x350: Stack[-1] = "Neutral"
0x351: Call2 0x4cd

0x352: Pop(1)
0x353: PushEmpty()
0x354: Call2 0x308

0x355: Pop(0)
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: Push(Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35a: PushEmpty()
0x35b: Call2 0x308

0x35c: Pop(0)
0x35d: GOTO 0x362

0x35e: PushEmpty(string)
0x35f: Stack[-1] = "Neutral"
0x360: Call2 0x4cd

0x361: Pop(1)
0x362: Return(); Pop(0)

0x363: PushEmpty(bool, bool)
0x364: @ IsOverrideActive(Stack[-1])
0x365: Pop(0)
0x366: Pop(0); Push((bool) Stack[-1] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x368: EventDisable(0)
0x369: PushEmpty()
0x36a: Call2 0x3c7

0x36b: Pop(0)
0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[-5]
0x36e: Call2 0x3de

0x36f: Pop(2)
0x370: EventEnable(0)
0x371: PushEmpty(object)
0x372: Stack[-1] = Stack[-4]
0x373: Call2 0x29a

0x374: Pop(1)
0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call2 0x4cd

0x378: Pop(1)
0x379: PushEmpty()
0x37a: Call2 0x311

0x37b: Pop(0)
0x37c: PushEmpty()
0x37d: Call2 0x308

0x37e: Pop(0)
0x37f: Return(); Pop(2)

0x380: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x381: @ WaitForAnimEnd()
0x382: Pop(0)
0x383: PushEmpty(bool)
0x384: Call2 0x3e7

0x385: Pop(0)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(12)

0x389: PushEmpty(int)
0x38a: Call2 0x549

0x38b: Stack[-7] = Stack[-1]
0x38c: Pop(1)
0x38d: Stack[-5] = (int) 0
0x38e: PushEmpty(bool)
0x38f: Stack[-1] = (bool) 0
0x390: Push((int) 5)
0x391: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x393: PushEmpty(bool)
0x394: Call2 0x3e7

0x395: Pop(0)
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-1] = (bool) 1
0x398: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x399: Pop(0); Push((bool) Stack[-6] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39b: Push((int) 3)
0x39c: @ Sleep(Stack[-1], Stack[-5])
0x39d: Pop(1)
0x39e: Pop(0); Push((bool) Stack[-4] == 0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: GOTO 0x3c2

0x3a1: GOTO 0x3b7

0x3a2: @ irand(Stack[-3], Stack[-6])
0x3a3: Pop(0)
0x3a4: Push((int) 5)
0x3a5: @ irand(Stack[-3], Stack[-1])
0x3a6: Pop(1)
0x3a7: Push((int) 0)
0x3a8: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Stack[-3] = (int) 0
0x3ab: Push("all")
0x3ac: PushEmpty(string, int)
0x3ad: Stack[-1] = Stack[-6]
0x3ae: Call2 0x542

0x3af: Pop(1)
0x3b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b1: Pop(2)
0x3b2: @ WaitForAnimEnd(Stack[-1])
0x3b3: Pop(0)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b6: GOTO 0x3c2

0x3b7: PushEmpty(bool)
0x3b8: Call2 0x3c5

0x3b9: Pop(0)
0x3ba: Pop(1); Push((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: GOTO 0x3c2

0x3bd: @ ResetAAS()
0x3be: Pop(0)
0x3bf: Push((int) 1)
0x3c0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3c1: GOTO 0x38e

0x3c2: @ ResetAAS()
0x3c3: Pop(0)
0x3c4: Return(); Pop(12)

0x3c5: Stack[-1] = (bool) 1
0x3c6: Return(); Pop(0)

0x3c7: @ StopAnimation()
0x3c8: Pop(0)
0x3c9: @ StopGroup0()
0x3ca: Pop(0)
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3cd: @ GetPosition(Stack[-3])
0x3ce: Pop(0)
0x3cf: @@ GetPosition(Stack[-2])
0x3d0: Pop(0)
0x3d1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3d2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3d3: Return(); Pop(6)

0x3d4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3d5: @ GetPosition(Stack[-3])
0x3d6: Pop(0)
0x3d7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3d8: Push(CvectorIndex(Stack[-2], 0))
0x3d9: Push(CvectorIndex(Stack[-3], 2))
0x3da: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3db: Pop(2)
0x3dc: Stack[-8] = Stack[-1]
0x3dd: Return(); Pop(6)

0x3de: PushEmpty(cvector, cvector)
0x3df: @@ GetPosition(Stack[-1])
0x3e0: Pop(0)
0x3e1: PushEmpty(bool, cvector)
0x3e2: Stack[-1] = Stack[-3]
0x3e3: Call2 0x3d4

0x3e4: Stack[-6] = Stack[-2]
0x3e5: Pop(2)
0x3e6: Return(); Pop(2)

0x3e7: PushEmpty(bool, bool)
0x3e8: @ IsLoaded(Stack[-1])
0x3e9: Pop(0)
0x3ea: Stack[-3] = Stack[-1]
0x3eb: Return(); Pop(2)

0x3ec: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3ed: @@ GetPosition(Stack[-8])
0x3ee: Pop(0)
0x3ef: @@ GetEyesHeight(Stack[-9])
0x3f0: Pop(0)
0x3f1: Push(CvectorIndex(Stack[-8], 1))
0x3f2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3f4: @ GetPosition(Stack[-7])
0x3f5: Pop(0)
0x3f6: @ GetEyesHeight(Stack[-9])
0x3f7: Pop(0)
0x3f8: Push(CvectorIndex(Stack[-7], 1))
0x3f9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3fa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3fb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3fc: Push(CvectorIndex(Stack[-6], 1))
0x3fd: Stack[-1] = (int) 0
0x3fe: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3ff: Pop(0); Push(Stack[-6] | Stack[-6]);
0x400: Pop(1); Push(Sqrt(Stack[-1]))
0x401: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x402: Stack[-5] = -Stack[-6]; Pop(0);
0x403: Pop(0); Push(Stack[-6] * Stack[-19]);
0x404: PushEmpty(cvector, cvector)
0x405: Push(CVector(0.0, 1.0, 0.0))
0x406: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x407: Call2 0x508

0x408: Pop(1)
0x409: Push((int) 25)
0x40a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40c: Push(CVector(0.0, 10.0, 0.0))
0x40d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x40e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x40f: @ IsOverrideActive(Stack[-2])
0x410: Pop(0)
0x411: Push(Stack[-2])
0x412: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x413: Stack[-21] = (bool) 0
0x414: Return(); Pop(18)

0x415: @ StopWorld()
0x416: Pop(0)
0x417: Push((bool) 1)
0x418: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x419: Pop(1)
0x41a: Push(CvectorIndex(Stack[-4], 0))
0x41b: Push(CvectorIndex(Stack[-5], 2))
0x41c: @ Rotate(Stack[-2], Stack[-1])
0x41d: Pop(2)
0x41e: PushEmpty(bool)
0x41f: Call2 0x672

0x420: Pop(0)
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: GOTO 0x42b

0x423: Push("head")
0x424: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x425: Pop(1)
0x426: Push(Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x428: Push("head")
0x429: @ LookAsyncCamera(Stack[-1])
0x42a: Pop(1)
0x42b: @ CameraWaitForPlayFinish()
0x42c: Pop(0)
0x42d: @ ResumeWorld()
0x42e: Pop(0)
0x42f: Stack[-21] = (bool) 1
0x430: Return(); Pop(18)

0x431: PushEmpty(bool, bool)
0x432: Push((bool) 1)
0x433: @ CameraSwitchToNormal(Stack[-1])
0x434: Pop(1)
0x435: PushEmpty(bool)
0x436: Call2 0x672

0x437: Pop(0)
0x438: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x439: GOTO 0x442

0x43a: Push("head")
0x43b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x43c: Pop(1)
0x43d: Push(Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43f: Push("head")
0x440: @ UnlookAsync(Stack[-1])
0x441: Pop(1)
0x442: Return(); Pop(2)

0x443: PushEmpty(int, int, int, int)
0x444: Push("voice_common")
0x445: @ GetVariable(Stack[-1], Stack[-3])
0x446: Pop(1)
0x447: Push(Stack[-2])
0x448: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x449: PushEmpty(bool, object)
0x44a: Stack[-1] = Stack[-7]
0x44b: Call2 0x47d

0x44c: Pop(1)
0x44d: Pop(1); Push((bool) Stack[-1] == 0)
0x44e: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x44f: PushEmpty(bool, object)
0x450: Stack[-1] = Stack[-7]
0x451: Call2 0x4a2

0x452: Pop(1)
0x453: Pop(1); Push((bool) Stack[-1] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-6] = (bool) 0
0x456: Return(); Pop(4)

0x457: Push((int) 2)
0x458: @ irand(Stack[-2], Stack[-1])
0x459: Pop(1)
0x45a: Push(Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45c: Push("voice_common")
0x45d: Push((int) 1)
0x45e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x45f: Push((int) 3)
0x460: Pop(2); Push(Stack[-2] % Stack[-1]);
0x461: @ SetVariable(Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: GOTO 0x468

0x464: Push("voice_common")
0x465: Push((int) 0)
0x466: @ SetVariable(Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: GOTO 0x47b

0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[-7]
0x46b: Call2 0x4a2

0x46c: Pop(1)
0x46d: Pop(1); Push((bool) Stack[-1] == 0)
0x46e: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x46f: PushEmpty(bool, object)
0x470: Stack[-1] = Stack[-7]
0x471: Call2 0x47d

0x472: Pop(1)
0x473: Pop(1); Push((bool) Stack[-1] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-6] = (bool) 0
0x476: Return(); Pop(4)

0x477: Push("voice_common")
0x478: Push((int) 1)
0x479: @ SetVariable(Stack[-2], Stack[-1])
0x47a: Pop(2)
0x47b: Stack[-6] = (bool) 1
0x47c: Return(); Pop(4)

0x47d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x47e: Stack[-5] = "c"
0x47f: Stack[-4] = (int) 0
0x480: Push((int) 1)
0x481: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x482: Push((int) 1)
0x483: Pop(1); Push(Stack[-5] + Stack[-1]);
0x484: Pop(1); Push(Stack[-6] + Stack[-1]);
0x485: @@ HasProperty(Stack[-1], Stack[-4])
0x486: Pop(1)
0x487: Pop(0); Push((bool) Stack[-3] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x489: GOTO 0x48d

0x48a: Push((int) 1)
0x48b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48c: GOTO 0x480

0x48d: Pop(0); Push((bool) Stack[-4] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-12] = (bool) 0
0x490: Return(); Pop(10)

0x491: Stack[-2] = (int) 0
0x492: Push((int) 1)
0x493: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x495: @ irand(Stack[-2], Stack[-4])
0x496: Pop(0)
0x497: Push((int) 1)
0x498: Pop(1); Push(Stack[-3] + Stack[-1]);
0x499: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49a: @@ GetProperty(Stack[-1], Stack[-2])
0x49b: Pop(1)
0x49c: PushEmpty(bool, string)
0x49d: Stack[-1] = Stack[-3]
0x49e: Call2 0x4ec

0x49f: Stack[-14] = Stack[-2]
0x4a0: Pop(2)
0x4a1: Return(); Pop(10)

0x4a2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4a3: Push("d")
0x4a4: PushEmpty(int)
0x4a5: Call2 0x539

0x4a6: Pop(0)
0x4a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a8: Push("m")
0x4a9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4aa: Stack[-4] = (int) 0
0x4ab: Push((int) 1)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4ad: Push((int) 1)
0x4ae: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b0: @@ HasProperty(Stack[-1], Stack[-4])
0x4b1: Pop(1)
0x4b2: Pop(0); Push((bool) Stack[-3] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: GOTO 0x4b8

0x4b5: Push((int) 1)
0x4b6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b7: GOTO 0x4ab

0x4b8: Pop(0); Push((bool) Stack[-4] == 0)
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-12] = (bool) 0
0x4bb: Return(); Pop(10)

0x4bc: Stack[-2] = (int) 0
0x4bd: Push((int) 1)
0x4be: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: @ irand(Stack[-2], Stack[-4])
0x4c1: Pop(0)
0x4c2: Push((int) 1)
0x4c3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4c4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4c5: @@ GetProperty(Stack[-1], Stack[-2])
0x4c6: Pop(1)
0x4c7: PushEmpty(bool, string)
0x4c8: Stack[-1] = Stack[-3]
0x4c9: Call2 0x4ec

0x4ca: Stack[-14] = Stack[-2]
0x4cb: Pop(2)
0x4cc: Return(); Pop(10)

0x4cd: PushEmpty(bool, float, float, bool, float, float)
0x4ce: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4cf: Pop(0)
0x4d0: Push(Stack[-3])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d2: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4d3: Pop(0)
0x4d4: Push((bool) 0)
0x4d5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(1)
0x4d7: GOTO 0x4dc

0x4d8: Push("Can't find lsh animation : ")
0x4d9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4da: @ Trace(Stack[-1])
0x4db: Pop(1)
0x4dc: Return(); Pop(6)

0x4dd: PushEmpty(bool, float, float, bool, float, float)
0x4de: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4df: Pop(0)
0x4e0: Push(Stack[-3])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e2: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4e3: Pop(0)
0x4e4: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4e5: Pop(0)
0x4e6: GOTO 0x4eb

0x4e7: Push("Can't find lsh animation : ")
0x4e8: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4e9: @ Trace(Stack[-1])
0x4ea: Pop(1)
0x4eb: Return(); Pop(6)

0x4ec: PushEmpty(bool, bool)
0x4ed: PushEmpty(bool)
0x4ee: Call2 0x672

0x4ef: Pop(0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f1: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4f2: Pop(0)
0x4f3: Push(Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f5: @ lshPlaySpeech(Stack[-3])
0x4f6: Pop(0)
0x4f7: Stack[-4] = (bool) 1
0x4f8: Return(); Pop(2)

0x4f9: Stack[-4] = (bool) 0
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(bool)
0x4fc: Call2 0x672

0x4fd: Pop(0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: @ lshStopSpeech()
0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: PushEmpty(object, object)
0x503: @ self(Stack[-1])
0x504: Pop(0)
0x505: Stack[-3] = Stack[-1]
0x506: Return(); Pop(2)

0x507: Stack[-1] = 0
0x508: PushEmpty(float, float)
0x509: Pop(0); Push(Stack[-3] | Stack[-3]);
0x50a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x50b: Push((float)0.0)
0x50c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x50f: Return(); Pop(2)

0x510: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x511: Return(); Pop(2)

0x512: PushEmpty(int, int)
0x513: @ GetVariable(Stack[-3], Stack[-1])
0x514: Pop(0)
0x515: Stack[-4] = Stack[-1]
0x516: Return(); Pop(2)

0x517: PushEmpty(object, object)
0x518: @ FindActor(Stack[-1], Stack[-4])
0x519: Pop(0)
0x51a: Pop(0); Push((bool) Stack[-1] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x51c: Push("Door ")
0x51d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x51e: Push(" not found")
0x51f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x520: @ Trace(Stack[-1])
0x521: Pop(1)
0x522: GOTO 0x526

0x523: Push("locked")
0x524: @@ SetProperty(Stack[-1], Stack[-4])
0x525: Pop(1)
0x526: Return(); Pop(2)

0x527: Stack[-1] = 0
0x528: PushEmpty(object, object)
0x529: @ FindActor(Stack[-1], Stack[-4])
0x52a: Pop(0)
0x52b: Pop(0); Push((bool) Stack[-1] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52d: Stack[-5] = (bool) 0
0x52e: Return(); Pop(2)

0x52f: @ Trigger(Stack[-1], Stack[-3])
0x530: Pop(0)
0x531: Stack[-5] = (bool) 1
0x532: Return(); Pop(2)

0x533: Stack[-1] = 0
0x534: PushEmpty(float, float)
0x535: @ GetGameTime(Stack[-1])
0x536: Pop(0)
0x537: Stack[-3] = Stack[-1]
0x538: Return(); Pop(2)

0x539: PushEmpty(float, float)
0x53a: @ GetGameTime(Stack[-1])
0x53b: Pop(0)
0x53c: Push((int) 1)
0x53d: PushEmpty(int)
0x53e: Push((int) 24)
0x53f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x540: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x541: Return(); Pop(2)

0x542: PushEmpty(string, string)
0x543: Stack[-1] = "idle"
0x544: Push(Stack[-3])
0x545: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x546: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x547: Stack[-4] = Stack[-1]
0x548: Return(); Pop(2)

0x549: PushEmpty(int, bool, int, bool)
0x54a: Stack[-2] = (int) 0
0x54b: Push("all")
0x54c: PushEmpty(string, int)
0x54d: Stack[-1] = Stack[-5]
0x54e: Call2 0x542

0x54f: Pop(1)
0x550: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x551: Pop(2)
0x552: Pop(0); Push((bool) Stack[-1] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x554: GOTO 0x558

0x555: Push((int) 1)
0x556: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x557: GOTO 0x54b

0x558: Stack[-5] = Stack[-2]
0x559: Return(); Pop(4)

0x55a: PushEmpty()
0x55b: Push("oob6Klara1")
0x55c: Push((int) 1)
0x55d: @ SetVariable(Stack[-2], Stack[-1])
0x55e: Pop(2)
0x55f: Return(); Pop(0)

0x560: PushEmpty(object, object)
0x561: Push("b6q01")
0x562: Push((int) 2)
0x563: @ SetVariable(Stack[-2], Stack[-1])
0x564: Pop(2)
0x565: PushEmpty(object)
0x566: Call2 0x627

0x567: Stack[-2] = Stack[-1]
0x568: Pop(1)
0x569: Push("b6q01KlaraGotoTermitnik2")
0x56a: Push("pt_map_termitnik2")
0x56b: Push((int) 1)
0x56c: Push((int) 525668)
0x56d: PushEmpty(float)
0x56e: Call2 0x534

0x56f: Pop(0)
0x570: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(5)
0x572: PushEmpty()
0x573: Call2 0x5f1

0x574: Pop(0)
0x575: PushEmpty(bool, string, string)
0x576: Stack[-2] = "quest_b6_01"
0x577: Stack[-1] = "remove_klara"
0x578: Call2 0x528

0x579: Pop(3)
0x57a: PushEmpty(bool, string, string)
0x57b: Stack[-2] = "quest_b6_01"
0x57c: Stack[-1] = "init_termitnik"
0x57d: Call2 0x528

0x57e: Pop(3)
0x57f: Return(); Pop(2)

0x580: Stack[-1] = 0
0x581: PushEmpty()
0x582: Push("oob6Klara2")
0x583: Push((int) 1)
0x584: @ SetVariable(Stack[-2], Stack[-1])
0x585: Pop(2)
0x586: Return(); Pop(0)

0x587: PushEmpty()
0x588: Push("oob6Klara3")
0x589: Push((int) 1)
0x58a: @ SetVariable(Stack[-2], Stack[-1])
0x58b: Pop(2)
0x58c: Return(); Pop(0)

0x58d: PushEmpty()
0x58e: PushEmpty(string, bool)
0x58f: Stack[-2] = "termitnik2@door1"
0x590: Stack[-1] = (bool) 0
0x591: Call2 0x517

0x592: Pop(2)
0x593: Return(); Pop(0)

0x594: PushEmpty()
0x595: PushEmpty(object, string, float)
0x596: PushEmpty(object)
0x597: Call2 0x627

0x598: Stack[-4] = Stack[-1]
0x599: Pop(1)
0x59a: Stack[-2] = "pt_map_termitnik2"
0x59b: Stack[-1] = (int) 2
0x59c: Call2 0x638

0x59d: Pop(3)
0x59e: PushEmpty(object)
0x59f: Call2 0x627

0x5a0: Pop(0)
0x5a1: @@ ShowMap(Stack[-1])
0x5a2: Pop(1)
0x5a3: Return(); Pop(0)

0x5a4: PushEmpty()
0x5a5: Push("b6q01KlaraVisit")
0x5a6: Push((int) 1)
0x5a7: @ SetVariable(Stack[-2], Stack[-1])
0x5a8: Pop(2)
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: PushEmpty()
0x5ac: Call2 0x5e4

0x5ad: Pop(0)
0x5ae: PushEmpty(bool, string, string)
0x5af: Stack[-2] = "quest_b6_01"
0x5b0: Stack[-1] = "fail"
0x5b1: Call2 0x528

0x5b2: Pop(3)
0x5b3: Return(); Pop(0)

0x5b4: PushEmpty()
0x5b5: PushEmpty(int, string)
0x5b6: Stack[-1] = "oob6Klara1"
0x5b7: Call2 0x512

0x5b8: Pop(1)
0x5b9: Push((int) 0)
0x5ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bc: Stack[-2] = (bool) 1
0x5bd: Return(); Pop(0)

0x5be: Stack[-2] = (bool) 0
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: PushEmpty(int, string)
0x5c2: Stack[-1] = "b6q01"
0x5c3: Call2 0x512

0x5c4: Pop(1)
0x5c5: Push((int) 1)
0x5c6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c8: Stack[-2] = (bool) 1
0x5c9: Return(); Pop(0)

0x5ca: Stack[-2] = (bool) 0
0x5cb: Return(); Pop(0)

0x5cc: PushEmpty()
0x5cd: PushEmpty(int, string)
0x5ce: Stack[-1] = "oob6Klara2"
0x5cf: Call2 0x512

0x5d0: Pop(1)
0x5d1: Push((int) 0)
0x5d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-2] = (bool) 1
0x5d5: Return(); Pop(0)

0x5d6: Stack[-2] = (bool) 0
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: PushEmpty(int, string)
0x5da: Stack[-1] = "oob6Klara3"
0x5db: Call2 0x512

0x5dc: Pop(1)
0x5dd: Push((int) 0)
0x5de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-2] = (bool) 1
0x5e1: Return(); Pop(0)

0x5e2: Stack[-2] = (bool) 0
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(object, object)
0x5e5: Push((int) 783)
0x5e6: Push((int) 1)
0x5e7: Push((int) 542148)
0x5e8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: PushEmpty(bool, object, int)
0x5eb: Stack[-2] = Stack[-4]
0x5ec: Stack[-1] = (int) 265
0x5ed: Call2 0x60b

0x5ee: Pop(3)
0x5ef: Return(); Pop(2)

0x5f0: Stack[-1] = 0
0x5f1: PushEmpty(object, object)
0x5f2: Push((int) 362)
0x5f3: Push((int) 1)
0x5f4: Push((int) 525662)
0x5f5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f6: Pop(3)
0x5f7: PushEmpty(bool, object, int)
0x5f8: Stack[-2] = Stack[-4]
0x5f9: Stack[-1] = (int) 265
0x5fa: Call2 0x60b

0x5fb: Pop(3)
0x5fc: Return(); Pop(2)

0x5fd: Stack[-1] = 0
0x5fe: PushEmpty(object, object)
0x5ff: @ GetDiaryRoot(Stack[-1])
0x600: Pop(0)
0x601: Pop(0); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x603: Push("Can't retrieve diary root")
0x604: @ Trace(Stack[-1])
0x605: Pop(1)
0x606: Stack[-3] = (bool) 0
0x607: Return(); Pop(2)

0x608: Stack[-3] = Stack[-1]
0x609: Return(); Pop(2)

0x60a: Stack[-1] = 0
0x60b: PushEmpty(object, object, int, object, object, int)
0x60c: PushEmpty(object)
0x60d: Call2 0x5fe

0x60e: Stack[-4] = Stack[-1]
0x60f: Pop(1)
0x610: @@ Find(Stack[-7], Stack[-2])
0x611: Pop(0)
0x612: Pop(0); Push((bool) Stack[-2] == 0)
0x613: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x614: Push("Can't find diary parent with id: ")
0x615: Pop(1); Push(Stack[-1] + Stack[-8]);
0x616: @ Trace(Stack[-1])
0x617: Pop(1)
0x618: Stack[-9] = (bool) 0
0x619: Return(); Pop(6)

0x61a: @@ AddChild(Stack[-8])
0x61b: Pop(0)
0x61c: Push((int) 7)
0x61d: @ SendWorldWndMessage(Stack[-1])
0x61e: Pop(1)
0x61f: @@ GetCategory(Stack[-1])
0x620: Pop(0)
0x621: @ SetDiarySection(Stack[-1])
0x622: Pop(0)
0x623: Stack[-9] = (bool) 0
0x624: Return(); Pop(6)

0x625: Stack[-2] = 0
0x626: Stack[-3] = 0
0x627: PushEmpty(object, object, object, object)
0x628: @ GetMainOutdoorScene(Stack[-2])
0x629: Pop(0)
0x62a: Pop(0); Push((bool) Stack[-2] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62c: Push("Can't find main outdoor scene")
0x62d: @ Trace(Stack[-1])
0x62e: Pop(1)
0x62f: Stack[-1] = 0
0x630: Stack[-5] = Stack[-1]
0x631: Return(); Pop(4)

0x632: @@ GetMap(Stack[-1])
0x633: Pop(0)
0x634: Stack[-5] = Stack[-1]
0x635: Return(); Pop(4)

0x636: Stack[-1] = 0
0x637: Stack[-2] = 0
0x638: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x639: @ GetMainOutdoorScene(Stack[-2])
0x63a: Pop(0)
0x63b: Pop(0); Push((bool) Stack[-2] == 0)
0x63c: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63d: Push("Can't find main outdoor scene")
0x63e: @ Trace(Stack[-1])
0x63f: Pop(1)
0x640: Return(); Pop(8)

0x641: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x642: Pop(0)
0x643: Pop(0); Push((bool) Stack[-1] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x645: Push("Warning: outdoor scene locator ")
0x646: Pop(1); Push(Stack[-1] + Stack[-11]);
0x647: Push(" doesnt exist")
0x648: Pop(2); Push(Stack[-2] + Stack[-1]);
0x649: @ Trace(Stack[-1])
0x64a: Pop(1)
0x64b: @@ GetMap(Stack[-11])
0x64c: Pop(0)
0x64d: Pop(0); Push((bool) Stack[-11] == 0)
0x64e: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64f: Push("Can't find map")
0x650: @ Trace(Stack[-1])
0x651: Pop(1)
0x652: Return(); Pop(8)

0x653: Push(CvectorIndex(Stack[-4], 0))
0x654: Push(CvectorIndex(Stack[-5], 2))
0x655: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x656: Pop(2)
0x657: Return(); Pop(8)

0x658: Stack[-2] = 0
0x659: PushEmpty(int, int)
0x65a: Push("branch")
0x65b: @ GetVariable(Stack[-1], Stack[-2])
0x65c: Pop(1)
0x65d: Push((int) 0)
0x65e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x660: Stack[-3] = (int) 1
0x661: Return(); Pop(2)

0x662: GOTO 0x668

0x663: Push((int) 1)
0x664: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: Stack[-3] = (int) 2
0x667: Return(); Pop(2)

0x668: Stack[-3] = (int) 3
0x669: Return(); Pop(2)

0x66a: Stack[-1] = (int) 515540
0x66b: Return(); Pop(0)

0x66c: Stack[-1] = (int) 502865
0x66d: Return(); Pop(0)

0x66e: Stack[-1] = "ui/NPC_Klara.png"
0x66f: Return(); Pop(0)

0x670: Stack[-1] = "ui/NPC_Klara_b.png"
0x671: Return(); Pop(0)

0x672: Stack[-1] = (bool) 1
0x673: Return(); Pop(0)

