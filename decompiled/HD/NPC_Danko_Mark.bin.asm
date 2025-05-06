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
	Declaim
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Shyness
	Rage
	Neutral
	Gasp
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	Can't find lsh animation : 
	.bin
	add
	money
	Money
	ui/NPC_Mark.png
	ui/NPC_Mark_b.png
	pt_map_uprava_admin
	ShowMap
	quest_d8_04
	completed
	ood10Mark1
	d10MarkVisit
	d10q03
	quest_d10_03
	d10q03MarkGotoBlock
	AddMark
	ood2Mark1
	fail
	d7q02
	d7q02MarkGotoCemetery
	pt_d7q02_corpse
	d7q02MarkGotoAlexandr
	pt_map_alexandr
	quest_d7_02
	place_corpse
	KnowMark
	d8q04
	d7BurahLetter
	d7q01
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
	mt_mark

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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0xae3
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d7 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2ea Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3d0 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x543 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x756 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x992 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab9 Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb2c Vars = (int)
		EVENT_6 Op = 0xb52 Vars = ()
		EVENT_5 Op = 0xb61 Vars = ()
		EVENT_45 Op = 0xb6e Vars = (bool)
		EVENT_0 Op = 0xb7a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc0a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xd99

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xd97

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xd9b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xd9d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xf45

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
0x31: Call2 0xd20

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc61

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
0x48: Call2 0xc4f

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
0x5a: Call2 0xe35

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Declaim"
0x5e: Call2 0x90

0x5f: Pop(1)
0x60: Push((int) 500424)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500425)
0x66: Push((int) 494)
0x67: Push((int) 493)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500429)
0x6b: Push((int) 498)
0x6c: Push((int) 497)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0xd9f

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0xceb

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
0x92: Call2 0xd9f

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
0xa2: Call2 0xcfb

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xd19

0xab: Pop(0)
0xac: Push((int) 492)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0xe35

0xb3: Pop(2)
0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Declaim"
0xb6: Call2 0x90

0xb7: Pop(1)
0xb8: Push((int) 500424)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 500425)
0xbe: Push((int) 494)
0xbf: Push((int) 493)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 500429)
0xc3: Push((int) 498)
0xc4: Push((int) 497)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 498)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Shyness"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 500430)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 500431)
0xd5: Push((int) 501)
0xd6: Push((int) 499)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 500432)
0xda: Push((int) 494)
0xdb: Push((int) 500)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 501)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Shyness"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 500433)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 500435)
0xec: Push((int) -1)
0xed: Push((int) 503)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 500434)
0xf1: Push((int) -1)
0xf2: Push((int) 502)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 494)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Declaim"
0xfb: Call2 0x90

0xfc: Pop(1)
0xfd: Push((int) 500426)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 500427)
0x103: Push((int) 504)
0x104: Push((int) 495)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 500438)
0x108: Push((int) -1)
0x109: Push((int) 506)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 504)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Declaim"
0x112: Call2 0x90

0x113: Pop(1)
0x114: Push((int) 500436)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 500437)
0x11a: Push((int) 501)
0x11b: Push((int) 505)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 500439)
0x11f: Push((int) -1)
0x120: Push((int) 508)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x125: PushEmpty(bool)
0x126: Call2 0xd9f

0x127: Pop(0)
0x128: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x129: @ lshStopAnimation()
0x12a: Pop(0)
0x12b: GOTO 0x12e

0x12c: @ StopAnimation()
0x12d: Pop(0)
0x12e: Return(); Pop(0)

0x12f: GOTO 0xa7

0x130: Return(); Pop(0)

0x131: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x132: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x133: PushEmpty(bool, object, float)
0x134: Stack[-2] = Stack[-12]
0x135: Stack[-1] = (float) 70.0
0x136: Call2 0xc0a

0x137: Pop(2)
0x138: Pop(1); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[-10] = (int) -2
0x13b: Return(); Pop(8)

0x13c: @ CreateDialog(Stack[-4])
0x13d: Pop(0)
0x13e: PushEmpty(int)
0x13f: Call2 0xd99

0x140: Pop(0)
0x141: @@ SetNPCName(Stack[-1])
0x142: Pop(1)
0x143: PushEmpty(int)
0x144: Call2 0xd97

0x145: Pop(0)
0x146: @@ SetNPCDescription(Stack[-1])
0x147: Pop(1)
0x148: PushEmpty(string)
0x149: Call2 0xd9b

0x14a: Pop(0)
0x14b: @@ SetPhoto(Stack[-1])
0x14c: Pop(1)
0x14d: PushEmpty(string)
0x14e: Call2 0xd9d

0x14f: Pop(0)
0x150: @@ SetPhoto2(Stack[-1])
0x151: Pop(1)
0x152: PushEmpty(int)
0x153: Call2 0xf45

0x154: Pop(0)
0x155: @@ SetPlayerName(Stack[-1])
0x156: Pop(1)
0x157: Stack[-2] = (int) -1
0x158: @ IsOverrideActive(Stack[-3])
0x159: Pop(0)
0x15a: Push(Stack[-3])
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: Stack[-10] = (int) -2
0x15d: Return(); Pop(8)

0x15e: @ DoDialog(Stack[-4])
0x15f: Pop(0)
0x160: PushEmpty(bool, object)
0x161: PushEmpty(object)
0x162: Call2 0xd20

0x163: Stack[-2] = Stack[-1]
0x164: Pop(1)
0x165: Call2 0xc61

0x166: Pop(2)
0x167: PushEmpty(object, object)
0x168: Stack[-2] = Stack[-11]
0x169: Stack[-1] = Stack[-6]
0x16a: Push(-2, 4); TaskCall(3)
0x16b: Call2 0x182

0x16c: Pop(-2, 4); TaskReturn
0x16d: Pop(2)
0x16e: @@ IsDialogEnd(Stack[-1])
0x16f: Pop(0)
0x170: Pop(0); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x172: @ sync()
0x173: Pop(0)
0x174: @@ IsDialogEnd(Stack[-1])
0x175: Pop(0)
0x176: GOTO 0x170

0x177: PushEmpty(object)
0x178: Stack[-1] = Stack[-10]
0x179: Call2 0xc4f

0x17a: Pop(1)
0x17b: @ StopDialog(Stack[-4])
0x17c: Pop(0)
0x17d: @@ GetReturnValue(Stack[-2])
0x17e: Pop(0)
0x17f: Stack[-10] = Stack[-2]
0x180: Return(); Pop(8)

0x181: Stack[-4] = 0
0x182: PushEmpty()
0x183: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x184: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x185: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x186: Push((int) 1)
0x187: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Rage"
0x18a: Call2 0x1c1

0x18b: Pop(1)
0x18c: Push((int) 509489)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: PushEmpty(bool, object)
0x192: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x193: Call2 0xe5f

0x194: Pop(1)
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: Push((int) 509490)
0x197: Push((int) 10433)
0x198: Push((int) 10432)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Push((int) 509499)
0x19c: Push((int) -1)
0x19d: Push((int) 10441)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: GOTO 0x1a3

0x1a1: Return(); Pop(0)

0x1a2: GOTO 0x186

0x1a3: PushEmpty(bool)
0x1a4: Call2 0xd9f

0x1a5: Pop(0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a7: @ lshWaitForAnimEnd()
0x1a8: Pop(0)
0x1a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: GOTO 0x1b1

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1ae: Call2 0xceb

0x1af: Pop(1)
0x1b0: GOTO 0x1a7

0x1b1: GOTO 0x1c0

0x1b2: Push("all")
0x1b3: Push("idle")
0x1b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: @ WaitForAnimEnd()
0x1b7: Pop(0)
0x1b8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: GOTO 0x1c0

0x1bb: Push("all")
0x1bc: Push("idle")
0x1bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: GOTO 0x1b6

0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: PushEmpty(bool)
0x1c3: Call2 0xd9f

0x1c4: Pop(0)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Return(); Pop(0)

0x1c8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(string, bool)
0x1cc: Stack[-2] = Stack[-3]
0x1cd: Push("")
0x1ce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-1] = (bool) 0
0x1d1: GOTO 0x1d3

0x1d2: Stack[-1] = (bool) 1
0x1d3: Call2 0xcfb

0x1d4: Pop(2)
0x1d5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty()
0x1d8: Push((int) 1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x1da: PushEmpty()
0x1db: Call2 0xd19

0x1dc: Pop(0)
0x1dd: Push((int) 10432)
0x1de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: PushEmpty(object, object)
0x1e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0xdee

0x1e4: Pop(2)
0x1e5: Push((int) 10431)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Rage"
0x1ea: Call2 0x1c1

0x1eb: Pop(1)
0x1ec: Push((int) 509489)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Call2 0xe5f

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: Push((int) 509490)
0x1f7: Push((int) 10433)
0x1f8: Push((int) 10432)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Push((int) 509499)
0x1fc: Push((int) -1)
0x1fd: Push((int) 10441)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 10433)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Rage"
0x206: Call2 0x1c1

0x207: Pop(1)
0x208: Push((int) 509491)
0x209: @@ SetMessage(Stack[-1])
0x20a: Pop(1)
0x20b: @@ ClearReplies()
0x20c: Pop(0)
0x20d: Push((int) 509492)
0x20e: Push((int) 10435)
0x20f: Push((int) 10434)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Push((int) 509496)
0x213: Push((int) 10439)
0x214: Push((int) 10438)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 10439)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Rage"
0x21d: Call2 0x1c1

0x21e: Pop(1)
0x21f: Push((int) 509497)
0x220: @@ SetMessage(Stack[-1])
0x221: Pop(1)
0x222: @@ ClearReplies()
0x223: Pop(0)
0x224: Push((int) 509498)
0x225: Push((int) -1)
0x226: Push((int) 10440)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 10435)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Rage"
0x22f: Call2 0x1c1

0x230: Pop(1)
0x231: Push((int) 509493)
0x232: @@ SetMessage(Stack[-1])
0x233: Pop(1)
0x234: @@ ClearReplies()
0x235: Pop(0)
0x236: Push((int) 509494)
0x237: Push((int) -1)
0x238: Push((int) 10436)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Push((int) 509495)
0x23c: Push((int) -1)
0x23d: Push((int) 10437)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x242: PushEmpty(bool)
0x243: Call2 0xd9f

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x246: @ lshStopAnimation()
0x247: Pop(0)
0x248: GOTO 0x24b

0x249: @ StopAnimation()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: GOTO 0x1d8

0x24d: Return(); Pop(0)

0x24e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x24f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x250: PushEmpty(bool, object, float)
0x251: Stack[-2] = Stack[-12]
0x252: Stack[-1] = (float) 70.0
0x253: Call2 0xc0a

0x254: Pop(2)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x257: Stack[-10] = (int) -2
0x258: Return(); Pop(8)

0x259: @ CreateDialog(Stack[-4])
0x25a: Pop(0)
0x25b: PushEmpty(int)
0x25c: Call2 0xd99

0x25d: Pop(0)
0x25e: @@ SetNPCName(Stack[-1])
0x25f: Pop(1)
0x260: PushEmpty(int)
0x261: Call2 0xd97

0x262: Pop(0)
0x263: @@ SetNPCDescription(Stack[-1])
0x264: Pop(1)
0x265: PushEmpty(string)
0x266: Call2 0xd9b

0x267: Pop(0)
0x268: @@ SetPhoto(Stack[-1])
0x269: Pop(1)
0x26a: PushEmpty(string)
0x26b: Call2 0xd9d

0x26c: Pop(0)
0x26d: @@ SetPhoto2(Stack[-1])
0x26e: Pop(1)
0x26f: PushEmpty(int)
0x270: Call2 0xf45

0x271: Pop(0)
0x272: @@ SetPlayerName(Stack[-1])
0x273: Pop(1)
0x274: Stack[-2] = (int) -1
0x275: @ IsOverrideActive(Stack[-3])
0x276: Pop(0)
0x277: Push(Stack[-3])
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-10] = (int) -2
0x27a: Return(); Pop(8)

0x27b: @ DoDialog(Stack[-4])
0x27c: Pop(0)
0x27d: PushEmpty(bool, object)
0x27e: PushEmpty(object)
0x27f: Call2 0xd20

0x280: Stack[-2] = Stack[-1]
0x281: Pop(1)
0x282: Call2 0xc61

0x283: Pop(2)
0x284: PushEmpty(object, object)
0x285: Stack[-2] = Stack[-11]
0x286: Stack[-1] = Stack[-6]
0x287: Push(-2, 4); TaskCall(5)
0x288: Call2 0x29f

0x289: Pop(-2, 4); TaskReturn
0x28a: Pop(2)
0x28b: @@ IsDialogEnd(Stack[-1])
0x28c: Pop(0)
0x28d: Pop(0); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: @ sync()
0x290: Pop(0)
0x291: @@ IsDialogEnd(Stack[-1])
0x292: Pop(0)
0x293: GOTO 0x28d

0x294: PushEmpty(object)
0x295: Stack[-1] = Stack[-10]
0x296: Call2 0xc4f

0x297: Pop(1)
0x298: @ StopDialog(Stack[-4])
0x299: Pop(0)
0x29a: @@ GetReturnValue(Stack[-2])
0x29b: Pop(0)
0x29c: Stack[-10] = Stack[-2]
0x29d: Return(); Pop(8)

0x29e: Stack[-4] = 0
0x29f: PushEmpty()
0x2a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2a3: Push((int) 1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral"
0x2a7: Call2 0x2d4

0x2a8: Pop(1)
0x2a9: Push((int) 510917)
0x2aa: @@ SetMessage(Stack[-1])
0x2ab: Pop(1)
0x2ac: @@ ClearReplies()
0x2ad: Pop(0)
0x2ae: Push((int) 510918)
0x2af: Push((int) -1)
0x2b0: Push((int) 12067)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: GOTO 0x2b6

0x2b4: Return(); Pop(0)

0x2b5: GOTO 0x2a3

0x2b6: PushEmpty(bool)
0x2b7: Call2 0xd9f

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2ba: @ lshWaitForAnimEnd()
0x2bb: Pop(0)
0x2bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: GOTO 0x2c4

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2c1: Call2 0xceb

0x2c2: Pop(1)
0x2c3: GOTO 0x2ba

0x2c4: GOTO 0x2d3

0x2c5: Push("all")
0x2c6: Push("idle")
0x2c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: @ WaitForAnimEnd()
0x2ca: Pop(0)
0x2cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2d3

0x2ce: Push("all")
0x2cf: Push("idle")
0x2d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: GOTO 0x2c9

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(bool)
0x2d6: Call2 0xd9f

0x2d7: Pop(0)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: Return(); Pop(0)

0x2db: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Return(); Pop(0)

0x2de: PushEmpty(string, bool)
0x2df: Stack[-2] = Stack[-3]
0x2e0: Push("")
0x2e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: GOTO 0x2e6

0x2e5: Stack[-1] = (bool) 1
0x2e6: Call2 0xcfb

0x2e7: Pop(2)
0x2e8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: Push((int) 1)
0x2ec: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x2ed: PushEmpty()
0x2ee: Call2 0xd19

0x2ef: Pop(0)
0x2f0: Push((int) 12066)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call2 0x2d4

0x2f6: Pop(1)
0x2f7: Push((int) 510917)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 510918)
0x2fd: Push((int) -1)
0x2fe: Push((int) 12067)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x303: PushEmpty(bool)
0x304: Call2 0xd9f

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x307: @ lshStopAnimation()
0x308: Pop(0)
0x309: GOTO 0x30c

0x30a: @ StopAnimation()
0x30b: Pop(0)
0x30c: Return(); Pop(0)

0x30d: GOTO 0x2eb

0x30e: Return(); Pop(0)

0x30f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x310: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x311: PushEmpty(bool, object, float)
0x312: Stack[-2] = Stack[-12]
0x313: Stack[-1] = (float) 70.0
0x314: Call2 0xc0a

0x315: Pop(2)
0x316: Pop(1); Push((bool) Stack[-1] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-10] = (int) -2
0x319: Return(); Pop(8)

0x31a: @ CreateDialog(Stack[-4])
0x31b: Pop(0)
0x31c: PushEmpty(int)
0x31d: Call2 0xd99

0x31e: Pop(0)
0x31f: @@ SetNPCName(Stack[-1])
0x320: Pop(1)
0x321: PushEmpty(int)
0x322: Call2 0xd97

0x323: Pop(0)
0x324: @@ SetNPCDescription(Stack[-1])
0x325: Pop(1)
0x326: PushEmpty(string)
0x327: Call2 0xd9b

0x328: Pop(0)
0x329: @@ SetPhoto(Stack[-1])
0x32a: Pop(1)
0x32b: PushEmpty(string)
0x32c: Call2 0xd9d

0x32d: Pop(0)
0x32e: @@ SetPhoto2(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(int)
0x331: Call2 0xf45

0x332: Pop(0)
0x333: @@ SetPlayerName(Stack[-1])
0x334: Pop(1)
0x335: Stack[-2] = (int) -1
0x336: @ IsOverrideActive(Stack[-3])
0x337: Pop(0)
0x338: Push(Stack[-3])
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-10] = (int) -2
0x33b: Return(); Pop(8)

0x33c: @ DoDialog(Stack[-4])
0x33d: Pop(0)
0x33e: PushEmpty(bool, object)
0x33f: PushEmpty(object)
0x340: Call2 0xd20

0x341: Stack[-2] = Stack[-1]
0x342: Pop(1)
0x343: Call2 0xc61

0x344: Pop(2)
0x345: PushEmpty(object, object)
0x346: Stack[-2] = Stack[-11]
0x347: Stack[-1] = Stack[-6]
0x348: Push(-2, 4); TaskCall(7)
0x349: Call2 0x360

0x34a: Pop(-2, 4); TaskReturn
0x34b: Pop(2)
0x34c: @@ IsDialogEnd(Stack[-1])
0x34d: Pop(0)
0x34e: Pop(0); Push((bool) Stack[-1] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: @ sync()
0x351: Pop(0)
0x352: @@ IsDialogEnd(Stack[-1])
0x353: Pop(0)
0x354: GOTO 0x34e

0x355: PushEmpty(object)
0x356: Stack[-1] = Stack[-10]
0x357: Call2 0xc4f

0x358: Pop(1)
0x359: @ StopDialog(Stack[-4])
0x35a: Pop(0)
0x35b: @@ GetReturnValue(Stack[-2])
0x35c: Pop(0)
0x35d: Stack[-10] = Stack[-2]
0x35e: Return(); Pop(8)

0x35f: Stack[-4] = 0
0x360: PushEmpty()
0x361: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x362: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x363: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x364: Push((int) 1)
0x365: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x3ba

0x369: Pop(1)
0x36a: Push((int) 513312)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: PushEmpty(bool)
0x370: Stack[-1] = (bool) 1
0x371: PushEmpty(bool)
0x372: Stack[-1] = (bool) 0
0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x375: Call2 0xe83

0x376: Pop(1)
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0xe77

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 1
0x37e: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x37f: PushEmpty(bool)
0x380: Stack[-1] = (bool) 0
0x381: PushEmpty(bool, object)
0x382: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x383: Call2 0xe83

0x384: Pop(1)
0x385: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x386: PushEmpty(bool, object)
0x387: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x388: Call2 0xe6b

0x389: Pop(1)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[-1] = (bool) 1
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: Stack[-1] = (bool) 0
0x38e: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38f: Push((int) 513314)
0x390: Push((int) 14550)
0x391: Push((int) 14549)
0x392: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(3)
0x394: Push((int) 513313)
0x395: Push((int) -1)
0x396: Push((int) 14548)
0x397: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(3)
0x399: GOTO 0x39c

0x39a: Return(); Pop(0)

0x39b: GOTO 0x364

0x39c: PushEmpty(bool)
0x39d: Call2 0xd9f

0x39e: Pop(0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a0: @ lshWaitForAnimEnd()
0x3a1: Pop(0)
0x3a2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3aa

0x3a5: PushEmpty(string)
0x3a6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3a7: Call2 0xceb

0x3a8: Pop(1)
0x3a9: GOTO 0x3a0

0x3aa: GOTO 0x3b9

0x3ab: Push("all")
0x3ac: Push("idle")
0x3ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: @ WaitForAnimEnd()
0x3b0: Pop(0)
0x3b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: GOTO 0x3b9

0x3b4: Push("all")
0x3b5: Push("idle")
0x3b6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b7: Pop(2)
0x3b8: GOTO 0x3af

0x3b9: Return(); Pop(0)

0x3ba: PushEmpty()
0x3bb: PushEmpty(bool)
0x3bc: Call2 0xd9f

0x3bd: Pop(0)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3c0: Return(); Pop(0)

0x3c1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(string, bool)
0x3c5: Stack[-2] = Stack[-3]
0x3c6: Push("")
0x3c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-1] = (bool) 0
0x3ca: GOTO 0x3cc

0x3cb: Stack[-1] = (bool) 1
0x3cc: Call2 0xcfb

0x3cd: Pop(2)
0x3ce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3cf: Return(); Pop(0)

0x3d0: PushEmpty()
0x3d1: Push((int) 1)
0x3d2: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x3d3: PushEmpty()
0x3d4: Call2 0xd19

0x3d5: Pop(0)
0x3d6: Push((int) 14570)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d9: PushEmpty(object, object)
0x3da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3dc: Call2 0xe09

0x3dd: Pop(2)
0x3de: Push((int) 44071)
0x3df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e1: PushEmpty(object, object)
0x3e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e4: Call2 0xe09

0x3e5: Pop(2)
0x3e6: PushEmpty(object, object)
0x3e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call2 0xdfe

0x3ea: Pop(2)
0x3eb: Push((int) 14547)
0x3ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x3ee: PushEmpty(string)
0x3ef: Stack[-1] = "Neutral"
0x3f0: Call2 0x3ba

0x3f1: Pop(1)
0x3f2: Push((int) 513312)
0x3f3: @@ SetMessage(Stack[-1])
0x3f4: Pop(1)
0x3f5: @@ ClearReplies()
0x3f6: Pop(0)
0x3f7: PushEmpty(bool)
0x3f8: Stack[-1] = (bool) 1
0x3f9: PushEmpty(bool)
0x3fa: Stack[-1] = (bool) 0
0x3fb: PushEmpty(bool, object)
0x3fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fd: Call2 0xe83

0x3fe: Pop(1)
0x3ff: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x402: Call2 0xe77

0x403: Pop(1)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Stack[-1] = (bool) 1
0x406: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x407: PushEmpty(bool)
0x408: Stack[-1] = (bool) 0
0x409: PushEmpty(bool, object)
0x40a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40b: Call2 0xe83

0x40c: Pop(1)
0x40d: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40e: PushEmpty(bool, object)
0x40f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x410: Call2 0xe6b

0x411: Pop(1)
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: Stack[-1] = (bool) 1
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Stack[-1] = (bool) 0
0x416: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x417: Push((int) 513314)
0x418: Push((int) 14550)
0x419: Push((int) 14549)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Push((int) 513313)
0x41d: Push((int) -1)
0x41e: Push((int) 14548)
0x41f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: Push((int) 14550)
0x423: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x425: PushEmpty(string)
0x426: Stack[-1] = "Gasp"
0x427: Call2 0x3ba

0x428: Pop(1)
0x429: Push((int) 513315)
0x42a: @@ SetMessage(Stack[-1])
0x42b: Pop(1)
0x42c: @@ ClearReplies()
0x42d: Pop(0)
0x42e: Push((int) 513317)
0x42f: Push((int) 14553)
0x430: Push((int) 14552)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Push((int) 513316)
0x434: Push((int) 14555)
0x435: Push((int) 14551)
0x436: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x437: Pop(3)
0x438: Return(); Pop(0)

0x439: Push((int) 14553)
0x43a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x43c: PushEmpty(string)
0x43d: Stack[-1] = "Gasp"
0x43e: Call2 0x3ba

0x43f: Pop(1)
0x440: Push((int) 513318)
0x441: @@ SetMessage(Stack[-1])
0x442: Pop(1)
0x443: @@ ClearReplies()
0x444: Pop(0)
0x445: Push((int) 513319)
0x446: Push((int) 14555)
0x447: Push((int) 14554)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Push((int) 541849)
0x44b: Push((int) 14555)
0x44c: Push((int) 44069)
0x44d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44e: Pop(3)
0x44f: Return(); Pop(0)

0x450: Push((int) 14555)
0x451: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x453: PushEmpty(string)
0x454: Stack[-1] = "Rage"
0x455: Call2 0x3ba

0x456: Pop(1)
0x457: Push((int) 513320)
0x458: @@ SetMessage(Stack[-1])
0x459: Pop(1)
0x45a: @@ ClearReplies()
0x45b: Pop(0)
0x45c: Push((int) 513335)
0x45d: Push((int) 14567)
0x45e: Push((int) 14566)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 14567)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Rage"
0x467: Call2 0x3ba

0x468: Pop(1)
0x469: Push((int) 513336)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 513337)
0x46f: Push((int) 14569)
0x470: Push((int) 14568)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: Push((int) 14569)
0x475: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x476: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x477: PushEmpty(string)
0x478: Stack[-1] = "Rage"
0x479: Call2 0x3ba

0x47a: Pop(1)
0x47b: Push((int) 513338)
0x47c: @@ SetMessage(Stack[-1])
0x47d: Pop(1)
0x47e: @@ ClearReplies()
0x47f: Pop(0)
0x480: Push((int) 513339)
0x481: Push((int) -1)
0x482: Push((int) 14570)
0x483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x484: Pop(3)
0x485: Push((int) 541850)
0x486: Push((int) -1)
0x487: Push((int) 44071)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Return(); Pop(0)

0x48b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x48c: PushEmpty(bool)
0x48d: Call2 0xd9f

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: @ lshStopAnimation()
0x491: Pop(0)
0x492: GOTO 0x495

0x493: @ StopAnimation()
0x494: Pop(0)
0x495: Return(); Pop(0)

0x496: GOTO 0x3d1

0x497: Return(); Pop(0)

0x498: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x499: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x49a: PushEmpty(bool, object, float)
0x49b: Stack[-2] = Stack[-12]
0x49c: Stack[-1] = (float) 70.0
0x49d: Call2 0xc0a

0x49e: Pop(2)
0x49f: Pop(1); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-10] = (int) -2
0x4a2: Return(); Pop(8)

0x4a3: @ CreateDialog(Stack[-4])
0x4a4: Pop(0)
0x4a5: PushEmpty(int)
0x4a6: Call2 0xd99

0x4a7: Pop(0)
0x4a8: @@ SetNPCName(Stack[-1])
0x4a9: Pop(1)
0x4aa: PushEmpty(int)
0x4ab: Call2 0xd97

0x4ac: Pop(0)
0x4ad: @@ SetNPCDescription(Stack[-1])
0x4ae: Pop(1)
0x4af: PushEmpty(string)
0x4b0: Call2 0xd9b

0x4b1: Pop(0)
0x4b2: @@ SetPhoto(Stack[-1])
0x4b3: Pop(1)
0x4b4: PushEmpty(string)
0x4b5: Call2 0xd9d

0x4b6: Pop(0)
0x4b7: @@ SetPhoto2(Stack[-1])
0x4b8: Pop(1)
0x4b9: PushEmpty(int)
0x4ba: Call2 0xf45

0x4bb: Pop(0)
0x4bc: @@ SetPlayerName(Stack[-1])
0x4bd: Pop(1)
0x4be: Stack[-2] = (int) -1
0x4bf: @ IsOverrideActive(Stack[-3])
0x4c0: Pop(0)
0x4c1: Push(Stack[-3])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-10] = (int) -2
0x4c4: Return(); Pop(8)

0x4c5: @ DoDialog(Stack[-4])
0x4c6: Pop(0)
0x4c7: PushEmpty(bool, object)
0x4c8: PushEmpty(object)
0x4c9: Call2 0xd20

0x4ca: Stack[-2] = Stack[-1]
0x4cb: Pop(1)
0x4cc: Call2 0xc61

0x4cd: Pop(2)
0x4ce: PushEmpty(object, object)
0x4cf: Stack[-2] = Stack[-11]
0x4d0: Stack[-1] = Stack[-6]
0x4d1: Push(-2, 4); TaskCall(9)
0x4d2: Call2 0x4e9

0x4d3: Pop(-2, 4); TaskReturn
0x4d4: Pop(2)
0x4d5: @@ IsDialogEnd(Stack[-1])
0x4d6: Pop(0)
0x4d7: Pop(0); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: @ sync()
0x4da: Pop(0)
0x4db: @@ IsDialogEnd(Stack[-1])
0x4dc: Pop(0)
0x4dd: GOTO 0x4d7

0x4de: PushEmpty(object)
0x4df: Stack[-1] = Stack[-10]
0x4e0: Call2 0xc4f

0x4e1: Pop(1)
0x4e2: @ StopDialog(Stack[-4])
0x4e3: Pop(0)
0x4e4: @@ GetReturnValue(Stack[-2])
0x4e5: Pop(0)
0x4e6: Stack[-10] = Stack[-2]
0x4e7: Return(); Pop(8)

0x4e8: Stack[-4] = 0
0x4e9: PushEmpty()
0x4ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4eb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4ec: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4ed: Push((int) 1)
0x4ee: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x4ef: PushEmpty(string)
0x4f0: Stack[-1] = "Declaim"
0x4f1: Call2 0x52d

0x4f2: Pop(1)
0x4f3: Push((int) 533341)
0x4f4: @@ SetMessage(Stack[-1])
0x4f5: Pop(1)
0x4f6: @@ ClearReplies()
0x4f7: Pop(0)
0x4f8: PushEmpty(bool, object)
0x4f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fa: Call2 0xe3b

0x4fb: Pop(1)
0x4fc: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fd: Push((int) 533342)
0x4fe: Push((int) 34847)
0x4ff: Push((int) 34846)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: Push((int) 533345)
0x503: Push((int) -1)
0x504: Push((int) 34849)
0x505: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x506: Pop(3)
0x507: Push((int) 536042)
0x508: Push((int) -1)
0x509: Push((int) 37783)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: GOTO 0x50f

0x50d: Return(); Pop(0)

0x50e: GOTO 0x4ed

0x50f: PushEmpty(bool)
0x510: Call2 0xd9f

0x511: Pop(0)
0x512: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x513: @ lshWaitForAnimEnd()
0x514: Pop(0)
0x515: Push( Stack[3 + Tasks[-1].StackPointer] )
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: GOTO 0x51d

0x518: PushEmpty(string)
0x519: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x51a: Call2 0xceb

0x51b: Pop(1)
0x51c: GOTO 0x513

0x51d: GOTO 0x52c

0x51e: Push("all")
0x51f: Push("idle")
0x520: @ PlayAnimation(Stack[-2], Stack[-1])
0x521: Pop(2)
0x522: @ WaitForAnimEnd()
0x523: Pop(0)
0x524: Push( Stack[3 + Tasks[-1].StackPointer] )
0x525: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x526: GOTO 0x52c

0x527: Push("all")
0x528: Push("idle")
0x529: @ PlayAnimation(Stack[-2], Stack[-1])
0x52a: Pop(2)
0x52b: GOTO 0x522

0x52c: Return(); Pop(0)

0x52d: PushEmpty()
0x52e: PushEmpty(bool)
0x52f: Call2 0xd9f

0x530: Pop(0)
0x531: Pop(1); Push((bool) Stack[-1] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x533: Return(); Pop(0)

0x534: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x535: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x536: Return(); Pop(0)

0x537: PushEmpty(string, bool)
0x538: Stack[-2] = Stack[-3]
0x539: Push("")
0x53a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-1] = (bool) 0
0x53d: GOTO 0x53f

0x53e: Stack[-1] = (bool) 1
0x53f: Call2 0xcfb

0x540: Pop(2)
0x541: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x542: Return(); Pop(0)

0x543: PushEmpty()
0x544: Push((int) 1)
0x545: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x546: PushEmpty()
0x547: Call2 0xd19

0x548: Pop(0)
0x549: Push((int) 34848)
0x54a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54c: PushEmpty(object, object)
0x54d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54f: Call2 0xdb1

0x550: Pop(2)
0x551: Push((int) 37812)
0x552: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x554: PushEmpty(object, object)
0x555: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x556: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x557: Call2 0xdb1

0x558: Pop(2)
0x559: Push((int) 37815)
0x55a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55c: PushEmpty(object, object)
0x55d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55f: Call2 0xdb1

0x560: Pop(2)
0x561: Push((int) 37814)
0x562: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x563: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x564: PushEmpty(object, object)
0x565: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x566: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x567: Call2 0xdb1

0x568: Pop(2)
0x569: Push((int) 37797)
0x56a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: PushEmpty(object, object)
0x56d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56f: Call2 0xdb1

0x570: Pop(2)
0x571: Push((int) 34845)
0x572: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Declaim"
0x576: Call2 0x52d

0x577: Pop(1)
0x578: Push((int) 533341)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: PushEmpty(bool, object)
0x57e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57f: Call2 0xe3b

0x580: Pop(1)
0x581: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x582: Push((int) 533342)
0x583: Push((int) 34847)
0x584: Push((int) 34846)
0x585: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x586: Pop(3)
0x587: Push((int) 533345)
0x588: Push((int) -1)
0x589: Push((int) 34849)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: Push((int) 536042)
0x58d: Push((int) -1)
0x58e: Push((int) 37783)
0x58f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(3)
0x591: Return(); Pop(0)

0x592: Push((int) 34847)
0x593: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x595: PushEmpty(string)
0x596: Stack[-1] = "Declaim"
0x597: Call2 0x52d

0x598: Pop(1)
0x599: Push((int) 533343)
0x59a: @@ SetMessage(Stack[-1])
0x59b: Pop(1)
0x59c: @@ ClearReplies()
0x59d: Pop(0)
0x59e: Push((int) 536043)
0x59f: Push((int) 37790)
0x5a0: Push((int) 37784)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Push((int) 536053)
0x5a4: Push((int) 37795)
0x5a5: Push((int) 37794)
0x5a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a7: Pop(3)
0x5a8: Return(); Pop(0)

0x5a9: Push((int) 37795)
0x5aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Shyness"
0x5ae: Call2 0x52d

0x5af: Pop(1)
0x5b0: Push((int) 536054)
0x5b1: @@ SetMessage(Stack[-1])
0x5b2: Pop(1)
0x5b3: @@ ClearReplies()
0x5b4: Pop(0)
0x5b5: Push((int) 536055)
0x5b6: Push((int) 37789)
0x5b7: Push((int) 37796)
0x5b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: Push((int) 536056)
0x5bb: Push((int) -1)
0x5bc: Push((int) 37797)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Return(); Pop(0)

0x5c0: Push((int) 37790)
0x5c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c3: PushEmpty(string)
0x5c4: Stack[-1] = "Declaim"
0x5c5: Call2 0x52d

0x5c6: Pop(1)
0x5c7: Push((int) 536049)
0x5c8: @@ SetMessage(Stack[-1])
0x5c9: Pop(1)
0x5ca: @@ ClearReplies()
0x5cb: Pop(0)
0x5cc: Push((int) 536050)
0x5cd: Push((int) 37792)
0x5ce: Push((int) 37791)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Return(); Pop(0)

0x5d2: Push((int) 37792)
0x5d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5d5: PushEmpty(string)
0x5d6: Stack[-1] = "Declaim"
0x5d7: Call2 0x52d

0x5d8: Pop(1)
0x5d9: Push((int) 536051)
0x5da: @@ SetMessage(Stack[-1])
0x5db: Pop(1)
0x5dc: @@ ClearReplies()
0x5dd: Pop(0)
0x5de: Push((int) 536052)
0x5df: Push((int) 37785)
0x5e0: Push((int) 37793)
0x5e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e2: Pop(3)
0x5e3: Return(); Pop(0)

0x5e4: Push((int) 37785)
0x5e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5e7: PushEmpty(string)
0x5e8: Stack[-1] = "Rage"
0x5e9: Call2 0x52d

0x5ea: Pop(1)
0x5eb: Push((int) 536044)
0x5ec: @@ SetMessage(Stack[-1])
0x5ed: Pop(1)
0x5ee: @@ ClearReplies()
0x5ef: Pop(0)
0x5f0: Push((int) 536045)
0x5f1: Push((int) 37787)
0x5f2: Push((int) 37786)
0x5f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f4: Pop(3)
0x5f5: Push((int) 536057)
0x5f6: Push((int) 37799)
0x5f7: Push((int) 37798)
0x5f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f9: Pop(3)
0x5fa: Return(); Pop(0)

0x5fb: Push((int) 37799)
0x5fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x5fe: PushEmpty(string)
0x5ff: Stack[-1] = "Shyness"
0x600: Call2 0x52d

0x601: Pop(1)
0x602: Push((int) 536058)
0x603: @@ SetMessage(Stack[-1])
0x604: Pop(1)
0x605: @@ ClearReplies()
0x606: Pop(0)
0x607: Push((int) 536059)
0x608: Push((int) 37803)
0x609: Push((int) 37800)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Push((int) 536063)
0x60d: Push((int) 37807)
0x60e: Push((int) 37806)
0x60f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x610: Pop(3)
0x611: Return(); Pop(0)

0x612: Push((int) 37807)
0x613: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x615: PushEmpty(string)
0x616: Stack[-1] = "Shyness"
0x617: Call2 0x52d

0x618: Pop(1)
0x619: Push((int) 536064)
0x61a: @@ SetMessage(Stack[-1])
0x61b: Pop(1)
0x61c: @@ ClearReplies()
0x61d: Pop(0)
0x61e: Push((int) 536065)
0x61f: Push((int) 37809)
0x620: Push((int) 37808)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: Return(); Pop(0)

0x624: Push((int) 37809)
0x625: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x627: PushEmpty(string)
0x628: Stack[-1] = "Shyness"
0x629: Call2 0x52d

0x62a: Pop(1)
0x62b: Push((int) 536066)
0x62c: @@ SetMessage(Stack[-1])
0x62d: Pop(1)
0x62e: @@ ClearReplies()
0x62f: Pop(0)
0x630: Push((int) 536067)
0x631: Push((int) 37803)
0x632: Push((int) 37811)
0x633: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x634: Pop(3)
0x635: Push((int) 536069)
0x636: Push((int) -1)
0x637: Push((int) 37814)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Return(); Pop(0)

0x63b: Push((int) 37787)
0x63c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x63e: PushEmpty(string)
0x63f: Stack[-1] = "Rage"
0x640: Call2 0x52d

0x641: Pop(1)
0x642: Push((int) 536046)
0x643: @@ SetMessage(Stack[-1])
0x644: Pop(1)
0x645: @@ ClearReplies()
0x646: Pop(0)
0x647: Push((int) 536047)
0x648: Push((int) 37803)
0x649: Push((int) 37788)
0x64a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64b: Pop(3)
0x64c: Push((int) 536060)
0x64d: Push((int) 37803)
0x64e: Push((int) 37802)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: Push((int) 37803)
0x653: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x655: PushEmpty(string)
0x656: Stack[-1] = "Shyness"
0x657: Call2 0x52d

0x658: Pop(1)
0x659: Push((int) 536061)
0x65a: @@ SetMessage(Stack[-1])
0x65b: Pop(1)
0x65c: @@ ClearReplies()
0x65d: Pop(0)
0x65e: Push((int) 536062)
0x65f: Push((int) 37789)
0x660: Push((int) 37804)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Push((int) 536070)
0x664: Push((int) -1)
0x665: Push((int) 37815)
0x666: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: Return(); Pop(0)

0x669: Push((int) 37789)
0x66a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x66c: PushEmpty(string)
0x66d: Stack[-1] = "Shyness"
0x66e: Call2 0x52d

0x66f: Pop(1)
0x670: Push((int) 536048)
0x671: @@ SetMessage(Stack[-1])
0x672: Pop(1)
0x673: @@ ClearReplies()
0x674: Pop(0)
0x675: Push((int) 533344)
0x676: Push((int) -1)
0x677: Push((int) 34848)
0x678: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x679: Pop(3)
0x67a: Push((int) 536068)
0x67b: Push((int) -1)
0x67c: Push((int) 37812)
0x67d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: Return(); Pop(0)

0x680: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x681: PushEmpty(bool)
0x682: Call2 0xd9f

0x683: Pop(0)
0x684: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x685: @ lshStopAnimation()
0x686: Pop(0)
0x687: GOTO 0x68a

0x688: @ StopAnimation()
0x689: Pop(0)
0x68a: Return(); Pop(0)

0x68b: GOTO 0x544

0x68c: Return(); Pop(0)

0x68d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x68e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x68f: PushEmpty(bool, object, float)
0x690: Stack[-2] = Stack[-12]
0x691: Stack[-1] = (float) 70.0
0x692: Call2 0xc0a

0x693: Pop(2)
0x694: Pop(1); Push((bool) Stack[-1] == 0)
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-10] = (int) -2
0x697: Return(); Pop(8)

0x698: @ CreateDialog(Stack[-4])
0x699: Pop(0)
0x69a: PushEmpty(int)
0x69b: Call2 0xd99

0x69c: Pop(0)
0x69d: @@ SetNPCName(Stack[-1])
0x69e: Pop(1)
0x69f: PushEmpty(int)
0x6a0: Call2 0xd97

0x6a1: Pop(0)
0x6a2: @@ SetNPCDescription(Stack[-1])
0x6a3: Pop(1)
0x6a4: PushEmpty(string)
0x6a5: Call2 0xd9b

0x6a6: Pop(0)
0x6a7: @@ SetPhoto(Stack[-1])
0x6a8: Pop(1)
0x6a9: PushEmpty(string)
0x6aa: Call2 0xd9d

0x6ab: Pop(0)
0x6ac: @@ SetPhoto2(Stack[-1])
0x6ad: Pop(1)
0x6ae: PushEmpty(int)
0x6af: Call2 0xf45

0x6b0: Pop(0)
0x6b1: @@ SetPlayerName(Stack[-1])
0x6b2: Pop(1)
0x6b3: Stack[-2] = (int) -1
0x6b4: @ IsOverrideActive(Stack[-3])
0x6b5: Pop(0)
0x6b6: Push(Stack[-3])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-10] = (int) -2
0x6b9: Return(); Pop(8)

0x6ba: @ DoDialog(Stack[-4])
0x6bb: Pop(0)
0x6bc: PushEmpty(bool, object)
0x6bd: PushEmpty(object)
0x6be: Call2 0xd20

0x6bf: Stack[-2] = Stack[-1]
0x6c0: Pop(1)
0x6c1: Call2 0xc61

0x6c2: Pop(2)
0x6c3: PushEmpty(object, object)
0x6c4: Stack[-2] = Stack[-11]
0x6c5: Stack[-1] = Stack[-6]
0x6c6: Push(-2, 4); TaskCall(11)
0x6c7: Call2 0x6de

0x6c8: Pop(-2, 4); TaskReturn
0x6c9: Pop(2)
0x6ca: @@ IsDialogEnd(Stack[-1])
0x6cb: Pop(0)
0x6cc: Pop(0); Push((bool) Stack[-1] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6ce: @ sync()
0x6cf: Pop(0)
0x6d0: @@ IsDialogEnd(Stack[-1])
0x6d1: Pop(0)
0x6d2: GOTO 0x6cc

0x6d3: PushEmpty(object)
0x6d4: Stack[-1] = Stack[-10]
0x6d5: Call2 0xc4f

0x6d6: Pop(1)
0x6d7: @ StopDialog(Stack[-4])
0x6d8: Pop(0)
0x6d9: @@ GetReturnValue(Stack[-2])
0x6da: Pop(0)
0x6db: Stack[-10] = Stack[-2]
0x6dc: Return(); Pop(8)

0x6dd: Stack[-4] = 0
0x6de: PushEmpty()
0x6df: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6e0: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6e1: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6e2: Push((int) 1)
0x6e3: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x6e4: PushEmpty(bool, object)
0x6e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e6: Call2 0xe47

0x6e7: Pop(1)
0x6e8: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6e9: PushEmpty(object, object)
0x6ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ec: Call2 0xdbb

0x6ed: Pop(2)
0x6ee: PushEmpty(object, object)
0x6ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6f1: Call2 0xdc1

0x6f2: Pop(2)
0x6f3: PushEmpty(string)
0x6f4: Stack[-1] = "Rage"
0x6f5: Call2 0x740

0x6f6: Pop(1)
0x6f7: Push((int) 534127)
0x6f8: @@ SetMessage(Stack[-1])
0x6f9: Pop(1)
0x6fa: @@ ClearReplies()
0x6fb: Pop(0)
0x6fc: Push((int) 536495)
0x6fd: Push((int) 38296)
0x6fe: Push((int) 38295)
0x6ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x700: Pop(3)
0x701: Push((int) 536508)
0x702: Push((int) 38310)
0x703: Push((int) 38309)
0x704: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(3)
0x706: GOTO 0x722

0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call2 0x740

0x70a: Pop(1)
0x70b: Push((int) 534129)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: PushEmpty(bool, object)
0x711: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x712: Call2 0xe53

0x713: Pop(1)
0x714: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x715: Push((int) 534146)
0x716: Push((int) 38315)
0x717: Push((int) 35733)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: Push((int) 534130)
0x71b: Push((int) -1)
0x71c: Push((int) 35717)
0x71d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(3)
0x71f: GOTO 0x722

0x720: Return(); Pop(0)

0x721: GOTO 0x6e2

0x722: PushEmpty(bool)
0x723: Call2 0xd9f

0x724: Pop(0)
0x725: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x726: @ lshWaitForAnimEnd()
0x727: Pop(0)
0x728: Push( Stack[3 + Tasks[-1].StackPointer] )
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: GOTO 0x730

0x72b: PushEmpty(string)
0x72c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x72d: Call2 0xceb

0x72e: Pop(1)
0x72f: GOTO 0x726

0x730: GOTO 0x73f

0x731: Push("all")
0x732: Push("idle")
0x733: @ PlayAnimation(Stack[-2], Stack[-1])
0x734: Pop(2)
0x735: @ WaitForAnimEnd()
0x736: Pop(0)
0x737: Push( Stack[3 + Tasks[-1].StackPointer] )
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: GOTO 0x73f

0x73a: Push("all")
0x73b: Push("idle")
0x73c: @ PlayAnimation(Stack[-2], Stack[-1])
0x73d: Pop(2)
0x73e: GOTO 0x735

0x73f: Return(); Pop(0)

0x740: PushEmpty()
0x741: PushEmpty(bool)
0x742: Call2 0xd9f

0x743: Pop(0)
0x744: Pop(1); Push((bool) Stack[-1] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Return(); Pop(0)

0x747: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x748: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x749: Return(); Pop(0)

0x74a: PushEmpty(string, bool)
0x74b: Stack[-2] = Stack[-3]
0x74c: Push("")
0x74d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74f: Stack[-1] = (bool) 0
0x750: GOTO 0x752

0x751: Stack[-1] = (bool) 1
0x752: Call2 0xcfb

0x753: Pop(2)
0x754: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: Push((int) 1)
0x758: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x759: PushEmpty()
0x75a: Call2 0xd19

0x75b: Pop(0)
0x75c: Push((int) 35715)
0x75d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x75f: PushEmpty(object, object)
0x760: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x761: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x762: Call2 0xdc7

0x763: Pop(2)
0x764: Push((int) 35737)
0x765: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x766: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x767: PushEmpty(object, object)
0x768: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x769: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76a: Call2 0xdd7

0x76b: Pop(2)
0x76c: PushEmpty(object, object)
0x76d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76f: Call2 0xda1

0x770: Pop(2)
0x771: Push((int) 38334)
0x772: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x774: PushEmpty(object, object)
0x775: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x776: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x777: Call2 0xdf4

0x778: Pop(2)
0x779: Push((int) 38333)
0x77a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77c: PushEmpty(object, object)
0x77d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77f: Call2 0xdf4

0x780: Pop(2)
0x781: Push((int) 35714)
0x782: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x784: PushEmpty(bool, object)
0x785: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x786: Call2 0xe47

0x787: Pop(1)
0x788: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x789: PushEmpty(object, object)
0x78a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x78c: Call2 0xdbb

0x78d: Pop(2)
0x78e: PushEmpty(object, object)
0x78f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x790: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x791: Call2 0xdc1

0x792: Pop(2)
0x793: PushEmpty(string)
0x794: Stack[-1] = "Rage"
0x795: Call2 0x740

0x796: Pop(1)
0x797: Push((int) 534127)
0x798: @@ SetMessage(Stack[-1])
0x799: Pop(1)
0x79a: @@ ClearReplies()
0x79b: Pop(0)
0x79c: Push((int) 536495)
0x79d: Push((int) 38296)
0x79e: Push((int) 38295)
0x79f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a0: Pop(3)
0x7a1: Push((int) 536508)
0x7a2: Push((int) 38310)
0x7a3: Push((int) 38309)
0x7a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a5: Pop(3)
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty(string)
0x7a8: Stack[-1] = "Neutral"
0x7a9: Call2 0x740

0x7aa: Pop(1)
0x7ab: Push((int) 534129)
0x7ac: @@ SetMessage(Stack[-1])
0x7ad: Pop(1)
0x7ae: @@ ClearReplies()
0x7af: Pop(0)
0x7b0: PushEmpty(bool, object)
0x7b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b2: Call2 0xe53

0x7b3: Pop(1)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b5: Push((int) 534146)
0x7b6: Push((int) 38315)
0x7b7: Push((int) 35733)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Push((int) 534130)
0x7bb: Push((int) -1)
0x7bc: Push((int) 35717)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Return(); Pop(0)

0x7c0: Push((int) 38315)
0x7c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7c3: PushEmpty(string)
0x7c4: Stack[-1] = "Neutral"
0x7c5: Call2 0x740

0x7c6: Pop(1)
0x7c7: Push((int) 536512)
0x7c8: @@ SetMessage(Stack[-1])
0x7c9: Pop(1)
0x7ca: @@ ClearReplies()
0x7cb: Pop(0)
0x7cc: Push((int) 536513)
0x7cd: Push((int) 38317)
0x7ce: Push((int) 38316)
0x7cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d0: Pop(3)
0x7d1: Push((int) 536516)
0x7d2: Push((int) 38317)
0x7d3: Push((int) 38319)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Return(); Pop(0)

0x7d7: Push((int) 38317)
0x7d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7da: PushEmpty(string)
0x7db: Stack[-1] = "Shyness"
0x7dc: Call2 0x740

0x7dd: Pop(1)
0x7de: Push((int) 536514)
0x7df: @@ SetMessage(Stack[-1])
0x7e0: Pop(1)
0x7e1: @@ ClearReplies()
0x7e2: Pop(0)
0x7e3: Push((int) 536515)
0x7e4: Push((int) 35734)
0x7e5: Push((int) 38318)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Push((int) 536517)
0x7e9: Push((int) 35734)
0x7ea: Push((int) 38321)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: Return(); Pop(0)

0x7ee: Push((int) 35734)
0x7ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f0: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x7f1: PushEmpty(string)
0x7f2: Stack[-1] = "Shyness"
0x7f3: Call2 0x740

0x7f4: Pop(1)
0x7f5: Push((int) 534147)
0x7f6: @@ SetMessage(Stack[-1])
0x7f7: Pop(1)
0x7f8: @@ ClearReplies()
0x7f9: Pop(0)
0x7fa: Push((int) 536518)
0x7fb: Push((int) 38324)
0x7fc: Push((int) 38323)
0x7fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(3)
0x7ff: Push((int) 536524)
0x800: Push((int) 38330)
0x801: Push((int) 38329)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Push((int) 536522)
0x805: Push((int) 38328)
0x806: Push((int) 38327)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Return(); Pop(0)

0x80a: Push((int) 38328)
0x80b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x80d: PushEmpty(string)
0x80e: Stack[-1] = "Gasp"
0x80f: Call2 0x740

0x810: Pop(1)
0x811: Push((int) 536523)
0x812: @@ SetMessage(Stack[-1])
0x813: Pop(1)
0x814: @@ ClearReplies()
0x815: Pop(0)
0x816: Push((int) 536526)
0x817: Push((int) 38330)
0x818: Push((int) 38331)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: Return(); Pop(0)

0x81c: Push((int) 38330)
0x81d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x81f: PushEmpty(string)
0x820: Stack[-1] = "Gasp"
0x821: Call2 0x740

0x822: Pop(1)
0x823: Push((int) 536525)
0x824: @@ SetMessage(Stack[-1])
0x825: Pop(1)
0x826: @@ ClearReplies()
0x827: Pop(0)
0x828: Push((int) 536529)
0x829: Push((int) 38324)
0x82a: Push((int) 38335)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: Return(); Pop(0)

0x82e: Push((int) 38324)
0x82f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x831: PushEmpty(string)
0x832: Stack[-1] = "Shyness"
0x833: Call2 0x740

0x834: Pop(1)
0x835: Push((int) 536519)
0x836: @@ SetMessage(Stack[-1])
0x837: Pop(1)
0x838: @@ ClearReplies()
0x839: Pop(0)
0x83a: Push((int) 536520)
0x83b: Push((int) 38326)
0x83c: Push((int) 38325)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Push((int) 536527)
0x840: Push((int) -1)
0x841: Push((int) 38333)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Return(); Pop(0)

0x845: Push((int) 38326)
0x846: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x847: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x848: PushEmpty(string)
0x849: Stack[-1] = "Gasp"
0x84a: Call2 0x740

0x84b: Pop(1)
0x84c: Push((int) 536521)
0x84d: @@ SetMessage(Stack[-1])
0x84e: Pop(1)
0x84f: @@ ClearReplies()
0x850: Pop(0)
0x851: Push((int) 534148)
0x852: Push((int) 35736)
0x853: Push((int) 35735)
0x854: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: Push((int) 536528)
0x857: Push((int) -1)
0x858: Push((int) 38334)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Return(); Pop(0)

0x85c: Push((int) 35736)
0x85d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85e: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x85f: PushEmpty(string)
0x860: Stack[-1] = "Gasp"
0x861: Call2 0x740

0x862: Pop(1)
0x863: Push((int) 534149)
0x864: @@ SetMessage(Stack[-1])
0x865: Pop(1)
0x866: @@ ClearReplies()
0x867: Pop(0)
0x868: Push((int) 534150)
0x869: Push((int) -1)
0x86a: Push((int) 35737)
0x86b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86c: Pop(3)
0x86d: Return(); Pop(0)

0x86e: Push((int) 38310)
0x86f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x871: PushEmpty(string)
0x872: Stack[-1] = "Rage"
0x873: Call2 0x740

0x874: Pop(1)
0x875: Push((int) 536509)
0x876: @@ SetMessage(Stack[-1])
0x877: Pop(1)
0x878: @@ ClearReplies()
0x879: Pop(0)
0x87a: Push((int) 536510)
0x87b: Push((int) 38298)
0x87c: Push((int) 38311)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Push((int) 38296)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x883: PushEmpty(string)
0x884: Stack[-1] = "Rage"
0x885: Call2 0x740

0x886: Pop(1)
0x887: Push((int) 536496)
0x888: @@ SetMessage(Stack[-1])
0x889: Pop(1)
0x88a: @@ ClearReplies()
0x88b: Pop(0)
0x88c: Push((int) 536497)
0x88d: Push((int) 38298)
0x88e: Push((int) 38297)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Return(); Pop(0)

0x892: Push((int) 38298)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Declaim"
0x897: Call2 0x740

0x898: Pop(1)
0x899: Push((int) 536498)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 536499)
0x89f: Push((int) 38300)
0x8a0: Push((int) 38299)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Return(); Pop(0)

0x8a4: Push((int) 38300)
0x8a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Declaim"
0x8a9: Call2 0x740

0x8aa: Pop(1)
0x8ab: Push((int) 536500)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: Push((int) 536501)
0x8b1: Push((int) 38302)
0x8b2: Push((int) 38301)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Push((int) 536511)
0x8b6: Push((int) 38304)
0x8b7: Push((int) 38313)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Return(); Pop(0)

0x8bb: Push((int) 38302)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Rage"
0x8c0: Call2 0x740

0x8c1: Pop(1)
0x8c2: Push((int) 536502)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 536503)
0x8c8: Push((int) 38304)
0x8c9: Push((int) 38303)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Return(); Pop(0)

0x8cd: Push((int) 38304)
0x8ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cf: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8d0: PushEmpty(string)
0x8d1: Stack[-1] = "Rage"
0x8d2: Call2 0x740

0x8d3: Pop(1)
0x8d4: Push((int) 536504)
0x8d5: @@ SetMessage(Stack[-1])
0x8d6: Pop(1)
0x8d7: @@ ClearReplies()
0x8d8: Pop(0)
0x8d9: Push((int) 534128)
0x8da: Push((int) -1)
0x8db: Push((int) 35715)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: Return(); Pop(0)

0x8df: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8e0: PushEmpty(bool)
0x8e1: Call2 0xd9f

0x8e2: Pop(0)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e4: @ lshStopAnimation()
0x8e5: Pop(0)
0x8e6: GOTO 0x8e9

0x8e7: @ StopAnimation()
0x8e8: Pop(0)
0x8e9: Return(); Pop(0)

0x8ea: GOTO 0x757

0x8eb: Return(); Pop(0)

0x8ec: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8ed: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8ee: PushEmpty(bool, object, float)
0x8ef: Stack[-2] = Stack[-12]
0x8f0: Stack[-1] = (float) 70.0
0x8f1: Call2 0xc0a

0x8f2: Pop(2)
0x8f3: Pop(1); Push((bool) Stack[-1] == 0)
0x8f4: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f5: Stack[-10] = (int) -2
0x8f6: Return(); Pop(8)

0x8f7: @ CreateDialog(Stack[-4])
0x8f8: Pop(0)
0x8f9: PushEmpty(int)
0x8fa: Call2 0xd99

0x8fb: Pop(0)
0x8fc: @@ SetNPCName(Stack[-1])
0x8fd: Pop(1)
0x8fe: PushEmpty(int)
0x8ff: Call2 0xd97

0x900: Pop(0)
0x901: @@ SetNPCDescription(Stack[-1])
0x902: Pop(1)
0x903: PushEmpty(string)
0x904: Call2 0xd9b

0x905: Pop(0)
0x906: @@ SetPhoto(Stack[-1])
0x907: Pop(1)
0x908: PushEmpty(string)
0x909: Call2 0xd9d

0x90a: Pop(0)
0x90b: @@ SetPhoto2(Stack[-1])
0x90c: Pop(1)
0x90d: PushEmpty(int)
0x90e: Call2 0xf45

0x90f: Pop(0)
0x910: @@ SetPlayerName(Stack[-1])
0x911: Pop(1)
0x912: Stack[-2] = (int) -1
0x913: @ IsOverrideActive(Stack[-3])
0x914: Pop(0)
0x915: Push(Stack[-3])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-10] = (int) -2
0x918: Return(); Pop(8)

0x919: @ DoDialog(Stack[-4])
0x91a: Pop(0)
0x91b: PushEmpty(bool, object)
0x91c: PushEmpty(object)
0x91d: Call2 0xd20

0x91e: Stack[-2] = Stack[-1]
0x91f: Pop(1)
0x920: Call2 0xc61

0x921: Pop(2)
0x922: PushEmpty(object, object)
0x923: Stack[-2] = Stack[-11]
0x924: Stack[-1] = Stack[-6]
0x925: Push(-2, 4); TaskCall(13)
0x926: Call2 0x93d

0x927: Pop(-2, 4); TaskReturn
0x928: Pop(2)
0x929: @@ IsDialogEnd(Stack[-1])
0x92a: Pop(0)
0x92b: Pop(0); Push((bool) Stack[-1] == 0)
0x92c: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92d: @ sync()
0x92e: Pop(0)
0x92f: @@ IsDialogEnd(Stack[-1])
0x930: Pop(0)
0x931: GOTO 0x92b

0x932: PushEmpty(object)
0x933: Stack[-1] = Stack[-10]
0x934: Call2 0xc4f

0x935: Pop(1)
0x936: @ StopDialog(Stack[-4])
0x937: Pop(0)
0x938: @@ GetReturnValue(Stack[-2])
0x939: Pop(0)
0x93a: Stack[-10] = Stack[-2]
0x93b: Return(); Pop(8)

0x93c: Stack[-4] = 0
0x93d: PushEmpty()
0x93e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x93f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x940: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x941: Push((int) 1)
0x942: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x943: PushEmpty(string)
0x944: Stack[-1] = "Declaim"
0x945: Call2 0x97c

0x946: Pop(1)
0x947: Push((int) 535680)
0x948: @@ SetMessage(Stack[-1])
0x949: Pop(1)
0x94a: @@ ClearReplies()
0x94b: Pop(0)
0x94c: Push((int) 535681)
0x94d: Push((int) 42137)
0x94e: Push((int) 37367)
0x94f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x950: Pop(3)
0x951: Push((int) 540004)
0x952: Push((int) -1)
0x953: Push((int) 41975)
0x954: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x955: Pop(3)
0x956: Push((int) 540218)
0x957: Push((int) -1)
0x958: Push((int) 42198)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: GOTO 0x95e

0x95c: Return(); Pop(0)

0x95d: GOTO 0x941

0x95e: PushEmpty(bool)
0x95f: Call2 0xd9f

0x960: Pop(0)
0x961: IF (Stack[-1] == 0) GOTO 0x96d; Pop(1)

0x962: @ lshWaitForAnimEnd()
0x963: Pop(0)
0x964: Push( Stack[3 + Tasks[-1].StackPointer] )
0x965: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x966: GOTO 0x96c

0x967: PushEmpty(string)
0x968: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x969: Call2 0xceb

0x96a: Pop(1)
0x96b: GOTO 0x962

0x96c: GOTO 0x97b

0x96d: Push("all")
0x96e: Push("idle")
0x96f: @ PlayAnimation(Stack[-2], Stack[-1])
0x970: Pop(2)
0x971: @ WaitForAnimEnd()
0x972: Pop(0)
0x973: Push( Stack[3 + Tasks[-1].StackPointer] )
0x974: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x975: GOTO 0x97b

0x976: Push("all")
0x977: Push("idle")
0x978: @ PlayAnimation(Stack[-2], Stack[-1])
0x979: Pop(2)
0x97a: GOTO 0x971

0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: PushEmpty(bool)
0x97e: Call2 0xd9f

0x97f: Pop(0)
0x980: Pop(1); Push((bool) Stack[-1] == 0)
0x981: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x982: Return(); Pop(0)

0x983: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x984: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x985: Return(); Pop(0)

0x986: PushEmpty(string, bool)
0x987: Stack[-2] = Stack[-3]
0x988: Push("")
0x989: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x98b: Stack[-1] = (bool) 0
0x98c: GOTO 0x98e

0x98d: Stack[-1] = (bool) 1
0x98e: Call2 0xcfb

0x98f: Pop(2)
0x990: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x991: Return(); Pop(0)

0x992: PushEmpty()
0x993: Push((int) 1)
0x994: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0x995: PushEmpty()
0x996: Call2 0xd19

0x997: Pop(0)
0x998: Push((int) 37366)
0x999: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99a: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x99b: PushEmpty(string)
0x99c: Stack[-1] = "Declaim"
0x99d: Call2 0x97c

0x99e: Pop(1)
0x99f: Push((int) 535680)
0x9a0: @@ SetMessage(Stack[-1])
0x9a1: Pop(1)
0x9a2: @@ ClearReplies()
0x9a3: Pop(0)
0x9a4: Push((int) 535681)
0x9a5: Push((int) 42137)
0x9a6: Push((int) 37367)
0x9a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a8: Pop(3)
0x9a9: Push((int) 540004)
0x9aa: Push((int) -1)
0x9ab: Push((int) 41975)
0x9ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ad: Pop(3)
0x9ae: Push((int) 540218)
0x9af: Push((int) -1)
0x9b0: Push((int) 42198)
0x9b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b2: Pop(3)
0x9b3: Return(); Pop(0)

0x9b4: Push((int) 42137)
0x9b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9b7: PushEmpty(string)
0x9b8: Stack[-1] = "Declaim"
0x9b9: Call2 0x97c

0x9ba: Pop(1)
0x9bb: Push((int) 540162)
0x9bc: @@ SetMessage(Stack[-1])
0x9bd: Pop(1)
0x9be: @@ ClearReplies()
0x9bf: Pop(0)
0x9c0: Push((int) 540163)
0x9c1: Push((int) 42140)
0x9c2: Push((int) 42138)
0x9c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(3)
0x9c5: Push((int) 540164)
0x9c6: Push((int) 42140)
0x9c7: Push((int) 42139)
0x9c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c9: Pop(3)
0x9ca: Return(); Pop(0)

0x9cb: Push((int) 42140)
0x9cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9ce: PushEmpty(string)
0x9cf: Stack[-1] = "Declaim"
0x9d0: Call2 0x97c

0x9d1: Pop(1)
0x9d2: Push((int) 540165)
0x9d3: @@ SetMessage(Stack[-1])
0x9d4: Pop(1)
0x9d5: @@ ClearReplies()
0x9d6: Pop(0)
0x9d7: Push((int) 540166)
0x9d8: Push((int) 42144)
0x9d9: Push((int) 42142)
0x9da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9db: Pop(3)
0x9dc: Push((int) 540167)
0x9dd: Push((int) 42144)
0x9de: Push((int) 42143)
0x9df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e0: Pop(3)
0x9e1: Return(); Pop(0)

0x9e2: Push((int) 42144)
0x9e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e4: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9e5: PushEmpty(string)
0x9e6: Stack[-1] = "Rage"
0x9e7: Call2 0x97c

0x9e8: Pop(1)
0x9e9: Push((int) 540168)
0x9ea: @@ SetMessage(Stack[-1])
0x9eb: Pop(1)
0x9ec: @@ ClearReplies()
0x9ed: Pop(0)
0x9ee: Push((int) 540169)
0x9ef: Push((int) 42147)
0x9f0: Push((int) 42146)
0x9f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f2: Pop(3)
0x9f3: Return(); Pop(0)

0x9f4: Push((int) 42147)
0x9f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f6: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0x9f7: PushEmpty(string)
0x9f8: Stack[-1] = "Rage"
0x9f9: Call2 0x97c

0x9fa: Pop(1)
0x9fb: Push((int) 540170)
0x9fc: @@ SetMessage(Stack[-1])
0x9fd: Pop(1)
0x9fe: @@ ClearReplies()
0x9ff: Pop(0)
0xa00: Push((int) 540171)
0xa01: Push((int) -1)
0xa02: Push((int) 42148)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: Push((int) 540172)
0xa06: Push((int) -1)
0xa07: Push((int) 42149)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: Return(); Pop(0)

0xa0b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa0c: PushEmpty(bool)
0xa0d: Call2 0xd9f

0xa0e: Pop(0)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa10: @ lshStopAnimation()
0xa11: Pop(0)
0xa12: GOTO 0xa15

0xa13: @ StopAnimation()
0xa14: Pop(0)
0xa15: Return(); Pop(0)

0xa16: GOTO 0x993

0xa17: Return(); Pop(0)

0xa18: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa19: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa1a: PushEmpty(bool, object, float)
0xa1b: Stack[-2] = Stack[-12]
0xa1c: Stack[-1] = (float) 70.0
0xa1d: Call2 0xc0a

0xa1e: Pop(2)
0xa1f: Pop(1); Push((bool) Stack[-1] == 0)
0xa20: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa21: Stack[-10] = (int) -2
0xa22: Return(); Pop(8)

0xa23: @ CreateDialog(Stack[-4])
0xa24: Pop(0)
0xa25: PushEmpty(int)
0xa26: Call2 0xd99

0xa27: Pop(0)
0xa28: @@ SetNPCName(Stack[-1])
0xa29: Pop(1)
0xa2a: PushEmpty(int)
0xa2b: Call2 0xd97

0xa2c: Pop(0)
0xa2d: @@ SetNPCDescription(Stack[-1])
0xa2e: Pop(1)
0xa2f: PushEmpty(string)
0xa30: Call2 0xd9b

0xa31: Pop(0)
0xa32: @@ SetPhoto(Stack[-1])
0xa33: Pop(1)
0xa34: PushEmpty(string)
0xa35: Call2 0xd9d

0xa36: Pop(0)
0xa37: @@ SetPhoto2(Stack[-1])
0xa38: Pop(1)
0xa39: PushEmpty(int)
0xa3a: Call2 0xf45

0xa3b: Pop(0)
0xa3c: @@ SetPlayerName(Stack[-1])
0xa3d: Pop(1)
0xa3e: Stack[-2] = (int) -1
0xa3f: @ IsOverrideActive(Stack[-3])
0xa40: Pop(0)
0xa41: Push(Stack[-3])
0xa42: IF (Stack[-1] == 0) GOTO 0xa45; Pop(1)

0xa43: Stack[-10] = (int) -2
0xa44: Return(); Pop(8)

0xa45: @ DoDialog(Stack[-4])
0xa46: Pop(0)
0xa47: PushEmpty(bool, object)
0xa48: PushEmpty(object)
0xa49: Call2 0xd20

0xa4a: Stack[-2] = Stack[-1]
0xa4b: Pop(1)
0xa4c: Call2 0xc61

0xa4d: Pop(2)
0xa4e: PushEmpty(object, object)
0xa4f: Stack[-2] = Stack[-11]
0xa50: Stack[-1] = Stack[-6]
0xa51: Push(-2, 4); TaskCall(15)
0xa52: Call2 0xa69

0xa53: Pop(-2, 4); TaskReturn
0xa54: Pop(2)
0xa55: @@ IsDialogEnd(Stack[-1])
0xa56: Pop(0)
0xa57: Pop(0); Push((bool) Stack[-1] == 0)
0xa58: IF (Stack[-1] == 0) GOTO 0xa5e; Pop(1)

0xa59: @ sync()
0xa5a: Pop(0)
0xa5b: @@ IsDialogEnd(Stack[-1])
0xa5c: Pop(0)
0xa5d: GOTO 0xa57

0xa5e: PushEmpty(object)
0xa5f: Stack[-1] = Stack[-10]
0xa60: Call2 0xc4f

0xa61: Pop(1)
0xa62: @ StopDialog(Stack[-4])
0xa63: Pop(0)
0xa64: @@ GetReturnValue(Stack[-2])
0xa65: Pop(0)
0xa66: Stack[-10] = Stack[-2]
0xa67: Return(); Pop(8)

0xa68: Stack[-4] = 0
0xa69: PushEmpty()
0xa6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa6c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa6d: Push((int) 1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa6f: PushEmpty(string)
0xa70: Stack[-1] = "Neutral"
0xa71: Call2 0xaa3

0xa72: Pop(1)
0xa73: Push((int) 540542)
0xa74: @@ SetMessage(Stack[-1])
0xa75: Pop(1)
0xa76: @@ ClearReplies()
0xa77: Pop(0)
0xa78: Push((int) 540543)
0xa79: Push((int) -1)
0xa7a: Push((int) 42552)
0xa7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7c: Pop(3)
0xa7d: Push((int) 540796)
0xa7e: Push((int) -1)
0xa7f: Push((int) 42845)
0xa80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa81: Pop(3)
0xa82: GOTO 0xa85

0xa83: Return(); Pop(0)

0xa84: GOTO 0xa6d

0xa85: PushEmpty(bool)
0xa86: Call2 0xd9f

0xa87: Pop(0)
0xa88: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa89: @ lshWaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8c: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8d: GOTO 0xa93

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa90: Call2 0xceb

0xa91: Pop(1)
0xa92: GOTO 0xa89

0xa93: GOTO 0xaa2

0xa94: Push("all")
0xa95: Push("idle")
0xa96: @ PlayAnimation(Stack[-2], Stack[-1])
0xa97: Pop(2)
0xa98: @ WaitForAnimEnd()
0xa99: Pop(0)
0xa9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9b: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa9c: GOTO 0xaa2

0xa9d: Push("all")
0xa9e: Push("idle")
0xa9f: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: GOTO 0xa98

0xaa2: Return(); Pop(0)

0xaa3: PushEmpty()
0xaa4: PushEmpty(bool)
0xaa5: Call2 0xd9f

0xaa6: Pop(0)
0xaa7: Pop(1); Push((bool) Stack[-1] == 0)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa9: Return(); Pop(0)

0xaaa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Return(); Pop(0)

0xaad: PushEmpty(string, bool)
0xaae: Stack[-2] = Stack[-3]
0xaaf: Push("")
0xab0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab1: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab2: Stack[-1] = (bool) 0
0xab3: GOTO 0xab5

0xab4: Stack[-1] = (bool) 1
0xab5: Call2 0xcfb

0xab6: Pop(2)
0xab7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xab8: Return(); Pop(0)

0xab9: PushEmpty()
0xaba: Push((int) 1)
0xabb: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xabc: PushEmpty()
0xabd: Call2 0xd19

0xabe: Pop(0)
0xabf: Push((int) 42551)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0xaa3

0xac5: Pop(1)
0xac6: Push((int) 540542)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 540543)
0xacc: Push((int) -1)
0xacd: Push((int) 42552)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Push((int) 540796)
0xad1: Push((int) -1)
0xad2: Push((int) 42845)
0xad3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(3)
0xad5: Return(); Pop(0)

0xad6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xad7: PushEmpty(bool)
0xad8: Call2 0xd9f

0xad9: Pop(0)
0xada: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xadb: @ lshStopAnimation()
0xadc: Pop(0)
0xadd: GOTO 0xae0

0xade: @ StopAnimation()
0xadf: Pop(0)
0xae0: Return(); Pop(0)

0xae1: GOTO 0xaba

0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: Call2 0xae7

0xae5: Pop(0)
0xae6: Return(); Pop(0)

0xae7: PushEmpty(bool)
0xae8: Call2 0xc05

0xae9: Pop(0)
0xaea: Pop(1); Push((bool) Stack[-1] == 0)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaec: @ Hold()
0xaed: Pop(0)
0xaee: @ GetDirection(Stack[-0])
0xaef: Pop(0)
0xaf0: PushEmpty()
0xaf1: Call2 0xb97

0xaf2: Pop(0)
0xaf3: GOTO 0xaf0

0xaf4: Return(); Pop(0)

0xaf5: PushEmpty(object, object)
0xaf6: Push("player")
0xaf7: @ FindActor(Stack[-2], Stack[-1])
0xaf8: Pop(1)
0xaf9: Pop(0); Push((bool) Stack[-1] == 0)
0xafa: IF (Stack[-1] == 0) GOTO 0xafd; Pop(1)

0xafb: Stack[-3] = (bool) 0
0xafc: Return(); Pop(2)

0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[-3]
0xaff: Call2 0xbfc

0xb00: Stack[-5] = Stack[-2]
0xb01: Pop(2)
0xb02: Return(); Pop(2)

0xb03: Stack[-1] = 0
0xb04: Push(CvectorIndex(Stack[-0], 0))
0xb05: Push(CvectorIndex(Stack[-0], 2))
0xb06: @ RotateAsync(Stack[-2], Stack[-1])
0xb07: Pop(2)
0xb08: Return(); Pop(0)

0xb09: PushEmpty(object, bool, object, bool)
0xb0a: Push("player")
0xb0b: @ FindActor(Stack[-3], Stack[-1])
0xb0c: Pop(1)
0xb0d: Pop(0); Push((bool) Stack[-2] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-5] = (bool) 0
0xb10: Return(); Pop(4)

0xb11: PushEmpty(float, object)
0xb12: Stack[-1] = Stack[-4]
0xb13: Call2 0xbe3

0xb14: Pop(1)
0xb15: Push((float)90000.0)
0xb16: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb17: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb18: Stack[-5] = (bool) 0
0xb19: Return(); Pop(4)

0xb1a: @ CanSee(Stack[-1], Stack[-2])
0xb1b: Pop(0)
0xb1c: Stack[-5] = Stack[-1]
0xb1d: Return(); Pop(4)

0xb1e: Stack[-2] = 0
0xb1f: PushEmpty(float, float)
0xb20: Push((int) 8)
0xb21: Push((int) 16)
0xb22: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb23: Pop(2)
0xb24: Push((int) 10)
0xb25: @ SetTimer(Stack[-1], Stack[-2])
0xb26: Pop(1)
0xb27: Return(); Pop(2)

0xb28: Push((int) 10)
0xb29: @ KillTimer(Stack[-1])
0xb2a: Pop(1)
0xb2b: Return(); Pop(0)

0xb2c: PushEmpty()
0xb2d: Push((int) 10)
0xb2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb30: PushEmpty()
0xb31: Call2 0xb28

0xb32: Pop(0)
0xb33: PushEmpty(bool)
0xb34: Stack[-1] = (bool) 0
0xb35: PushEmpty(bool)
0xb36: Call2 0xc05

0xb37: Pop(0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb39: PushEmpty(bool)
0xb3a: Call2 0xb09

0xb3b: Pop(0)
0xb3c: IF (Stack[-1] == 0) GOTO 0xb3e; Pop(1)

0xb3d: Stack[-1] = (bool) 1
0xb3e: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb3f: PushEmpty(bool)
0xb40: Call2 0xaf5

0xb41: Pop(0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb43: PushEmpty(bool, object)
0xb44: PushEmpty(object)
0xb45: Call2 0xd20

0xb46: Stack[-2] = Stack[-1]
0xb47: Pop(1)
0xb48: Call2 0xc9b

0xb49: Pop(2)
0xb4a: GOTO 0xb51

0xb4b: PushEmpty()
0xb4c: Call2 0xb04

0xb4d: Pop(0)
0xb4e: PushEmpty()
0xb4f: Call2 0xb1f

0xb50: Pop(0)
0xb51: Return(); Pop(0)

0xb52: PushEmpty()
0xb53: Call2 0xbde

0xb54: Pop(0)
0xb55: PushEmpty()
0xb56: Call2 0xb28

0xb57: Pop(0)
0xb58: @ lshStopSpeech()
0xb59: Pop(0)
0xb5a: @ lshStopAnimation()
0xb5b: Pop(0)
0xb5c: @ StopAsync()
0xb5d: Pop(0)
0xb5e: @ Hold()
0xb5f: Pop(0)
0xb60: Return(); Pop(0)

0xb61: @ StopGroup0()
0xb62: Pop(0)
0xb63: PushEmpty()
0xb64: Call2 0xb28

0xb65: Pop(0)
0xb66: PushEmpty(string)
0xb67: Stack[-1] = "Neutral"
0xb68: Call2 0xceb

0xb69: Pop(1)
0xb6a: PushEmpty()
0xb6b: Call2 0xb1f

0xb6c: Pop(0)
0xb6d: Return(); Pop(0)

0xb6e: PushEmpty()
0xb6f: Push(Stack[-1])
0xb70: IF (Stack[-1] == 0) GOTO 0xb75; Pop(1)

0xb71: PushEmpty()
0xb72: Call2 0xb1f

0xb73: Pop(0)
0xb74: GOTO 0xb79

0xb75: PushEmpty(string)
0xb76: Stack[-1] = "Neutral"
0xb77: Call2 0xceb

0xb78: Pop(1)
0xb79: Return(); Pop(0)

0xb7a: PushEmpty(bool, bool)
0xb7b: @ IsOverrideActive(Stack[-1])
0xb7c: Pop(0)
0xb7d: Pop(0); Push((bool) Stack[-1] == 0)
0xb7e: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb7f: EventDisable(0)
0xb80: PushEmpty()
0xb81: Call2 0xbde

0xb82: Pop(0)
0xb83: PushEmpty(bool, object)
0xb84: Stack[-1] = Stack[-5]
0xb85: Call2 0xbfc

0xb86: Pop(2)
0xb87: EventEnable(0)
0xb88: PushEmpty(object)
0xb89: Stack[-1] = Stack[-4]
0xb8a: Call2 0xf56

0xb8b: Pop(1)
0xb8c: PushEmpty(string)
0xb8d: Stack[-1] = "Neutral"
0xb8e: Call2 0xceb

0xb8f: Pop(1)
0xb90: PushEmpty()
0xb91: Call2 0xb28

0xb92: Pop(0)
0xb93: PushEmpty()
0xb94: Call2 0xb1f

0xb95: Pop(0)
0xb96: Return(); Pop(2)

0xb97: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb98: @ WaitForAnimEnd()
0xb99: Pop(0)
0xb9a: PushEmpty(bool)
0xb9b: Call2 0xc05

0xb9c: Pop(0)
0xb9d: Pop(1); Push((bool) Stack[-1] == 0)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9f: Return(); Pop(12)

0xba0: PushEmpty(int)
0xba1: Call2 0xd86

0xba2: Stack[-7] = Stack[-1]
0xba3: Pop(1)
0xba4: Stack[-5] = (int) 0
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: Push((int) 5)
0xba8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(bool)
0xbab: Call2 0xc05

0xbac: Pop(0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: Stack[-1] = (bool) 1
0xbaf: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbb0: Pop(0); Push((bool) Stack[-6] == 0)
0xbb1: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbb2: Push((int) 3)
0xbb3: @ Sleep(Stack[-1], Stack[-5])
0xbb4: Pop(1)
0xbb5: Pop(0); Push((bool) Stack[-4] == 0)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb7: GOTO 0xbd9

0xbb8: GOTO 0xbce

0xbb9: @ irand(Stack[-3], Stack[-6])
0xbba: Pop(0)
0xbbb: Push((int) 5)
0xbbc: @ irand(Stack[-3], Stack[-1])
0xbbd: Pop(1)
0xbbe: Push((int) 0)
0xbbf: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc1: Stack[-3] = (int) 0
0xbc2: Push("all")
0xbc3: PushEmpty(string, int)
0xbc4: Stack[-1] = Stack[-6]
0xbc5: Call2 0xd7f

0xbc6: Pop(1)
0xbc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc8: Pop(2)
0xbc9: @ WaitForAnimEnd(Stack[-1])
0xbca: Pop(0)
0xbcb: Pop(0); Push((bool) Stack[-1] == 0)
0xbcc: IF (Stack[-1] == 0) GOTO 0xbce; Pop(1)

0xbcd: GOTO 0xbd9

0xbce: PushEmpty(bool)
0xbcf: Call2 0xbdc

0xbd0: Pop(0)
0xbd1: Pop(1); Push((bool) Stack[-1] == 0)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: GOTO 0xbd9

0xbd4: @ ResetAAS()
0xbd5: Pop(0)
0xbd6: Push((int) 1)
0xbd7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbd8: GOTO 0xba5

0xbd9: @ ResetAAS()
0xbda: Pop(0)
0xbdb: Return(); Pop(12)

0xbdc: Stack[-1] = (bool) 1
0xbdd: Return(); Pop(0)

0xbde: @ StopAnimation()
0xbdf: Pop(0)
0xbe0: @ StopGroup0()
0xbe1: Pop(0)
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbe4: @ GetPosition(Stack[-3])
0xbe5: Pop(0)
0xbe6: @@ GetPosition(Stack[-2])
0xbe7: Pop(0)
0xbe8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbe9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbea: Return(); Pop(6)

0xbeb: PushEmpty(int, int)
0xbec: @@ GetProperty(Stack[-4], Stack[-1])
0xbed: Pop(0)
0xbee: Pop(0); Push(Stack[-1] + Stack[-3]);
0xbef: @@ SetProperty(Stack[-5], Stack[-1])
0xbf0: Pop(1)
0xbf1: Return(); Pop(2)

0xbf2: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbf3: @ GetPosition(Stack[-3])
0xbf4: Pop(0)
0xbf5: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbf6: Push(CvectorIndex(Stack[-2], 0))
0xbf7: Push(CvectorIndex(Stack[-3], 2))
0xbf8: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbf9: Pop(2)
0xbfa: Stack[-8] = Stack[-1]
0xbfb: Return(); Pop(6)

0xbfc: PushEmpty(cvector, cvector)
0xbfd: @@ GetPosition(Stack[-1])
0xbfe: Pop(0)
0xbff: PushEmpty(bool, cvector)
0xc00: Stack[-1] = Stack[-3]
0xc01: Call2 0xbf2

0xc02: Stack[-6] = Stack[-2]
0xc03: Pop(2)
0xc04: Return(); Pop(2)

0xc05: PushEmpty(bool, bool)
0xc06: @ IsLoaded(Stack[-1])
0xc07: Pop(0)
0xc08: Stack[-3] = Stack[-1]
0xc09: Return(); Pop(2)

0xc0a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc0b: @@ GetPosition(Stack[-8])
0xc0c: Pop(0)
0xc0d: @@ GetEyesHeight(Stack[-9])
0xc0e: Pop(0)
0xc0f: Push(CvectorIndex(Stack[-8], 1))
0xc10: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc11: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc12: @ GetPosition(Stack[-7])
0xc13: Pop(0)
0xc14: @ GetEyesHeight(Stack[-9])
0xc15: Pop(0)
0xc16: Push(CvectorIndex(Stack[-7], 1))
0xc17: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc18: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc19: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc1a: Push(CvectorIndex(Stack[-6], 1))
0xc1b: Stack[-1] = (int) 0
0xc1c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc1d: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc1e: Pop(1); Push(Sqrt(Stack[-1]))
0xc1f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc20: Stack[-5] = -Stack[-6]; Pop(0);
0xc21: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc22: PushEmpty(cvector, cvector)
0xc23: Push(CVector(0.0, 1.0, 0.0))
0xc24: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc25: Call2 0xd26

0xc26: Pop(1)
0xc27: Push((int) 25)
0xc28: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc29: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2a: Push(CVector(0.0, 10.0, 0.0))
0xc2b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc2c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc2d: @ IsOverrideActive(Stack[-2])
0xc2e: Pop(0)
0xc2f: Push(Stack[-2])
0xc30: IF (Stack[-1] == 0) GOTO 0xc33; Pop(1)

0xc31: Stack[-21] = (bool) 0
0xc32: Return(); Pop(18)

0xc33: @ StopWorld()
0xc34: Pop(0)
0xc35: Push((bool) 1)
0xc36: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xc37: Pop(1)
0xc38: Push(CvectorIndex(Stack[-4], 0))
0xc39: Push(CvectorIndex(Stack[-5], 2))
0xc3a: @ Rotate(Stack[-2], Stack[-1])
0xc3b: Pop(2)
0xc3c: PushEmpty(bool)
0xc3d: Call2 0xd9f

0xc3e: Pop(0)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc40: GOTO 0xc49

0xc41: Push("head")
0xc42: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc43: Pop(1)
0xc44: Push(Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc46: Push("head")
0xc47: @ LookAsyncCamera(Stack[-1])
0xc48: Pop(1)
0xc49: @ CameraWaitForPlayFinish()
0xc4a: Pop(0)
0xc4b: @ ResumeWorld()
0xc4c: Pop(0)
0xc4d: Stack[-21] = (bool) 1
0xc4e: Return(); Pop(18)

0xc4f: PushEmpty(bool, bool)
0xc50: Push((bool) 1)
0xc51: @ CameraSwitchToNormal(Stack[-1])
0xc52: Pop(1)
0xc53: PushEmpty(bool)
0xc54: Call2 0xd9f

0xc55: Pop(0)
0xc56: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc57: GOTO 0xc60

0xc58: Push("head")
0xc59: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc5a: Pop(1)
0xc5b: Push(Stack[-1])
0xc5c: IF (Stack[-1] == 0) GOTO 0xc60; Pop(1)

0xc5d: Push("head")
0xc5e: @ UnlookAsync(Stack[-1])
0xc5f: Pop(1)
0xc60: Return(); Pop(2)

0xc61: PushEmpty(int, int, int, int)
0xc62: Push("voice_common")
0xc63: @ GetVariable(Stack[-1], Stack[-3])
0xc64: Pop(1)
0xc65: Push(Stack[-2])
0xc66: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc67: PushEmpty(bool, object)
0xc68: Stack[-1] = Stack[-7]
0xc69: Call2 0xc9b

0xc6a: Pop(1)
0xc6b: Pop(1); Push((bool) Stack[-1] == 0)
0xc6c: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc6d: PushEmpty(bool, object)
0xc6e: Stack[-1] = Stack[-7]
0xc6f: Call2 0xcc0

0xc70: Pop(1)
0xc71: Pop(1); Push((bool) Stack[-1] == 0)
0xc72: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc73: Stack[-6] = (bool) 0
0xc74: Return(); Pop(4)

0xc75: Push((int) 2)
0xc76: @ irand(Stack[-2], Stack[-1])
0xc77: Pop(1)
0xc78: Push(Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc7a: Push("voice_common")
0xc7b: Push((int) 1)
0xc7c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc7d: Push((int) 3)
0xc7e: Pop(2); Push(Stack[-2] % Stack[-1]);
0xc7f: @ SetVariable(Stack[-2], Stack[-1])
0xc80: Pop(2)
0xc81: GOTO 0xc86

0xc82: Push("voice_common")
0xc83: Push((int) 0)
0xc84: @ SetVariable(Stack[-2], Stack[-1])
0xc85: Pop(2)
0xc86: GOTO 0xc99

0xc87: PushEmpty(bool, object)
0xc88: Stack[-1] = Stack[-7]
0xc89: Call2 0xcc0

0xc8a: Pop(1)
0xc8b: Pop(1); Push((bool) Stack[-1] == 0)
0xc8c: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc8d: PushEmpty(bool, object)
0xc8e: Stack[-1] = Stack[-7]
0xc8f: Call2 0xc9b

0xc90: Pop(1)
0xc91: Pop(1); Push((bool) Stack[-1] == 0)
0xc92: IF (Stack[-1] == 0) GOTO 0xc95; Pop(1)

0xc93: Stack[-6] = (bool) 0
0xc94: Return(); Pop(4)

0xc95: Push("voice_common")
0xc96: Push((int) 1)
0xc97: @ SetVariable(Stack[-2], Stack[-1])
0xc98: Pop(2)
0xc99: Stack[-6] = (bool) 1
0xc9a: Return(); Pop(4)

0xc9b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc9c: Stack[-5] = "c"
0xc9d: Stack[-4] = (int) 0
0xc9e: Push((int) 1)
0xc9f: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca0: Push((int) 1)
0xca1: Pop(1); Push(Stack[-5] + Stack[-1]);
0xca2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xca3: @@ HasProperty(Stack[-1], Stack[-4])
0xca4: Pop(1)
0xca5: Pop(0); Push((bool) Stack[-3] == 0)
0xca6: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca7: GOTO 0xcab

0xca8: Push((int) 1)
0xca9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcaa: GOTO 0xc9e

0xcab: Pop(0); Push((bool) Stack[-4] == 0)
0xcac: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xcad: Stack[-12] = (bool) 0
0xcae: Return(); Pop(10)

0xcaf: Stack[-2] = (int) 0
0xcb0: Push((int) 1)
0xcb1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcb2: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb3: @ irand(Stack[-2], Stack[-4])
0xcb4: Pop(0)
0xcb5: Push((int) 1)
0xcb6: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcb7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb8: @@ GetProperty(Stack[-1], Stack[-2])
0xcb9: Pop(1)
0xcba: PushEmpty(bool, string)
0xcbb: Stack[-1] = Stack[-3]
0xcbc: Call2 0xd0a

0xcbd: Stack[-14] = Stack[-2]
0xcbe: Pop(2)
0xcbf: Return(); Pop(10)

0xcc0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcc1: Push("d")
0xcc2: PushEmpty(int)
0xcc3: Call2 0xd70

0xcc4: Pop(0)
0xcc5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcc6: Push("m")
0xcc7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcc8: Stack[-4] = (int) 0
0xcc9: Push((int) 1)
0xcca: IF (Stack[-1] == 0) GOTO 0xcd6; Pop(1)

0xccb: Push((int) 1)
0xccc: Pop(1); Push(Stack[-5] + Stack[-1]);
0xccd: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcce: @@ HasProperty(Stack[-1], Stack[-4])
0xccf: Pop(1)
0xcd0: Pop(0); Push((bool) Stack[-3] == 0)
0xcd1: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd2: GOTO 0xcd6

0xcd3: Push((int) 1)
0xcd4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xcd5: GOTO 0xcc9

0xcd6: Pop(0); Push((bool) Stack[-4] == 0)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd8: Stack[-12] = (bool) 0
0xcd9: Return(); Pop(10)

0xcda: Stack[-2] = (int) 0
0xcdb: Push((int) 1)
0xcdc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xcdd: IF (Stack[-1] == 0) GOTO 0xce0; Pop(1)

0xcde: @ irand(Stack[-2], Stack[-4])
0xcdf: Pop(0)
0xce0: Push((int) 1)
0xce1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xce2: Pop(1); Push(Stack[-6] + Stack[-1]);
0xce3: @@ GetProperty(Stack[-1], Stack[-2])
0xce4: Pop(1)
0xce5: PushEmpty(bool, string)
0xce6: Stack[-1] = Stack[-3]
0xce7: Call2 0xd0a

0xce8: Stack[-14] = Stack[-2]
0xce9: Pop(2)
0xcea: Return(); Pop(10)

0xceb: PushEmpty(bool, float, float, bool, float, float)
0xcec: @ lshHasAnimation(Stack[-3], Stack[-7])
0xced: Pop(0)
0xcee: Push(Stack[-3])
0xcef: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf0: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xcf1: Pop(0)
0xcf2: Push((bool) 0)
0xcf3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcf4: Pop(1)
0xcf5: GOTO 0xcfa

0xcf6: Push("Can't find lsh animation : ")
0xcf7: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcf8: @ Trace(Stack[-1])
0xcf9: Pop(1)
0xcfa: Return(); Pop(6)

0xcfb: PushEmpty(bool, float, float, bool, float, float)
0xcfc: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcfd: Pop(0)
0xcfe: Push(Stack[-3])
0xcff: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd00: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd01: Pop(0)
0xd02: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd03: Pop(0)
0xd04: GOTO 0xd09

0xd05: Push("Can't find lsh animation : ")
0xd06: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd07: @ Trace(Stack[-1])
0xd08: Pop(1)
0xd09: Return(); Pop(6)

0xd0a: PushEmpty(bool, bool)
0xd0b: PushEmpty(bool)
0xd0c: Call2 0xd9f

0xd0d: Pop(0)
0xd0e: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd0f: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd10: Pop(0)
0xd11: Push(Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd13: @ lshPlaySpeech(Stack[-3])
0xd14: Pop(0)
0xd15: Stack[-4] = (bool) 1
0xd16: Return(); Pop(2)

0xd17: Stack[-4] = (bool) 0
0xd18: Return(); Pop(2)

0xd19: PushEmpty(bool)
0xd1a: Call2 0xd9f

0xd1b: Pop(0)
0xd1c: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd1d: @ lshStopSpeech()
0xd1e: Pop(0)
0xd1f: Return(); Pop(0)

0xd20: PushEmpty(object, object)
0xd21: @ self(Stack[-1])
0xd22: Pop(0)
0xd23: Stack[-3] = Stack[-1]
0xd24: Return(); Pop(2)

0xd25: Stack[-1] = 0
0xd26: PushEmpty(float, float)
0xd27: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd28: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd29: Push((float)0.0)
0xd2a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd2b: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd2d: Return(); Pop(2)

0xd2e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd2f: Return(); Pop(2)

0xd30: PushEmpty(int, int)
0xd31: @ GetVariable(Stack[-3], Stack[-1])
0xd32: Pop(0)
0xd33: Stack[-4] = Stack[-1]
0xd34: Return(); Pop(2)

0xd35: PushEmpty(object, object, object, object)
0xd36: @ GetMainOutdoorScene(Stack[-2])
0xd37: Pop(0)
0xd38: Push(".bin")
0xd39: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd3a: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xd3b: Pop(1)
0xd3c: Stack[-6] = Stack[-1]
0xd3d: Return(); Pop(4)

0xd3e: Stack[-1] = 0
0xd3f: Stack[-2] = 0
0xd40: PushEmpty(object, object)
0xd41: @ CreateIntVector(Stack[-1])
0xd42: Pop(0)
0xd43: @@ add(Stack[-4])
0xd44: Pop(0)
0xd45: @@ add(Stack[-3])
0xd46: Pop(0)
0xd47: Push((int) 3)
0xd48: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd49: Pop(1)
0xd4a: Return(); Pop(2)

0xd4b: Stack[-1] = 0
0xd4c: PushEmpty(int, int)
0xd4d: PushEmpty(object, string, int)
0xd4e: Stack[-3] = Stack[-7]
0xd4f: Stack[-2] = "money"
0xd50: Stack[-1] = Stack[-6]
0xd51: Call2 0xbeb

0xd52: Pop(3)
0xd53: Push((int) 0)
0xd54: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd55: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd56: Push("Money")
0xd57: @ GetInvItemByName(Stack[-2], Stack[-1])
0xd58: Pop(1)
0xd59: PushEmpty(int, int)
0xd5a: Stack[-2] = Stack[-3]
0xd5b: Stack[-1] = Stack[-5]
0xd5c: Call2 0xd40

0xd5d: Pop(2)
0xd5e: Return(); Pop(2)

0xd5f: PushEmpty(object, object)
0xd60: @ FindActor(Stack[-1], Stack[-4])
0xd61: Pop(0)
0xd62: Pop(0); Push((bool) Stack[-1] == 0)
0xd63: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd64: Stack[-5] = (bool) 0
0xd65: Return(); Pop(2)

0xd66: @ Trigger(Stack[-1], Stack[-3])
0xd67: Pop(0)
0xd68: Stack[-5] = (bool) 1
0xd69: Return(); Pop(2)

0xd6a: Stack[-1] = 0
0xd6b: PushEmpty(float, float)
0xd6c: @ GetGameTime(Stack[-1])
0xd6d: Pop(0)
0xd6e: Stack[-3] = Stack[-1]
0xd6f: Return(); Pop(2)

0xd70: PushEmpty(float, float)
0xd71: @ GetGameTime(Stack[-1])
0xd72: Pop(0)
0xd73: Push((int) 1)
0xd74: PushEmpty(int)
0xd75: Push((int) 24)
0xd76: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd77: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd78: Return(); Pop(2)

0xd79: PushEmpty()
0xd7a: PushEmpty(int)
0xd7b: Call2 0xd70

0xd7c: Pop(0)
0xd7d: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xd7e: Return(); Pop(0)

0xd7f: PushEmpty(string, string)
0xd80: Stack[-1] = "idle"
0xd81: Push(Stack[-3])
0xd82: IF (Stack[-1] == 0) GOTO 0xd84; Pop(1)

0xd83: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd84: Stack[-4] = Stack[-1]
0xd85: Return(); Pop(2)

0xd86: PushEmpty(int, bool, int, bool)
0xd87: Stack[-2] = (int) 0
0xd88: Push("all")
0xd89: PushEmpty(string, int)
0xd8a: Stack[-1] = Stack[-5]
0xd8b: Call2 0xd7f

0xd8c: Pop(1)
0xd8d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd8e: Pop(2)
0xd8f: Pop(0); Push((bool) Stack[-1] == 0)
0xd90: IF (Stack[-1] == 0) GOTO 0xd92; Pop(1)

0xd91: GOTO 0xd95

0xd92: Push((int) 1)
0xd93: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd94: GOTO 0xd88

0xd95: Stack[-5] = Stack[-2]
0xd96: Return(); Pop(4)

0xd97: Stack[-1] = (int) 515544
0xd98: Return(); Pop(0)

0xd99: Stack[-1] = (int) 502869
0xd9a: Return(); Pop(0)

0xd9b: Stack[-1] = "ui/NPC_Mark.png"
0xd9c: Return(); Pop(0)

0xd9d: Stack[-1] = "ui/NPC_Mark_b.png"
0xd9e: Return(); Pop(0)

0xd9f: Stack[-1] = (bool) 1
0xda0: Return(); Pop(0)

0xda1: PushEmpty()
0xda2: PushEmpty(object, string, float)
0xda3: PushEmpty(object)
0xda4: Call2 0xf13

0xda5: Stack[-4] = Stack[-1]
0xda6: Pop(1)
0xda7: Stack[-2] = "pt_map_uprava_admin"
0xda8: Stack[-1] = (int) 2
0xda9: Call2 0xf24

0xdaa: Pop(3)
0xdab: PushEmpty(object)
0xdac: Call2 0xf13

0xdad: Pop(0)
0xdae: @@ ShowMap(Stack[-1])
0xdaf: Pop(1)
0xdb0: Return(); Pop(0)

0xdb1: PushEmpty()
0xdb2: PushEmpty()
0xdb3: Call2 0xedd

0xdb4: Pop(0)
0xdb5: PushEmpty(bool, string, string)
0xdb6: Stack[-2] = "quest_d8_04"
0xdb7: Stack[-1] = "completed"
0xdb8: Call2 0xd5f

0xdb9: Pop(3)
0xdba: Return(); Pop(0)

0xdbb: PushEmpty()
0xdbc: Push("ood10Mark1")
0xdbd: Push((int) 1)
0xdbe: @ SetVariable(Stack[-2], Stack[-1])
0xdbf: Pop(2)
0xdc0: Return(); Pop(0)

0xdc1: PushEmpty()
0xdc2: Push("d10MarkVisit")
0xdc3: Push((int) 1)
0xdc4: @ SetVariable(Stack[-2], Stack[-1])
0xdc5: Pop(2)
0xdc6: Return(); Pop(0)

0xdc7: PushEmpty()
0xdc8: Push("d10q03")
0xdc9: Push((int) 1)
0xdca: @ SetVariable(Stack[-2], Stack[-1])
0xdcb: Pop(2)
0xdcc: PushEmpty()
0xdcd: Call2 0xe8f

0xdce: Pop(0)
0xdcf: PushEmpty()
0xdd0: Call2 0xeb6

0xdd1: Pop(0)
0xdd2: PushEmpty(object, string)
0xdd3: Stack[-1] = "quest_d10_03"
0xdd4: Call2 0xd35

0xdd5: Pop(2)
0xdd6: Return(); Pop(0)

0xdd7: PushEmpty(object, object)
0xdd8: Push("d10q03")
0xdd9: Push((int) 3)
0xdda: @ SetVariable(Stack[-2], Stack[-1])
0xddb: Pop(2)
0xddc: PushEmpty(object)
0xddd: Call2 0xf13

0xdde: Stack[-2] = Stack[-1]
0xddf: Pop(1)
0xde0: Push("d10q03MarkGotoBlock")
0xde1: Push("pt_map_uprava_admin")
0xde2: Push((int) 0)
0xde3: Push((int) 515301)
0xde4: PushEmpty(float)
0xde5: Call2 0xd6b

0xde6: Pop(0)
0xde7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xde8: Pop(5)
0xde9: PushEmpty()
0xdea: Call2 0xea9

0xdeb: Pop(0)
0xdec: Return(); Pop(2)

0xded: Stack[-1] = 0
0xdee: PushEmpty()
0xdef: Push("ood2Mark1")
0xdf0: Push((int) 1)
0xdf1: @ SetVariable(Stack[-2], Stack[-1])
0xdf2: Pop(2)
0xdf3: Return(); Pop(0)

0xdf4: PushEmpty()
0xdf5: PushEmpty()
0xdf6: Call2 0xe9c

0xdf7: Pop(0)
0xdf8: PushEmpty(bool, string, string)
0xdf9: Stack[-2] = "quest_d10_03"
0xdfa: Stack[-1] = "fail"
0xdfb: Call2 0xd5f

0xdfc: Pop(3)
0xdfd: Return(); Pop(0)

0xdfe: PushEmpty(int, int)
0xdff: Push((int) 15)
0xe00: @ irand(Stack[-2], Stack[-1])
0xe01: Pop(1)
0xe02: PushEmpty(object, int)
0xe03: Stack[-2] = Stack[-6]
0xe04: Push((int) 5)
0xe05: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0xe06: Call2 0xd4c

0xe07: Pop(2)
0xe08: Return(); Pop(2)

0xe09: PushEmpty(object, object)
0xe0a: Push("d7q02")
0xe0b: Push((int) 1)
0xe0c: @ SetVariable(Stack[-2], Stack[-1])
0xe0d: Pop(2)
0xe0e: PushEmpty(object)
0xe0f: Call2 0xf13

0xe10: Stack[-2] = Stack[-1]
0xe11: Pop(1)
0xe12: Push("d7q02MarkGotoCemetery")
0xe13: Push("pt_d7q02_corpse")
0xe14: Push((int) 0)
0xe15: Push((int) 515427)
0xe16: PushEmpty(float)
0xe17: Call2 0xd6b

0xe18: Pop(0)
0xe19: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe1a: Pop(5)
0xe1b: Push("d7q02MarkGotoAlexandr")
0xe1c: Push("pt_map_alexandr")
0xe1d: Push((int) 0)
0xe1e: Push((int) 515428)
0xe1f: PushEmpty(float)
0xe20: Call2 0xd6b

0xe21: Pop(0)
0xe22: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe23: Pop(5)
0xe24: PushEmpty()
0xe25: Call2 0xec3

0xe26: Pop(0)
0xe27: PushEmpty()
0xe28: Call2 0xed0

0xe29: Pop(0)
0xe2a: PushEmpty(object, string)
0xe2b: Stack[-1] = "quest_d7_02"
0xe2c: Call2 0xd35

0xe2d: Pop(2)
0xe2e: PushEmpty(bool, string, string)
0xe2f: Stack[-2] = "quest_d7_02"
0xe30: Stack[-1] = "place_corpse"
0xe31: Call2 0xd5f

0xe32: Pop(3)
0xe33: Return(); Pop(2)

0xe34: Stack[-1] = 0
0xe35: PushEmpty()
0xe36: Push("KnowMark")
0xe37: Push((int) 1)
0xe38: @ SetVariable(Stack[-2], Stack[-1])
0xe39: Pop(2)
0xe3a: Return(); Pop(0)

0xe3b: PushEmpty()
0xe3c: PushEmpty(int, string)
0xe3d: Stack[-1] = "d8q04"
0xe3e: Call2 0xd30

0xe3f: Pop(1)
0xe40: Push((int) 3)
0xe41: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe42: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe43: Stack[-2] = (bool) 1
0xe44: Return(); Pop(0)

0xe45: Stack[-2] = (bool) 0
0xe46: Return(); Pop(0)

0xe47: PushEmpty()
0xe48: PushEmpty(int, string)
0xe49: Stack[-1] = "ood10Mark1"
0xe4a: Call2 0xd30

0xe4b: Pop(1)
0xe4c: Push((int) 0)
0xe4d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe4e: IF (Stack[-1] == 0) GOTO 0xe51; Pop(1)

0xe4f: Stack[-2] = (bool) 1
0xe50: Return(); Pop(0)

0xe51: Stack[-2] = (bool) 0
0xe52: Return(); Pop(0)

0xe53: PushEmpty()
0xe54: PushEmpty(int, string)
0xe55: Stack[-1] = "d10q03"
0xe56: Call2 0xd30

0xe57: Pop(1)
0xe58: Push((int) 2)
0xe59: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe5a: IF (Stack[-1] == 0) GOTO 0xe5d; Pop(1)

0xe5b: Stack[-2] = (bool) 1
0xe5c: Return(); Pop(0)

0xe5d: Stack[-2] = (bool) 0
0xe5e: Return(); Pop(0)

0xe5f: PushEmpty()
0xe60: PushEmpty(int, string)
0xe61: Stack[-1] = "ood2Mark1"
0xe62: Call2 0xd30

0xe63: Pop(1)
0xe64: Push((int) 0)
0xe65: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe66: IF (Stack[-1] == 0) GOTO 0xe69; Pop(1)

0xe67: Stack[-2] = (bool) 1
0xe68: Return(); Pop(0)

0xe69: Stack[-2] = (bool) 0
0xe6a: Return(); Pop(0)

0xe6b: PushEmpty()
0xe6c: PushEmpty(int, string)
0xe6d: Stack[-1] = "d7BurahLetter"
0xe6e: Call2 0xd30

0xe6f: Pop(1)
0xe70: Push((int) 0)
0xe71: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xe72: IF (Stack[-1] == 0) GOTO 0xe75; Pop(1)

0xe73: Stack[-2] = (bool) 1
0xe74: Return(); Pop(0)

0xe75: Stack[-2] = (bool) 0
0xe76: Return(); Pop(0)

0xe77: PushEmpty()
0xe78: PushEmpty(int, string)
0xe79: Stack[-1] = "d7q01"
0xe7a: Call2 0xd30

0xe7b: Pop(1)
0xe7c: Push((int) 2)
0xe7d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7e: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7f: Stack[-2] = (bool) 1
0xe80: Return(); Pop(0)

0xe81: Stack[-2] = (bool) 0
0xe82: Return(); Pop(0)

0xe83: PushEmpty()
0xe84: PushEmpty(int, string)
0xe85: Stack[-1] = "d7q02"
0xe86: Call2 0xd30

0xe87: Pop(1)
0xe88: Push((int) 0)
0xe89: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe8a: IF (Stack[-1] == 0) GOTO 0xe8d; Pop(1)

0xe8b: Stack[-2] = (bool) 1
0xe8c: Return(); Pop(0)

0xe8d: Stack[-2] = (bool) 0
0xe8e: Return(); Pop(0)

0xe8f: PushEmpty(object, object)
0xe90: Push((int) 672)
0xe91: Push((int) 2)
0xe92: Push((int) 534157)
0xe93: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe94: Pop(3)
0xe95: PushEmpty(bool, object, int)
0xe96: Stack[-2] = Stack[-4]
0xe97: Stack[-1] = (int) -1
0xe98: Call2 0xef7

0xe99: Pop(3)
0xe9a: Return(); Pop(2)

0xe9b: Stack[-1] = 0
0xe9c: PushEmpty(object, object)
0xe9d: Push((int) 763)
0xe9e: Push((int) 2)
0xe9f: Push((int) 540030)
0xea0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea1: Pop(3)
0xea2: PushEmpty(bool, object, int)
0xea3: Stack[-2] = Stack[-4]
0xea4: Stack[-1] = (int) 672
0xea5: Call2 0xef7

0xea6: Pop(3)
0xea7: Return(); Pop(2)

0xea8: Stack[-1] = 0
0xea9: PushEmpty(object, object)
0xeaa: Push((int) 675)
0xeab: Push((int) 2)
0xeac: Push((int) 534160)
0xead: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeae: Pop(3)
0xeaf: PushEmpty(bool, object, int)
0xeb0: Stack[-2] = Stack[-4]
0xeb1: Stack[-1] = (int) 672
0xeb2: Call2 0xef7

0xeb3: Pop(3)
0xeb4: Return(); Pop(2)

0xeb5: Stack[-1] = 0
0xeb6: PushEmpty(object, object)
0xeb7: Push((int) 673)
0xeb8: Push((int) 2)
0xeb9: Push((int) 534158)
0xeba: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xebb: Pop(3)
0xebc: PushEmpty(bool, object, int)
0xebd: Stack[-2] = Stack[-4]
0xebe: Stack[-1] = (int) 672
0xebf: Call2 0xef7

0xec0: Pop(3)
0xec1: Return(); Pop(2)

0xec2: Stack[-1] = 0
0xec3: PushEmpty(object, object)
0xec4: Push((int) 170)
0xec5: Push((int) 2)
0xec6: Push((int) 515422)
0xec7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xec8: Pop(3)
0xec9: PushEmpty(bool, object, int)
0xeca: Stack[-2] = Stack[-4]
0xecb: Stack[-1] = (int) -1
0xecc: Call2 0xef7

0xecd: Pop(3)
0xece: Return(); Pop(2)

0xecf: Stack[-1] = 0
0xed0: PushEmpty(object, object)
0xed1: Push((int) 171)
0xed2: Push((int) 2)
0xed3: Push((int) 515423)
0xed4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xed5: Pop(3)
0xed6: PushEmpty(bool, object, int)
0xed7: Stack[-2] = Stack[-4]
0xed8: Stack[-1] = (int) 170
0xed9: Call2 0xef7

0xeda: Pop(3)
0xedb: Return(); Pop(2)

0xedc: Stack[-1] = 0
0xedd: PushEmpty(object, object)
0xede: Push((int) 653)
0xedf: Push((int) 2)
0xee0: Push((int) 533366)
0xee1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xee2: Pop(3)
0xee3: PushEmpty(bool, object, int)
0xee4: Stack[-2] = Stack[-4]
0xee5: Stack[-1] = (int) 649
0xee6: Call2 0xef7

0xee7: Pop(3)
0xee8: Return(); Pop(2)

0xee9: Stack[-1] = 0
0xeea: PushEmpty(object, object)
0xeeb: @ GetDiaryRoot(Stack[-1])
0xeec: Pop(0)
0xeed: Pop(0); Push((bool) Stack[-1] == 0)
0xeee: IF (Stack[-1] == 0) GOTO 0xef4; Pop(1)

0xeef: Push("Can't retrieve diary root")
0xef0: @ Trace(Stack[-1])
0xef1: Pop(1)
0xef2: Stack[-3] = (bool) 0
0xef3: Return(); Pop(2)

0xef4: Stack[-3] = Stack[-1]
0xef5: Return(); Pop(2)

0xef6: Stack[-1] = 0
0xef7: PushEmpty(object, object, int, object, object, int)
0xef8: PushEmpty(object)
0xef9: Call2 0xeea

0xefa: Stack[-4] = Stack[-1]
0xefb: Pop(1)
0xefc: @@ Find(Stack[-7], Stack[-2])
0xefd: Pop(0)
0xefe: Pop(0); Push((bool) Stack[-2] == 0)
0xeff: IF (Stack[-1] == 0) GOTO 0xf06; Pop(1)

0xf00: Push("Can't find diary parent with id: ")
0xf01: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf02: @ Trace(Stack[-1])
0xf03: Pop(1)
0xf04: Stack[-9] = (bool) 0
0xf05: Return(); Pop(6)

0xf06: @@ AddChild(Stack[-8])
0xf07: Pop(0)
0xf08: Push((int) 7)
0xf09: @ SendWorldWndMessage(Stack[-1])
0xf0a: Pop(1)
0xf0b: @@ GetCategory(Stack[-1])
0xf0c: Pop(0)
0xf0d: @ SetDiarySection(Stack[-1])
0xf0e: Pop(0)
0xf0f: Stack[-9] = (bool) 0
0xf10: Return(); Pop(6)

0xf11: Stack[-2] = 0
0xf12: Stack[-3] = 0
0xf13: PushEmpty(object, object, object, object)
0xf14: @ GetMainOutdoorScene(Stack[-2])
0xf15: Pop(0)
0xf16: Pop(0); Push((bool) Stack[-2] == 0)
0xf17: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf18: Push("Can't find main outdoor scene")
0xf19: @ Trace(Stack[-1])
0xf1a: Pop(1)
0xf1b: Stack[-1] = 0
0xf1c: Stack[-5] = Stack[-1]
0xf1d: Return(); Pop(4)

0xf1e: @@ GetMap(Stack[-1])
0xf1f: Pop(0)
0xf20: Stack[-5] = Stack[-1]
0xf21: Return(); Pop(4)

0xf22: Stack[-1] = 0
0xf23: Stack[-2] = 0
0xf24: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xf25: @ GetMainOutdoorScene(Stack[-2])
0xf26: Pop(0)
0xf27: Pop(0); Push((bool) Stack[-2] == 0)
0xf28: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf29: Push("Can't find main outdoor scene")
0xf2a: @ Trace(Stack[-1])
0xf2b: Pop(1)
0xf2c: Return(); Pop(8)

0xf2d: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xf2e: Pop(0)
0xf2f: Pop(0); Push((bool) Stack[-1] == 0)
0xf30: IF (Stack[-1] == 0) GOTO 0xf37; Pop(1)

0xf31: Push("Warning: outdoor scene locator ")
0xf32: Pop(1); Push(Stack[-1] + Stack[-11]);
0xf33: Push(" doesnt exist")
0xf34: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf35: @ Trace(Stack[-1])
0xf36: Pop(1)
0xf37: @@ GetMap(Stack[-11])
0xf38: Pop(0)
0xf39: Pop(0); Push((bool) Stack[-11] == 0)
0xf3a: IF (Stack[-1] == 0) GOTO 0xf3f; Pop(1)

0xf3b: Push("Can't find map")
0xf3c: @ Trace(Stack[-1])
0xf3d: Pop(1)
0xf3e: Return(); Pop(8)

0xf3f: Push(CvectorIndex(Stack[-4], 0))
0xf40: Push(CvectorIndex(Stack[-5], 2))
0xf41: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xf42: Pop(2)
0xf43: Return(); Pop(8)

0xf44: Stack[-2] = 0
0xf45: PushEmpty(int, int)
0xf46: Push("branch")
0xf47: @ GetVariable(Stack[-1], Stack[-2])
0xf48: Pop(1)
0xf49: Push((int) 0)
0xf4a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4b: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4c: Stack[-3] = (int) 1
0xf4d: Return(); Pop(2)

0xf4e: GOTO 0xf54

0xf4f: Push((int) 1)
0xf50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf51: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf52: Stack[-3] = (int) 2
0xf53: Return(); Pop(2)

0xf54: Stack[-3] = (int) 3
0xf55: Return(); Pop(2)

0xf56: PushEmpty(int, int)
0xf57: Push("mt_mark")
0xf58: @ GetVariable(Stack[-1], Stack[-2])
0xf59: Pop(1)
0xf5a: Pop(0); Push((bool) Stack[-1] == 0)
0xf5b: IF (Stack[-1] == 0) GOTO 0xf66; Pop(1)

0xf5c: PushEmpty(int, object)
0xf5d: Stack[-1] = Stack[-5]
0xf5e: Push(-2, 1); TaskCall(0)
0xf5f: Call2 0x0

0xf60: Pop(-2, 1); TaskReturn
0xf61: Pop(2)
0xf62: Push("mt_mark")
0xf63: Push((int) 1)
0xf64: @ SetVariable(Stack[-2], Stack[-1])
0xf65: Pop(2)
0xf66: PushEmpty(bool, int)
0xf67: Stack[-1] = (int) 1
0xf68: Call2 0xd79

0xf69: Pop(1)
0xf6a: IF (Stack[-1] == 0) GOTO 0xf6c; Pop(1)

0xf6b: Return(); Pop(2)

0xf6c: PushEmpty(bool, int)
0xf6d: Stack[-1] = (int) 2
0xf6e: Call2 0xd79

0xf6f: Pop(1)
0xf70: IF (Stack[-1] == 0) GOTO 0xf78; Pop(1)

0xf71: PushEmpty(int, object)
0xf72: Stack[-1] = Stack[-5]
0xf73: Push(-2, 1); TaskCall(2)
0xf74: Call2 0x131

0xf75: Pop(-2, 1); TaskReturn
0xf76: Pop(2)
0xf77: Return(); Pop(2)

0xf78: PushEmpty(bool, int)
0xf79: Stack[-1] = (int) 4
0xf7a: Call2 0xd79

0xf7b: Pop(1)
0xf7c: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf7d: PushEmpty(int, object)
0xf7e: Stack[-1] = Stack[-5]
0xf7f: Push(-2, 1); TaskCall(4)
0xf80: Call2 0x24e

0xf81: Pop(-2, 1); TaskReturn
0xf82: Pop(2)
0xf83: Return(); Pop(2)

0xf84: PushEmpty(bool, int)
0xf85: Stack[-1] = (int) 7
0xf86: Call2 0xd79

0xf87: Pop(1)
0xf88: IF (Stack[-1] == 0) GOTO 0xf90; Pop(1)

0xf89: PushEmpty(int, object)
0xf8a: Stack[-1] = Stack[-5]
0xf8b: Push(-2, 1); TaskCall(6)
0xf8c: Call2 0x30f

0xf8d: Pop(-2, 1); TaskReturn
0xf8e: Pop(2)
0xf8f: Return(); Pop(2)

0xf90: PushEmpty(bool, int)
0xf91: Stack[-1] = (int) 8
0xf92: Call2 0xd79

0xf93: Pop(1)
0xf94: IF (Stack[-1] == 0) GOTO 0xf9c; Pop(1)

0xf95: PushEmpty(int, object)
0xf96: Stack[-1] = Stack[-5]
0xf97: Push(-2, 1); TaskCall(8)
0xf98: Call2 0x498

0xf99: Pop(-2, 1); TaskReturn
0xf9a: Pop(2)
0xf9b: Return(); Pop(2)

0xf9c: PushEmpty(bool, int)
0xf9d: Stack[-1] = (int) 10
0xf9e: Call2 0xd79

0xf9f: Pop(1)
0xfa0: IF (Stack[-1] == 0) GOTO 0xfa8; Pop(1)

0xfa1: PushEmpty(int, object)
0xfa2: Stack[-1] = Stack[-5]
0xfa3: Push(-2, 1); TaskCall(10)
0xfa4: Call2 0x68d

0xfa5: Pop(-2, 1); TaskReturn
0xfa6: Pop(2)
0xfa7: Return(); Pop(2)

0xfa8: PushEmpty(bool, int)
0xfa9: Stack[-1] = (int) 12
0xfaa: Call2 0xd79

0xfab: Pop(1)
0xfac: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfad: PushEmpty(int, object)
0xfae: Stack[-1] = Stack[-5]
0xfaf: Push(-2, 1); TaskCall(12)
0xfb0: Call2 0x8ec

0xfb1: Pop(-2, 1); TaskReturn
0xfb2: Pop(2)
0xfb3: Return(); Pop(2)

0xfb4: PushEmpty(int, object)
0xfb5: Stack[-1] = Stack[-5]
0xfb6: Push(-2, 1); TaskCall(14)
0xfb7: Call2 0xa18

0xfb8: Pop(-2, 1); TaskReturn
0xfb9: Pop(2)
0xfba: Return(); Pop(2)

