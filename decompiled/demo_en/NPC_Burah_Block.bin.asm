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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xa0a
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1c2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x568 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x78e Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9e0 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xa53 Vars = (int)
		EVENT_6 Op = 0xa79 Vars = ()
		EVENT_5 Op = 0xa88 Vars = ()
		EVENT_45 Op = 0xa95 Vars = (bool)
		EVENT_0 Op = 0xaa1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xb2a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xc95

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xc93

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xc97

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xc99

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xdc7

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
0x31: Call2 0xc3e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xb7f

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
0x48: Call2 0xb6e

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
0x5b: Push((int) 530875)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 530876)
0x61: Push((int) 32199)
0x62: Push((int) 32195)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 530877)
0x66: Push((int) 32197)
0x67: Push((int) 32196)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xc9b

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xc09

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
0x8d: Call2 0xc9b

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
0x9d: Call2 0xc19

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xc37

0xa6: Pop(0)
0xa7: Push((int) 32194)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 530875)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 530876)
0xb4: Push((int) 32199)
0xb5: Push((int) 32195)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 530877)
0xb9: Push((int) 32197)
0xba: Push((int) 32196)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 32197)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 530878)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 530879)
0xcb: Push((int) 32199)
0xcc: Push((int) 32198)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 530881)
0xd0: Push((int) 32199)
0xd1: Push((int) 32200)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 32199)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 530880)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 530882)
0xe2: Push((int) -1)
0xe3: Push((int) 32203)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 530883)
0xe7: Push((int) -1)
0xe8: Push((int) 32204)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed: PushEmpty(bool)
0xee: Call2 0xc9b

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: @ lshStopAnimation()
0xf2: Pop(0)
0xf3: GOTO 0xf6

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: GOTO 0xa2

0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 70.0
0xfe: Call2 0xb2a

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0xc95

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0xc93

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0xc97

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0xc99

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0xdc7

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: PushEmpty(object)
0x12a: Call2 0xc3e

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0xb7f

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[-11]
0x131: Stack[-1] = Stack[-6]
0x132: Push(-2, 4); TaskCall(3)
0x133: Call2 0x14a

0x134: Pop(-2, 4); TaskReturn
0x135: Pop(2)
0x136: @@ IsDialogEnd(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: @ sync()
0x13b: Pop(0)
0x13c: @@ IsDialogEnd(Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x138

0x13f: PushEmpty(object)
0x140: Stack[-1] = Stack[-10]
0x141: Call2 0xb6e

0x142: Pop(1)
0x143: @ StopDialog(Stack[-4])
0x144: Pop(0)
0x145: @@ GetReturnValue(Stack[-2])
0x146: Pop(0)
0x147: Stack[-10] = Stack[-2]
0x148: Return(); Pop(8)

0x149: Stack[-4] = 0
0x14a: PushEmpty()
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14e: Push((int) 1)
0x14f: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0xd14

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x155: PushEmpty(object, object)
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0xcad

0x159: Pop(2)
0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0xcfe

0x15e: Pop(2)
0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x1ac

0x162: Pop(1)
0x163: Push((int) 521534)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 522289)
0x169: Push((int) 23470)
0x16a: Push((int) 23444)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 522291)
0x16e: Push((int) 23449)
0x16f: Push((int) 23446)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: GOTO 0x18e

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral"
0x175: Call2 0x1ac

0x176: Pop(1)
0x177: Push((int) 521594)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0xd66

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Push((int) 522347)
0x182: Push((int) 23514)
0x183: Push((int) 23510)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 522350)
0x187: Push((int) -1)
0x188: Push((int) 23513)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: GOTO 0x18e

0x18c: Return(); Pop(0)

0x18d: GOTO 0x14e

0x18e: PushEmpty(bool)
0x18f: Call2 0xc9b

0x190: Pop(0)
0x191: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x192: @ lshWaitForAnimEnd()
0x193: Pop(0)
0x194: Push( Stack[3 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: GOTO 0x19c

0x197: PushEmpty(string)
0x198: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x199: Call2 0xc09

0x19a: Pop(1)
0x19b: GOTO 0x192

0x19c: GOTO 0x1ab

0x19d: Push("all")
0x19e: Push("idle")
0x19f: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: @ WaitForAnimEnd()
0x1a2: Pop(0)
0x1a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1ab

0x1a6: Push("all")
0x1a7: Push("idle")
0x1a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: GOTO 0x1a1

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty()
0x1ad: PushEmpty(bool)
0x1ae: Call2 0xc9b

0x1af: Pop(0)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: Return(); Pop(0)

0x1b3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(string, bool)
0x1b7: Stack[-2] = Stack[-3]
0x1b8: Push("")
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-1] = (bool) 0
0x1bc: GOTO 0x1be

0x1bd: Stack[-1] = (bool) 1
0x1be: Call2 0xc19

0x1bf: Pop(2)
0x1c0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty()
0x1c3: Push((int) 1)
0x1c4: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x1c5: PushEmpty()
0x1c6: Call2 0xc37

0x1c7: Pop(0)
0x1c8: Push((int) 23500)
0x1c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cb: PushEmpty(object, object)
0x1cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ce: Call2 0xd04

0x1cf: Pop(2)
0x1d0: PushEmpty(object, object)
0x1d1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d3: Call2 0xc9d

0x1d4: Pop(2)
0x1d5: Push((int) 23501)
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d8: PushEmpty(object, object)
0x1d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Call2 0xd04

0x1dc: Pop(2)
0x1dd: PushEmpty(object, object)
0x1de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0xc9d

0x1e1: Pop(2)
0x1e2: Push((int) 23495)
0x1e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e5: PushEmpty(object, object)
0x1e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e8: Call2 0xd04

0x1e9: Pop(2)
0x1ea: PushEmpty(object, object)
0x1eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0xc9d

0x1ee: Pop(2)
0x1ef: Push((int) 23496)
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f2: PushEmpty(object, object)
0x1f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0xd04

0x1f6: Pop(2)
0x1f7: PushEmpty(object, object)
0x1f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fa: Call2 0xc9d

0x1fb: Pop(2)
0x1fc: Push((int) 23510)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: PushEmpty(object, object)
0x200: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x201: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x202: Call2 0xcd2

0x203: Pop(2)
0x204: Push((int) 22695)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x209: Call2 0xd14

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x20c: PushEmpty(object, object)
0x20d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20f: Call2 0xcad

0x210: Pop(2)
0x211: PushEmpty(object, object)
0x212: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x213: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x214: Call2 0xcfe

0x215: Pop(2)
0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral"
0x218: Call2 0x1ac

0x219: Pop(1)
0x21a: Push((int) 521534)
0x21b: @@ SetMessage(Stack[-1])
0x21c: Pop(1)
0x21d: @@ ClearReplies()
0x21e: Pop(0)
0x21f: Push((int) 522289)
0x220: Push((int) 23470)
0x221: Push((int) 23444)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Push((int) 522291)
0x225: Push((int) 23449)
0x226: Push((int) 23446)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: PushEmpty(string)
0x22b: Stack[-1] = "Neutral"
0x22c: Call2 0x1ac

0x22d: Pop(1)
0x22e: Push((int) 521594)
0x22f: @@ SetMessage(Stack[-1])
0x230: Pop(1)
0x231: @@ ClearReplies()
0x232: Pop(0)
0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x235: Call2 0xd66

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: Push((int) 522347)
0x239: Push((int) 23514)
0x23a: Push((int) 23510)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Push((int) 522350)
0x23e: Push((int) -1)
0x23f: Push((int) 23513)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 23511)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x246: Push((int) 23514)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral"
0x24b: Call2 0x1ac

0x24c: Pop(1)
0x24d: Push((int) 522351)
0x24e: @@ SetMessage(Stack[-1])
0x24f: Pop(1)
0x250: @@ ClearReplies()
0x251: Pop(0)
0x252: Push((int) 522352)
0x253: Push((int) 23516)
0x254: Push((int) 23515)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Return(); Pop(0)

0x258: Push((int) 23516)
0x259: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral"
0x25d: Call2 0x1ac

0x25e: Pop(1)
0x25f: Push((int) 522353)
0x260: @@ SetMessage(Stack[-1])
0x261: Pop(1)
0x262: @@ ClearReplies()
0x263: Pop(0)
0x264: Push((int) 522354)
0x265: Push((int) 23518)
0x266: Push((int) 23517)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Return(); Pop(0)

0x26a: Push((int) 23518)
0x26b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26d: PushEmpty(string)
0x26e: Stack[-1] = "Neutral"
0x26f: Call2 0x1ac

0x270: Pop(1)
0x271: Push((int) 522355)
0x272: @@ SetMessage(Stack[-1])
0x273: Pop(1)
0x274: @@ ClearReplies()
0x275: Pop(0)
0x276: Push((int) 522356)
0x277: Push((int) 23520)
0x278: Push((int) 23519)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 23520)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Neutral"
0x281: Call2 0x1ac

0x282: Pop(1)
0x283: Push((int) 522357)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 522358)
0x289: Push((int) 23522)
0x28a: Push((int) 23521)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 522360)
0x28e: Push((int) -1)
0x28f: Push((int) 23523)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: Return(); Pop(0)

0x293: Push((int) 23522)
0x294: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x296: PushEmpty(string)
0x297: Stack[-1] = "Neutral"
0x298: Call2 0x1ac

0x299: Pop(1)
0x29a: Push((int) 522359)
0x29b: @@ SetMessage(Stack[-1])
0x29c: Pop(1)
0x29d: @@ ClearReplies()
0x29e: Pop(0)
0x29f: Push((int) 522361)
0x2a0: Push((int) -1)
0x2a1: Push((int) 23524)
0x2a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(3)
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 23449)
0x2a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2a8: PushEmpty(string)
0x2a9: Stack[-1] = "Untrust"
0x2aa: Call2 0x1ac

0x2ab: Pop(1)
0x2ac: Push((int) 522294)
0x2ad: @@ SetMessage(Stack[-1])
0x2ae: Pop(1)
0x2af: @@ ClearReplies()
0x2b0: Pop(0)
0x2b1: Push((int) 522295)
0x2b2: Push((int) 23453)
0x2b3: Push((int) 23450)
0x2b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(3)
0x2b6: Push((int) 522297)
0x2b7: Push((int) 23447)
0x2b8: Push((int) 23452)
0x2b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(3)
0x2bb: Return(); Pop(0)

0x2bc: Push((int) 23447)
0x2bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = "Neutral"
0x2c1: Call2 0x1ac

0x2c2: Pop(1)
0x2c3: Push((int) 522292)
0x2c4: @@ SetMessage(Stack[-1])
0x2c5: Pop(1)
0x2c6: @@ ClearReplies()
0x2c7: Pop(0)
0x2c8: Push((int) 522296)
0x2c9: Push((int) -1)
0x2ca: Push((int) 23451)
0x2cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cc: Pop(3)
0x2cd: Push((int) 522293)
0x2ce: Push((int) -1)
0x2cf: Push((int) 23448)
0x2d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d1: Pop(3)
0x2d2: Return(); Pop(0)

0x2d3: Push((int) 23453)
0x2d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d6: PushEmpty(string)
0x2d7: Stack[-1] = "Neutral"
0x2d8: Call2 0x1ac

0x2d9: Pop(1)
0x2da: Push((int) 522298)
0x2db: @@ SetMessage(Stack[-1])
0x2dc: Pop(1)
0x2dd: @@ ClearReplies()
0x2de: Pop(0)
0x2df: Push((int) 522299)
0x2e0: Push((int) 23457)
0x2e1: Push((int) 23454)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: Push((int) 522300)
0x2e5: Push((int) 23447)
0x2e6: Push((int) 23455)
0x2e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(3)
0x2e9: Return(); Pop(0)

0x2ea: Push((int) 23457)
0x2eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ed: PushEmpty(string)
0x2ee: Stack[-1] = "Neutral"
0x2ef: Call2 0x1ac

0x2f0: Pop(1)
0x2f1: Push((int) 522301)
0x2f2: @@ SetMessage(Stack[-1])
0x2f3: Pop(1)
0x2f4: @@ ClearReplies()
0x2f5: Pop(0)
0x2f6: Push((int) 522302)
0x2f7: Push((int) 23464)
0x2f8: Push((int) 23458)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Push((int) 522303)
0x2fc: Push((int) 23460)
0x2fd: Push((int) 23459)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: Push((int) 23460)
0x302: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral"
0x306: Call2 0x1ac

0x307: Pop(1)
0x308: Push((int) 522304)
0x309: @@ SetMessage(Stack[-1])
0x30a: Pop(1)
0x30b: @@ ClearReplies()
0x30c: Pop(0)
0x30d: Push((int) 522305)
0x30e: Push((int) -1)
0x30f: Push((int) 23461)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Push((int) 522306)
0x313: Push((int) 23447)
0x314: Push((int) 23462)
0x315: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x316: Pop(3)
0x317: Return(); Pop(0)

0x318: Push((int) 23464)
0x319: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x31b: PushEmpty(string)
0x31c: Stack[-1] = "Neutral"
0x31d: Call2 0x1ac

0x31e: Pop(1)
0x31f: Push((int) 522307)
0x320: @@ SetMessage(Stack[-1])
0x321: Pop(1)
0x322: @@ ClearReplies()
0x323: Pop(0)
0x324: Push((int) 522308)
0x325: Push((int) 22697)
0x326: Push((int) 23465)
0x327: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x328: Pop(3)
0x329: Push((int) 522309)
0x32a: Push((int) 23467)
0x32b: Push((int) 23466)
0x32c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32d: Pop(3)
0x32e: Return(); Pop(0)

0x32f: Push((int) 23467)
0x330: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x332: PushEmpty(string)
0x333: Stack[-1] = "Untrust"
0x334: Call2 0x1ac

0x335: Pop(1)
0x336: Push((int) 522310)
0x337: @@ SetMessage(Stack[-1])
0x338: Pop(1)
0x339: @@ ClearReplies()
0x33a: Pop(0)
0x33b: Push((int) 522311)
0x33c: Push((int) 23447)
0x33d: Push((int) 23468)
0x33e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33f: Pop(3)
0x340: Return(); Pop(0)

0x341: Push((int) 23470)
0x342: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x344: PushEmpty(string)
0x345: Stack[-1] = "Neutral"
0x346: Call2 0x1ac

0x347: Pop(1)
0x348: Push((int) 522312)
0x349: @@ SetMessage(Stack[-1])
0x34a: Pop(1)
0x34b: @@ ClearReplies()
0x34c: Pop(0)
0x34d: Push((int) 522313)
0x34e: Push((int) 23472)
0x34f: Push((int) 23471)
0x350: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x351: Pop(3)
0x352: Return(); Pop(0)

0x353: Push((int) 23472)
0x354: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x355: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x356: PushEmpty(string)
0x357: Stack[-1] = "Neutral"
0x358: Call2 0x1ac

0x359: Pop(1)
0x35a: Push((int) 522314)
0x35b: @@ SetMessage(Stack[-1])
0x35c: Pop(1)
0x35d: @@ ClearReplies()
0x35e: Pop(0)
0x35f: Push((int) 522316)
0x360: Push((int) 23445)
0x361: Push((int) 23474)
0x362: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x363: Pop(3)
0x364: Push((int) 522315)
0x365: Push((int) 23502)
0x366: Push((int) 23473)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Return(); Pop(0)

0x36a: Push((int) 23502)
0x36b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x36d: PushEmpty(string)
0x36e: Stack[-1] = "Neutral"
0x36f: Call2 0x1ac

0x370: Pop(1)
0x371: Push((int) 522340)
0x372: @@ SetMessage(Stack[-1])
0x373: Pop(1)
0x374: @@ ClearReplies()
0x375: Pop(0)
0x376: Push((int) 522342)
0x377: Push((int) 23445)
0x378: Push((int) 23504)
0x379: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37a: Pop(3)
0x37b: Push((int) 522341)
0x37c: Push((int) 23507)
0x37d: Push((int) 23503)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 23507)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Neutral"
0x386: Call2 0x1ac

0x387: Pop(1)
0x388: Push((int) 522345)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 522346)
0x38e: Push((int) 23445)
0x38f: Push((int) 23508)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 23445)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Neutral"
0x398: Call2 0x1ac

0x399: Pop(1)
0x39a: Push((int) 522290)
0x39b: @@ SetMessage(Stack[-1])
0x39c: Pop(1)
0x39d: @@ ClearReplies()
0x39e: Pop(0)
0x39f: Push((int) 521535)
0x3a0: Push((int) 23481)
0x3a1: Push((int) 22696)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Push((int) 522319)
0x3a5: Push((int) 23479)
0x3a6: Push((int) 23478)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: Push((int) 23479)
0x3ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ad: PushEmpty(string)
0x3ae: Stack[-1] = "Neutral"
0x3af: Call2 0x1ac

0x3b0: Pop(1)
0x3b1: Push((int) 522320)
0x3b2: @@ SetMessage(Stack[-1])
0x3b3: Pop(1)
0x3b4: @@ ClearReplies()
0x3b5: Pop(0)
0x3b6: Push((int) 522321)
0x3b7: Push((int) 23483)
0x3b8: Push((int) 23480)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Return(); Pop(0)

0x3bc: Push((int) 23483)
0x3bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "Neutral"
0x3c1: Call2 0x1ac

0x3c2: Pop(1)
0x3c3: Push((int) 522324)
0x3c4: @@ SetMessage(Stack[-1])
0x3c5: Pop(1)
0x3c6: @@ ClearReplies()
0x3c7: Pop(0)
0x3c8: Push((int) 522325)
0x3c9: Push((int) 23457)
0x3ca: Push((int) 23484)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Return(); Pop(0)

0x3ce: Push((int) 23481)
0x3cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = "Neutral"
0x3d3: Call2 0x1ac

0x3d4: Pop(1)
0x3d5: Push((int) 522322)
0x3d6: @@ SetMessage(Stack[-1])
0x3d7: Pop(1)
0x3d8: @@ ClearReplies()
0x3d9: Pop(0)
0x3da: Push((int) 522323)
0x3db: Push((int) 22697)
0x3dc: Push((int) 23482)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Push((int) 522328)
0x3e0: Push((int) 22697)
0x3e1: Push((int) 23489)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 22697)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Doubt"
0x3ea: Call2 0x1ac

0x3eb: Pop(1)
0x3ec: Push((int) 521536)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 522326)
0x3f2: Push((int) 23488)
0x3f3: Push((int) 23487)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Return(); Pop(0)

0x3f7: Push((int) 23488)
0x3f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x3fa: PushEmpty(string)
0x3fb: Stack[-1] = "Untrust"
0x3fc: Call2 0x1ac

0x3fd: Pop(1)
0x3fe: Push((int) 522327)
0x3ff: @@ SetMessage(Stack[-1])
0x400: Pop(1)
0x401: @@ ClearReplies()
0x402: Pop(0)
0x403: Push((int) 522329)
0x404: Push((int) 23497)
0x405: Push((int) 23491)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: Push((int) 521537)
0x409: Push((int) 23492)
0x40a: Push((int) 22698)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Return(); Pop(0)

0x40e: Push((int) 23492)
0x40f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x411: PushEmpty(string)
0x412: Stack[-1] = "Neutral"
0x413: Call2 0x1ac

0x414: Pop(1)
0x415: Push((int) 522330)
0x416: @@ SetMessage(Stack[-1])
0x417: Pop(1)
0x418: @@ ClearReplies()
0x419: Pop(0)
0x41a: Push((int) 522331)
0x41b: Push((int) 23494)
0x41c: Push((int) 23493)
0x41d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41e: Pop(3)
0x41f: Return(); Pop(0)

0x420: Push((int) 23494)
0x421: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x423: PushEmpty(string)
0x424: Stack[-1] = "Neutral"
0x425: Call2 0x1ac

0x426: Pop(1)
0x427: Push((int) 522332)
0x428: @@ SetMessage(Stack[-1])
0x429: Pop(1)
0x42a: @@ ClearReplies()
0x42b: Pop(0)
0x42c: Push((int) 522333)
0x42d: Push((int) -1)
0x42e: Push((int) 23495)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Push((int) 522334)
0x432: Push((int) -1)
0x433: Push((int) 23496)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: Return(); Pop(0)

0x437: Push((int) 23497)
0x438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x1ac

0x43d: Pop(1)
0x43e: Push((int) 522335)
0x43f: @@ SetMessage(Stack[-1])
0x440: Pop(1)
0x441: @@ ClearReplies()
0x442: Pop(0)
0x443: Push((int) 522336)
0x444: Push((int) 23499)
0x445: Push((int) 23498)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Push((int) 530873)
0x449: Push((int) 23499)
0x44a: Push((int) 32191)
0x44b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: Return(); Pop(0)

0x44e: Push((int) 23499)
0x44f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x451: PushEmpty(string)
0x452: Stack[-1] = "Neutral"
0x453: Call2 0x1ac

0x454: Pop(1)
0x455: Push((int) 522337)
0x456: @@ SetMessage(Stack[-1])
0x457: Pop(1)
0x458: @@ ClearReplies()
0x459: Pop(0)
0x45a: Push((int) 522338)
0x45b: Push((int) -1)
0x45c: Push((int) 23500)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Push((int) 522339)
0x460: Push((int) -1)
0x461: Push((int) 23501)
0x462: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x463: Pop(3)
0x464: Return(); Pop(0)

0x465: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x466: PushEmpty(bool)
0x467: Call2 0xc9b

0x468: Pop(0)
0x469: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46a: @ lshStopAnimation()
0x46b: Pop(0)
0x46c: GOTO 0x46f

0x46d: @ StopAnimation()
0x46e: Pop(0)
0x46f: Return(); Pop(0)

0x470: GOTO 0x1c3

0x471: Return(); Pop(0)

0x472: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x473: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x474: PushEmpty(bool, object, float)
0x475: Stack[-2] = Stack[-12]
0x476: Stack[-1] = (float) 70.0
0x477: Call2 0xb2a

0x478: Pop(2)
0x479: Pop(1); Push((bool) Stack[-1] == 0)
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-10] = (int) -2
0x47c: Return(); Pop(8)

0x47d: @ CreateDialog(Stack[-4])
0x47e: Pop(0)
0x47f: PushEmpty(int)
0x480: Call2 0xc95

0x481: Pop(0)
0x482: @@ SetNPCName(Stack[-1])
0x483: Pop(1)
0x484: PushEmpty(int)
0x485: Call2 0xc93

0x486: Pop(0)
0x487: @@ SetNPCDescription(Stack[-1])
0x488: Pop(1)
0x489: PushEmpty(string)
0x48a: Call2 0xc97

0x48b: Pop(0)
0x48c: @@ SetPhoto(Stack[-1])
0x48d: Pop(1)
0x48e: PushEmpty(string)
0x48f: Call2 0xc99

0x490: Pop(0)
0x491: @@ SetPhoto2(Stack[-1])
0x492: Pop(1)
0x493: PushEmpty(int)
0x494: Call2 0xdc7

0x495: Pop(0)
0x496: @@ SetPlayerName(Stack[-1])
0x497: Pop(1)
0x498: Stack[-2] = (int) -1
0x499: @ IsOverrideActive(Stack[-3])
0x49a: Pop(0)
0x49b: Push(Stack[-3])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-10] = (int) -2
0x49e: Return(); Pop(8)

0x49f: @ DoDialog(Stack[-4])
0x4a0: Pop(0)
0x4a1: PushEmpty(bool, object)
0x4a2: PushEmpty(object)
0x4a3: Call2 0xc3e

0x4a4: Stack[-2] = Stack[-1]
0x4a5: Pop(1)
0x4a6: Call2 0xb7f

0x4a7: Pop(2)
0x4a8: PushEmpty(object, object)
0x4a9: Stack[-2] = Stack[-11]
0x4aa: Stack[-1] = Stack[-6]
0x4ab: Push(-2, 4); TaskCall(5)
0x4ac: Call2 0x4c3

0x4ad: Pop(-2, 4); TaskReturn
0x4ae: Pop(2)
0x4af: @@ IsDialogEnd(Stack[-1])
0x4b0: Pop(0)
0x4b1: Pop(0); Push((bool) Stack[-1] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b3: @ sync()
0x4b4: Pop(0)
0x4b5: @@ IsDialogEnd(Stack[-1])
0x4b6: Pop(0)
0x4b7: GOTO 0x4b1

0x4b8: PushEmpty(object)
0x4b9: Stack[-1] = Stack[-10]
0x4ba: Call2 0xb6e

0x4bb: Pop(1)
0x4bc: @ StopDialog(Stack[-4])
0x4bd: Pop(0)
0x4be: @@ GetReturnValue(Stack[-2])
0x4bf: Pop(0)
0x4c0: Stack[-10] = Stack[-2]
0x4c1: Return(); Pop(8)

0x4c2: Stack[-4] = 0
0x4c3: PushEmpty()
0x4c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4c7: Push((int) 1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cd: Call2 0xd20

0x4ce: Pop(1)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d0: PushEmpty(bool, object)
0x4d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d2: Call2 0xd38

0x4d3: Pop(1)
0x4d4: Pop(1); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: Stack[-1] = (bool) 1
0x4d7: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4d8: PushEmpty(object, object)
0x4d9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4da: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4db: Call2 0xcb3

0x4dc: Pop(2)
0x4dd: PushEmpty(object, object)
0x4de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e0: Call2 0xcb9

0x4e1: Pop(2)
0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Neutral"
0x4e4: Call2 0x552

0x4e5: Pop(1)
0x4e6: Push((int) 522123)
0x4e7: @@ SetMessage(Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ ClearReplies()
0x4ea: Pop(0)
0x4eb: Push((int) 522124)
0x4ec: Push((int) 24011)
0x4ed: Push((int) 23291)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Push((int) 540112)
0x4f1: Push((int) -1)
0x4f2: Push((int) 42079)
0x4f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f4: Pop(3)
0x4f5: GOTO 0x534

0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f8: Call2 0xd38

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x4fb: PushEmpty(object, object)
0x4fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fe: Call2 0xcb9

0x4ff: Pop(2)
0x500: PushEmpty(string)
0x501: Stack[-1] = "Neutral"
0x502: Call2 0x552

0x503: Pop(1)
0x504: Push((int) 522127)
0x505: @@ SetMessage(Stack[-1])
0x506: Pop(1)
0x507: @@ ClearReplies()
0x508: Pop(0)
0x509: Push((int) 522128)
0x50a: Push((int) -1)
0x50b: Push((int) 23295)
0x50c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50d: Pop(3)
0x50e: Push((int) 522844)
0x50f: Push((int) -1)
0x510: Push((int) 24028)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: GOTO 0x534

0x514: PushEmpty(object, object)
0x515: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x516: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x517: Call2 0xcb9

0x518: Pop(2)
0x519: PushEmpty(string)
0x51a: Stack[-1] = "Neutral"
0x51b: Call2 0x552

0x51c: Pop(1)
0x51d: Push((int) 522125)
0x51e: @@ SetMessage(Stack[-1])
0x51f: Pop(1)
0x520: @@ ClearReplies()
0x521: Pop(0)
0x522: PushEmpty(bool, object)
0x523: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x524: Call2 0xd2c

0x525: Pop(1)
0x526: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x527: Push((int) 522848)
0x528: Push((int) 24033)
0x529: Push((int) 24032)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Push((int) 522126)
0x52d: Push((int) -1)
0x52e: Push((int) 23293)
0x52f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x530: Pop(3)
0x531: GOTO 0x534

0x532: Return(); Pop(0)

0x533: GOTO 0x4c7

0x534: PushEmpty(bool)
0x535: Call2 0xc9b

0x536: Pop(0)
0x537: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x538: @ lshWaitForAnimEnd()
0x539: Pop(0)
0x53a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: GOTO 0x542

0x53d: PushEmpty(string)
0x53e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x53f: Call2 0xc09

0x540: Pop(1)
0x541: GOTO 0x538

0x542: GOTO 0x551

0x543: Push("all")
0x544: Push("idle")
0x545: @ PlayAnimation(Stack[-2], Stack[-1])
0x546: Pop(2)
0x547: @ WaitForAnimEnd()
0x548: Pop(0)
0x549: Push( Stack[3 + Tasks[-1].StackPointer] )
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: GOTO 0x551

0x54c: Push("all")
0x54d: Push("idle")
0x54e: @ PlayAnimation(Stack[-2], Stack[-1])
0x54f: Pop(2)
0x550: GOTO 0x547

0x551: Return(); Pop(0)

0x552: PushEmpty()
0x553: PushEmpty(bool)
0x554: Call2 0xc9b

0x555: Pop(0)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x558: Return(); Pop(0)

0x559: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: Return(); Pop(0)

0x55c: PushEmpty(string, bool)
0x55d: Stack[-2] = Stack[-3]
0x55e: Push("")
0x55f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-1] = (bool) 0
0x562: GOTO 0x564

0x563: Stack[-1] = (bool) 1
0x564: Call2 0xc19

0x565: Pop(2)
0x566: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x567: Return(); Pop(0)

0x568: PushEmpty()
0x569: Push((int) 1)
0x56a: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x56b: PushEmpty()
0x56c: Call2 0xc37

0x56d: Pop(0)
0x56e: Push((int) 24032)
0x56f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x571: PushEmpty(object, object)
0x572: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x573: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x574: Call2 0xcbf

0x575: Pop(2)
0x576: Push((int) 23290)
0x577: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x579: PushEmpty(bool)
0x57a: Stack[-1] = (bool) 0
0x57b: PushEmpty(bool, object)
0x57c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x57d: Call2 0xd20

0x57e: Pop(1)
0x57f: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x580: PushEmpty(bool, object)
0x581: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x582: Call2 0xd38

0x583: Pop(1)
0x584: Pop(1); Push((bool) Stack[-1] == 0)
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: Stack[-1] = (bool) 1
0x587: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x588: PushEmpty(object, object)
0x589: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58b: Call2 0xcb3

0x58c: Pop(2)
0x58d: PushEmpty(object, object)
0x58e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x58f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x590: Call2 0xcb9

0x591: Pop(2)
0x592: PushEmpty(string)
0x593: Stack[-1] = "Neutral"
0x594: Call2 0x552

0x595: Pop(1)
0x596: Push((int) 522123)
0x597: @@ SetMessage(Stack[-1])
0x598: Pop(1)
0x599: @@ ClearReplies()
0x59a: Pop(0)
0x59b: Push((int) 522124)
0x59c: Push((int) 24011)
0x59d: Push((int) 23291)
0x59e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59f: Pop(3)
0x5a0: Push((int) 540112)
0x5a1: Push((int) -1)
0x5a2: Push((int) 42079)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: PushEmpty(bool, object)
0x5a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a8: Call2 0xd38

0x5a9: Pop(1)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5ab: PushEmpty(object, object)
0x5ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5ae: Call2 0xcb9

0x5af: Pop(2)
0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = "Neutral"
0x5b2: Call2 0x552

0x5b3: Pop(1)
0x5b4: Push((int) 522127)
0x5b5: @@ SetMessage(Stack[-1])
0x5b6: Pop(1)
0x5b7: @@ ClearReplies()
0x5b8: Pop(0)
0x5b9: Push((int) 522128)
0x5ba: Push((int) -1)
0x5bb: Push((int) 23295)
0x5bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bd: Pop(3)
0x5be: Push((int) 522844)
0x5bf: Push((int) -1)
0x5c0: Push((int) 24028)
0x5c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c2: Pop(3)
0x5c3: Return(); Pop(0)

0x5c4: PushEmpty(object, object)
0x5c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5c7: Call2 0xcb9

0x5c8: Pop(2)
0x5c9: PushEmpty(string)
0x5ca: Stack[-1] = "Neutral"
0x5cb: Call2 0x552

0x5cc: Pop(1)
0x5cd: Push((int) 522125)
0x5ce: @@ SetMessage(Stack[-1])
0x5cf: Pop(1)
0x5d0: @@ ClearReplies()
0x5d1: Pop(0)
0x5d2: PushEmpty(bool, object)
0x5d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d4: Call2 0xd2c

0x5d5: Pop(1)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d7: Push((int) 522848)
0x5d8: Push((int) 24033)
0x5d9: Push((int) 24032)
0x5da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5db: Pop(3)
0x5dc: Push((int) 522126)
0x5dd: Push((int) -1)
0x5de: Push((int) 23293)
0x5df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e0: Pop(3)
0x5e1: Return(); Pop(0)

0x5e2: Push((int) 24033)
0x5e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5e5: PushEmpty(string)
0x5e6: Stack[-1] = "Neutral"
0x5e7: Call2 0x552

0x5e8: Pop(1)
0x5e9: Push((int) 522849)
0x5ea: @@ SetMessage(Stack[-1])
0x5eb: Pop(1)
0x5ec: @@ ClearReplies()
0x5ed: Pop(0)
0x5ee: Push((int) 522850)
0x5ef: Push((int) 24035)
0x5f0: Push((int) 24034)
0x5f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f2: Pop(3)
0x5f3: Return(); Pop(0)

0x5f4: Push((int) 24035)
0x5f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x5f7: PushEmpty(string)
0x5f8: Stack[-1] = "Neutral"
0x5f9: Call2 0x552

0x5fa: Pop(1)
0x5fb: Push((int) 522851)
0x5fc: @@ SetMessage(Stack[-1])
0x5fd: Pop(1)
0x5fe: @@ ClearReplies()
0x5ff: Pop(0)
0x600: Push((int) 522852)
0x601: Push((int) 24037)
0x602: Push((int) 24036)
0x603: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x604: Pop(3)
0x605: Push((int) 540113)
0x606: Push((int) -1)
0x607: Push((int) 42080)
0x608: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x609: Pop(3)
0x60a: Return(); Pop(0)

0x60b: Push((int) 24037)
0x60c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x60e: PushEmpty(string)
0x60f: Stack[-1] = "Neutral"
0x610: Call2 0x552

0x611: Pop(1)
0x612: Push((int) 522853)
0x613: @@ SetMessage(Stack[-1])
0x614: Pop(1)
0x615: @@ ClearReplies()
0x616: Pop(0)
0x617: Push((int) 522854)
0x618: Push((int) -1)
0x619: Push((int) 24038)
0x61a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(3)
0x61c: Return(); Pop(0)

0x61d: Push((int) 24011)
0x61e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x620: PushEmpty(string)
0x621: Stack[-1] = "Neutral"
0x622: Call2 0x552

0x623: Pop(1)
0x624: Push((int) 522828)
0x625: @@ SetMessage(Stack[-1])
0x626: Pop(1)
0x627: @@ ClearReplies()
0x628: Pop(0)
0x629: Push((int) 522829)
0x62a: Push((int) 24015)
0x62b: Push((int) 24012)
0x62c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62d: Pop(3)
0x62e: Push((int) 522830)
0x62f: Push((int) 24014)
0x630: Push((int) 24013)
0x631: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x632: Pop(3)
0x633: Return(); Pop(0)

0x634: Push((int) 24014)
0x635: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x637: PushEmpty(string)
0x638: Stack[-1] = "Neutral"
0x639: Call2 0x552

0x63a: Pop(1)
0x63b: Push((int) 522831)
0x63c: @@ SetMessage(Stack[-1])
0x63d: Pop(1)
0x63e: @@ ClearReplies()
0x63f: Pop(0)
0x640: Push((int) 522839)
0x641: Push((int) 24019)
0x642: Push((int) 24022)
0x643: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x644: Pop(3)
0x645: Return(); Pop(0)

0x646: Push((int) 24015)
0x647: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x649: PushEmpty(string)
0x64a: Stack[-1] = "Neutral"
0x64b: Call2 0x552

0x64c: Pop(1)
0x64d: Push((int) 522832)
0x64e: @@ SetMessage(Stack[-1])
0x64f: Pop(1)
0x650: @@ ClearReplies()
0x651: Pop(0)
0x652: Push((int) 522833)
0x653: Push((int) 24017)
0x654: Push((int) 24016)
0x655: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x656: Pop(3)
0x657: Push((int) 522840)
0x658: Push((int) -1)
0x659: Push((int) 24024)
0x65a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65b: Pop(3)
0x65c: Return(); Pop(0)

0x65d: Push((int) 24017)
0x65e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x660: PushEmpty(string)
0x661: Stack[-1] = "Doubt"
0x662: Call2 0x552

0x663: Pop(1)
0x664: Push((int) 522834)
0x665: @@ SetMessage(Stack[-1])
0x666: Pop(1)
0x667: @@ ClearReplies()
0x668: Pop(0)
0x669: Push((int) 522835)
0x66a: Push((int) 24019)
0x66b: Push((int) 24018)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: Push((int) 522841)
0x66f: Push((int) -1)
0x670: Push((int) 24025)
0x671: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x672: Pop(3)
0x673: Return(); Pop(0)

0x674: Push((int) 24019)
0x675: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x677: PushEmpty(string)
0x678: Stack[-1] = "Neutral"
0x679: Call2 0x552

0x67a: Pop(1)
0x67b: Push((int) 522836)
0x67c: @@ SetMessage(Stack[-1])
0x67d: Pop(1)
0x67e: @@ ClearReplies()
0x67f: Pop(0)
0x680: Push((int) 522837)
0x681: Push((int) 24021)
0x682: Push((int) 24020)
0x683: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x684: Pop(3)
0x685: Return(); Pop(0)

0x686: Push((int) 24021)
0x687: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x689: PushEmpty(string)
0x68a: Stack[-1] = "Neutral"
0x68b: Call2 0x552

0x68c: Pop(1)
0x68d: Push((int) 522838)
0x68e: @@ SetMessage(Stack[-1])
0x68f: Pop(1)
0x690: @@ ClearReplies()
0x691: Pop(0)
0x692: Push((int) 522843)
0x693: Push((int) -1)
0x694: Push((int) 24027)
0x695: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: Push((int) 522842)
0x698: Push((int) -1)
0x699: Push((int) 24026)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: Return(); Pop(0)

0x69d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x69e: PushEmpty(bool)
0x69f: Call2 0xc9b

0x6a0: Pop(0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a2: @ lshStopAnimation()
0x6a3: Pop(0)
0x6a4: GOTO 0x6a7

0x6a5: @ StopAnimation()
0x6a6: Pop(0)
0x6a7: Return(); Pop(0)

0x6a8: GOTO 0x569

0x6a9: Return(); Pop(0)

0x6aa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6ac: PushEmpty(bool, object, float)
0x6ad: Stack[-2] = Stack[-12]
0x6ae: Stack[-1] = (float) 70.0
0x6af: Call2 0xb2a

0x6b0: Pop(2)
0x6b1: Pop(1); Push((bool) Stack[-1] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-10] = (int) -2
0x6b4: Return(); Pop(8)

0x6b5: @ CreateDialog(Stack[-4])
0x6b6: Pop(0)
0x6b7: PushEmpty(int)
0x6b8: Call2 0xc95

0x6b9: Pop(0)
0x6ba: @@ SetNPCName(Stack[-1])
0x6bb: Pop(1)
0x6bc: PushEmpty(int)
0x6bd: Call2 0xc93

0x6be: Pop(0)
0x6bf: @@ SetNPCDescription(Stack[-1])
0x6c0: Pop(1)
0x6c1: PushEmpty(string)
0x6c2: Call2 0xc97

0x6c3: Pop(0)
0x6c4: @@ SetPhoto(Stack[-1])
0x6c5: Pop(1)
0x6c6: PushEmpty(string)
0x6c7: Call2 0xc99

0x6c8: Pop(0)
0x6c9: @@ SetPhoto2(Stack[-1])
0x6ca: Pop(1)
0x6cb: PushEmpty(int)
0x6cc: Call2 0xdc7

0x6cd: Pop(0)
0x6ce: @@ SetPlayerName(Stack[-1])
0x6cf: Pop(1)
0x6d0: Stack[-2] = (int) -1
0x6d1: @ IsOverrideActive(Stack[-3])
0x6d2: Pop(0)
0x6d3: Push(Stack[-3])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d5: Stack[-10] = (int) -2
0x6d6: Return(); Pop(8)

0x6d7: @ DoDialog(Stack[-4])
0x6d8: Pop(0)
0x6d9: PushEmpty(bool, object)
0x6da: PushEmpty(object)
0x6db: Call2 0xc3e

0x6dc: Stack[-2] = Stack[-1]
0x6dd: Pop(1)
0x6de: Call2 0xb7f

0x6df: Pop(2)
0x6e0: PushEmpty(object, object)
0x6e1: Stack[-2] = Stack[-11]
0x6e2: Stack[-1] = Stack[-6]
0x6e3: Push(-2, 4); TaskCall(7)
0x6e4: Call2 0x6fb

0x6e5: Pop(-2, 4); TaskReturn
0x6e6: Pop(2)
0x6e7: @@ IsDialogEnd(Stack[-1])
0x6e8: Pop(0)
0x6e9: Pop(0); Push((bool) Stack[-1] == 0)
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6eb: @ sync()
0x6ec: Pop(0)
0x6ed: @@ IsDialogEnd(Stack[-1])
0x6ee: Pop(0)
0x6ef: GOTO 0x6e9

0x6f0: PushEmpty(object)
0x6f1: Stack[-1] = Stack[-10]
0x6f2: Call2 0xb6e

0x6f3: Pop(1)
0x6f4: @ StopDialog(Stack[-4])
0x6f5: Pop(0)
0x6f6: @@ GetReturnValue(Stack[-2])
0x6f7: Pop(0)
0x6f8: Stack[-10] = Stack[-2]
0x6f9: Return(); Pop(8)

0x6fa: Stack[-4] = 0
0x6fb: PushEmpty()
0x6fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6fd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6fe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6ff: Push((int) 1)
0x700: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x701: PushEmpty(string)
0x702: Stack[-1] = "Neutral"
0x703: Call2 0x778

0x704: Pop(1)
0x705: Push((int) 524719)
0x706: @@ SetMessage(Stack[-1])
0x707: Pop(1)
0x708: @@ ClearReplies()
0x709: Pop(0)
0x70a: PushEmpty(bool)
0x70b: Stack[-1] = (bool) 0
0x70c: PushEmpty(bool)
0x70d: Stack[-1] = (bool) 0
0x70e: PushEmpty(bool, object)
0x70f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x710: Call2 0xd42

0x711: Pop(1)
0x712: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0xd4e

0x716: Pop(1)
0x717: Pop(1); Push((bool) Stack[-1] == 0)
0x718: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x719: Stack[-1] = (bool) 1
0x71a: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71b: PushEmpty(bool, object)
0x71c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71d: Call2 0xd5a

0x71e: Pop(1)
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Stack[-1] = (bool) 1
0x721: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x722: Push((int) 524720)
0x723: Push((int) 32206)
0x724: Push((int) 26059)
0x725: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x726: Pop(3)
0x727: PushEmpty(bool)
0x728: Stack[-1] = (bool) 0
0x729: PushEmpty(bool, object)
0x72a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72b: Call2 0xd4e

0x72c: Pop(1)
0x72d: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72e: PushEmpty(bool, object)
0x72f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x730: Call2 0xd42

0x731: Pop(1)
0x732: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x733: Stack[-1] = (bool) 1
0x734: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x735: Push((int) 524724)
0x736: Push((int) 32212)
0x737: Push((int) 26063)
0x738: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x739: Pop(3)
0x73a: PushEmpty(bool)
0x73b: Stack[-1] = (bool) 0
0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73e: Call2 0xd72

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0xd7e

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Stack[-1] = (bool) 1
0x747: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x748: Push((int) 530453)
0x749: Push((int) 32226)
0x74a: Push((int) 31819)
0x74b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74c: Pop(3)
0x74d: Push((int) 524721)
0x74e: Push((int) -1)
0x74f: Push((int) 26060)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Push((int) 530884)
0x753: Push((int) -1)
0x754: Push((int) 32205)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: GOTO 0x75a

0x758: Return(); Pop(0)

0x759: GOTO 0x6ff

0x75a: PushEmpty(bool)
0x75b: Call2 0xc9b

0x75c: Pop(0)
0x75d: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x75e: @ lshWaitForAnimEnd()
0x75f: Pop(0)
0x760: Push( Stack[3 + Tasks[-1].StackPointer] )
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: GOTO 0x768

0x763: PushEmpty(string)
0x764: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x765: Call2 0xc09

0x766: Pop(1)
0x767: GOTO 0x75e

0x768: GOTO 0x777

0x769: Push("all")
0x76a: Push("idle")
0x76b: @ PlayAnimation(Stack[-2], Stack[-1])
0x76c: Pop(2)
0x76d: @ WaitForAnimEnd()
0x76e: Pop(0)
0x76f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x770: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x771: GOTO 0x777

0x772: Push("all")
0x773: Push("idle")
0x774: @ PlayAnimation(Stack[-2], Stack[-1])
0x775: Pop(2)
0x776: GOTO 0x76d

0x777: Return(); Pop(0)

0x778: PushEmpty()
0x779: PushEmpty(bool)
0x77a: Call2 0xc9b

0x77b: Pop(0)
0x77c: Pop(1); Push((bool) Stack[-1] == 0)
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: Return(); Pop(0)

0x77f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Return(); Pop(0)

0x782: PushEmpty(string, bool)
0x783: Stack[-2] = Stack[-3]
0x784: Push("")
0x785: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-1] = (bool) 0
0x788: GOTO 0x78a

0x789: Stack[-1] = (bool) 1
0x78a: Call2 0xc19

0x78b: Pop(2)
0x78c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x78d: Return(); Pop(0)

0x78e: PushEmpty()
0x78f: Push((int) 1)
0x790: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x791: PushEmpty()
0x792: Call2 0xc37

0x793: Pop(0)
0x794: Push((int) 26059)
0x795: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x797: PushEmpty(object, object)
0x798: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x799: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79a: Call2 0xccc

0x79b: Pop(2)
0x79c: Push((int) 26065)
0x79d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x79f: PushEmpty(object, object)
0x7a0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a2: Call2 0xcc5

0x7a3: Pop(2)
0x7a4: Push((int) 31819)
0x7a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a7: PushEmpty(object, object)
0x7a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7aa: Call2 0xcd8

0x7ab: Pop(2)
0x7ac: Push((int) 31825)
0x7ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7af: PushEmpty(object, object)
0x7b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b2: Call2 0xcee

0x7b3: Pop(2)
0x7b4: PushEmpty(object, object)
0x7b5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b7: Call2 0xcde

0x7b8: Pop(2)
0x7b9: Push((int) 26058)
0x7ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x7bc: PushEmpty(string)
0x7bd: Stack[-1] = "Neutral"
0x7be: Call2 0x778

0x7bf: Pop(1)
0x7c0: Push((int) 524719)
0x7c1: @@ SetMessage(Stack[-1])
0x7c2: Pop(1)
0x7c3: @@ ClearReplies()
0x7c4: Pop(0)
0x7c5: PushEmpty(bool)
0x7c6: Stack[-1] = (bool) 0
0x7c7: PushEmpty(bool)
0x7c8: Stack[-1] = (bool) 0
0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cb: Call2 0xd42

0x7cc: Pop(1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7ce: PushEmpty(bool, object)
0x7cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d0: Call2 0xd4e

0x7d1: Pop(1)
0x7d2: Pop(1); Push((bool) Stack[-1] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: Stack[-1] = (bool) 1
0x7d5: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d8: Call2 0xd5a

0x7d9: Pop(1)
0x7da: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7db: Stack[-1] = (bool) 1
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7dd: Push((int) 524720)
0x7de: Push((int) 32206)
0x7df: Push((int) 26059)
0x7e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e1: Pop(3)
0x7e2: PushEmpty(bool)
0x7e3: Stack[-1] = (bool) 0
0x7e4: PushEmpty(bool, object)
0x7e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e6: Call2 0xd4e

0x7e7: Pop(1)
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7e9: PushEmpty(bool, object)
0x7ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7eb: Call2 0xd42

0x7ec: Pop(1)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ee: Stack[-1] = (bool) 1
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f0: Push((int) 524724)
0x7f1: Push((int) 32212)
0x7f2: Push((int) 26063)
0x7f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f4: Pop(3)
0x7f5: PushEmpty(bool)
0x7f6: Stack[-1] = (bool) 0
0x7f7: PushEmpty(bool, object)
0x7f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f9: Call2 0xd72

0x7fa: Pop(1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7fc: PushEmpty(bool, object)
0x7fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fe: Call2 0xd7e

0x7ff: Pop(1)
0x800: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x801: Stack[-1] = (bool) 1
0x802: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x803: Push((int) 530453)
0x804: Push((int) 32226)
0x805: Push((int) 31819)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: Push((int) 524721)
0x809: Push((int) -1)
0x80a: Push((int) 26060)
0x80b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80c: Pop(3)
0x80d: Push((int) 530884)
0x80e: Push((int) -1)
0x80f: Push((int) 32205)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Return(); Pop(0)

0x813: Push((int) 32226)
0x814: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x816: PushEmpty(string)
0x817: Stack[-1] = "Neutral"
0x818: Call2 0x778

0x819: Pop(1)
0x81a: Push((int) 530902)
0x81b: @@ SetMessage(Stack[-1])
0x81c: Pop(1)
0x81d: @@ ClearReplies()
0x81e: Pop(0)
0x81f: Push((int) 530903)
0x820: Push((int) 32228)
0x821: Push((int) 32227)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Push((int) 530906)
0x825: Push((int) 32228)
0x826: Push((int) 32230)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 32228)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Neutral"
0x82f: Call2 0x778

0x830: Pop(1)
0x831: Push((int) 530904)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: Push((int) 530905)
0x837: Push((int) 31820)
0x838: Push((int) 32229)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Return(); Pop(0)

0x83c: Push((int) 32233)
0x83d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83f: Push((int) 31820)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call2 0x778

0x845: Pop(1)
0x846: Push((int) 530454)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 530455)
0x84c: Push((int) 31822)
0x84d: Push((int) 31821)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Push((int) 530911)
0x851: Push((int) 31822)
0x852: Push((int) 32236)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: Return(); Pop(0)

0x856: Push((int) 31822)
0x857: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x858: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x859: PushEmpty(string)
0x85a: Stack[-1] = "Untrust"
0x85b: Call2 0x778

0x85c: Pop(1)
0x85d: Push((int) 530456)
0x85e: @@ SetMessage(Stack[-1])
0x85f: Pop(1)
0x860: @@ ClearReplies()
0x861: Pop(0)
0x862: Push((int) 530457)
0x863: Push((int) 31824)
0x864: Push((int) 31823)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Push((int) 530912)
0x868: Push((int) 32239)
0x869: Push((int) 32238)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Return(); Pop(0)

0x86d: Push((int) 32239)
0x86e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86f: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x870: PushEmpty(string)
0x871: Stack[-1] = "Neutral"
0x872: Call2 0x778

0x873: Pop(1)
0x874: Push((int) 530913)
0x875: @@ SetMessage(Stack[-1])
0x876: Pop(1)
0x877: @@ ClearReplies()
0x878: Pop(0)
0x879: Push((int) 530914)
0x87a: Push((int) 31824)
0x87b: Push((int) 32240)
0x87c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87d: Pop(3)
0x87e: Push((int) 530915)
0x87f: Push((int) -1)
0x880: Push((int) 32241)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Return(); Pop(0)

0x884: Push((int) 31824)
0x885: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x887: PushEmpty(string)
0x888: Stack[-1] = "Neutral"
0x889: Call2 0x778

0x88a: Pop(1)
0x88b: Push((int) 530458)
0x88c: @@ SetMessage(Stack[-1])
0x88d: Pop(1)
0x88e: @@ ClearReplies()
0x88f: Pop(0)
0x890: Push((int) 530459)
0x891: Push((int) -1)
0x892: Push((int) 31825)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Return(); Pop(0)

0x896: Push((int) 32212)
0x897: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x899: PushEmpty(string)
0x89a: Stack[-1] = "Untrust"
0x89b: Call2 0x778

0x89c: Pop(1)
0x89d: Push((int) 530891)
0x89e: @@ SetMessage(Stack[-1])
0x89f: Pop(1)
0x8a0: @@ ClearReplies()
0x8a1: Pop(0)
0x8a2: Push((int) 530892)
0x8a3: Push((int) 32215)
0x8a4: Push((int) 32213)
0x8a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a6: Pop(3)
0x8a7: Push((int) 530893)
0x8a8: Push((int) -1)
0x8a9: Push((int) 32214)
0x8aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(3)
0x8ac: Return(); Pop(0)

0x8ad: Push((int) 32215)
0x8ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8b0: PushEmpty(string)
0x8b1: Stack[-1] = "Neutral"
0x8b2: Call2 0x778

0x8b3: Pop(1)
0x8b4: Push((int) 530894)
0x8b5: @@ SetMessage(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ ClearReplies()
0x8b8: Pop(0)
0x8b9: Push((int) 530896)
0x8ba: Push((int) 32219)
0x8bb: Push((int) 32217)
0x8bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bd: Pop(3)
0x8be: Push((int) 530895)
0x8bf: Push((int) 32219)
0x8c0: Push((int) 32216)
0x8c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: Push((int) 530897)
0x8c4: Push((int) 32219)
0x8c5: Push((int) 32218)
0x8c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c7: Pop(3)
0x8c8: Return(); Pop(0)

0x8c9: Push((int) 32219)
0x8ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8cc: PushEmpty(string)
0x8cd: Stack[-1] = "Neutral"
0x8ce: Call2 0x778

0x8cf: Pop(1)
0x8d0: Push((int) 530898)
0x8d1: @@ SetMessage(Stack[-1])
0x8d2: Pop(1)
0x8d3: @@ ClearReplies()
0x8d4: Pop(0)
0x8d5: Push((int) 530899)
0x8d6: Push((int) 26064)
0x8d7: Push((int) 32220)
0x8d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d9: Pop(3)
0x8da: Push((int) 530901)
0x8db: Push((int) 26064)
0x8dc: Push((int) 32224)
0x8dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8de: Pop(3)
0x8df: Return(); Pop(0)

0x8e0: Push((int) 26064)
0x8e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8e3: PushEmpty(string)
0x8e4: Stack[-1] = "Neutral"
0x8e5: Call2 0x778

0x8e6: Pop(1)
0x8e7: Push((int) 524725)
0x8e8: @@ SetMessage(Stack[-1])
0x8e9: Pop(1)
0x8ea: @@ ClearReplies()
0x8eb: Pop(0)
0x8ec: Push((int) 524726)
0x8ed: Push((int) -1)
0x8ee: Push((int) 26065)
0x8ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f0: Pop(3)
0x8f1: Return(); Pop(0)

0x8f2: Push((int) 32206)
0x8f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8f5: PushEmpty(string)
0x8f6: Stack[-1] = "Neutral"
0x8f7: Call2 0x778

0x8f8: Pop(1)
0x8f9: Push((int) 530885)
0x8fa: @@ SetMessage(Stack[-1])
0x8fb: Pop(1)
0x8fc: @@ ClearReplies()
0x8fd: Pop(0)
0x8fe: Push((int) 530886)
0x8ff: Push((int) 32208)
0x900: Push((int) 32207)
0x901: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x902: Pop(3)
0x903: Return(); Pop(0)

0x904: Push((int) 32208)
0x905: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x907: PushEmpty(string)
0x908: Stack[-1] = "Neutral"
0x909: Call2 0x778

0x90a: Pop(1)
0x90b: Push((int) 530887)
0x90c: @@ SetMessage(Stack[-1])
0x90d: Pop(1)
0x90e: @@ ClearReplies()
0x90f: Pop(0)
0x910: Push((int) 530888)
0x911: Push((int) 26061)
0x912: Push((int) 32209)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Push((int) 530889)
0x916: Push((int) -1)
0x917: Push((int) 32210)
0x918: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x919: Pop(3)
0x91a: Return(); Pop(0)

0x91b: Push((int) 26061)
0x91c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Neutral"
0x920: Call2 0x778

0x921: Pop(1)
0x922: Push((int) 524722)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 524723)
0x928: Push((int) -1)
0x929: Push((int) 26062)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Push((int) 530890)
0x92d: Push((int) -1)
0x92e: Push((int) 32211)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Return(); Pop(0)

0x932: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x933: PushEmpty(bool)
0x934: Call2 0xc9b

0x935: Pop(0)
0x936: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x937: @ lshStopAnimation()
0x938: Pop(0)
0x939: GOTO 0x93c

0x93a: @ StopAnimation()
0x93b: Pop(0)
0x93c: Return(); Pop(0)

0x93d: GOTO 0x78f

0x93e: Return(); Pop(0)

0x93f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x940: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x941: PushEmpty(bool, object, float)
0x942: Stack[-2] = Stack[-12]
0x943: Stack[-1] = (float) 70.0
0x944: Call2 0xb2a

0x945: Pop(2)
0x946: Pop(1); Push((bool) Stack[-1] == 0)
0x947: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x948: Stack[-10] = (int) -2
0x949: Return(); Pop(8)

0x94a: @ CreateDialog(Stack[-4])
0x94b: Pop(0)
0x94c: PushEmpty(int)
0x94d: Call2 0xc95

0x94e: Pop(0)
0x94f: @@ SetNPCName(Stack[-1])
0x950: Pop(1)
0x951: PushEmpty(int)
0x952: Call2 0xc93

0x953: Pop(0)
0x954: @@ SetNPCDescription(Stack[-1])
0x955: Pop(1)
0x956: PushEmpty(string)
0x957: Call2 0xc97

0x958: Pop(0)
0x959: @@ SetPhoto(Stack[-1])
0x95a: Pop(1)
0x95b: PushEmpty(string)
0x95c: Call2 0xc99

0x95d: Pop(0)
0x95e: @@ SetPhoto2(Stack[-1])
0x95f: Pop(1)
0x960: PushEmpty(int)
0x961: Call2 0xdc7

0x962: Pop(0)
0x963: @@ SetPlayerName(Stack[-1])
0x964: Pop(1)
0x965: Stack[-2] = (int) -1
0x966: @ IsOverrideActive(Stack[-3])
0x967: Pop(0)
0x968: Push(Stack[-3])
0x969: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96a: Stack[-10] = (int) -2
0x96b: Return(); Pop(8)

0x96c: @ DoDialog(Stack[-4])
0x96d: Pop(0)
0x96e: PushEmpty(bool, object)
0x96f: PushEmpty(object)
0x970: Call2 0xc3e

0x971: Stack[-2] = Stack[-1]
0x972: Pop(1)
0x973: Call2 0xb7f

0x974: Pop(2)
0x975: PushEmpty(object, object)
0x976: Stack[-2] = Stack[-11]
0x977: Stack[-1] = Stack[-6]
0x978: Push(-2, 4); TaskCall(9)
0x979: Call2 0x990

0x97a: Pop(-2, 4); TaskReturn
0x97b: Pop(2)
0x97c: @@ IsDialogEnd(Stack[-1])
0x97d: Pop(0)
0x97e: Pop(0); Push((bool) Stack[-1] == 0)
0x97f: IF (Stack[-1] == 0) GOTO 0x985; Pop(1)

0x980: @ sync()
0x981: Pop(0)
0x982: @@ IsDialogEnd(Stack[-1])
0x983: Pop(0)
0x984: GOTO 0x97e

0x985: PushEmpty(object)
0x986: Stack[-1] = Stack[-10]
0x987: Call2 0xb6e

0x988: Pop(1)
0x989: @ StopDialog(Stack[-4])
0x98a: Pop(0)
0x98b: @@ GetReturnValue(Stack[-2])
0x98c: Pop(0)
0x98d: Stack[-10] = Stack[-2]
0x98e: Return(); Pop(8)

0x98f: Stack[-4] = 0
0x990: PushEmpty()
0x991: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x992: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x993: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x994: Push((int) 1)
0x995: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x996: PushEmpty(string)
0x997: Stack[-1] = "Neutral"
0x998: Call2 0x9ca

0x999: Pop(1)
0x99a: Push((int) 540554)
0x99b: @@ SetMessage(Stack[-1])
0x99c: Pop(1)
0x99d: @@ ClearReplies()
0x99e: Pop(0)
0x99f: Push((int) 540555)
0x9a0: Push((int) -1)
0x9a1: Push((int) 42564)
0x9a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a3: Pop(3)
0x9a4: Push((int) 540794)
0x9a5: Push((int) -1)
0x9a6: Push((int) 42843)
0x9a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a8: Pop(3)
0x9a9: GOTO 0x9ac

0x9aa: Return(); Pop(0)

0x9ab: GOTO 0x994

0x9ac: PushEmpty(bool)
0x9ad: Call2 0xc9b

0x9ae: Pop(0)
0x9af: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b0: @ lshWaitForAnimEnd()
0x9b1: Pop(0)
0x9b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: GOTO 0x9ba

0x9b5: PushEmpty(string)
0x9b6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b7: Call2 0xc09

0x9b8: Pop(1)
0x9b9: GOTO 0x9b0

0x9ba: GOTO 0x9c9

0x9bb: Push("all")
0x9bc: Push("idle")
0x9bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x9be: Pop(2)
0x9bf: @ WaitForAnimEnd()
0x9c0: Pop(0)
0x9c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c4; Pop(1)

0x9c3: GOTO 0x9c9

0x9c4: Push("all")
0x9c5: Push("idle")
0x9c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: GOTO 0x9bf

0x9c9: Return(); Pop(0)

0x9ca: PushEmpty()
0x9cb: PushEmpty(bool)
0x9cc: Call2 0xc9b

0x9cd: Pop(0)
0x9ce: Pop(1); Push((bool) Stack[-1] == 0)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9d0: Return(); Pop(0)

0x9d1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d3: Return(); Pop(0)

0x9d4: PushEmpty(string, bool)
0x9d5: Stack[-2] = Stack[-3]
0x9d6: Push("")
0x9d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d9: Stack[-1] = (bool) 0
0x9da: GOTO 0x9dc

0x9db: Stack[-1] = (bool) 1
0x9dc: Call2 0xc19

0x9dd: Pop(2)
0x9de: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9df: Return(); Pop(0)

0x9e0: PushEmpty()
0x9e1: Push((int) 1)
0x9e2: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0x9e3: PushEmpty()
0x9e4: Call2 0xc37

0x9e5: Pop(0)
0x9e6: Push((int) 42563)
0x9e7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e8: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9e9: PushEmpty(string)
0x9ea: Stack[-1] = "Neutral"
0x9eb: Call2 0x9ca

0x9ec: Pop(1)
0x9ed: Push((int) 540554)
0x9ee: @@ SetMessage(Stack[-1])
0x9ef: Pop(1)
0x9f0: @@ ClearReplies()
0x9f1: Pop(0)
0x9f2: Push((int) 540555)
0x9f3: Push((int) -1)
0x9f4: Push((int) 42564)
0x9f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f6: Pop(3)
0x9f7: Push((int) 540794)
0x9f8: Push((int) -1)
0x9f9: Push((int) 42843)
0x9fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fb: Pop(3)
0x9fc: Return(); Pop(0)

0x9fd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9fe: PushEmpty(bool)
0x9ff: Call2 0xc9b

0xa00: Pop(0)
0xa01: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa02: @ lshStopAnimation()
0xa03: Pop(0)
0xa04: GOTO 0xa07

0xa05: @ StopAnimation()
0xa06: Pop(0)
0xa07: Return(); Pop(0)

0xa08: GOTO 0x9e1

0xa09: Return(); Pop(0)

0xa0a: PushEmpty()
0xa0b: Call2 0xa0e

0xa0c: Pop(0)
0xa0d: Return(); Pop(0)

0xa0e: PushEmpty(bool)
0xa0f: Call2 0xb25

0xa10: Pop(0)
0xa11: Pop(1); Push((bool) Stack[-1] == 0)
0xa12: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa13: @ Hold()
0xa14: Pop(0)
0xa15: @ GetDirection(Stack[-0])
0xa16: Pop(0)
0xa17: PushEmpty()
0xa18: Call2 0xabe

0xa19: Pop(0)
0xa1a: GOTO 0xa17

0xa1b: Return(); Pop(0)

0xa1c: PushEmpty(object, object)
0xa1d: Push("player")
0xa1e: @ FindActor(Stack[-2], Stack[-1])
0xa1f: Pop(1)
0xa20: Pop(0); Push((bool) Stack[-1] == 0)
0xa21: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa22: Stack[-3] = (bool) 0
0xa23: Return(); Pop(2)

0xa24: PushEmpty(bool, object)
0xa25: Stack[-1] = Stack[-3]
0xa26: Call2 0xb1c

0xa27: Stack[-5] = Stack[-2]
0xa28: Pop(2)
0xa29: Return(); Pop(2)

0xa2a: Stack[-1] = 0
0xa2b: Push(CvectorIndex(Stack[-0], 0))
0xa2c: Push(CvectorIndex(Stack[-0], 2))
0xa2d: @ RotateAsync(Stack[-2], Stack[-1])
0xa2e: Pop(2)
0xa2f: Return(); Pop(0)

0xa30: PushEmpty(object, bool, object, bool)
0xa31: Push("player")
0xa32: @ FindActor(Stack[-3], Stack[-1])
0xa33: Pop(1)
0xa34: Pop(0); Push((bool) Stack[-2] == 0)
0xa35: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa36: Stack[-5] = (bool) 0
0xa37: Return(); Pop(4)

0xa38: PushEmpty(float, object)
0xa39: Stack[-1] = Stack[-4]
0xa3a: Call2 0xb0a

0xa3b: Pop(1)
0xa3c: Push((float)90000.0)
0xa3d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xa3e: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3f: Stack[-5] = (bool) 0
0xa40: Return(); Pop(4)

0xa41: @ CanSee(Stack[-1], Stack[-2])
0xa42: Pop(0)
0xa43: Stack[-5] = Stack[-1]
0xa44: Return(); Pop(4)

0xa45: Stack[-2] = 0
0xa46: PushEmpty(float, float)
0xa47: Push((int) 8)
0xa48: Push((int) 16)
0xa49: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(2)
0xa4b: Push((int) 10)
0xa4c: @ SetTimer(Stack[-1], Stack[-2])
0xa4d: Pop(1)
0xa4e: Return(); Pop(2)

0xa4f: Push((int) 10)
0xa50: @ KillTimer(Stack[-1])
0xa51: Pop(1)
0xa52: Return(); Pop(0)

0xa53: PushEmpty()
0xa54: Push((int) 10)
0xa55: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa57: PushEmpty()
0xa58: Call2 0xa4f

0xa59: Pop(0)
0xa5a: PushEmpty(bool)
0xa5b: Stack[-1] = (bool) 0
0xa5c: PushEmpty(bool)
0xa5d: Call2 0xb25

0xa5e: Pop(0)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa60: PushEmpty(bool)
0xa61: Call2 0xa30

0xa62: Pop(0)
0xa63: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa64: Stack[-1] = (bool) 1
0xa65: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa66: PushEmpty(bool)
0xa67: Call2 0xa1c

0xa68: Pop(0)
0xa69: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6a: PushEmpty(bool, object)
0xa6b: PushEmpty(object)
0xa6c: Call2 0xc3e

0xa6d: Stack[-2] = Stack[-1]
0xa6e: Pop(1)
0xa6f: Call2 0xbb9

0xa70: Pop(2)
0xa71: GOTO 0xa78

0xa72: PushEmpty()
0xa73: Call2 0xa2b

0xa74: Pop(0)
0xa75: PushEmpty()
0xa76: Call2 0xa46

0xa77: Pop(0)
0xa78: Return(); Pop(0)

0xa79: PushEmpty()
0xa7a: Call2 0xb05

0xa7b: Pop(0)
0xa7c: PushEmpty()
0xa7d: Call2 0xa4f

0xa7e: Pop(0)
0xa7f: @ lshStopSpeech()
0xa80: Pop(0)
0xa81: @ lshStopAnimation()
0xa82: Pop(0)
0xa83: @ StopAsync()
0xa84: Pop(0)
0xa85: @ Hold()
0xa86: Pop(0)
0xa87: Return(); Pop(0)

0xa88: @ StopGroup0()
0xa89: Pop(0)
0xa8a: PushEmpty()
0xa8b: Call2 0xa4f

0xa8c: Pop(0)
0xa8d: PushEmpty(string)
0xa8e: Stack[-1] = "Neutral"
0xa8f: Call2 0xc09

0xa90: Pop(1)
0xa91: PushEmpty()
0xa92: Call2 0xa46

0xa93: Pop(0)
0xa94: Return(); Pop(0)

0xa95: PushEmpty()
0xa96: Push(Stack[-1])
0xa97: IF (Stack[-1] == 0) GOTO 0xa9c; Pop(1)

0xa98: PushEmpty()
0xa99: Call2 0xa46

0xa9a: Pop(0)
0xa9b: GOTO 0xaa0

0xa9c: PushEmpty(string)
0xa9d: Stack[-1] = "Neutral"
0xa9e: Call2 0xc09

0xa9f: Pop(1)
0xaa0: Return(); Pop(0)

0xaa1: PushEmpty(bool, bool)
0xaa2: @ IsOverrideActive(Stack[-1])
0xaa3: Pop(0)
0xaa4: Pop(0); Push((bool) Stack[-1] == 0)
0xaa5: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xaa6: EventDisable(0)
0xaa7: PushEmpty()
0xaa8: Call2 0xb05

0xaa9: Pop(0)
0xaaa: PushEmpty(bool, object)
0xaab: Stack[-1] = Stack[-5]
0xaac: Call2 0xb1c

0xaad: Pop(2)
0xaae: EventEnable(0)
0xaaf: PushEmpty(object)
0xab0: Stack[-1] = Stack[-4]
0xab1: Call2 0xdd8

0xab2: Pop(1)
0xab3: PushEmpty(string)
0xab4: Stack[-1] = "Neutral"
0xab5: Call2 0xc09

0xab6: Pop(1)
0xab7: PushEmpty()
0xab8: Call2 0xa4f

0xab9: Pop(0)
0xaba: PushEmpty()
0xabb: Call2 0xa46

0xabc: Pop(0)
0xabd: Return(); Pop(2)

0xabe: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xabf: @ WaitForAnimEnd()
0xac0: Pop(0)
0xac1: PushEmpty(bool)
0xac2: Call2 0xb25

0xac3: Pop(0)
0xac4: Pop(1); Push((bool) Stack[-1] == 0)
0xac5: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac6: Return(); Pop(12)

0xac7: PushEmpty(int)
0xac8: Call2 0xc82

0xac9: Stack[-7] = Stack[-1]
0xaca: Pop(1)
0xacb: Stack[-5] = (int) 0
0xacc: PushEmpty(bool)
0xacd: Stack[-1] = (bool) 0
0xace: Push((int) 5)
0xacf: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad1: PushEmpty(bool)
0xad2: Call2 0xb25

0xad3: Pop(0)
0xad4: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad5: Stack[-1] = (bool) 1
0xad6: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xad7: Pop(0); Push((bool) Stack[-6] == 0)
0xad8: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xad9: Push((int) 3)
0xada: @ Sleep(Stack[-1], Stack[-5])
0xadb: Pop(1)
0xadc: Pop(0); Push((bool) Stack[-4] == 0)
0xadd: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xade: GOTO 0xb00

0xadf: GOTO 0xaf5

0xae0: @ irand(Stack[-3], Stack[-6])
0xae1: Pop(0)
0xae2: Push((int) 5)
0xae3: @ irand(Stack[-3], Stack[-1])
0xae4: Pop(1)
0xae5: Push((int) 0)
0xae6: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xae7: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xae8: Stack[-3] = (int) 0
0xae9: Push("all")
0xaea: PushEmpty(string, int)
0xaeb: Stack[-1] = Stack[-6]
0xaec: Call2 0xc7b

0xaed: Pop(1)
0xaee: @ PlayAnimation(Stack[-2], Stack[-1])
0xaef: Pop(2)
0xaf0: @ WaitForAnimEnd(Stack[-1])
0xaf1: Pop(0)
0xaf2: Pop(0); Push((bool) Stack[-1] == 0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf5; Pop(1)

0xaf4: GOTO 0xb00

0xaf5: PushEmpty(bool)
0xaf6: Call2 0xb03

0xaf7: Pop(0)
0xaf8: Pop(1); Push((bool) Stack[-1] == 0)
0xaf9: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xafa: GOTO 0xb00

0xafb: @ ResetAAS()
0xafc: Pop(0)
0xafd: Push((int) 1)
0xafe: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xaff: GOTO 0xacc

0xb00: @ ResetAAS()
0xb01: Pop(0)
0xb02: Return(); Pop(12)

0xb03: Stack[-1] = (bool) 1
0xb04: Return(); Pop(0)

0xb05: @ StopAnimation()
0xb06: Pop(0)
0xb07: @ StopGroup0()
0xb08: Pop(0)
0xb09: Return(); Pop(0)

0xb0a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb0b: @ GetPosition(Stack[-3])
0xb0c: Pop(0)
0xb0d: @@ GetPosition(Stack[-2])
0xb0e: Pop(0)
0xb0f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb10: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb11: Return(); Pop(6)

0xb12: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xb13: @ GetPosition(Stack[-3])
0xb14: Pop(0)
0xb15: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xb16: Push(CvectorIndex(Stack[-2], 0))
0xb17: Push(CvectorIndex(Stack[-3], 2))
0xb18: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xb19: Pop(2)
0xb1a: Stack[-8] = Stack[-1]
0xb1b: Return(); Pop(6)

0xb1c: PushEmpty(cvector, cvector)
0xb1d: @@ GetPosition(Stack[-1])
0xb1e: Pop(0)
0xb1f: PushEmpty(bool, cvector)
0xb20: Stack[-1] = Stack[-3]
0xb21: Call2 0xb12

0xb22: Stack[-6] = Stack[-2]
0xb23: Pop(2)
0xb24: Return(); Pop(2)

0xb25: PushEmpty(bool, bool)
0xb26: @ IsLoaded(Stack[-1])
0xb27: Pop(0)
0xb28: Stack[-3] = Stack[-1]
0xb29: Return(); Pop(2)

0xb2a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xb2b: @@ GetPosition(Stack[-8])
0xb2c: Pop(0)
0xb2d: @@ GetEyesHeight(Stack[-9])
0xb2e: Pop(0)
0xb2f: Push(CvectorIndex(Stack[-8], 1))
0xb30: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb31: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xb32: @ GetPosition(Stack[-7])
0xb33: Pop(0)
0xb34: @ GetEyesHeight(Stack[-9])
0xb35: Pop(0)
0xb36: Push(CvectorIndex(Stack[-7], 1))
0xb37: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xb38: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xb39: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xb3a: Push(CvectorIndex(Stack[-6], 1))
0xb3b: Stack[-1] = (int) 0
0xb3c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xb3d: Pop(0); Push(Stack[-6] | Stack[-6]);
0xb3e: Pop(1); Push(Sqrt(Stack[-1]))
0xb3f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xb40: Stack[-5] = -Stack[-6]; Pop(0);
0xb41: Pop(0); Push(Stack[-6] * Stack[-19]);
0xb42: PushEmpty(cvector, cvector)
0xb43: Push(CVector(0.0, 1.0, 0.0))
0xb44: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xb45: Call2 0xc44

0xb46: Pop(1)
0xb47: Push((int) 25)
0xb48: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb49: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb4a: Push(CVector(0.0, 10.0, 0.0))
0xb4b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xb4c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xb4d: @ IsOverrideActive(Stack[-2])
0xb4e: Pop(0)
0xb4f: Push(Stack[-2])
0xb50: IF (Stack[-1] == 0) GOTO 0xb53; Pop(1)

0xb51: Stack[-21] = (bool) 0
0xb52: Return(); Pop(18)

0xb53: @ StopWorld()
0xb54: Pop(0)
0xb55: @ CameraTransit(Stack[-3], Stack[-5])
0xb56: Pop(0)
0xb57: Push(CvectorIndex(Stack[-4], 0))
0xb58: Push(CvectorIndex(Stack[-5], 2))
0xb59: @ Rotate(Stack[-2], Stack[-1])
0xb5a: Pop(2)
0xb5b: PushEmpty(bool)
0xb5c: Call2 0xc9b

0xb5d: Pop(0)
0xb5e: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5f: GOTO 0xb68

0xb60: Push("head")
0xb61: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb62: Pop(1)
0xb63: Push(Stack[-1])
0xb64: IF (Stack[-1] == 0) GOTO 0xb68; Pop(1)

0xb65: Push("head")
0xb66: @ LookAsyncCamera(Stack[-1])
0xb67: Pop(1)
0xb68: @ CameraWaitForPlayFinish()
0xb69: Pop(0)
0xb6a: @ ResumeWorld()
0xb6b: Pop(0)
0xb6c: Stack[-21] = (bool) 1
0xb6d: Return(); Pop(18)

0xb6e: PushEmpty(bool, bool)
0xb6f: @ CameraSwitchToNormal()
0xb70: Pop(0)
0xb71: PushEmpty(bool)
0xb72: Call2 0xc9b

0xb73: Pop(0)
0xb74: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb75: GOTO 0xb7e

0xb76: Push("head")
0xb77: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xb78: Pop(1)
0xb79: Push(Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7b: Push("head")
0xb7c: @ UnlookAsync(Stack[-1])
0xb7d: Pop(1)
0xb7e: Return(); Pop(2)

0xb7f: PushEmpty(int, int, int, int)
0xb80: Push("voice_common")
0xb81: @ GetVariable(Stack[-1], Stack[-3])
0xb82: Pop(1)
0xb83: Push(Stack[-2])
0xb84: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xb85: PushEmpty(bool, object)
0xb86: Stack[-1] = Stack[-7]
0xb87: Call2 0xbb9

0xb88: Pop(1)
0xb89: Pop(1); Push((bool) Stack[-1] == 0)
0xb8a: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb8b: PushEmpty(bool, object)
0xb8c: Stack[-1] = Stack[-7]
0xb8d: Call2 0xbde

0xb8e: Pop(1)
0xb8f: Pop(1); Push((bool) Stack[-1] == 0)
0xb90: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb91: Stack[-6] = (bool) 0
0xb92: Return(); Pop(4)

0xb93: Push((int) 2)
0xb94: @ irand(Stack[-2], Stack[-1])
0xb95: Pop(1)
0xb96: Push(Stack[-1])
0xb97: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb98: Push("voice_common")
0xb99: Push((int) 1)
0xb9a: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb9b: Push((int) 3)
0xb9c: Pop(2); Push(Stack[-2] % Stack[-1]);
0xb9d: @ SetVariable(Stack[-2], Stack[-1])
0xb9e: Pop(2)
0xb9f: GOTO 0xba4

0xba0: Push("voice_common")
0xba1: Push((int) 0)
0xba2: @ SetVariable(Stack[-2], Stack[-1])
0xba3: Pop(2)
0xba4: GOTO 0xbb7

0xba5: PushEmpty(bool, object)
0xba6: Stack[-1] = Stack[-7]
0xba7: Call2 0xbde

0xba8: Pop(1)
0xba9: Pop(1); Push((bool) Stack[-1] == 0)
0xbaa: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbab: PushEmpty(bool, object)
0xbac: Stack[-1] = Stack[-7]
0xbad: Call2 0xbb9

0xbae: Pop(1)
0xbaf: Pop(1); Push((bool) Stack[-1] == 0)
0xbb0: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbb1: Stack[-6] = (bool) 0
0xbb2: Return(); Pop(4)

0xbb3: Push("voice_common")
0xbb4: Push((int) 1)
0xbb5: @ SetVariable(Stack[-2], Stack[-1])
0xbb6: Pop(2)
0xbb7: Stack[-6] = (bool) 1
0xbb8: Return(); Pop(4)

0xbb9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xbba: Stack[-5] = "c"
0xbbb: Stack[-4] = (int) 0
0xbbc: Push((int) 1)
0xbbd: IF (Stack[-1] == 0) GOTO 0xbc9; Pop(1)

0xbbe: Push((int) 1)
0xbbf: Pop(1); Push(Stack[-5] + Stack[-1]);
0xbc0: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbc1: @@ HasProperty(Stack[-1], Stack[-4])
0xbc2: Pop(1)
0xbc3: Pop(0); Push((bool) Stack[-3] == 0)
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc5: GOTO 0xbc9

0xbc6: Push((int) 1)
0xbc7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xbc8: GOTO 0xbbc

0xbc9: Pop(0); Push((bool) Stack[-4] == 0)
0xbca: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbcb: Stack[-12] = (bool) 0
0xbcc: Return(); Pop(10)

0xbcd: Stack[-2] = (int) 0
0xbce: Push((int) 1)
0xbcf: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xbd0: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbd1: @ irand(Stack[-2], Stack[-4])
0xbd2: Pop(0)
0xbd3: Push((int) 1)
0xbd4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbd5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbd6: @@ GetProperty(Stack[-1], Stack[-2])
0xbd7: Pop(1)
0xbd8: PushEmpty(bool, string)
0xbd9: Stack[-1] = Stack[-3]
0xbda: Call2 0xc28

0xbdb: Stack[-14] = Stack[-2]
0xbdc: Pop(2)
0xbdd: Return(); Pop(10)

0xbde: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xbdf: Push("d")
0xbe0: PushEmpty(int)
0xbe1: Call2 0xc64

0xbe2: Pop(0)
0xbe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe4: Push("m")
0xbe5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xbe6: Stack[-4] = (int) 0
0xbe7: Push((int) 1)
0xbe8: IF (Stack[-1] == 0) GOTO 0xbf4; Pop(1)

0xbe9: Push((int) 1)
0xbea: Pop(1); Push(Stack[-5] + Stack[-1]);
0xbeb: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbec: @@ HasProperty(Stack[-1], Stack[-4])
0xbed: Pop(1)
0xbee: Pop(0); Push((bool) Stack[-3] == 0)
0xbef: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbf0: GOTO 0xbf4

0xbf1: Push((int) 1)
0xbf2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xbf3: GOTO 0xbe7

0xbf4: Pop(0); Push((bool) Stack[-4] == 0)
0xbf5: IF (Stack[-1] == 0) GOTO 0xbf8; Pop(1)

0xbf6: Stack[-12] = (bool) 0
0xbf7: Return(); Pop(10)

0xbf8: Stack[-2] = (int) 0
0xbf9: Push((int) 1)
0xbfa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfc: @ irand(Stack[-2], Stack[-4])
0xbfd: Pop(0)
0xbfe: Push((int) 1)
0xbff: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc00: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc01: @@ GetProperty(Stack[-1], Stack[-2])
0xc02: Pop(1)
0xc03: PushEmpty(bool, string)
0xc04: Stack[-1] = Stack[-3]
0xc05: Call2 0xc28

0xc06: Stack[-14] = Stack[-2]
0xc07: Pop(2)
0xc08: Return(); Pop(10)

0xc09: PushEmpty(bool, float, float, bool, float, float)
0xc0a: @ lshHasAnimation(Stack[-3], Stack[-7])
0xc0b: Pop(0)
0xc0c: Push(Stack[-3])
0xc0d: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc0e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xc0f: Pop(0)
0xc10: Push((bool) 0)
0xc11: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(1)
0xc13: GOTO 0xc18

0xc14: Push("Can't find lsh animation : ")
0xc15: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc16: @ Trace(Stack[-1])
0xc17: Pop(1)
0xc18: Return(); Pop(6)

0xc19: PushEmpty(bool, float, float, bool, float, float)
0xc1a: @ lshHasAnimation(Stack[-3], Stack[-8])
0xc1b: Pop(0)
0xc1c: Push(Stack[-3])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xc1f: Pop(0)
0xc20: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xc21: Pop(0)
0xc22: GOTO 0xc27

0xc23: Push("Can't find lsh animation : ")
0xc24: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc25: @ Trace(Stack[-1])
0xc26: Pop(1)
0xc27: Return(); Pop(6)

0xc28: PushEmpty(bool, bool)
0xc29: PushEmpty(bool)
0xc2a: Call2 0xc9b

0xc2b: Pop(0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc2d: @ lshHasSpeech(Stack[-1], Stack[-3])
0xc2e: Pop(0)
0xc2f: Push(Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc31: @ lshPlaySpeech(Stack[-3])
0xc32: Pop(0)
0xc33: Stack[-4] = (bool) 1
0xc34: Return(); Pop(2)

0xc35: Stack[-4] = (bool) 0
0xc36: Return(); Pop(2)

0xc37: PushEmpty(bool)
0xc38: Call2 0xc9b

0xc39: Pop(0)
0xc3a: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc3b: @ lshStopSpeech()
0xc3c: Pop(0)
0xc3d: Return(); Pop(0)

0xc3e: PushEmpty(object, object)
0xc3f: @ self(Stack[-1])
0xc40: Pop(0)
0xc41: Stack[-3] = Stack[-1]
0xc42: Return(); Pop(2)

0xc43: Stack[-1] = 0
0xc44: PushEmpty(float, float)
0xc45: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc46: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc47: Push((float)0.0)
0xc48: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc49: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc4b: Return(); Pop(2)

0xc4c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc4d: Return(); Pop(2)

0xc4e: PushEmpty(int, int)
0xc4f: @ GetVariable(Stack[-3], Stack[-1])
0xc50: Pop(0)
0xc51: Stack[-4] = Stack[-1]
0xc52: Return(); Pop(2)

0xc53: PushEmpty(object, object)
0xc54: @ FindActor(Stack[-1], Stack[-4])
0xc55: Pop(0)
0xc56: Pop(0); Push((bool) Stack[-1] == 0)
0xc57: IF (Stack[-1] == 0) GOTO 0xc5a; Pop(1)

0xc58: Stack[-5] = (bool) 0
0xc59: Return(); Pop(2)

0xc5a: @ Trigger(Stack[-1], Stack[-3])
0xc5b: Pop(0)
0xc5c: Stack[-5] = (bool) 1
0xc5d: Return(); Pop(2)

0xc5e: Stack[-1] = 0
0xc5f: PushEmpty(float, float)
0xc60: @ GetGameTime(Stack[-1])
0xc61: Pop(0)
0xc62: Stack[-3] = Stack[-1]
0xc63: Return(); Pop(2)

0xc64: PushEmpty(float, float)
0xc65: @ GetGameTime(Stack[-1])
0xc66: Pop(0)
0xc67: Push((int) 1)
0xc68: PushEmpty(int)
0xc69: Push((int) 24)
0xc6a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc6b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc6c: Return(); Pop(2)

0xc6d: PushEmpty(float, float)
0xc6e: @ GetGameTime(Stack[-1])
0xc6f: Pop(0)
0xc70: PushEmpty(int)
0xc71: Stack[-1] = Stack[-2]
0xc72: Push((int) 24)
0xc73: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xc74: Return(); Pop(2)

0xc75: PushEmpty()
0xc76: PushEmpty(int)
0xc77: Call2 0xc64

0xc78: Pop(0)
0xc79: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xc7a: Return(); Pop(0)

0xc7b: PushEmpty(string, string)
0xc7c: Stack[-1] = "idle"
0xc7d: Push(Stack[-3])
0xc7e: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc7f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xc80: Stack[-4] = Stack[-1]
0xc81: Return(); Pop(2)

0xc82: PushEmpty(int, bool, int, bool)
0xc83: Stack[-2] = (int) 0
0xc84: Push("all")
0xc85: PushEmpty(string, int)
0xc86: Stack[-1] = Stack[-5]
0xc87: Call2 0xc7b

0xc88: Pop(1)
0xc89: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc8a: Pop(2)
0xc8b: Pop(0); Push((bool) Stack[-1] == 0)
0xc8c: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc8d: GOTO 0xc91

0xc8e: Push((int) 1)
0xc8f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc90: GOTO 0xc84

0xc91: Stack[-5] = Stack[-2]
0xc92: Return(); Pop(4)

0xc93: Stack[-1] = (int) 515532
0xc94: Return(); Pop(0)

0xc95: Stack[-1] = (int) 514840
0xc96: Return(); Pop(0)

0xc97: Stack[-1] = "ui/NPC_Block.png"
0xc98: Return(); Pop(0)

0xc99: Stack[-1] = "ui/NPC_Block_b.png"
0xc9a: Return(); Pop(0)

0xc9b: Stack[-1] = (bool) 1
0xc9c: Return(); Pop(0)

0xc9d: PushEmpty()
0xc9e: PushEmpty(object, string, float)
0xc9f: PushEmpty(object)
0xca0: Call2 0xd95

0xca1: Stack[-4] = Stack[-1]
0xca2: Pop(1)
0xca3: Stack[-2] = "pt_map_starshina"
0xca4: Stack[-1] = (int) 2
0xca5: Call2 0xda6

0xca6: Pop(3)
0xca7: PushEmpty(object)
0xca8: Call2 0xd95

0xca9: Pop(0)
0xcaa: @@ ShowMap(Stack[-1])
0xcab: Pop(1)
0xcac: Return(); Pop(0)

0xcad: PushEmpty()
0xcae: Push("oob9Block1")
0xcaf: Push((int) 1)
0xcb0: @ SetVariable(Stack[-2], Stack[-1])
0xcb1: Pop(2)
0xcb2: Return(); Pop(0)

0xcb3: PushEmpty()
0xcb4: Push("oob12Block1")
0xcb5: Push((int) 1)
0xcb6: @ SetVariable(Stack[-2], Stack[-1])
0xcb7: Pop(2)
0xcb8: Return(); Pop(0)

0xcb9: PushEmpty()
0xcba: Push("b12q01BlockVisit")
0xcbb: Push((int) 1)
0xcbc: @ SetVariable(Stack[-2], Stack[-1])
0xcbd: Pop(2)
0xcbe: Return(); Pop(0)

0xcbf: PushEmpty()
0xcc0: Push("oob12Block2")
0xcc1: Push((int) 1)
0xcc2: @ SetVariable(Stack[-2], Stack[-1])
0xcc3: Pop(2)
0xcc4: Return(); Pop(0)

0xcc5: PushEmpty()
0xcc6: PushEmpty(bool, string, string)
0xcc7: Stack[-2] = "quest_b10_02"
0xcc8: Stack[-1] = "completed"
0xcc9: Call2 0xc53

0xcca: Pop(3)
0xccb: Return(); Pop(0)

0xccc: PushEmpty()
0xccd: Push("oob10Block1")
0xcce: Push((int) 1)
0xccf: @ SetVariable(Stack[-2], Stack[-1])
0xcd0: Pop(2)
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: Push("oob9Block2")
0xcd4: Push((int) 1)
0xcd5: @ SetVariable(Stack[-2], Stack[-1])
0xcd6: Pop(2)
0xcd7: Return(); Pop(0)

0xcd8: PushEmpty()
0xcd9: Push("oob10Block2")
0xcda: Push((int) 1)
0xcdb: @ SetVariable(Stack[-2], Stack[-1])
0xcdc: Pop(2)
0xcdd: Return(); Pop(0)

0xcde: PushEmpty()
0xcdf: PushEmpty(object, string, float)
0xce0: PushEmpty(object)
0xce1: Call2 0xd95

0xce2: Stack[-4] = Stack[-1]
0xce3: Pop(1)
0xce4: Stack[-2] = "pt_gmap_vagon_army"
0xce5: Stack[-1] = (int) 2
0xce6: Call2 0xda6

0xce7: Pop(3)
0xce8: PushEmpty(object)
0xce9: Call2 0xd95

0xcea: Pop(0)
0xceb: @@ ShowMap(Stack[-1])
0xcec: Pop(1)
0xced: Return(); Pop(0)

0xcee: PushEmpty(object, object)
0xcef: PushEmpty(object)
0xcf0: Call2 0xd95

0xcf1: Stack[-2] = Stack[-1]
0xcf2: Pop(1)
0xcf3: Push("b10q04BlockGotoOfficer")
0xcf4: Push("pt_gmap_vagon_army")
0xcf5: Push((int) 0)
0xcf6: Push((int) 530547)
0xcf7: PushEmpty(float)
0xcf8: Call2 0xc5f

0xcf9: Pop(0)
0xcfa: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xcfb: Pop(5)
0xcfc: Return(); Pop(2)

0xcfd: Stack[-1] = 0
0xcfe: PushEmpty()
0xcff: Push("b9BlockVisit")
0xd00: Push((int) 1)
0xd01: @ SetVariable(Stack[-2], Stack[-1])
0xd02: Pop(2)
0xd03: Return(); Pop(0)

0xd04: PushEmpty(object, object)
0xd05: PushEmpty(object)
0xd06: Call2 0xd95

0xd07: Stack[-2] = Stack[-1]
0xd08: Pop(1)
0xd09: Push("b9q01BlockGotoBoiny")
0xd0a: Push("pt_map_starshina")
0xd0b: Push((int) 3)
0xd0c: Push((int) 531550)
0xd0d: PushEmpty(float)
0xd0e: Call2 0xc5f

0xd0f: Pop(0)
0xd10: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(5)
0xd12: Return(); Pop(2)

0xd13: Stack[-1] = 0
0xd14: PushEmpty()
0xd15: PushEmpty(int, string)
0xd16: Stack[-1] = "oob9Block1"
0xd17: Call2 0xc4e

0xd18: Pop(1)
0xd19: Push((int) 0)
0xd1a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd1b: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1c: Stack[-2] = (bool) 1
0xd1d: Return(); Pop(0)

0xd1e: Stack[-2] = (bool) 0
0xd1f: Return(); Pop(0)

0xd20: PushEmpty()
0xd21: PushEmpty(int, string)
0xd22: Stack[-1] = "oob12Block1"
0xd23: Call2 0xc4e

0xd24: Pop(1)
0xd25: Push((int) 0)
0xd26: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd27: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd28: Stack[-2] = (bool) 1
0xd29: Return(); Pop(0)

0xd2a: Stack[-2] = (bool) 0
0xd2b: Return(); Pop(0)

0xd2c: PushEmpty()
0xd2d: PushEmpty(int, string)
0xd2e: Stack[-1] = "oob12Block2"
0xd2f: Call2 0xc4e

0xd30: Pop(1)
0xd31: Push((int) 0)
0xd32: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd33: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xd34: Stack[-2] = (bool) 1
0xd35: Return(); Pop(0)

0xd36: Stack[-2] = (bool) 0
0xd37: Return(); Pop(0)

0xd38: PushEmpty()
0xd39: PushEmpty(bool, object)
0xd3a: Stack[-1] = Stack[-3]
0xd3b: Call2 0xd8a

0xd3c: Pop(1)
0xd3d: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3e: Stack[-2] = (bool) 1
0xd3f: Return(); Pop(0)

0xd40: Stack[-2] = (bool) 0
0xd41: Return(); Pop(0)

0xd42: PushEmpty()
0xd43: PushEmpty(int, string)
0xd44: Stack[-1] = "b10q02"
0xd45: Call2 0xc4e

0xd46: Pop(1)
0xd47: Push((int) 3)
0xd48: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd49: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd4a: Stack[-2] = (bool) 1
0xd4b: Return(); Pop(0)

0xd4c: Stack[-2] = (bool) 0
0xd4d: Return(); Pop(0)

0xd4e: PushEmpty()
0xd4f: PushEmpty(int, string)
0xd50: Stack[-1] = "b10q02Cutscene"
0xd51: Call2 0xc4e

0xd52: Pop(1)
0xd53: Push((int) 0)
0xd54: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xd55: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd56: Stack[-2] = (bool) 1
0xd57: Return(); Pop(0)

0xd58: Stack[-2] = (bool) 0
0xd59: Return(); Pop(0)

0xd5a: PushEmpty()
0xd5b: PushEmpty(int, string)
0xd5c: Stack[-1] = "oob10Block1"
0xd5d: Call2 0xc4e

0xd5e: Pop(1)
0xd5f: Push((int) 0)
0xd60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd62: Stack[-2] = (bool) 1
0xd63: Return(); Pop(0)

0xd64: Stack[-2] = (bool) 0
0xd65: Return(); Pop(0)

0xd66: PushEmpty()
0xd67: PushEmpty(int, string)
0xd68: Stack[-1] = "oob9Block2"
0xd69: Call2 0xc4e

0xd6a: Pop(1)
0xd6b: Push((int) 0)
0xd6c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd6d: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd6e: Stack[-2] = (bool) 1
0xd6f: Return(); Pop(0)

0xd70: Stack[-2] = (bool) 0
0xd71: Return(); Pop(0)

0xd72: PushEmpty()
0xd73: PushEmpty(int, string)
0xd74: Stack[-1] = "b10q04KapellaGotoBlock"
0xd75: Call2 0xc4e

0xd76: Pop(1)
0xd77: Push((int) 0)
0xd78: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xd79: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd7a: Stack[-2] = (bool) 1
0xd7b: Return(); Pop(0)

0xd7c: Stack[-2] = (bool) 0
0xd7d: Return(); Pop(0)

0xd7e: PushEmpty()
0xd7f: PushEmpty(int, string)
0xd80: Stack[-1] = "oob10Block2"
0xd81: Call2 0xc4e

0xd82: Pop(1)
0xd83: Push((int) 0)
0xd84: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd85: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd86: Stack[-2] = (bool) 1
0xd87: Return(); Pop(0)

0xd88: Stack[-2] = (bool) 0
0xd89: Return(); Pop(0)

0xd8a: PushEmpty()
0xd8b: PushEmpty(int)
0xd8c: Call2 0xc6d

0xd8d: Pop(0)
0xd8e: Push((int) 19)
0xd8f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd91: Stack[-2] = (bool) 1
0xd92: Return(); Pop(0)

0xd93: Stack[-2] = (bool) 0
0xd94: Return(); Pop(0)

0xd95: PushEmpty(object, object, object, object)
0xd96: @ GetMainOutdoorScene(Stack[-2])
0xd97: Pop(0)
0xd98: Pop(0); Push((bool) Stack[-2] == 0)
0xd99: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd9a: Push("Can't find main outdoor scene")
0xd9b: @ Trace(Stack[-1])
0xd9c: Pop(1)
0xd9d: Stack[-1] = 0
0xd9e: Stack[-5] = Stack[-1]
0xd9f: Return(); Pop(4)

0xda0: @@ GetMap(Stack[-1])
0xda1: Pop(0)
0xda2: Stack[-5] = Stack[-1]
0xda3: Return(); Pop(4)

0xda4: Stack[-1] = 0
0xda5: Stack[-2] = 0
0xda6: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xda7: @ GetMainOutdoorScene(Stack[-2])
0xda8: Pop(0)
0xda9: Pop(0); Push((bool) Stack[-2] == 0)
0xdaa: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdab: Push("Can't find main outdoor scene")
0xdac: @ Trace(Stack[-1])
0xdad: Pop(1)
0xdae: Return(); Pop(8)

0xdaf: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xdb0: Pop(0)
0xdb1: Pop(0); Push((bool) Stack[-1] == 0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb3: Push("Warning: outdoor scene locator ")
0xdb4: Pop(1); Push(Stack[-1] + Stack[-11]);
0xdb5: Push(" doesnt exist")
0xdb6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdb7: @ Trace(Stack[-1])
0xdb8: Pop(1)
0xdb9: @@ GetMap(Stack[-11])
0xdba: Pop(0)
0xdbb: Pop(0); Push((bool) Stack[-11] == 0)
0xdbc: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbd: Push("Can't find map")
0xdbe: @ Trace(Stack[-1])
0xdbf: Pop(1)
0xdc0: Return(); Pop(8)

0xdc1: Push(CvectorIndex(Stack[-4], 0))
0xdc2: Push(CvectorIndex(Stack[-5], 2))
0xdc3: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xdc4: Pop(2)
0xdc5: Return(); Pop(8)

0xdc6: Stack[-2] = 0
0xdc7: PushEmpty(int, int)
0xdc8: Push("branch")
0xdc9: @ GetVariable(Stack[-1], Stack[-2])
0xdca: Pop(1)
0xdcb: Push((int) 0)
0xdcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdcd: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdce: Stack[-3] = (int) 1
0xdcf: Return(); Pop(2)

0xdd0: GOTO 0xdd6

0xdd1: Push((int) 1)
0xdd2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd3: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd4: Stack[-3] = (int) 2
0xdd5: Return(); Pop(2)

0xdd6: Stack[-3] = (int) 3
0xdd7: Return(); Pop(2)

0xdd8: PushEmpty(int, int)
0xdd9: Push("mt_block")
0xdda: @ GetVariable(Stack[-1], Stack[-2])
0xddb: Pop(1)
0xddc: Pop(0); Push((bool) Stack[-1] == 0)
0xddd: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xdde: PushEmpty(int, object)
0xddf: Stack[-1] = Stack[-5]
0xde0: Push(-2, 1); TaskCall(0)
0xde1: Call2 0x0

0xde2: Pop(-2, 1); TaskReturn
0xde3: Pop(2)
0xde4: Push("mt_block")
0xde5: Push((int) 1)
0xde6: @ SetVariable(Stack[-2], Stack[-1])
0xde7: Pop(2)
0xde8: PushEmpty(bool, int)
0xde9: Stack[-1] = (int) 9
0xdea: Call2 0xc75

0xdeb: Pop(1)
0xdec: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xded: PushEmpty(int, object)
0xdee: Stack[-1] = Stack[-5]
0xdef: Push(-2, 1); TaskCall(2)
0xdf0: Call2 0xf9

0xdf1: Pop(-2, 1); TaskReturn
0xdf2: Pop(2)
0xdf3: Return(); Pop(2)

0xdf4: PushEmpty(bool, int)
0xdf5: Stack[-1] = (int) 10
0xdf6: Call2 0xc75

0xdf7: Pop(1)
0xdf8: IF (Stack[-1] == 0) GOTO 0xe00; Pop(1)

0xdf9: PushEmpty(int, object)
0xdfa: Stack[-1] = Stack[-5]
0xdfb: Push(-2, 1); TaskCall(6)
0xdfc: Call2 0x6aa

0xdfd: Pop(-2, 1); TaskReturn
0xdfe: Pop(2)
0xdff: Return(); Pop(2)

0xe00: PushEmpty(bool, int)
0xe01: Stack[-1] = (int) 12
0xe02: Call2 0xc75

0xe03: Pop(1)
0xe04: IF (Stack[-1] == 0) GOTO 0xe0c; Pop(1)

0xe05: PushEmpty(int, object)
0xe06: Stack[-1] = Stack[-5]
0xe07: Push(-2, 1); TaskCall(4)
0xe08: Call2 0x472

0xe09: Pop(-2, 1); TaskReturn
0xe0a: Pop(2)
0xe0b: Return(); Pop(2)

0xe0c: PushEmpty(int, object)
0xe0d: Stack[-1] = Stack[-5]
0xe0e: Push(-2, 1); TaskCall(8)
0xe0f: Call2 0x93f

0xe10: Pop(-2, 1); TaskReturn
0xe11: Pop(2)
0xe12: Return(); Pop(2)

