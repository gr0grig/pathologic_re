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
	Doubt
	Agression
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
	ui/NPC_Block.png
	ui/NPC_Block_b.png
	pt_map_starshina
	ShowMap
	oob9Block1
	oob12Block1
	b12q01BlockVisit
	oob12Block2
	quest_b10_02
	completed
	oob10Block1
	oob9Block2
	oob9Block3
	oob10Block2
	pt_gmap_vagon_army
	b10q04BlockGotoOfficer
	AddMark
	b9BlockVisit
	b9q01BlockGotoBoiny
	b10q02
	b10q02Cutscene
	b10q04KapellaGotoBlock
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	mt_block

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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xa4e
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd3 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x49a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6c0 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x92b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa24 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xa97 Vars = (int)
		EVENT_6 Op = 0xabd Vars = ()
		EVENT_5 Op = 0xacc Vars = ()
		EVENT_45 Op = 0xad9 Vars = (bool)
		EVENT_0 Op = 0xae5 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xb6e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xcdb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xcd9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xcdd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xcdf

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xe1f

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
0x31: Call2 0xc84

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xbc5

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
0x48: Call2 0xbb3

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
0x56: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0xd60

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0xcf3

0x60: Pop(2)
0x61: PushEmpty(object, object)
0x62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64: Call2 0xd4a

0x65: Pop(2)
0x66: PushEmpty(string)
0x67: Stack[-1] = "Neutral"
0x68: Call2 0xbd

0x69: Pop(1)
0x6a: Push((int) 521534)
0x6b: @@ SetMessage(Stack[-1])
0x6c: Pop(1)
0x6d: @@ ClearReplies()
0x6e: Pop(0)
0x6f: Push((int) 522289)
0x70: Push((int) 23470)
0x71: Push((int) 23444)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 522291)
0x75: Push((int) 23449)
0x76: Push((int) 23446)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0x9f

0x7a: PushEmpty(string)
0x7b: Stack[-1] = "Neutral"
0x7c: Call2 0xbd

0x7d: Pop(1)
0x7e: Push((int) 521594)
0x7f: @@ SetMessage(Stack[-1])
0x80: Pop(1)
0x81: @@ ClearReplies()
0x82: Pop(0)
0x83: PushEmpty(bool, object)
0x84: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85: Call2 0xdb2

0x86: Pop(1)
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: Push((int) 522347)
0x89: Push((int) 23514)
0x8a: Push((int) 23510)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0xdbe

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 521595)
0x93: Push((int) 23511)
0x94: Push((int) 22758)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: Push((int) 522350)
0x98: Push((int) -1)
0x99: Push((int) 23513)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0x9f

0x9d: Return(); Pop(0)

0x9e: GOTO 0x55

0x9f: PushEmpty(bool)
0xa0: Call2 0xce1

0xa1: Pop(0)
0xa2: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa3: @ lshWaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa: Call2 0xc4f

0xab: Pop(1)
0xac: GOTO 0xa3

0xad: GOTO 0xbc

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: @ WaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0xb2

0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(bool)
0xbf: Call2 0xce1

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(0)

0xc4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = Stack[-3]
0xc9: Push("")
0xca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-1] = (bool) 0
0xcd: GOTO 0xcf

0xce: Stack[-1] = (bool) 1
0xcf: Call2 0xc5f

0xd0: Pop(2)
0xd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: Push((int) 1)
0xd5: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0xc7d

0xd8: Pop(0)
0xd9: Push((int) 23500)
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0xd50

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0xce3

0xe5: Pop(2)
0xe6: Push((int) 23501)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0xd50

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0xce3

0xf2: Pop(2)
0xf3: Push((int) 23495)
0xf4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0xd50

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0xce3

0xff: Pop(2)
0x100: Push((int) 23496)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0xd50

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0xce3

0x10c: Pop(2)
0x10d: Push((int) 23510)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0xd18

0x114: Pop(2)
0x115: Push((int) 22758)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0xd1e

0x11c: Pop(2)
0x11d: Push((int) 22695)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0xd60

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0xcf3

0x129: Pop(2)
0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0xd4a

0x12e: Pop(2)
0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0xbd

0x132: Pop(1)
0x133: Push((int) 521534)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 522289)
0x139: Push((int) 23470)
0x13a: Push((int) 23444)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Push((int) 522291)
0x13e: Push((int) 23449)
0x13f: Push((int) 23446)
0x140: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: Return(); Pop(0)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0xbd

0x146: Pop(1)
0x147: Push((int) 521594)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0xdb2

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 522347)
0x152: Push((int) 23514)
0x153: Push((int) 23510)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0xdbe

0x159: Pop(1)
0x15a: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15b: Push((int) 521595)
0x15c: Push((int) 23511)
0x15d: Push((int) 22758)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 522350)
0x161: Push((int) -1)
0x162: Push((int) 23513)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 23511)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xbd

0x16c: Pop(1)
0x16d: Push((int) 522348)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 522349)
0x173: Push((int) -1)
0x174: Push((int) 23512)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 23514)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xbd

0x17e: Pop(1)
0x17f: Push((int) 522351)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 522352)
0x185: Push((int) 23516)
0x186: Push((int) 23515)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 23516)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Neutral"
0x18f: Call2 0xbd

0x190: Pop(1)
0x191: Push((int) 522353)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 522354)
0x197: Push((int) 23518)
0x198: Push((int) 23517)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 23518)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xbd

0x1a2: Pop(1)
0x1a3: Push((int) 522355)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 522356)
0x1a9: Push((int) 23520)
0x1aa: Push((int) 23519)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 23520)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral"
0x1b3: Call2 0xbd

0x1b4: Pop(1)
0x1b5: Push((int) 522357)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 522358)
0x1bb: Push((int) 23522)
0x1bc: Push((int) 23521)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Push((int) 522360)
0x1c0: Push((int) -1)
0x1c1: Push((int) 23523)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Return(); Pop(0)

0x1c5: Push((int) 23522)
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c8: PushEmpty(string)
0x1c9: Stack[-1] = "Neutral"
0x1ca: Call2 0xbd

0x1cb: Pop(1)
0x1cc: Push((int) 522359)
0x1cd: @@ SetMessage(Stack[-1])
0x1ce: Pop(1)
0x1cf: @@ ClearReplies()
0x1d0: Pop(0)
0x1d1: Push((int) 522361)
0x1d2: Push((int) -1)
0x1d3: Push((int) 23524)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 23449)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Untrust"
0x1dc: Call2 0xbd

0x1dd: Pop(1)
0x1de: Push((int) 522294)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 522295)
0x1e4: Push((int) 23453)
0x1e5: Push((int) 23450)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 522297)
0x1e9: Push((int) 23447)
0x1ea: Push((int) 23452)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 23447)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call2 0xbd

0x1f4: Pop(1)
0x1f5: Push((int) 522292)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 522296)
0x1fb: Push((int) -1)
0x1fc: Push((int) 23451)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 522293)
0x200: Push((int) -1)
0x201: Push((int) 23448)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 23453)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call2 0xbd

0x20b: Pop(1)
0x20c: Push((int) 522298)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 522299)
0x212: Push((int) 23457)
0x213: Push((int) 23454)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 522300)
0x217: Push((int) 23447)
0x218: Push((int) 23455)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 23457)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call2 0xbd

0x222: Pop(1)
0x223: Push((int) 522301)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 522302)
0x229: Push((int) 23464)
0x22a: Push((int) 23458)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 522303)
0x22e: Push((int) 23460)
0x22f: Push((int) 23459)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 23460)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call2 0xbd

0x239: Pop(1)
0x23a: Push((int) 522304)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 522305)
0x240: Push((int) -1)
0x241: Push((int) 23461)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 522306)
0x245: Push((int) 23447)
0x246: Push((int) 23462)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 23464)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral"
0x24f: Call2 0xbd

0x250: Pop(1)
0x251: Push((int) 522307)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 522308)
0x257: Push((int) 22697)
0x258: Push((int) 23465)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 522309)
0x25c: Push((int) 23467)
0x25d: Push((int) 23466)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 23467)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Untrust"
0x266: Call2 0xbd

0x267: Pop(1)
0x268: Push((int) 522310)
0x269: @@ SetMessage(Stack[-1])
0x26a: Pop(1)
0x26b: @@ ClearReplies()
0x26c: Pop(0)
0x26d: Push((int) 522311)
0x26e: Push((int) 23447)
0x26f: Push((int) 23468)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 23470)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Neutral"
0x278: Call2 0xbd

0x279: Pop(1)
0x27a: Push((int) 522312)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 522313)
0x280: Push((int) 23472)
0x281: Push((int) 23471)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 23472)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral"
0x28a: Call2 0xbd

0x28b: Pop(1)
0x28c: Push((int) 522314)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 522316)
0x292: Push((int) 23445)
0x293: Push((int) 23474)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Push((int) 522315)
0x297: Push((int) 23502)
0x298: Push((int) 23473)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 23502)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Neutral"
0x2a1: Call2 0xbd

0x2a2: Pop(1)
0x2a3: Push((int) 522340)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 522342)
0x2a9: Push((int) 23445)
0x2aa: Push((int) 23504)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Push((int) 522341)
0x2ae: Push((int) 23507)
0x2af: Push((int) 23503)
0x2b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(3)
0x2b2: Return(); Pop(0)

0x2b3: Push((int) 23507)
0x2b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b6: PushEmpty(string)
0x2b7: Stack[-1] = "Neutral"
0x2b8: Call2 0xbd

0x2b9: Pop(1)
0x2ba: Push((int) 522345)
0x2bb: @@ SetMessage(Stack[-1])
0x2bc: Pop(1)
0x2bd: @@ ClearReplies()
0x2be: Pop(0)
0x2bf: Push((int) 522346)
0x2c0: Push((int) 23445)
0x2c1: Push((int) 23508)
0x2c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Push((int) 23445)
0x2c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Neutral"
0x2ca: Call2 0xbd

0x2cb: Pop(1)
0x2cc: Push((int) 522290)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: Push((int) 521535)
0x2d2: Push((int) 23481)
0x2d3: Push((int) 22696)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Push((int) 522319)
0x2d7: Push((int) 23479)
0x2d8: Push((int) 23478)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Return(); Pop(0)

0x2dc: Push((int) 23479)
0x2dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2df: PushEmpty(string)
0x2e0: Stack[-1] = "Neutral"
0x2e1: Call2 0xbd

0x2e2: Pop(1)
0x2e3: Push((int) 522320)
0x2e4: @@ SetMessage(Stack[-1])
0x2e5: Pop(1)
0x2e6: @@ ClearReplies()
0x2e7: Pop(0)
0x2e8: Push((int) 522321)
0x2e9: Push((int) 23483)
0x2ea: Push((int) 23480)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 23483)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call2 0xbd

0x2f4: Pop(1)
0x2f5: Push((int) 522324)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 522325)
0x2fb: Push((int) 23457)
0x2fc: Push((int) 23484)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 23481)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call2 0xbd

0x306: Pop(1)
0x307: Push((int) 522322)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 522323)
0x30d: Push((int) 22697)
0x30e: Push((int) 23482)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 522328)
0x312: Push((int) 22697)
0x313: Push((int) 23489)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 22697)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x31a: PushEmpty(string)
0x31b: Stack[-1] = "Doubt"
0x31c: Call2 0xbd

0x31d: Pop(1)
0x31e: Push((int) 521536)
0x31f: @@ SetMessage(Stack[-1])
0x320: Pop(1)
0x321: @@ ClearReplies()
0x322: Pop(0)
0x323: Push((int) 522326)
0x324: Push((int) 23488)
0x325: Push((int) 23487)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Push((int) 23488)
0x32a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "Untrust"
0x32e: Call2 0xbd

0x32f: Pop(1)
0x330: Push((int) 522327)
0x331: @@ SetMessage(Stack[-1])
0x332: Pop(1)
0x333: @@ ClearReplies()
0x334: Pop(0)
0x335: Push((int) 522329)
0x336: Push((int) 23497)
0x337: Push((int) 23491)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Push((int) 521537)
0x33b: Push((int) 23492)
0x33c: Push((int) 22698)
0x33d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: Push((int) 23492)
0x341: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x343: PushEmpty(string)
0x344: Stack[-1] = "Neutral"
0x345: Call2 0xbd

0x346: Pop(1)
0x347: Push((int) 522330)
0x348: @@ SetMessage(Stack[-1])
0x349: Pop(1)
0x34a: @@ ClearReplies()
0x34b: Pop(0)
0x34c: Push((int) 522331)
0x34d: Push((int) 23494)
0x34e: Push((int) 23493)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Return(); Pop(0)

0x352: Push((int) 23494)
0x353: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x355: PushEmpty(string)
0x356: Stack[-1] = "Neutral"
0x357: Call2 0xbd

0x358: Pop(1)
0x359: Push((int) 522332)
0x35a: @@ SetMessage(Stack[-1])
0x35b: Pop(1)
0x35c: @@ ClearReplies()
0x35d: Pop(0)
0x35e: Push((int) 522333)
0x35f: Push((int) -1)
0x360: Push((int) 23495)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Push((int) 522334)
0x364: Push((int) -1)
0x365: Push((int) 23496)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 23497)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Neutral"
0x36e: Call2 0xbd

0x36f: Pop(1)
0x370: Push((int) 522335)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: Push((int) 522336)
0x376: Push((int) 23499)
0x377: Push((int) 23498)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 530873)
0x37b: Push((int) 23499)
0x37c: Push((int) 32191)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 23499)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Neutral"
0x385: Call2 0xbd

0x386: Pop(1)
0x387: Push((int) 522337)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 522338)
0x38d: Push((int) -1)
0x38e: Push((int) 23500)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 522339)
0x392: Push((int) -1)
0x393: Push((int) 23501)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x398: PushEmpty(bool)
0x399: Call2 0xce1

0x39a: Pop(0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39c: @ lshStopAnimation()
0x39d: Pop(0)
0x39e: GOTO 0x3a1

0x39f: @ StopAnimation()
0x3a0: Pop(0)
0x3a1: Return(); Pop(0)

0x3a2: GOTO 0xd4

0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3a6: PushEmpty(bool, object, float)
0x3a7: Stack[-2] = Stack[-12]
0x3a8: Stack[-1] = (float) 70.0
0x3a9: Call2 0xb6e

0x3aa: Pop(2)
0x3ab: Pop(1); Push((bool) Stack[-1] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-10] = (int) -2
0x3ae: Return(); Pop(8)

0x3af: @ CreateDialog(Stack[-4])
0x3b0: Pop(0)
0x3b1: PushEmpty(int)
0x3b2: Call2 0xcdb

0x3b3: Pop(0)
0x3b4: @@ SetNPCName(Stack[-1])
0x3b5: Pop(1)
0x3b6: PushEmpty(int)
0x3b7: Call2 0xcd9

0x3b8: Pop(0)
0x3b9: @@ SetNPCDescription(Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(string)
0x3bc: Call2 0xcdd

0x3bd: Pop(0)
0x3be: @@ SetPhoto(Stack[-1])
0x3bf: Pop(1)
0x3c0: PushEmpty(string)
0x3c1: Call2 0xcdf

0x3c2: Pop(0)
0x3c3: @@ SetPhoto2(Stack[-1])
0x3c4: Pop(1)
0x3c5: PushEmpty(int)
0x3c6: Call2 0xe1f

0x3c7: Pop(0)
0x3c8: @@ SetPlayerName(Stack[-1])
0x3c9: Pop(1)
0x3ca: Stack[-2] = (int) -1
0x3cb: @ IsOverrideActive(Stack[-3])
0x3cc: Pop(0)
0x3cd: Push(Stack[-3])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: Stack[-10] = (int) -2
0x3d0: Return(); Pop(8)

0x3d1: @ DoDialog(Stack[-4])
0x3d2: Pop(0)
0x3d3: PushEmpty(bool, object)
0x3d4: PushEmpty(object)
0x3d5: Call2 0xc84

0x3d6: Stack[-2] = Stack[-1]
0x3d7: Pop(1)
0x3d8: Call2 0xbc5

0x3d9: Pop(2)
0x3da: PushEmpty(object, object)
0x3db: Stack[-2] = Stack[-11]
0x3dc: Stack[-1] = Stack[-6]
0x3dd: Push(-2, 4); TaskCall(3)
0x3de: Call2 0x3f5

0x3df: Pop(-2, 4); TaskReturn
0x3e0: Pop(2)
0x3e1: @@ IsDialogEnd(Stack[-1])
0x3e2: Pop(0)
0x3e3: Pop(0); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: @ sync()
0x3e6: Pop(0)
0x3e7: @@ IsDialogEnd(Stack[-1])
0x3e8: Pop(0)
0x3e9: GOTO 0x3e3

0x3ea: PushEmpty(object)
0x3eb: Stack[-1] = Stack[-10]
0x3ec: Call2 0xbb3

0x3ed: Pop(1)
0x3ee: @ StopDialog(Stack[-4])
0x3ef: Pop(0)
0x3f0: @@ GetReturnValue(Stack[-2])
0x3f1: Pop(0)
0x3f2: Stack[-10] = Stack[-2]
0x3f3: Return(); Pop(8)

0x3f4: Stack[-4] = 0
0x3f5: PushEmpty()
0x3f6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3f7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3f8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3f9: Push((int) 1)
0x3fa: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x3fb: PushEmpty(bool)
0x3fc: Stack[-1] = (bool) 0
0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ff: Call2 0xd6c

0x400: Pop(1)
0x401: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x402: PushEmpty(bool, object)
0x403: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x404: Call2 0xd84

0x405: Pop(1)
0x406: Pop(1); Push((bool) Stack[-1] == 0)
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: Stack[-1] = (bool) 1
0x409: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x40a: PushEmpty(object, object)
0x40b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40d: Call2 0xcf9

0x40e: Pop(2)
0x40f: PushEmpty(object, object)
0x410: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x411: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x412: Call2 0xcff

0x413: Pop(2)
0x414: PushEmpty(string)
0x415: Stack[-1] = "Neutral"
0x416: Call2 0x484

0x417: Pop(1)
0x418: Push((int) 522123)
0x419: @@ SetMessage(Stack[-1])
0x41a: Pop(1)
0x41b: @@ ClearReplies()
0x41c: Pop(0)
0x41d: Push((int) 522124)
0x41e: Push((int) 24011)
0x41f: Push((int) 23291)
0x420: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: Push((int) 540112)
0x423: Push((int) -1)
0x424: Push((int) 42079)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: GOTO 0x466

0x428: PushEmpty(bool, object)
0x429: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Call2 0xd84

0x42b: Pop(1)
0x42c: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x42d: PushEmpty(object, object)
0x42e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x430: Call2 0xcff

0x431: Pop(2)
0x432: PushEmpty(string)
0x433: Stack[-1] = "Neutral"
0x434: Call2 0x484

0x435: Pop(1)
0x436: Push((int) 522127)
0x437: @@ SetMessage(Stack[-1])
0x438: Pop(1)
0x439: @@ ClearReplies()
0x43a: Pop(0)
0x43b: Push((int) 522128)
0x43c: Push((int) -1)
0x43d: Push((int) 23295)
0x43e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43f: Pop(3)
0x440: Push((int) 522844)
0x441: Push((int) -1)
0x442: Push((int) 24028)
0x443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x444: Pop(3)
0x445: GOTO 0x466

0x446: PushEmpty(object, object)
0x447: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x448: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x449: Call2 0xcff

0x44a: Pop(2)
0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Neutral"
0x44d: Call2 0x484

0x44e: Pop(1)
0x44f: Push((int) 522125)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: PushEmpty(bool, object)
0x455: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x456: Call2 0xd78

0x457: Pop(1)
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: Push((int) 522848)
0x45a: Push((int) 24033)
0x45b: Push((int) 24032)
0x45c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45d: Pop(3)
0x45e: Push((int) 522126)
0x45f: Push((int) -1)
0x460: Push((int) 23293)
0x461: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: GOTO 0x466

0x464: Return(); Pop(0)

0x465: GOTO 0x3f9

0x466: PushEmpty(bool)
0x467: Call2 0xce1

0x468: Pop(0)
0x469: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x46a: @ lshWaitForAnimEnd()
0x46b: Pop(0)
0x46c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: GOTO 0x474

0x46f: PushEmpty(string)
0x470: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x471: Call2 0xc4f

0x472: Pop(1)
0x473: GOTO 0x46a

0x474: GOTO 0x483

0x475: Push("all")
0x476: Push("idle")
0x477: @ PlayAnimation(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: @ WaitForAnimEnd()
0x47a: Pop(0)
0x47b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: GOTO 0x483

0x47e: Push("all")
0x47f: Push("idle")
0x480: @ PlayAnimation(Stack[-2], Stack[-1])
0x481: Pop(2)
0x482: GOTO 0x479

0x483: Return(); Pop(0)

0x484: PushEmpty()
0x485: PushEmpty(bool)
0x486: Call2 0xce1

0x487: Pop(0)
0x488: Pop(1); Push((bool) Stack[-1] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Return(); Pop(0)

0x48b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Return(); Pop(0)

0x48e: PushEmpty(string, bool)
0x48f: Stack[-2] = Stack[-3]
0x490: Push("")
0x491: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-1] = (bool) 0
0x494: GOTO 0x496

0x495: Stack[-1] = (bool) 1
0x496: Call2 0xc5f

0x497: Pop(2)
0x498: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x499: Return(); Pop(0)

0x49a: PushEmpty()
0x49b: Push((int) 1)
0x49c: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x49d: PushEmpty()
0x49e: Call2 0xc7d

0x49f: Pop(0)
0x4a0: Push((int) 24032)
0x4a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a3: PushEmpty(object, object)
0x4a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a6: Call2 0xd05

0x4a7: Pop(2)
0x4a8: Push((int) 23290)
0x4a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x4ab: PushEmpty(bool)
0x4ac: Stack[-1] = (bool) 0
0x4ad: PushEmpty(bool, object)
0x4ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4af: Call2 0xd6c

0x4b0: Pop(1)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b2: PushEmpty(bool, object)
0x4b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b4: Call2 0xd84

0x4b5: Pop(1)
0x4b6: Pop(1); Push((bool) Stack[-1] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Stack[-1] = (bool) 1
0x4b9: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4ba: PushEmpty(object, object)
0x4bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bd: Call2 0xcf9

0x4be: Pop(2)
0x4bf: PushEmpty(object, object)
0x4c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c2: Call2 0xcff

0x4c3: Pop(2)
0x4c4: PushEmpty(string)
0x4c5: Stack[-1] = "Neutral"
0x4c6: Call2 0x484

0x4c7: Pop(1)
0x4c8: Push((int) 522123)
0x4c9: @@ SetMessage(Stack[-1])
0x4ca: Pop(1)
0x4cb: @@ ClearReplies()
0x4cc: Pop(0)
0x4cd: Push((int) 522124)
0x4ce: Push((int) 24011)
0x4cf: Push((int) 23291)
0x4d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d1: Pop(3)
0x4d2: Push((int) 540112)
0x4d3: Push((int) -1)
0x4d4: Push((int) 42079)
0x4d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d6: Pop(3)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4da: Call2 0xd84

0x4db: Pop(1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4dd: PushEmpty(object, object)
0x4de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e0: Call2 0xcff

0x4e1: Pop(2)
0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Neutral"
0x4e4: Call2 0x484

0x4e5: Pop(1)
0x4e6: Push((int) 522127)
0x4e7: @@ SetMessage(Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ ClearReplies()
0x4ea: Pop(0)
0x4eb: Push((int) 522128)
0x4ec: Push((int) -1)
0x4ed: Push((int) 23295)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Push((int) 522844)
0x4f1: Push((int) -1)
0x4f2: Push((int) 24028)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(object, object)
0x4f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f9: Call2 0xcff

0x4fa: Pop(2)
0x4fb: PushEmpty(string)
0x4fc: Stack[-1] = "Neutral"
0x4fd: Call2 0x484

0x4fe: Pop(1)
0x4ff: Push((int) 522125)
0x500: @@ SetMessage(Stack[-1])
0x501: Pop(1)
0x502: @@ ClearReplies()
0x503: Pop(0)
0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0xd78

0x507: Pop(1)
0x508: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x509: Push((int) 522848)
0x50a: Push((int) 24033)
0x50b: Push((int) 24032)
0x50c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50d: Pop(3)
0x50e: Push((int) 522126)
0x50f: Push((int) -1)
0x510: Push((int) 23293)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 24033)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Neutral"
0x519: Call2 0x484

0x51a: Pop(1)
0x51b: Push((int) 522849)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 522850)
0x521: Push((int) 24035)
0x522: Push((int) 24034)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Return(); Pop(0)

0x526: Push((int) 24035)
0x527: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x529: PushEmpty(string)
0x52a: Stack[-1] = "Neutral"
0x52b: Call2 0x484

0x52c: Pop(1)
0x52d: Push((int) 522851)
0x52e: @@ SetMessage(Stack[-1])
0x52f: Pop(1)
0x530: @@ ClearReplies()
0x531: Pop(0)
0x532: Push((int) 522852)
0x533: Push((int) 24037)
0x534: Push((int) 24036)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Push((int) 540113)
0x538: Push((int) -1)
0x539: Push((int) 42080)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Return(); Pop(0)

0x53d: Push((int) 24037)
0x53e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x540: PushEmpty(string)
0x541: Stack[-1] = "Neutral"
0x542: Call2 0x484

0x543: Pop(1)
0x544: Push((int) 522853)
0x545: @@ SetMessage(Stack[-1])
0x546: Pop(1)
0x547: @@ ClearReplies()
0x548: Pop(0)
0x549: Push((int) 522854)
0x54a: Push((int) -1)
0x54b: Push((int) 24038)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Return(); Pop(0)

0x54f: Push((int) 24011)
0x550: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "Neutral"
0x554: Call2 0x484

0x555: Pop(1)
0x556: Push((int) 522828)
0x557: @@ SetMessage(Stack[-1])
0x558: Pop(1)
0x559: @@ ClearReplies()
0x55a: Pop(0)
0x55b: Push((int) 522829)
0x55c: Push((int) 24015)
0x55d: Push((int) 24012)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 522830)
0x561: Push((int) 24014)
0x562: Push((int) 24013)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 24014)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x484

0x56c: Pop(1)
0x56d: Push((int) 522831)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 522839)
0x573: Push((int) 24019)
0x574: Push((int) 24022)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Return(); Pop(0)

0x578: Push((int) 24015)
0x579: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x57b: PushEmpty(string)
0x57c: Stack[-1] = "Neutral"
0x57d: Call2 0x484

0x57e: Pop(1)
0x57f: Push((int) 522832)
0x580: @@ SetMessage(Stack[-1])
0x581: Pop(1)
0x582: @@ ClearReplies()
0x583: Pop(0)
0x584: Push((int) 522833)
0x585: Push((int) 24017)
0x586: Push((int) 24016)
0x587: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(3)
0x589: Push((int) 522840)
0x58a: Push((int) -1)
0x58b: Push((int) 24024)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Return(); Pop(0)

0x58f: Push((int) 24017)
0x590: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x592: PushEmpty(string)
0x593: Stack[-1] = "Doubt"
0x594: Call2 0x484

0x595: Pop(1)
0x596: Push((int) 522834)
0x597: @@ SetMessage(Stack[-1])
0x598: Pop(1)
0x599: @@ ClearReplies()
0x59a: Pop(0)
0x59b: Push((int) 522835)
0x59c: Push((int) 24019)
0x59d: Push((int) 24018)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push((int) 522841)
0x5a1: Push((int) -1)
0x5a2: Push((int) 24025)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 24019)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Neutral"
0x5ab: Call2 0x484

0x5ac: Pop(1)
0x5ad: Push((int) 522836)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 522837)
0x5b3: Push((int) 24021)
0x5b4: Push((int) 24020)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 24021)
0x5b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Neutral"
0x5bd: Call2 0x484

0x5be: Pop(1)
0x5bf: Push((int) 522838)
0x5c0: @@ SetMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: @@ ClearReplies()
0x5c3: Pop(0)
0x5c4: Push((int) 522843)
0x5c5: Push((int) -1)
0x5c6: Push((int) 24027)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Push((int) 522842)
0x5ca: Push((int) -1)
0x5cb: Push((int) 24026)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Return(); Pop(0)

0x5cf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5d0: PushEmpty(bool)
0x5d1: Call2 0xce1

0x5d2: Pop(0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d4: @ lshStopAnimation()
0x5d5: Pop(0)
0x5d6: GOTO 0x5d9

0x5d7: @ StopAnimation()
0x5d8: Pop(0)
0x5d9: Return(); Pop(0)

0x5da: GOTO 0x49b

0x5db: Return(); Pop(0)

0x5dc: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5dd: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5de: PushEmpty(bool, object, float)
0x5df: Stack[-2] = Stack[-12]
0x5e0: Stack[-1] = (float) 70.0
0x5e1: Call2 0xb6e

0x5e2: Pop(2)
0x5e3: Pop(1); Push((bool) Stack[-1] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: Stack[-10] = (int) -2
0x5e6: Return(); Pop(8)

0x5e7: @ CreateDialog(Stack[-4])
0x5e8: Pop(0)
0x5e9: PushEmpty(int)
0x5ea: Call2 0xcdb

0x5eb: Pop(0)
0x5ec: @@ SetNPCName(Stack[-1])
0x5ed: Pop(1)
0x5ee: PushEmpty(int)
0x5ef: Call2 0xcd9

0x5f0: Pop(0)
0x5f1: @@ SetNPCDescription(Stack[-1])
0x5f2: Pop(1)
0x5f3: PushEmpty(string)
0x5f4: Call2 0xcdd

0x5f5: Pop(0)
0x5f6: @@ SetPhoto(Stack[-1])
0x5f7: Pop(1)
0x5f8: PushEmpty(string)
0x5f9: Call2 0xcdf

0x5fa: Pop(0)
0x5fb: @@ SetPhoto2(Stack[-1])
0x5fc: Pop(1)
0x5fd: PushEmpty(int)
0x5fe: Call2 0xe1f

0x5ff: Pop(0)
0x600: @@ SetPlayerName(Stack[-1])
0x601: Pop(1)
0x602: Stack[-2] = (int) -1
0x603: @ IsOverrideActive(Stack[-3])
0x604: Pop(0)
0x605: Push(Stack[-3])
0x606: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x607: Stack[-10] = (int) -2
0x608: Return(); Pop(8)

0x609: @ DoDialog(Stack[-4])
0x60a: Pop(0)
0x60b: PushEmpty(bool, object)
0x60c: PushEmpty(object)
0x60d: Call2 0xc84

0x60e: Stack[-2] = Stack[-1]
0x60f: Pop(1)
0x610: Call2 0xbc5

0x611: Pop(2)
0x612: PushEmpty(object, object)
0x613: Stack[-2] = Stack[-11]
0x614: Stack[-1] = Stack[-6]
0x615: Push(-2, 4); TaskCall(5)
0x616: Call2 0x62d

0x617: Pop(-2, 4); TaskReturn
0x618: Pop(2)
0x619: @@ IsDialogEnd(Stack[-1])
0x61a: Pop(0)
0x61b: Pop(0); Push((bool) Stack[-1] == 0)
0x61c: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x61d: @ sync()
0x61e: Pop(0)
0x61f: @@ IsDialogEnd(Stack[-1])
0x620: Pop(0)
0x621: GOTO 0x61b

0x622: PushEmpty(object)
0x623: Stack[-1] = Stack[-10]
0x624: Call2 0xbb3

0x625: Pop(1)
0x626: @ StopDialog(Stack[-4])
0x627: Pop(0)
0x628: @@ GetReturnValue(Stack[-2])
0x629: Pop(0)
0x62a: Stack[-10] = Stack[-2]
0x62b: Return(); Pop(8)

0x62c: Stack[-4] = 0
0x62d: PushEmpty()
0x62e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x62f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x630: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x631: Push((int) 1)
0x632: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x633: PushEmpty(string)
0x634: Stack[-1] = "Neutral"
0x635: Call2 0x6aa

0x636: Pop(1)
0x637: Push((int) 524719)
0x638: @@ SetMessage(Stack[-1])
0x639: Pop(1)
0x63a: @@ ClearReplies()
0x63b: Pop(0)
0x63c: PushEmpty(bool)
0x63d: Stack[-1] = (bool) 0
0x63e: PushEmpty(bool)
0x63f: Stack[-1] = (bool) 0
0x640: PushEmpty(bool, object)
0x641: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x642: Call2 0xd8e

0x643: Pop(1)
0x644: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0xd9a

0x648: Pop(1)
0x649: Pop(1); Push((bool) Stack[-1] == 0)
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: Stack[-1] = (bool) 1
0x64c: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64d: PushEmpty(bool, object)
0x64e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64f: Call2 0xda6

0x650: Pop(1)
0x651: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x652: Stack[-1] = (bool) 1
0x653: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x654: Push((int) 524720)
0x655: Push((int) 32206)
0x656: Push((int) 26059)
0x657: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x658: Pop(3)
0x659: PushEmpty(bool)
0x65a: Stack[-1] = (bool) 0
0x65b: PushEmpty(bool, object)
0x65c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65d: Call2 0xd9a

0x65e: Pop(1)
0x65f: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x660: PushEmpty(bool, object)
0x661: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x662: Call2 0xd8e

0x663: Pop(1)
0x664: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x665: Stack[-1] = (bool) 1
0x666: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x667: Push((int) 524724)
0x668: Push((int) 32212)
0x669: Push((int) 26063)
0x66a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(3)
0x66c: PushEmpty(bool)
0x66d: Stack[-1] = (bool) 0
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x670: Call2 0xdca

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x673: PushEmpty(bool, object)
0x674: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x675: Call2 0xdd6

0x676: Pop(1)
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: Stack[-1] = (bool) 1
0x679: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67a: Push((int) 530453)
0x67b: Push((int) 32226)
0x67c: Push((int) 31819)
0x67d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: Push((int) 524721)
0x680: Push((int) -1)
0x681: Push((int) 26060)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Push((int) 530884)
0x685: Push((int) -1)
0x686: Push((int) 32205)
0x687: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x688: Pop(3)
0x689: GOTO 0x68c

0x68a: Return(); Pop(0)

0x68b: GOTO 0x631

0x68c: PushEmpty(bool)
0x68d: Call2 0xce1

0x68e: Pop(0)
0x68f: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x690: @ lshWaitForAnimEnd()
0x691: Pop(0)
0x692: Push( Stack[3 + Tasks[-1].StackPointer] )
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: GOTO 0x69a

0x695: PushEmpty(string)
0x696: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x697: Call2 0xc4f

0x698: Pop(1)
0x699: GOTO 0x690

0x69a: GOTO 0x6a9

0x69b: Push("all")
0x69c: Push("idle")
0x69d: @ PlayAnimation(Stack[-2], Stack[-1])
0x69e: Pop(2)
0x69f: @ WaitForAnimEnd()
0x6a0: Pop(0)
0x6a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: GOTO 0x6a9

0x6a4: Push("all")
0x6a5: Push("idle")
0x6a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x6a7: Pop(2)
0x6a8: GOTO 0x69f

0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty(bool)
0x6ac: Call2 0xce1

0x6ad: Pop(0)
0x6ae: Pop(1); Push((bool) Stack[-1] == 0)
0x6af: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6b0: Return(); Pop(0)

0x6b1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b3: Return(); Pop(0)

0x6b4: PushEmpty(string, bool)
0x6b5: Stack[-2] = Stack[-3]
0x6b6: Push("")
0x6b7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: Stack[-1] = (bool) 0
0x6ba: GOTO 0x6bc

0x6bb: Stack[-1] = (bool) 1
0x6bc: Call2 0xc5f

0x6bd: Pop(2)
0x6be: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty()
0x6c1: Push((int) 1)
0x6c2: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x6c3: PushEmpty()
0x6c4: Call2 0xc7d

0x6c5: Pop(0)
0x6c6: Push((int) 26059)
0x6c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c9: PushEmpty(object, object)
0x6ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6cc: Call2 0xd12

0x6cd: Pop(2)
0x6ce: Push((int) 26065)
0x6cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d1: PushEmpty(object, object)
0x6d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d4: Call2 0xd0b

0x6d5: Pop(2)
0x6d6: Push((int) 31819)
0x6d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d8: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6d9: PushEmpty(object, object)
0x6da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6dc: Call2 0xd24

0x6dd: Pop(2)
0x6de: Push((int) 31825)
0x6df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e1: PushEmpty(object, object)
0x6e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e4: Call2 0xd3a

0x6e5: Pop(2)
0x6e6: PushEmpty(object, object)
0x6e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e9: Call2 0xd2a

0x6ea: Pop(2)
0x6eb: Push((int) 26058)
0x6ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x6ee: PushEmpty(string)
0x6ef: Stack[-1] = "Neutral"
0x6f0: Call2 0x6aa

0x6f1: Pop(1)
0x6f2: Push((int) 524719)
0x6f3: @@ SetMessage(Stack[-1])
0x6f4: Pop(1)
0x6f5: @@ ClearReplies()
0x6f6: Pop(0)
0x6f7: PushEmpty(bool)
0x6f8: Stack[-1] = (bool) 0
0x6f9: PushEmpty(bool)
0x6fa: Stack[-1] = (bool) 0
0x6fb: PushEmpty(bool, object)
0x6fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fd: Call2 0xd8e

0x6fe: Pop(1)
0x6ff: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x700: PushEmpty(bool, object)
0x701: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x702: Call2 0xd9a

0x703: Pop(1)
0x704: Pop(1); Push((bool) Stack[-1] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Stack[-1] = (bool) 1
0x707: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x708: PushEmpty(bool, object)
0x709: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70a: Call2 0xda6

0x70b: Pop(1)
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: Stack[-1] = (bool) 1
0x70e: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x70f: Push((int) 524720)
0x710: Push((int) 32206)
0x711: Push((int) 26059)
0x712: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x713: Pop(3)
0x714: PushEmpty(bool)
0x715: Stack[-1] = (bool) 0
0x716: PushEmpty(bool, object)
0x717: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x718: Call2 0xd9a

0x719: Pop(1)
0x71a: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71b: PushEmpty(bool, object)
0x71c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71d: Call2 0xd8e

0x71e: Pop(1)
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Stack[-1] = (bool) 1
0x721: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x722: Push((int) 524724)
0x723: Push((int) 32212)
0x724: Push((int) 26063)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: PushEmpty(bool)
0x728: Stack[-1] = (bool) 0
0x729: PushEmpty(bool, object)
0x72a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72b: Call2 0xdca

0x72c: Pop(1)
0x72d: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72e: PushEmpty(bool, object)
0x72f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x730: Call2 0xdd6

0x731: Pop(1)
0x732: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x733: Stack[-1] = (bool) 1
0x734: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x735: Push((int) 530453)
0x736: Push((int) 32226)
0x737: Push((int) 31819)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: Push((int) 524721)
0x73b: Push((int) -1)
0x73c: Push((int) 26060)
0x73d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: Push((int) 530884)
0x740: Push((int) -1)
0x741: Push((int) 32205)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: Return(); Pop(0)

0x745: Push((int) 32226)
0x746: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x748: PushEmpty(string)
0x749: Stack[-1] = "Neutral"
0x74a: Call2 0x6aa

0x74b: Pop(1)
0x74c: Push((int) 530902)
0x74d: @@ SetMessage(Stack[-1])
0x74e: Pop(1)
0x74f: @@ ClearReplies()
0x750: Pop(0)
0x751: Push((int) 530903)
0x752: Push((int) 32228)
0x753: Push((int) 32227)
0x754: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x755: Pop(3)
0x756: Push((int) 530906)
0x757: Push((int) 32228)
0x758: Push((int) 32230)
0x759: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75a: Pop(3)
0x75b: Return(); Pop(0)

0x75c: Push((int) 32228)
0x75d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x75f: PushEmpty(string)
0x760: Stack[-1] = "Neutral"
0x761: Call2 0x6aa

0x762: Pop(1)
0x763: Push((int) 530904)
0x764: @@ SetMessage(Stack[-1])
0x765: Pop(1)
0x766: @@ ClearReplies()
0x767: Pop(0)
0x768: Push((int) 530905)
0x769: Push((int) 31820)
0x76a: Push((int) 32229)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: Push((int) 530907)
0x76e: Push((int) 32233)
0x76f: Push((int) 32232)
0x770: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x771: Pop(3)
0x772: Return(); Pop(0)

0x773: Push((int) 32233)
0x774: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x776: PushEmpty(string)
0x777: Stack[-1] = "Agression"
0x778: Call2 0x6aa

0x779: Pop(1)
0x77a: Push((int) 530908)
0x77b: @@ SetMessage(Stack[-1])
0x77c: Pop(1)
0x77d: @@ ClearReplies()
0x77e: Pop(0)
0x77f: Push((int) 530909)
0x780: Push((int) -1)
0x781: Push((int) 32234)
0x782: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x783: Pop(3)
0x784: Push((int) 530910)
0x785: Push((int) -1)
0x786: Push((int) 32235)
0x787: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x788: Pop(3)
0x789: Return(); Pop(0)

0x78a: Push((int) 31820)
0x78b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x78d: PushEmpty(string)
0x78e: Stack[-1] = "Neutral"
0x78f: Call2 0x6aa

0x790: Pop(1)
0x791: Push((int) 530454)
0x792: @@ SetMessage(Stack[-1])
0x793: Pop(1)
0x794: @@ ClearReplies()
0x795: Pop(0)
0x796: Push((int) 530455)
0x797: Push((int) 31822)
0x798: Push((int) 31821)
0x799: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79a: Pop(3)
0x79b: Push((int) 530911)
0x79c: Push((int) 31822)
0x79d: Push((int) 32236)
0x79e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79f: Pop(3)
0x7a0: Return(); Pop(0)

0x7a1: Push((int) 31822)
0x7a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7a4: PushEmpty(string)
0x7a5: Stack[-1] = "Untrust"
0x7a6: Call2 0x6aa

0x7a7: Pop(1)
0x7a8: Push((int) 530456)
0x7a9: @@ SetMessage(Stack[-1])
0x7aa: Pop(1)
0x7ab: @@ ClearReplies()
0x7ac: Pop(0)
0x7ad: Push((int) 530457)
0x7ae: Push((int) 31824)
0x7af: Push((int) 31823)
0x7b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: Push((int) 530912)
0x7b3: Push((int) 32239)
0x7b4: Push((int) 32238)
0x7b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b6: Pop(3)
0x7b7: Return(); Pop(0)

0x7b8: Push((int) 32239)
0x7b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7bb: PushEmpty(string)
0x7bc: Stack[-1] = "Neutral"
0x7bd: Call2 0x6aa

0x7be: Pop(1)
0x7bf: Push((int) 530913)
0x7c0: @@ SetMessage(Stack[-1])
0x7c1: Pop(1)
0x7c2: @@ ClearReplies()
0x7c3: Pop(0)
0x7c4: Push((int) 530914)
0x7c5: Push((int) 31824)
0x7c6: Push((int) 32240)
0x7c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c8: Pop(3)
0x7c9: Push((int) 530915)
0x7ca: Push((int) -1)
0x7cb: Push((int) 32241)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: Return(); Pop(0)

0x7cf: Push((int) 31824)
0x7d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7d2: PushEmpty(string)
0x7d3: Stack[-1] = "Neutral"
0x7d4: Call2 0x6aa

0x7d5: Pop(1)
0x7d6: Push((int) 530458)
0x7d7: @@ SetMessage(Stack[-1])
0x7d8: Pop(1)
0x7d9: @@ ClearReplies()
0x7da: Pop(0)
0x7db: Push((int) 530459)
0x7dc: Push((int) -1)
0x7dd: Push((int) 31825)
0x7de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7df: Pop(3)
0x7e0: Return(); Pop(0)

0x7e1: Push((int) 32212)
0x7e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7e4: PushEmpty(string)
0x7e5: Stack[-1] = "Untrust"
0x7e6: Call2 0x6aa

0x7e7: Pop(1)
0x7e8: Push((int) 530891)
0x7e9: @@ SetMessage(Stack[-1])
0x7ea: Pop(1)
0x7eb: @@ ClearReplies()
0x7ec: Pop(0)
0x7ed: Push((int) 530892)
0x7ee: Push((int) 32215)
0x7ef: Push((int) 32213)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Push((int) 530893)
0x7f3: Push((int) -1)
0x7f4: Push((int) 32214)
0x7f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f6: Pop(3)
0x7f7: Return(); Pop(0)

0x7f8: Push((int) 32215)
0x7f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x7fb: PushEmpty(string)
0x7fc: Stack[-1] = "Neutral"
0x7fd: Call2 0x6aa

0x7fe: Pop(1)
0x7ff: Push((int) 530894)
0x800: @@ SetMessage(Stack[-1])
0x801: Pop(1)
0x802: @@ ClearReplies()
0x803: Pop(0)
0x804: Push((int) 530896)
0x805: Push((int) 32219)
0x806: Push((int) 32217)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Push((int) 530895)
0x80a: Push((int) 32219)
0x80b: Push((int) 32216)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Push((int) 530897)
0x80f: Push((int) 32219)
0x810: Push((int) 32218)
0x811: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x812: Pop(3)
0x813: Return(); Pop(0)

0x814: Push((int) 32219)
0x815: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x817: PushEmpty(string)
0x818: Stack[-1] = "Neutral"
0x819: Call2 0x6aa

0x81a: Pop(1)
0x81b: Push((int) 530898)
0x81c: @@ SetMessage(Stack[-1])
0x81d: Pop(1)
0x81e: @@ ClearReplies()
0x81f: Pop(0)
0x820: Push((int) 530899)
0x821: Push((int) 26064)
0x822: Push((int) 32220)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: Push((int) 530901)
0x826: Push((int) 26064)
0x827: Push((int) 32224)
0x828: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x829: Pop(3)
0x82a: Return(); Pop(0)

0x82b: Push((int) 26064)
0x82c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x82e: PushEmpty(string)
0x82f: Stack[-1] = "Neutral"
0x830: Call2 0x6aa

0x831: Pop(1)
0x832: Push((int) 524725)
0x833: @@ SetMessage(Stack[-1])
0x834: Pop(1)
0x835: @@ ClearReplies()
0x836: Pop(0)
0x837: Push((int) 524726)
0x838: Push((int) -1)
0x839: Push((int) 26065)
0x83a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83b: Pop(3)
0x83c: Return(); Pop(0)

0x83d: Push((int) 32206)
0x83e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x840: PushEmpty(string)
0x841: Stack[-1] = "Neutral"
0x842: Call2 0x6aa

0x843: Pop(1)
0x844: Push((int) 530885)
0x845: @@ SetMessage(Stack[-1])
0x846: Pop(1)
0x847: @@ ClearReplies()
0x848: Pop(0)
0x849: Push((int) 530886)
0x84a: Push((int) 32208)
0x84b: Push((int) 32207)
0x84c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84d: Pop(3)
0x84e: Return(); Pop(0)

0x84f: Push((int) 32208)
0x850: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x851: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x852: PushEmpty(string)
0x853: Stack[-1] = "Neutral"
0x854: Call2 0x6aa

0x855: Pop(1)
0x856: Push((int) 530887)
0x857: @@ SetMessage(Stack[-1])
0x858: Pop(1)
0x859: @@ ClearReplies()
0x85a: Pop(0)
0x85b: Push((int) 530888)
0x85c: Push((int) 26061)
0x85d: Push((int) 32209)
0x85e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85f: Pop(3)
0x860: Push((int) 530889)
0x861: Push((int) -1)
0x862: Push((int) 32210)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: Return(); Pop(0)

0x866: Push((int) 26061)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x869: PushEmpty(string)
0x86a: Stack[-1] = "Neutral"
0x86b: Call2 0x6aa

0x86c: Pop(1)
0x86d: Push((int) 524722)
0x86e: @@ SetMessage(Stack[-1])
0x86f: Pop(1)
0x870: @@ ClearReplies()
0x871: Pop(0)
0x872: Push((int) 524723)
0x873: Push((int) -1)
0x874: Push((int) 26062)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: Push((int) 530890)
0x878: Push((int) -1)
0x879: Push((int) 32211)
0x87a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87b: Pop(3)
0x87c: Return(); Pop(0)

0x87d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x87e: PushEmpty(bool)
0x87f: Call2 0xce1

0x880: Pop(0)
0x881: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x882: @ lshStopAnimation()
0x883: Pop(0)
0x884: GOTO 0x887

0x885: @ StopAnimation()
0x886: Pop(0)
0x887: Return(); Pop(0)

0x888: GOTO 0x6c1

0x889: Return(); Pop(0)

0x88a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x88b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x88c: PushEmpty(bool, object, float)
0x88d: Stack[-2] = Stack[-12]
0x88e: Stack[-1] = (float) 70.0
0x88f: Call2 0xb6e

0x890: Pop(2)
0x891: Pop(1); Push((bool) Stack[-1] == 0)
0x892: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x893: Stack[-10] = (int) -2
0x894: Return(); Pop(8)

0x895: @ CreateDialog(Stack[-4])
0x896: Pop(0)
0x897: PushEmpty(int)
0x898: Call2 0xcdb

0x899: Pop(0)
0x89a: @@ SetNPCName(Stack[-1])
0x89b: Pop(1)
0x89c: PushEmpty(int)
0x89d: Call2 0xcd9

0x89e: Pop(0)
0x89f: @@ SetNPCDescription(Stack[-1])
0x8a0: Pop(1)
0x8a1: PushEmpty(string)
0x8a2: Call2 0xcdd

0x8a3: Pop(0)
0x8a4: @@ SetPhoto(Stack[-1])
0x8a5: Pop(1)
0x8a6: PushEmpty(string)
0x8a7: Call2 0xcdf

0x8a8: Pop(0)
0x8a9: @@ SetPhoto2(Stack[-1])
0x8aa: Pop(1)
0x8ab: PushEmpty(int)
0x8ac: Call2 0xe1f

0x8ad: Pop(0)
0x8ae: @@ SetPlayerName(Stack[-1])
0x8af: Pop(1)
0x8b0: Stack[-2] = (int) -1
0x8b1: @ IsOverrideActive(Stack[-3])
0x8b2: Pop(0)
0x8b3: Push(Stack[-3])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b5: Stack[-10] = (int) -2
0x8b6: Return(); Pop(8)

0x8b7: @ DoDialog(Stack[-4])
0x8b8: Pop(0)
0x8b9: PushEmpty(bool, object)
0x8ba: PushEmpty(object)
0x8bb: Call2 0xc84

0x8bc: Stack[-2] = Stack[-1]
0x8bd: Pop(1)
0x8be: Call2 0xbc5

0x8bf: Pop(2)
0x8c0: PushEmpty(object, object)
0x8c1: Stack[-2] = Stack[-11]
0x8c2: Stack[-1] = Stack[-6]
0x8c3: Push(-2, 4); TaskCall(7)
0x8c4: Call2 0x8db

0x8c5: Pop(-2, 4); TaskReturn
0x8c6: Pop(2)
0x8c7: @@ IsDialogEnd(Stack[-1])
0x8c8: Pop(0)
0x8c9: Pop(0); Push((bool) Stack[-1] == 0)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8cb: @ sync()
0x8cc: Pop(0)
0x8cd: @@ IsDialogEnd(Stack[-1])
0x8ce: Pop(0)
0x8cf: GOTO 0x8c9

0x8d0: PushEmpty(object)
0x8d1: Stack[-1] = Stack[-10]
0x8d2: Call2 0xbb3

0x8d3: Pop(1)
0x8d4: @ StopDialog(Stack[-4])
0x8d5: Pop(0)
0x8d6: @@ GetReturnValue(Stack[-2])
0x8d7: Pop(0)
0x8d8: Stack[-10] = Stack[-2]
0x8d9: Return(); Pop(8)

0x8da: Stack[-4] = 0
0x8db: PushEmpty()
0x8dc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8dd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8de: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8df: Push((int) 1)
0x8e0: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8e1: PushEmpty(string)
0x8e2: Stack[-1] = "Neutral"
0x8e3: Call2 0x915

0x8e4: Pop(1)
0x8e5: Push((int) 530875)
0x8e6: @@ SetMessage(Stack[-1])
0x8e7: Pop(1)
0x8e8: @@ ClearReplies()
0x8e9: Pop(0)
0x8ea: Push((int) 530876)
0x8eb: Push((int) 32199)
0x8ec: Push((int) 32195)
0x8ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ee: Pop(3)
0x8ef: Push((int) 530877)
0x8f0: Push((int) 32197)
0x8f1: Push((int) 32196)
0x8f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f3: Pop(3)
0x8f4: GOTO 0x8f7

0x8f5: Return(); Pop(0)

0x8f6: GOTO 0x8df

0x8f7: PushEmpty(bool)
0x8f8: Call2 0xce1

0x8f9: Pop(0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x8fb: @ lshWaitForAnimEnd()
0x8fc: Pop(0)
0x8fd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8fe: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8ff: GOTO 0x905

0x900: PushEmpty(string)
0x901: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x902: Call2 0xc4f

0x903: Pop(1)
0x904: GOTO 0x8fb

0x905: GOTO 0x914

0x906: Push("all")
0x907: Push("idle")
0x908: @ PlayAnimation(Stack[-2], Stack[-1])
0x909: Pop(2)
0x90a: @ WaitForAnimEnd()
0x90b: Pop(0)
0x90c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: GOTO 0x914

0x90f: Push("all")
0x910: Push("idle")
0x911: @ PlayAnimation(Stack[-2], Stack[-1])
0x912: Pop(2)
0x913: GOTO 0x90a

0x914: Return(); Pop(0)

0x915: PushEmpty()
0x916: PushEmpty(bool)
0x917: Call2 0xce1

0x918: Pop(0)
0x919: Pop(1); Push((bool) Stack[-1] == 0)
0x91a: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91b: Return(); Pop(0)

0x91c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91d: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91e: Return(); Pop(0)

0x91f: PushEmpty(string, bool)
0x920: Stack[-2] = Stack[-3]
0x921: Push("")
0x922: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x924: Stack[-1] = (bool) 0
0x925: GOTO 0x927

0x926: Stack[-1] = (bool) 1
0x927: Call2 0xc5f

0x928: Pop(2)
0x929: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x92a: Return(); Pop(0)

0x92b: PushEmpty()
0x92c: Push((int) 1)
0x92d: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x92e: PushEmpty()
0x92f: Call2 0xc7d

0x930: Pop(0)
0x931: Push((int) 32194)
0x932: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x934: PushEmpty(string)
0x935: Stack[-1] = "Neutral"
0x936: Call2 0x915

0x937: Pop(1)
0x938: Push((int) 530875)
0x939: @@ SetMessage(Stack[-1])
0x93a: Pop(1)
0x93b: @@ ClearReplies()
0x93c: Pop(0)
0x93d: Push((int) 530876)
0x93e: Push((int) 32199)
0x93f: Push((int) 32195)
0x940: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x941: Pop(3)
0x942: Push((int) 530877)
0x943: Push((int) 32197)
0x944: Push((int) 32196)
0x945: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x946: Pop(3)
0x947: Return(); Pop(0)

0x948: Push((int) 32197)
0x949: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94a: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x94b: PushEmpty(string)
0x94c: Stack[-1] = "Neutral"
0x94d: Call2 0x915

0x94e: Pop(1)
0x94f: Push((int) 530878)
0x950: @@ SetMessage(Stack[-1])
0x951: Pop(1)
0x952: @@ ClearReplies()
0x953: Pop(0)
0x954: Push((int) 530879)
0x955: Push((int) 32199)
0x956: Push((int) 32198)
0x957: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x958: Pop(3)
0x959: Push((int) 530881)
0x95a: Push((int) 32199)
0x95b: Push((int) 32200)
0x95c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95d: Pop(3)
0x95e: Return(); Pop(0)

0x95f: Push((int) 32199)
0x960: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x961: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x962: PushEmpty(string)
0x963: Stack[-1] = "Neutral"
0x964: Call2 0x915

0x965: Pop(1)
0x966: Push((int) 530880)
0x967: @@ SetMessage(Stack[-1])
0x968: Pop(1)
0x969: @@ ClearReplies()
0x96a: Pop(0)
0x96b: Push((int) 530882)
0x96c: Push((int) -1)
0x96d: Push((int) 32203)
0x96e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96f: Pop(3)
0x970: Push((int) 530883)
0x971: Push((int) -1)
0x972: Push((int) 32204)
0x973: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(3)
0x975: Return(); Pop(0)

0x976: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x977: PushEmpty(bool)
0x978: Call2 0xce1

0x979: Pop(0)
0x97a: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x97b: @ lshStopAnimation()
0x97c: Pop(0)
0x97d: GOTO 0x980

0x97e: @ StopAnimation()
0x97f: Pop(0)
0x980: Return(); Pop(0)

0x981: GOTO 0x92c

0x982: Return(); Pop(0)

0x983: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x984: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x985: PushEmpty(bool, object, float)
0x986: Stack[-2] = Stack[-12]
0x987: Stack[-1] = (float) 70.0
0x988: Call2 0xb6e

0x989: Pop(2)
0x98a: Pop(1); Push((bool) Stack[-1] == 0)
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: Stack[-10] = (int) -2
0x98d: Return(); Pop(8)

0x98e: @ CreateDialog(Stack[-4])
0x98f: Pop(0)
0x990: PushEmpty(int)
0x991: Call2 0xcdb

0x992: Pop(0)
0x993: @@ SetNPCName(Stack[-1])
0x994: Pop(1)
0x995: PushEmpty(int)
0x996: Call2 0xcd9

0x997: Pop(0)
0x998: @@ SetNPCDescription(Stack[-1])
0x999: Pop(1)
0x99a: PushEmpty(string)
0x99b: Call2 0xcdd

0x99c: Pop(0)
0x99d: @@ SetPhoto(Stack[-1])
0x99e: Pop(1)
0x99f: PushEmpty(string)
0x9a0: Call2 0xcdf

0x9a1: Pop(0)
0x9a2: @@ SetPhoto2(Stack[-1])
0x9a3: Pop(1)
0x9a4: PushEmpty(int)
0x9a5: Call2 0xe1f

0x9a6: Pop(0)
0x9a7: @@ SetPlayerName(Stack[-1])
0x9a8: Pop(1)
0x9a9: Stack[-2] = (int) -1
0x9aa: @ IsOverrideActive(Stack[-3])
0x9ab: Pop(0)
0x9ac: Push(Stack[-3])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ae: Stack[-10] = (int) -2
0x9af: Return(); Pop(8)

0x9b0: @ DoDialog(Stack[-4])
0x9b1: Pop(0)
0x9b2: PushEmpty(bool, object)
0x9b3: PushEmpty(object)
0x9b4: Call2 0xc84

0x9b5: Stack[-2] = Stack[-1]
0x9b6: Pop(1)
0x9b7: Call2 0xbc5

0x9b8: Pop(2)
0x9b9: PushEmpty(object, object)
0x9ba: Stack[-2] = Stack[-11]
0x9bb: Stack[-1] = Stack[-6]
0x9bc: Push(-2, 4); TaskCall(9)
0x9bd: Call2 0x9d4

0x9be: Pop(-2, 4); TaskReturn
0x9bf: Pop(2)
0x9c0: @@ IsDialogEnd(Stack[-1])
0x9c1: Pop(0)
0x9c2: Pop(0); Push((bool) Stack[-1] == 0)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c4: @ sync()
0x9c5: Pop(0)
0x9c6: @@ IsDialogEnd(Stack[-1])
0x9c7: Pop(0)
0x9c8: GOTO 0x9c2

0x9c9: PushEmpty(object)
0x9ca: Stack[-1] = Stack[-10]
0x9cb: Call2 0xbb3

0x9cc: Pop(1)
0x9cd: @ StopDialog(Stack[-4])
0x9ce: Pop(0)
0x9cf: @@ GetReturnValue(Stack[-2])
0x9d0: Pop(0)
0x9d1: Stack[-10] = Stack[-2]
0x9d2: Return(); Pop(8)

0x9d3: Stack[-4] = 0
0x9d4: PushEmpty()
0x9d5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9d6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9d7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9d8: Push((int) 1)
0x9d9: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9da: PushEmpty(string)
0x9db: Stack[-1] = "Neutral"
0x9dc: Call2 0xa0e

0x9dd: Pop(1)
0x9de: Push((int) 540554)
0x9df: @@ SetMessage(Stack[-1])
0x9e0: Pop(1)
0x9e1: @@ ClearReplies()
0x9e2: Pop(0)
0x9e3: Push((int) 540555)
0x9e4: Push((int) -1)
0x9e5: Push((int) 42564)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: Push((int) 540794)
0x9e9: Push((int) -1)
0x9ea: Push((int) 42843)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: GOTO 0x9f0

0x9ee: Return(); Pop(0)

0x9ef: GOTO 0x9d8

0x9f0: PushEmpty(bool)
0x9f1: Call2 0xce1

0x9f2: Pop(0)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9f4: @ lshWaitForAnimEnd()
0x9f5: Pop(0)
0x9f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9f7: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f8: GOTO 0x9fe

0x9f9: PushEmpty(string)
0x9fa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9fb: Call2 0xc4f

0x9fc: Pop(1)
0x9fd: GOTO 0x9f4

0x9fe: GOTO 0xa0d

0x9ff: Push("all")
0xa00: Push("idle")
0xa01: @ PlayAnimation(Stack[-2], Stack[-1])
0xa02: Pop(2)
0xa03: @ WaitForAnimEnd()
0xa04: Pop(0)
0xa05: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa06: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0xa07: GOTO 0xa0d

0xa08: Push("all")
0xa09: Push("idle")
0xa0a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa0b: Pop(2)
0xa0c: GOTO 0xa03

0xa0d: Return(); Pop(0)

0xa0e: PushEmpty()
0xa0f: PushEmpty(bool)
0xa10: Call2 0xce1

0xa11: Pop(0)
0xa12: Pop(1); Push((bool) Stack[-1] == 0)
0xa13: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa14: Return(); Pop(0)

0xa15: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa16: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa17: Return(); Pop(0)

0xa18: PushEmpty(string, bool)
0xa19: Stack[-2] = Stack[-3]
0xa1a: Push("")
0xa1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1d: Stack[-1] = (bool) 0
0xa1e: GOTO 0xa20

0xa1f: Stack[-1] = (bool) 1
0xa20: Call2 0xc5f

0xa21: Pop(2)
0xa22: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa23: Return(); Pop(0)

0xa24: PushEmpty()
0xa25: Push((int) 1)
0xa26: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa27: PushEmpty()
0xa28: Call2 0xc7d

0xa29: Pop(0)
0xa2a: Push((int) 42563)
0xa2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2c: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa2d: PushEmpty(string)
0xa2e: Stack[-1] = "Neutral"
0xa2f: Call2 0xa0e

0xa30: Pop(1)
0xa31: Push((int) 540554)
0xa32: @@ SetMessage(Stack[-1])
0xa33: Pop(1)
0xa34: @@ ClearReplies()
0xa35: Pop(0)
0xa36: Push((int) 540555)
0xa37: Push((int) -1)
0xa38: Push((int) 42564)
0xa39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3a: Pop(3)
0xa3b: Push((int) 540794)
0xa3c: Push((int) -1)
0xa3d: Push((int) 42843)
0xa3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3f: Pop(3)
0xa40: Return(); Pop(0)

0xa41: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa42: PushEmpty(bool)
0xa43: Call2 0xce1

0xa44: Pop(0)
0xa45: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa46: @ lshStopAnimation()
0xa47: Pop(0)
0xa48: GOTO 0xa4b

0xa49: @ StopAnimation()
0xa4a: Pop(0)
0xa4b: Return(); Pop(0)

0xa4c: GOTO 0xa25

0xa4d: Return(); Pop(0)

0xa4e: PushEmpty()
0xa4f: Call2 0xa52

0xa50: Pop(0)
0xa51: Return(); Pop(0)

0xa52: PushEmpty(bool)
0xa53: Call2 0xb69

0xa54: Pop(0)
0xa55: Pop(1); Push((bool) Stack[-1] == 0)
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: @ Hold()
0xa58: Pop(0)
0xa59: @ GetDirection(Stack[-0])
0xa5a: Pop(0)
0xa5b: PushEmpty()
0xa5c: Call2 0xb02

0xa5d: Pop(0)
0xa5e: GOTO 0xa5b

0xa5f: Return(); Pop(0)

0xa60: PushEmpty(object, object)
0xa61: Push("player")
0xa62: @ FindActor(Stack[-2], Stack[-1])
0xa63: Pop(1)
0xa64: Pop(0); Push((bool) Stack[-1] == 0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa66: Stack[-3] = (bool) 0
0xa67: Return(); Pop(2)

0xa68: PushEmpty(bool, object)
0xa69: Stack[-1] = Stack[-3]
0xa6a: Call2 0xb60

0xa6b: Stack[-5] = Stack[-2]
0xa6c: Pop(2)
0xa6d: Return(); Pop(2)

0xa6e: Stack[-1] = 0
0xa6f: Push(CvectorIndex(Stack[-0], 0))
0xa70: Push(CvectorIndex(Stack[-0], 2))
0xa71: @ RotateAsync(Stack[-2], Stack[-1])
0xa72: Pop(2)
0xa73: Return(); Pop(0)

0xa74: PushEmpty(object, bool, object, bool)
0xa75: Push("player")
0xa76: @ FindActor(Stack[-3], Stack[-1])
0xa77: Pop(1)
0xa78: Pop(0); Push((bool) Stack[-2] == 0)
0xa79: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7a: Stack[-5] = (bool) 0
0xa7b: Return(); Pop(4)

0xa7c: PushEmpty(float, object)
0xa7d: Stack[-1] = Stack[-4]
0xa7e: Call2 0xb4e

0xa7f: Pop(1)
0xa80: Push((float)90000.0)
0xa81: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa83: Stack[-5] = (bool) 0
0xa84: Return(); Pop(4)

0xa85: @ CanSee(Stack[-1], Stack[-2])
0xa86: Pop(0)
0xa87: Stack[-5] = Stack[-1]
0xa88: Return(); Pop(4)

0xa89: Stack[-2] = 0
0xa8a: PushEmpty(float, float)
0xa8b: Push((int) 8)
0xa8c: Push((int) 16)
0xa8d: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xa8e: Pop(2)
0xa8f: Push((int) 10)
0xa90: @ SetTimer(Stack[-1], Stack[-2])
0xa91: Pop(1)
0xa92: Return(); Pop(2)

0xa93: Push((int) 10)
0xa94: @ KillTimer(Stack[-1])
0xa95: Pop(1)
0xa96: Return(); Pop(0)

0xa97: PushEmpty()
0xa98: Push((int) 10)
0xa99: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9a: IF (Stack[-1] == 0) GOTO 0xabc; Pop(1)

0xa9b: PushEmpty()
0xa9c: Call2 0xa93

0xa9d: Pop(0)
0xa9e: PushEmpty(bool)
0xa9f: Stack[-1] = (bool) 0
0xaa0: PushEmpty(bool)
0xaa1: Call2 0xb69

0xaa2: Pop(0)
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa4: PushEmpty(bool)
0xaa5: Call2 0xa74

0xaa6: Pop(0)
0xaa7: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa8: Stack[-1] = (bool) 1
0xaa9: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xaaa: PushEmpty(bool)
0xaab: Call2 0xa60

0xaac: Pop(0)
0xaad: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xaae: PushEmpty(bool, object)
0xaaf: PushEmpty(object)
0xab0: Call2 0xc84

0xab1: Stack[-2] = Stack[-1]
0xab2: Pop(1)
0xab3: Call2 0xbff

0xab4: Pop(2)
0xab5: GOTO 0xabc

0xab6: PushEmpty()
0xab7: Call2 0xa6f

0xab8: Pop(0)
0xab9: PushEmpty()
0xaba: Call2 0xa8a

0xabb: Pop(0)
0xabc: Return(); Pop(0)

0xabd: PushEmpty()
0xabe: Call2 0xb49

0xabf: Pop(0)
0xac0: PushEmpty()
0xac1: Call2 0xa93

0xac2: Pop(0)
0xac3: @ lshStopSpeech()
0xac4: Pop(0)
0xac5: @ lshStopAnimation()
0xac6: Pop(0)
0xac7: @ StopAsync()
0xac8: Pop(0)
0xac9: @ Hold()
0xaca: Pop(0)
0xacb: Return(); Pop(0)

0xacc: @ StopGroup0()
0xacd: Pop(0)
0xace: PushEmpty()
0xacf: Call2 0xa93

0xad0: Pop(0)
0xad1: PushEmpty(string)
0xad2: Stack[-1] = "Neutral"
0xad3: Call2 0xc4f

0xad4: Pop(1)
0xad5: PushEmpty()
0xad6: Call2 0xa8a

0xad7: Pop(0)
0xad8: Return(); Pop(0)

0xad9: PushEmpty()
0xada: Push(Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadc: PushEmpty()
0xadd: Call2 0xa8a

0xade: Pop(0)
0xadf: GOTO 0xae4

0xae0: PushEmpty(string)
0xae1: Stack[-1] = "Neutral"
0xae2: Call2 0xc4f

0xae3: Pop(1)
0xae4: Return(); Pop(0)

0xae5: PushEmpty(bool, bool)
0xae6: @ IsOverrideActive(Stack[-1])
0xae7: Pop(0)
0xae8: Pop(0); Push((bool) Stack[-1] == 0)
0xae9: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaea: EventDisable(0)
0xaeb: PushEmpty()
0xaec: Call2 0xb49

0xaed: Pop(0)
0xaee: PushEmpty(bool, object)
0xaef: Stack[-1] = Stack[-5]
0xaf0: Call2 0xb60

0xaf1: Pop(2)
0xaf2: EventEnable(0)
0xaf3: PushEmpty(object)
0xaf4: Stack[-1] = Stack[-4]
0xaf5: Call2 0xe30

0xaf6: Pop(1)
0xaf7: PushEmpty(string)
0xaf8: Stack[-1] = "Neutral"
0xaf9: Call2 0xc4f

0xafa: Pop(1)
0xafb: PushEmpty()
0xafc: Call2 0xa93

0xafd: Pop(0)
0xafe: PushEmpty()
0xaff: Call2 0xa8a

0xb00: Pop(0)
0xb01: Return(); Pop(2)

0xb02: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xb03: @ WaitForAnimEnd()
0xb04: Pop(0)
0xb05: PushEmpty(bool)
0xb06: Call2 0xb69

0xb07: Pop(0)
0xb08: Pop(1); Push((bool) Stack[-1] == 0)
0xb09: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xb0a: Return(); Pop(12)

0xb0b: PushEmpty(int)
0xb0c: Call2 0xcc8

0xb0d: Stack[-7] = Stack[-1]
0xb0e: Pop(1)
0xb0f: Stack[-5] = (int) 0
0xb10: PushEmpty(bool)
0xb11: Stack[-1] = (bool) 0
0xb12: Push((int) 5)
0xb13: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb14: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb15: PushEmpty(bool)
0xb16: Call2 0xb69

0xb17: Pop(0)
0xb18: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb19: Stack[-1] = (bool) 1
0xb1a: IF (Stack[-1] == 0) GOTO 0xb44; Pop(1)

0xb1b: Pop(0); Push((bool) Stack[-6] == 0)
0xb1c: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb1d: Push((int) 3)
0xb1e: @ Sleep(Stack[-1], Stack[-5])
0xb1f: Pop(1)
0xb20: Pop(0); Push((bool) Stack[-4] == 0)
0xb21: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb22: GOTO 0xb44

0xb23: GOTO 0xb39

0xb24: @ irand(Stack[-3], Stack[-6])
0xb25: Pop(0)
0xb26: Push((int) 5)
0xb27: @ irand(Stack[-3], Stack[-1])
0xb28: Pop(1)
0xb29: Push((int) 0)
0xb2a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-3] = (int) 0
0xb2d: Push("all")
0xb2e: PushEmpty(string, int)
0xb2f: Stack[-1] = Stack[-6]
0xb30: Call2 0xcc1

0xb31: Pop(1)
0xb32: @ PlayAnimation(Stack[-2], Stack[-1])
0xb33: Pop(2)
0xb34: @ WaitForAnimEnd(Stack[-1])
0xb35: Pop(0)
0xb36: Pop(0); Push((bool) Stack[-1] == 0)
0xb37: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb38: GOTO 0xb44

0xb39: PushEmpty(bool)
0xb3a: Call2 0xb47

0xb3b: Pop(0)
0xb3c: Pop(1); Push((bool) Stack[-1] == 0)
0xb3d: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3e: GOTO 0xb44

0xb3f: @ ResetAAS()
0xb40: Pop(0)
0xb41: Push((int) 1)
0xb42: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb43: GOTO 0xb10

0xb44: @ ResetAAS()
0xb45: Pop(0)
0xb46: Return(); Pop(12)

0xb47: Stack[-1] = (bool) 1
0xb48: Return(); Pop(0)

0xb49: @ StopAnimation()
0xb4a: Pop(0)
0xb4b: @ StopGroup0()
0xb4c: Pop(0)
0xb4d: Return(); Pop(0)

0xb4e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb4f: @ GetPosition(Stack[-3])
0xb50: Pop(0)
0xb51: @@ GetPosition(Stack[-2])
0xb52: Pop(0)
0xb53: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb54: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb55: Return(); Pop(6)

0xb56: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb57: @ GetPosition(Stack[-3])
0xb58: Pop(0)
0xb59: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xb5a: Push(CvectorIndex(Stack[-2], 0))
0xb5b: Push(CvectorIndex(Stack[-3], 2))
0xb5c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb5d: Pop(2)
0xb5e: Stack[-8] = Stack[-1]
0xb5f: Return(); Pop(6)

0xb60: PushEmpty(cvector, cvector)
0xb61: @@ GetPosition(Stack[-1])
0xb62: Pop(0)
0xb63: PushEmpty(bool, cvector)
0xb64: Stack[-1] = Stack[-3]
0xb65: Call2 0xb56

0xb66: Stack[-6] = Stack[-2]
0xb67: Pop(2)
0xb68: Return(); Pop(2)

0xb69: PushEmpty(bool, bool)
0xb6a: @ IsLoaded(Stack[-1])
0xb6b: Pop(0)
0xb6c: Stack[-3] = Stack[-1]
0xb6d: Return(); Pop(2)

0xb6e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb6f: @@ GetPosition(Stack[-8])
0xb70: Pop(0)
0xb71: @@ GetEyesHeight(Stack[-9])
0xb72: Pop(0)
0xb73: Push(CvectorIndex(Stack[-8], 1))
0xb74: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb75: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb76: @ GetPosition(Stack[-7])
0xb77: Pop(0)
0xb78: @ GetEyesHeight(Stack[-9])
0xb79: Pop(0)
0xb7a: Push(CvectorIndex(Stack[-7], 1))
0xb7b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb7c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb7d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb7e: Push(CvectorIndex(Stack[-6], 1))
0xb7f: Stack[-1] = (int) 0
0xb80: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb81: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb82: Pop(1); Push(Sqrt(Stack[-1]))
0xb83: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xb84: Stack[-5] = -Stack[-6]; Pop(0);
0xb85: Pop(0); Push(Stack[-6] * Stack[-19]);
0xb86: PushEmpty(cvector, cvector)
0xb87: Push(CVector(0.0, 1.0, 0.0))
0xb88: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb89: Call2 0xc8a

0xb8a: Pop(1)
0xb8b: Push((int) 25)
0xb8c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb8d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb8e: Push(CVector(0.0, 10.0, 0.0))
0xb8f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb90: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb91: @ IsOverrideActive(Stack[-2])
0xb92: Pop(0)
0xb93: Push(Stack[-2])
0xb94: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb95: Stack[-21] = (bool) 0
0xb96: Return(); Pop(18)

0xb97: @ StopWorld()
0xb98: Pop(0)
0xb99: Push((bool) 1)
0xb9a: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xb9b: Pop(1)
0xb9c: Push(CvectorIndex(Stack[-4], 0))
0xb9d: Push(CvectorIndex(Stack[-5], 2))
0xb9e: @ Rotate(Stack[-2], Stack[-1])
0xb9f: Pop(2)
0xba0: PushEmpty(bool)
0xba1: Call2 0xce1

0xba2: Pop(0)
0xba3: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba4: GOTO 0xbad

0xba5: Push("head")
0xba6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xba7: Pop(1)
0xba8: Push(Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xbaa: Push("head")
0xbab: @ LookAsyncCamera(Stack[-1])
0xbac: Pop(1)
0xbad: @ CameraWaitForPlayFinish()
0xbae: Pop(0)
0xbaf: @ ResumeWorld()
0xbb0: Pop(0)
0xbb1: Stack[-21] = (bool) 1
0xbb2: Return(); Pop(18)

0xbb3: PushEmpty(bool, bool)
0xbb4: Push((bool) 1)
0xbb5: @ CameraSwitchToNormal(Stack[-1])
0xbb6: Pop(1)
0xbb7: PushEmpty(bool)
0xbb8: Call2 0xce1

0xbb9: Pop(0)
0xbba: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xbbb: GOTO 0xbc4

0xbbc: Push("head")
0xbbd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xbbe: Pop(1)
0xbbf: Push(Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc1: Push("head")
0xbc2: @ UnlookAsync(Stack[-1])
0xbc3: Pop(1)
0xbc4: Return(); Pop(2)

0xbc5: PushEmpty(int, int, int, int)
0xbc6: Push("voice_common")
0xbc7: @ GetVariable(Stack[-1], Stack[-3])
0xbc8: Pop(1)
0xbc9: Push(Stack[-2])
0xbca: IF (Stack[-1] == 0) GOTO 0xbeb; Pop(1)

0xbcb: PushEmpty(bool, object)
0xbcc: Stack[-1] = Stack[-7]
0xbcd: Call2 0xbff

0xbce: Pop(1)
0xbcf: Pop(1); Push((bool) Stack[-1] == 0)
0xbd0: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd1: PushEmpty(bool, object)
0xbd2: Stack[-1] = Stack[-7]
0xbd3: Call2 0xc24

0xbd4: Pop(1)
0xbd5: Pop(1); Push((bool) Stack[-1] == 0)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd7: Stack[-6] = (bool) 0
0xbd8: Return(); Pop(4)

0xbd9: Push((int) 2)
0xbda: @ irand(Stack[-2], Stack[-1])
0xbdb: Pop(1)
0xbdc: Push(Stack[-1])
0xbdd: IF (Stack[-1] == 0) GOTO 0xbe6; Pop(1)

0xbde: Push("voice_common")
0xbdf: Push((int) 1)
0xbe0: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbe1: Push((int) 3)
0xbe2: Pop(2); Push(Stack[-2] % Stack[-1]);
0xbe3: @ SetVariable(Stack[-2], Stack[-1])
0xbe4: Pop(2)
0xbe5: GOTO 0xbea

0xbe6: Push("voice_common")
0xbe7: Push((int) 0)
0xbe8: @ SetVariable(Stack[-2], Stack[-1])
0xbe9: Pop(2)
0xbea: GOTO 0xbfd

0xbeb: PushEmpty(bool, object)
0xbec: Stack[-1] = Stack[-7]
0xbed: Call2 0xc24

0xbee: Pop(1)
0xbef: Pop(1); Push((bool) Stack[-1] == 0)
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf1: PushEmpty(bool, object)
0xbf2: Stack[-1] = Stack[-7]
0xbf3: Call2 0xbff

0xbf4: Pop(1)
0xbf5: Pop(1); Push((bool) Stack[-1] == 0)
0xbf6: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf7: Stack[-6] = (bool) 0
0xbf8: Return(); Pop(4)

0xbf9: Push("voice_common")
0xbfa: Push((int) 1)
0xbfb: @ SetVariable(Stack[-2], Stack[-1])
0xbfc: Pop(2)
0xbfd: Stack[-6] = (bool) 1
0xbfe: Return(); Pop(4)

0xbff: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc00: Stack[-5] = "c"
0xc01: Stack[-4] = (int) 0
0xc02: Push((int) 1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc04: Push((int) 1)
0xc05: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc06: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc07: @@ HasProperty(Stack[-1], Stack[-4])
0xc08: Pop(1)
0xc09: Pop(0); Push((bool) Stack[-3] == 0)
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc0b: GOTO 0xc0f

0xc0c: Push((int) 1)
0xc0d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc0e: GOTO 0xc02

0xc0f: Pop(0); Push((bool) Stack[-4] == 0)
0xc10: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc11: Stack[-12] = (bool) 0
0xc12: Return(); Pop(10)

0xc13: Stack[-2] = (int) 0
0xc14: Push((int) 1)
0xc15: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc17: @ irand(Stack[-2], Stack[-4])
0xc18: Pop(0)
0xc19: Push((int) 1)
0xc1a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc1b: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc1c: @@ GetProperty(Stack[-1], Stack[-2])
0xc1d: Pop(1)
0xc1e: PushEmpty(bool, string)
0xc1f: Stack[-1] = Stack[-3]
0xc20: Call2 0xc6e

0xc21: Stack[-14] = Stack[-2]
0xc22: Pop(2)
0xc23: Return(); Pop(10)

0xc24: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xc25: Push("d")
0xc26: PushEmpty(int)
0xc27: Call2 0xcaa

0xc28: Pop(0)
0xc29: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2a: Push("m")
0xc2b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xc2c: Stack[-4] = (int) 0
0xc2d: Push((int) 1)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc2f: Push((int) 1)
0xc30: Pop(1); Push(Stack[-5] + Stack[-1]);
0xc31: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc32: @@ HasProperty(Stack[-1], Stack[-4])
0xc33: Pop(1)
0xc34: Pop(0); Push((bool) Stack[-3] == 0)
0xc35: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc36: GOTO 0xc3a

0xc37: Push((int) 1)
0xc38: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc39: GOTO 0xc2d

0xc3a: Pop(0); Push((bool) Stack[-4] == 0)
0xc3b: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3c: Stack[-12] = (bool) 0
0xc3d: Return(); Pop(10)

0xc3e: Stack[-2] = (int) 0
0xc3f: Push((int) 1)
0xc40: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xc41: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc42: @ irand(Stack[-2], Stack[-4])
0xc43: Pop(0)
0xc44: Push((int) 1)
0xc45: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc46: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc47: @@ GetProperty(Stack[-1], Stack[-2])
0xc48: Pop(1)
0xc49: PushEmpty(bool, string)
0xc4a: Stack[-1] = Stack[-3]
0xc4b: Call2 0xc6e

0xc4c: Stack[-14] = Stack[-2]
0xc4d: Pop(2)
0xc4e: Return(); Pop(10)

0xc4f: PushEmpty(bool, float, float, bool, float, float)
0xc50: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc51: Pop(0)
0xc52: Push(Stack[-3])
0xc53: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc54: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc55: Pop(0)
0xc56: Push((bool) 0)
0xc57: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc58: Pop(1)
0xc59: GOTO 0xc5e

0xc5a: Push("Can't find lsh animation : ")
0xc5b: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc5c: @ Trace(Stack[-1])
0xc5d: Pop(1)
0xc5e: Return(); Pop(6)

0xc5f: PushEmpty(bool, float, float, bool, float, float)
0xc60: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc61: Pop(0)
0xc62: Push(Stack[-3])
0xc63: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc64: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc65: Pop(0)
0xc66: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc67: Pop(0)
0xc68: GOTO 0xc6d

0xc69: Push("Can't find lsh animation : ")
0xc6a: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc6b: @ Trace(Stack[-1])
0xc6c: Pop(1)
0xc6d: Return(); Pop(6)

0xc6e: PushEmpty(bool, bool)
0xc6f: PushEmpty(bool)
0xc70: Call2 0xce1

0xc71: Pop(0)
0xc72: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc73: @ lshHasSpeech(Stack[-1], Stack[-3])
0xc74: Pop(0)
0xc75: Push(Stack[-1])
0xc76: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc77: @ lshPlaySpeech(Stack[-3])
0xc78: Pop(0)
0xc79: Stack[-4] = (bool) 1
0xc7a: Return(); Pop(2)

0xc7b: Stack[-4] = (bool) 0
0xc7c: Return(); Pop(2)

0xc7d: PushEmpty(bool)
0xc7e: Call2 0xce1

0xc7f: Pop(0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc81: @ lshStopSpeech()
0xc82: Pop(0)
0xc83: Return(); Pop(0)

0xc84: PushEmpty(object, object)
0xc85: @ self(Stack[-1])
0xc86: Pop(0)
0xc87: Stack[-3] = Stack[-1]
0xc88: Return(); Pop(2)

0xc89: Stack[-1] = 0
0xc8a: PushEmpty(float, float)
0xc8b: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc8c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc8d: Push((float)0.0)
0xc8e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc8f: IF (Stack[-1] == 0) GOTO 0xc92; Pop(1)

0xc90: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc91: Return(); Pop(2)

0xc92: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc93: Return(); Pop(2)

0xc94: PushEmpty(int, int)
0xc95: @ GetVariable(Stack[-3], Stack[-1])
0xc96: Pop(0)
0xc97: Stack[-4] = Stack[-1]
0xc98: Return(); Pop(2)

0xc99: PushEmpty(object, object)
0xc9a: @ FindActor(Stack[-1], Stack[-4])
0xc9b: Pop(0)
0xc9c: Pop(0); Push((bool) Stack[-1] == 0)
0xc9d: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9e: Stack[-5] = (bool) 0
0xc9f: Return(); Pop(2)

0xca0: @ Trigger(Stack[-1], Stack[-3])
0xca1: Pop(0)
0xca2: Stack[-5] = (bool) 1
0xca3: Return(); Pop(2)

0xca4: Stack[-1] = 0
0xca5: PushEmpty(float, float)
0xca6: @ GetGameTime(Stack[-1])
0xca7: Pop(0)
0xca8: Stack[-3] = Stack[-1]
0xca9: Return(); Pop(2)

0xcaa: PushEmpty(float, float)
0xcab: @ GetGameTime(Stack[-1])
0xcac: Pop(0)
0xcad: Push((int) 1)
0xcae: PushEmpty(int)
0xcaf: Push((int) 24)
0xcb0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcb1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcb2: Return(); Pop(2)

0xcb3: PushEmpty(float, float)
0xcb4: @ GetGameTime(Stack[-1])
0xcb5: Pop(0)
0xcb6: PushEmpty(int)
0xcb7: Stack[-1] = Stack[-2]
0xcb8: Push((int) 24)
0xcb9: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xcba: Return(); Pop(2)

0xcbb: PushEmpty()
0xcbc: PushEmpty(int)
0xcbd: Call2 0xcaa

0xcbe: Pop(0)
0xcbf: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xcc0: Return(); Pop(0)

0xcc1: PushEmpty(string, string)
0xcc2: Stack[-1] = "idle"
0xcc3: Push(Stack[-3])
0xcc4: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xcc6: Stack[-4] = Stack[-1]
0xcc7: Return(); Pop(2)

0xcc8: PushEmpty(int, bool, int, bool)
0xcc9: Stack[-2] = (int) 0
0xcca: Push("all")
0xccb: PushEmpty(string, int)
0xccc: Stack[-1] = Stack[-5]
0xccd: Call2 0xcc1

0xcce: Pop(1)
0xccf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcd0: Pop(2)
0xcd1: Pop(0); Push((bool) Stack[-1] == 0)
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd4; Pop(1)

0xcd3: GOTO 0xcd7

0xcd4: Push((int) 1)
0xcd5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcd6: GOTO 0xcca

0xcd7: Stack[-5] = Stack[-2]
0xcd8: Return(); Pop(4)

0xcd9: Stack[-1] = (int) 515532
0xcda: Return(); Pop(0)

0xcdb: Stack[-1] = (int) 514840
0xcdc: Return(); Pop(0)

0xcdd: Stack[-1] = "ui/NPC_Block.png"
0xcde: Return(); Pop(0)

0xcdf: Stack[-1] = "ui/NPC_Block_b.png"
0xce0: Return(); Pop(0)

0xce1: Stack[-1] = (bool) 1
0xce2: Return(); Pop(0)

0xce3: PushEmpty()
0xce4: PushEmpty(object, string, float)
0xce5: PushEmpty(object)
0xce6: Call2 0xded

0xce7: Stack[-4] = Stack[-1]
0xce8: Pop(1)
0xce9: Stack[-2] = "pt_map_starshina"
0xcea: Stack[-1] = (int) 2
0xceb: Call2 0xdfe

0xcec: Pop(3)
0xced: PushEmpty(object)
0xcee: Call2 0xded

0xcef: Pop(0)
0xcf0: @@ ShowMap(Stack[-1])
0xcf1: Pop(1)
0xcf2: Return(); Pop(0)

0xcf3: PushEmpty()
0xcf4: Push("oob9Block1")
0xcf5: Push((int) 1)
0xcf6: @ SetVariable(Stack[-2], Stack[-1])
0xcf7: Pop(2)
0xcf8: Return(); Pop(0)

0xcf9: PushEmpty()
0xcfa: Push("oob12Block1")
0xcfb: Push((int) 1)
0xcfc: @ SetVariable(Stack[-2], Stack[-1])
0xcfd: Pop(2)
0xcfe: Return(); Pop(0)

0xcff: PushEmpty()
0xd00: Push("b12q01BlockVisit")
0xd01: Push((int) 1)
0xd02: @ SetVariable(Stack[-2], Stack[-1])
0xd03: Pop(2)
0xd04: Return(); Pop(0)

0xd05: PushEmpty()
0xd06: Push("oob12Block2")
0xd07: Push((int) 1)
0xd08: @ SetVariable(Stack[-2], Stack[-1])
0xd09: Pop(2)
0xd0a: Return(); Pop(0)

0xd0b: PushEmpty()
0xd0c: PushEmpty(bool, string, string)
0xd0d: Stack[-2] = "quest_b10_02"
0xd0e: Stack[-1] = "completed"
0xd0f: Call2 0xc99

0xd10: Pop(3)
0xd11: Return(); Pop(0)

0xd12: PushEmpty()
0xd13: Push("oob10Block1")
0xd14: Push((int) 1)
0xd15: @ SetVariable(Stack[-2], Stack[-1])
0xd16: Pop(2)
0xd17: Return(); Pop(0)

0xd18: PushEmpty()
0xd19: Push("oob9Block2")
0xd1a: Push((int) 1)
0xd1b: @ SetVariable(Stack[-2], Stack[-1])
0xd1c: Pop(2)
0xd1d: Return(); Pop(0)

0xd1e: PushEmpty()
0xd1f: Push("oob9Block3")
0xd20: Push((int) 1)
0xd21: @ SetVariable(Stack[-2], Stack[-1])
0xd22: Pop(2)
0xd23: Return(); Pop(0)

0xd24: PushEmpty()
0xd25: Push("oob10Block2")
0xd26: Push((int) 1)
0xd27: @ SetVariable(Stack[-2], Stack[-1])
0xd28: Pop(2)
0xd29: Return(); Pop(0)

0xd2a: PushEmpty()
0xd2b: PushEmpty(object, string, float)
0xd2c: PushEmpty(object)
0xd2d: Call2 0xded

0xd2e: Stack[-4] = Stack[-1]
0xd2f: Pop(1)
0xd30: Stack[-2] = "pt_gmap_vagon_army"
0xd31: Stack[-1] = (int) 2
0xd32: Call2 0xdfe

0xd33: Pop(3)
0xd34: PushEmpty(object)
0xd35: Call2 0xded

0xd36: Pop(0)
0xd37: @@ ShowMap(Stack[-1])
0xd38: Pop(1)
0xd39: Return(); Pop(0)

0xd3a: PushEmpty(object, object)
0xd3b: PushEmpty(object)
0xd3c: Call2 0xded

0xd3d: Stack[-2] = Stack[-1]
0xd3e: Pop(1)
0xd3f: Push("b10q04BlockGotoOfficer")
0xd40: Push("pt_gmap_vagon_army")
0xd41: Push((int) 0)
0xd42: Push((int) 530547)
0xd43: PushEmpty(float)
0xd44: Call2 0xca5

0xd45: Pop(0)
0xd46: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd47: Pop(5)
0xd48: Return(); Pop(2)

0xd49: Stack[-1] = 0
0xd4a: PushEmpty()
0xd4b: Push("b9BlockVisit")
0xd4c: Push((int) 1)
0xd4d: @ SetVariable(Stack[-2], Stack[-1])
0xd4e: Pop(2)
0xd4f: Return(); Pop(0)

0xd50: PushEmpty(object, object)
0xd51: PushEmpty(object)
0xd52: Call2 0xded

0xd53: Stack[-2] = Stack[-1]
0xd54: Pop(1)
0xd55: Push("b9q01BlockGotoBoiny")
0xd56: Push("pt_map_starshina")
0xd57: Push((int) 3)
0xd58: Push((int) 531550)
0xd59: PushEmpty(float)
0xd5a: Call2 0xca5

0xd5b: Pop(0)
0xd5c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd5d: Pop(5)
0xd5e: Return(); Pop(2)

0xd5f: Stack[-1] = 0
0xd60: PushEmpty()
0xd61: PushEmpty(int, string)
0xd62: Stack[-1] = "oob9Block1"
0xd63: Call2 0xc94

0xd64: Pop(1)
0xd65: Push((int) 0)
0xd66: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd67: IF (Stack[-1] == 0) GOTO 0xd6a; Pop(1)

0xd68: Stack[-2] = (bool) 1
0xd69: Return(); Pop(0)

0xd6a: Stack[-2] = (bool) 0
0xd6b: Return(); Pop(0)

0xd6c: PushEmpty()
0xd6d: PushEmpty(int, string)
0xd6e: Stack[-1] = "oob12Block1"
0xd6f: Call2 0xc94

0xd70: Pop(1)
0xd71: Push((int) 0)
0xd72: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd74: Stack[-2] = (bool) 1
0xd75: Return(); Pop(0)

0xd76: Stack[-2] = (bool) 0
0xd77: Return(); Pop(0)

0xd78: PushEmpty()
0xd79: PushEmpty(int, string)
0xd7a: Stack[-1] = "oob12Block2"
0xd7b: Call2 0xc94

0xd7c: Pop(1)
0xd7d: Push((int) 0)
0xd7e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd7f: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd80: Stack[-2] = (bool) 1
0xd81: Return(); Pop(0)

0xd82: Stack[-2] = (bool) 0
0xd83: Return(); Pop(0)

0xd84: PushEmpty()
0xd85: PushEmpty(bool, object)
0xd86: Stack[-1] = Stack[-3]
0xd87: Call2 0xde2

0xd88: Pop(1)
0xd89: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd8a: Stack[-2] = (bool) 1
0xd8b: Return(); Pop(0)

0xd8c: Stack[-2] = (bool) 0
0xd8d: Return(); Pop(0)

0xd8e: PushEmpty()
0xd8f: PushEmpty(int, string)
0xd90: Stack[-1] = "b10q02"
0xd91: Call2 0xc94

0xd92: Pop(1)
0xd93: Push((int) 3)
0xd94: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd95: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd96: Stack[-2] = (bool) 1
0xd97: Return(); Pop(0)

0xd98: Stack[-2] = (bool) 0
0xd99: Return(); Pop(0)

0xd9a: PushEmpty()
0xd9b: PushEmpty(int, string)
0xd9c: Stack[-1] = "b10q02Cutscene"
0xd9d: Call2 0xc94

0xd9e: Pop(1)
0xd9f: Push((int) 0)
0xda0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xda1: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xda2: Stack[-2] = (bool) 1
0xda3: Return(); Pop(0)

0xda4: Stack[-2] = (bool) 0
0xda5: Return(); Pop(0)

0xda6: PushEmpty()
0xda7: PushEmpty(int, string)
0xda8: Stack[-1] = "oob10Block1"
0xda9: Call2 0xc94

0xdaa: Pop(1)
0xdab: Push((int) 0)
0xdac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdad: IF (Stack[-1] == 0) GOTO 0xdb0; Pop(1)

0xdae: Stack[-2] = (bool) 1
0xdaf: Return(); Pop(0)

0xdb0: Stack[-2] = (bool) 0
0xdb1: Return(); Pop(0)

0xdb2: PushEmpty()
0xdb3: PushEmpty(int, string)
0xdb4: Stack[-1] = "oob9Block2"
0xdb5: Call2 0xc94

0xdb6: Pop(1)
0xdb7: Push((int) 0)
0xdb8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdba: Stack[-2] = (bool) 1
0xdbb: Return(); Pop(0)

0xdbc: Stack[-2] = (bool) 0
0xdbd: Return(); Pop(0)

0xdbe: PushEmpty()
0xdbf: PushEmpty(int, string)
0xdc0: Stack[-1] = "oob9Block3"
0xdc1: Call2 0xc94

0xdc2: Pop(1)
0xdc3: Push((int) 0)
0xdc4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc6: Stack[-2] = (bool) 1
0xdc7: Return(); Pop(0)

0xdc8: Stack[-2] = (bool) 0
0xdc9: Return(); Pop(0)

0xdca: PushEmpty()
0xdcb: PushEmpty(int, string)
0xdcc: Stack[-1] = "b10q04KapellaGotoBlock"
0xdcd: Call2 0xc94

0xdce: Pop(1)
0xdcf: Push((int) 0)
0xdd0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xdd1: IF (Stack[-1] == 0) GOTO 0xdd4; Pop(1)

0xdd2: Stack[-2] = (bool) 1
0xdd3: Return(); Pop(0)

0xdd4: Stack[-2] = (bool) 0
0xdd5: Return(); Pop(0)

0xdd6: PushEmpty()
0xdd7: PushEmpty(int, string)
0xdd8: Stack[-1] = "oob10Block2"
0xdd9: Call2 0xc94

0xdda: Pop(1)
0xddb: Push((int) 0)
0xddc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xddd: IF (Stack[-1] == 0) GOTO 0xde0; Pop(1)

0xdde: Stack[-2] = (bool) 1
0xddf: Return(); Pop(0)

0xde0: Stack[-2] = (bool) 0
0xde1: Return(); Pop(0)

0xde2: PushEmpty()
0xde3: PushEmpty(int)
0xde4: Call2 0xcb3

0xde5: Pop(0)
0xde6: Push((int) 19)
0xde7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xde8: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde9: Stack[-2] = (bool) 1
0xdea: Return(); Pop(0)

0xdeb: Stack[-2] = (bool) 0
0xdec: Return(); Pop(0)

0xded: PushEmpty(object, object, object, object)
0xdee: @ GetMainOutdoorScene(Stack[-2])
0xdef: Pop(0)
0xdf0: Pop(0); Push((bool) Stack[-2] == 0)
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf8; Pop(1)

0xdf2: Push("Can't find main outdoor scene")
0xdf3: @ Trace(Stack[-1])
0xdf4: Pop(1)
0xdf5: Stack[-1] = 0
0xdf6: Stack[-5] = Stack[-1]
0xdf7: Return(); Pop(4)

0xdf8: @@ GetMap(Stack[-1])
0xdf9: Pop(0)
0xdfa: Stack[-5] = Stack[-1]
0xdfb: Return(); Pop(4)

0xdfc: Stack[-1] = 0
0xdfd: Stack[-2] = 0
0xdfe: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xdff: @ GetMainOutdoorScene(Stack[-2])
0xe00: Pop(0)
0xe01: Pop(0); Push((bool) Stack[-2] == 0)
0xe02: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe03: Push("Can't find main outdoor scene")
0xe04: @ Trace(Stack[-1])
0xe05: Pop(1)
0xe06: Return(); Pop(8)

0xe07: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xe08: Pop(0)
0xe09: Pop(0); Push((bool) Stack[-1] == 0)
0xe0a: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe0b: Push("Warning: outdoor scene locator ")
0xe0c: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe0d: Push(" doesnt exist")
0xe0e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe0f: @ Trace(Stack[-1])
0xe10: Pop(1)
0xe11: @@ GetMap(Stack[-11])
0xe12: Pop(0)
0xe13: Pop(0); Push((bool) Stack[-11] == 0)
0xe14: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe15: Push("Can't find map")
0xe16: @ Trace(Stack[-1])
0xe17: Pop(1)
0xe18: Return(); Pop(8)

0xe19: Push(CvectorIndex(Stack[-4], 0))
0xe1a: Push(CvectorIndex(Stack[-5], 2))
0xe1b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xe1c: Pop(2)
0xe1d: Return(); Pop(8)

0xe1e: Stack[-2] = 0
0xe1f: PushEmpty(int, int)
0xe20: Push("branch")
0xe21: @ GetVariable(Stack[-1], Stack[-2])
0xe22: Pop(1)
0xe23: Push((int) 0)
0xe24: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe25: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe26: Stack[-3] = (int) 1
0xe27: Return(); Pop(2)

0xe28: GOTO 0xe2e

0xe29: Push((int) 1)
0xe2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2b: IF (Stack[-1] == 0) GOTO 0xe2e; Pop(1)

0xe2c: Stack[-3] = (int) 2
0xe2d: Return(); Pop(2)

0xe2e: Stack[-3] = (int) 3
0xe2f: Return(); Pop(2)

0xe30: PushEmpty(int, int)
0xe31: Push("mt_block")
0xe32: @ GetVariable(Stack[-1], Stack[-2])
0xe33: Pop(1)
0xe34: Pop(0); Push((bool) Stack[-1] == 0)
0xe35: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe36: PushEmpty(int, object)
0xe37: Stack[-1] = Stack[-5]
0xe38: Push(-2, 1); TaskCall(6)
0xe39: Call2 0x88a

0xe3a: Pop(-2, 1); TaskReturn
0xe3b: Pop(2)
0xe3c: Push("mt_block")
0xe3d: Push((int) 1)
0xe3e: @ SetVariable(Stack[-2], Stack[-1])
0xe3f: Pop(2)
0xe40: PushEmpty(bool, int)
0xe41: Stack[-1] = (int) 9
0xe42: Call2 0xcbb

0xe43: Pop(1)
0xe44: IF (Stack[-1] == 0) GOTO 0xe4c; Pop(1)

0xe45: PushEmpty(int, object)
0xe46: Stack[-1] = Stack[-5]
0xe47: Push(-2, 1); TaskCall(0)
0xe48: Call2 0x0

0xe49: Pop(-2, 1); TaskReturn
0xe4a: Pop(2)
0xe4b: Return(); Pop(2)

0xe4c: PushEmpty(bool, int)
0xe4d: Stack[-1] = (int) 10
0xe4e: Call2 0xcbb

0xe4f: Pop(1)
0xe50: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe51: PushEmpty(int, object)
0xe52: Stack[-1] = Stack[-5]
0xe53: Push(-2, 1); TaskCall(4)
0xe54: Call2 0x5dc

0xe55: Pop(-2, 1); TaskReturn
0xe56: Pop(2)
0xe57: Return(); Pop(2)

0xe58: PushEmpty(bool, int)
0xe59: Stack[-1] = (int) 12
0xe5a: Call2 0xcbb

0xe5b: Pop(1)
0xe5c: IF (Stack[-1] == 0) GOTO 0xe64; Pop(1)

0xe5d: PushEmpty(int, object)
0xe5e: Stack[-1] = Stack[-5]
0xe5f: Push(-2, 1); TaskCall(2)
0xe60: Call2 0x3a4

0xe61: Pop(-2, 1); TaskReturn
0xe62: Pop(2)
0xe63: Return(); Pop(2)

0xe64: PushEmpty(int, object)
0xe65: Stack[-1] = Stack[-5]
0xe66: Push(-2, 1); TaskCall(8)
0xe67: Call2 0x983

0xe68: Pop(-2, 1); TaskReturn
0xe69: Pop(2)
0xe6a: Return(); Pop(2)

