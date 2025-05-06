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
	Menace
	Smile
	Sorrow
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	oob12DankoSobor1
	oob12DankoSobor2
	oob12DankoSobor3
	oob12DankoSobor4
	game_final
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x223
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xde Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x227 Vars = (object)
		EVENT_26 Op = 0x233 Vars = (string)
		EVENT_6 Op = 0x24f Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x261

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3fa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3fc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3fe

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e7

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
0x31: Call2 0x375

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2b6

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
0x48: Call2 0x2a5

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
0x56: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3ab

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xc8

0x60: Pop(1)
0x61: Push((int) 522177)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x3b7

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 522178)
0x6c: Push((int) 24218)
0x6d: Push((int) 23345)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3c3

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 523026)
0x76: Push((int) 24220)
0x77: Push((int) 24219)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x3cf

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: Push((int) 523035)
0x80: Push((int) 24229)
0x81: Push((int) 24228)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x3db

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: Push((int) 523044)
0x8a: Push((int) 24238)
0x8b: Push((int) 24237)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 523028)
0x8f: Push((int) -1)
0x90: Push((int) 24221)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xaa

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xc8

0x97: Pop(1)
0x98: Push((int) 523163)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 523164)
0x9e: Push((int) -1)
0x9f: Push((int) 24366)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: Push((int) 523174)
0xa3: Push((int) -1)
0xa4: Push((int) 24376)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: GOTO 0xaa

0xa8: Return(); Pop(0)

0xa9: GOTO 0x55

0xaa: PushEmpty(bool)
0xab: Call2 0x400

0xac: Pop(0)
0xad: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xae: @ lshWaitForAnimEnd()
0xaf: Pop(0)
0xb0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: GOTO 0xb8

0xb3: PushEmpty(string)
0xb4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb5: Call2 0x340

0xb6: Pop(1)
0xb7: GOTO 0xae

0xb8: GOTO 0xc7

0xb9: Push("all")
0xba: Push("idle")
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: @ WaitForAnimEnd()
0xbe: Pop(0)
0xbf: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: GOTO 0xc7

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: GOTO 0xbd

0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: PushEmpty(bool)
0xca: Call2 0x400

0xcb: Pop(0)
0xcc: Pop(1); Push((bool) Stack[-1] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(0)

0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = Stack[-3]
0xd4: Push("")
0xd5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: GOTO 0xda

0xd9: Stack[-1] = (bool) 1
0xda: Call2 0x350

0xdb: Pop(2)
0xdc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: Push((int) 1)
0xe0: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0xe1: PushEmpty()
0xe2: Call2 0x36e

0xe3: Pop(0)
0xe4: Push((int) 23345)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x393

0xeb: Pop(2)
0xec: Push((int) 24219)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x399

0xf3: Pop(2)
0xf4: Push((int) 24228)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x39f

0xfb: Pop(2)
0xfc: Push((int) 24237)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x3a5

0x103: Pop(2)
0x104: Push((int) 23344)
0x105: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x109: Call2 0x3ab

0x10a: Pop(1)
0x10b: Pop(1); Push((bool) Stack[-1] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xc8

0x110: Pop(1)
0x111: Push((int) 522177)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x3b7

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: Push((int) 522178)
0x11c: Push((int) 24218)
0x11d: Push((int) 23345)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x3c3

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: Push((int) 523026)
0x126: Push((int) 24220)
0x127: Push((int) 24219)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x3cf

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12f: Push((int) 523035)
0x130: Push((int) 24229)
0x131: Push((int) 24228)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x3db

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: Push((int) 523044)
0x13a: Push((int) 24238)
0x13b: Push((int) 24237)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Push((int) 523028)
0x13f: Push((int) -1)
0x140: Push((int) 24221)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Return(); Pop(0)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0xc8

0x147: Pop(1)
0x148: Push((int) 523163)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 523164)
0x14e: Push((int) -1)
0x14f: Push((int) 24366)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 523174)
0x153: Push((int) -1)
0x154: Push((int) 24376)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 24238)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Menace"
0x15d: Call2 0xc8

0x15e: Pop(1)
0x15f: Push((int) 523045)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 523046)
0x165: Push((int) -1)
0x166: Push((int) 24239)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 24229)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Smile"
0x16f: Call2 0xc8

0x170: Pop(1)
0x171: Push((int) 523036)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 523037)
0x177: Push((int) 24231)
0x178: Push((int) 24230)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 24231)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Smile"
0x181: Call2 0xc8

0x182: Pop(1)
0x183: Push((int) 523038)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 523039)
0x189: Push((int) 24233)
0x18a: Push((int) 24232)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Return(); Pop(0)

0x18e: Push((int) 24233)
0x18f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x191: PushEmpty(string)
0x192: Stack[-1] = "Menace"
0x193: Call2 0xc8

0x194: Pop(1)
0x195: Push((int) 523040)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: Push((int) 523041)
0x19b: Push((int) -1)
0x19c: Push((int) 24234)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Push((int) 24220)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Menace"
0x1a5: Call2 0xc8

0x1a6: Pop(1)
0x1a7: Push((int) 523027)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 531982)
0x1ad: Push((int) -1)
0x1ae: Push((int) 33388)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Return(); Pop(0)

0x1b2: Push((int) 24218)
0x1b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = "Menace"
0x1b7: Call2 0xc8

0x1b8: Pop(1)
0x1b9: Push((int) 523025)
0x1ba: @@ SetMessage(Stack[-1])
0x1bb: Pop(1)
0x1bc: @@ ClearReplies()
0x1bd: Pop(0)
0x1be: Push((int) 523029)
0x1bf: Push((int) 24223)
0x1c0: Push((int) 24222)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Push((int) 538760)
0x1c4: Push((int) 24223)
0x1c5: Push((int) 40673)
0x1c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c7: Pop(3)
0x1c8: Return(); Pop(0)

0x1c9: Push((int) 24223)
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1cc: PushEmpty(string)
0x1cd: Stack[-1] = "Menace"
0x1ce: Call2 0xc8

0x1cf: Pop(1)
0x1d0: Push((int) 523030)
0x1d1: @@ SetMessage(Stack[-1])
0x1d2: Pop(1)
0x1d3: @@ ClearReplies()
0x1d4: Pop(0)
0x1d5: Push((int) 523034)
0x1d6: Push((int) 24235)
0x1d7: Push((int) 24227)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Return(); Pop(0)

0x1db: Push((int) 24235)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Menace"
0x1e0: Call2 0xc8

0x1e1: Pop(1)
0x1e2: Push((int) 523042)
0x1e3: @@ SetMessage(Stack[-1])
0x1e4: Pop(1)
0x1e5: @@ ClearReplies()
0x1e6: Pop(0)
0x1e7: Push((int) 523031)
0x1e8: Push((int) 24225)
0x1e9: Push((int) 24224)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Push((int) 523033)
0x1ed: Push((int) 24240)
0x1ee: Push((int) 24226)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: Return(); Pop(0)

0x1f2: Push((int) 24240)
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f5: PushEmpty(string)
0x1f6: Stack[-1] = "Sorrow"
0x1f7: Call2 0xc8

0x1f8: Pop(1)
0x1f9: Push((int) 523047)
0x1fa: @@ SetMessage(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ ClearReplies()
0x1fd: Pop(0)
0x1fe: Push((int) 523048)
0x1ff: Push((int) -1)
0x200: Push((int) 24241)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: Push((int) 24225)
0x205: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x207: PushEmpty(string)
0x208: Stack[-1] = "Sorrow"
0x209: Call2 0xc8

0x20a: Pop(1)
0x20b: Push((int) 523032)
0x20c: @@ SetMessage(Stack[-1])
0x20d: Pop(1)
0x20e: @@ ClearReplies()
0x20f: Pop(0)
0x210: Push((int) 523043)
0x211: Push((int) -1)
0x212: Push((int) 24236)
0x213: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x214: Pop(3)
0x215: Return(); Pop(0)

0x216: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x217: PushEmpty(bool)
0x218: Call2 0x400

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: @ lshStopAnimation()
0x21c: Pop(0)
0x21d: GOTO 0x220

0x21e: @ StopAnimation()
0x21f: Pop(0)
0x220: Return(); Pop(0)

0x221: GOTO 0xdf

0x222: Return(); Pop(0)

0x223: PushEmpty()
0x224: Call2 0x22f

0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: PushEmpty(int, object)
0x229: Stack[-1] = Stack[-3]
0x22a: Push(-2, 1); TaskCall(0)
0x22b: Call2 0x0

0x22c: Pop(-2, 1); TaskReturn
0x22d: Pop(2)
0x22e: Return(); Pop(0)

0x22f: @ Hold()
0x230: Pop(0)
0x231: GOTO 0x22f

0x232: Return(); Pop(0)

0x233: PushEmpty(bool, bool)
0x234: Push("cleanup")
0x235: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x237: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x238: @ IsLoaded(Stack[-1])
0x239: Pop(0)
0x23a: PushEmpty(bool)
0x23b: Stack[-1] = (bool) 0
0x23c: Pop(0); Push((bool) Stack[-2] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x25f

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: PushEmpty(object)
0x245: Call2 0x375

0x246: Pop(0)
0x247: @ RemoveActor(Stack[-1])
0x248: Pop(1)
0x249: GOTO 0x24e

0x24a: Push("restore")
0x24b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x24e: Return(); Pop(2)

0x24f: PushEmpty(bool)
0x250: Stack[-1] = (bool) 0
0x251: Push( Stack[0 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(bool)
0x254: Call2 0x25f

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 1
0x258: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x259: PushEmpty(object)
0x25a: Call2 0x375

0x25b: Pop(0)
0x25c: @ RemoveActor(Stack[-1])
0x25d: Pop(1)
0x25e: Return(); Pop(0)

0x25f: Stack[-1] = (bool) 1
0x260: Return(); Pop(0)

0x261: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x262: @@ GetPosition(Stack[-8])
0x263: Pop(0)
0x264: @@ GetEyesHeight(Stack[-9])
0x265: Pop(0)
0x266: Push(CvectorIndex(Stack[-8], 1))
0x267: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x268: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x269: @ GetPosition(Stack[-7])
0x26a: Pop(0)
0x26b: @ GetEyesHeight(Stack[-9])
0x26c: Pop(0)
0x26d: Push(CvectorIndex(Stack[-7], 1))
0x26e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x270: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x271: Push(CvectorIndex(Stack[-6], 1))
0x272: Stack[-1] = (int) 0
0x273: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x274: Pop(0); Push(Stack[-6] | Stack[-6]);
0x275: Pop(1); Push(Sqrt(Stack[-1]))
0x276: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x277: Stack[-5] = -Stack[-6]; Pop(0);
0x278: Pop(0); Push(Stack[-6] * Stack[-19]);
0x279: PushEmpty(cvector, cvector)
0x27a: Push(CVector(0.0, 1.0, 0.0))
0x27b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x27c: Call2 0x37b

0x27d: Pop(1)
0x27e: Push((int) 25)
0x27f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x280: Pop(2); Push(Stack[-2] + Stack[-1]);
0x281: Push(CVector(0.0, 10.0, 0.0))
0x282: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x283: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x284: @ IsOverrideActive(Stack[-2])
0x285: Pop(0)
0x286: Push(Stack[-2])
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-21] = (bool) 0
0x289: Return(); Pop(18)

0x28a: @ StopWorld()
0x28b: Pop(0)
0x28c: @ CameraTransit(Stack[-3], Stack[-5])
0x28d: Pop(0)
0x28e: Push(CvectorIndex(Stack[-4], 0))
0x28f: Push(CvectorIndex(Stack[-5], 2))
0x290: @ Rotate(Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: PushEmpty(bool)
0x293: Call2 0x400

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: GOTO 0x29f

0x297: Push("head")
0x298: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x299: Pop(1)
0x29a: Push(Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: Push("head")
0x29d: @ LookAsyncCamera(Stack[-1])
0x29e: Pop(1)
0x29f: @ CameraWaitForPlayFinish()
0x2a0: Pop(0)
0x2a1: @ ResumeWorld()
0x2a2: Pop(0)
0x2a3: Stack[-21] = (bool) 1
0x2a4: Return(); Pop(18)

0x2a5: PushEmpty(bool, bool)
0x2a6: @ CameraSwitchToNormal()
0x2a7: Pop(0)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x400

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b5

0x2ad: Push("head")
0x2ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Push("head")
0x2b3: @ UnlookAsync(Stack[-1])
0x2b4: Pop(1)
0x2b5: Return(); Pop(2)

0x2b6: PushEmpty(int, int, int, int)
0x2b7: Push("voice_common")
0x2b8: @ GetVariable(Stack[-1], Stack[-3])
0x2b9: Pop(1)
0x2ba: Push(Stack[-2])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[-7]
0x2be: Call2 0x2f0

0x2bf: Pop(1)
0x2c0: Pop(1); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[-7]
0x2c4: Call2 0x315

0x2c5: Pop(1)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-6] = (bool) 0
0x2c9: Return(); Pop(4)

0x2ca: Push((int) 2)
0x2cb: @ irand(Stack[-2], Stack[-1])
0x2cc: Pop(1)
0x2cd: Push(Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2cf: Push("voice_common")
0x2d0: Push((int) 1)
0x2d1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2d2: Push((int) 3)
0x2d3: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2d4: @ SetVariable(Stack[-2], Stack[-1])
0x2d5: Pop(2)
0x2d6: GOTO 0x2db

0x2d7: Push("voice_common")
0x2d8: Push((int) 0)
0x2d9: @ SetVariable(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: GOTO 0x2ee

0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[-7]
0x2de: Call2 0x315

0x2df: Pop(1)
0x2e0: Pop(1); Push((bool) Stack[-1] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e2: PushEmpty(bool, object)
0x2e3: Stack[-1] = Stack[-7]
0x2e4: Call2 0x2f0

0x2e5: Pop(1)
0x2e6: Pop(1); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e8: Stack[-6] = (bool) 0
0x2e9: Return(); Pop(4)

0x2ea: Push("voice_common")
0x2eb: Push((int) 1)
0x2ec: @ SetVariable(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: Stack[-6] = (bool) 1
0x2ef: Return(); Pop(4)

0x2f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2f1: Stack[-5] = "c"
0x2f2: Stack[-4] = (int) 0
0x2f3: Push((int) 1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f5: Push((int) 1)
0x2f6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f8: @@ HasProperty(Stack[-1], Stack[-4])
0x2f9: Pop(1)
0x2fa: Pop(0); Push((bool) Stack[-3] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: GOTO 0x300

0x2fd: Push((int) 1)
0x2fe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ff: GOTO 0x2f3

0x300: Pop(0); Push((bool) Stack[-4] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-12] = (bool) 0
0x303: Return(); Pop(10)

0x304: Stack[-2] = (int) 0
0x305: Push((int) 1)
0x306: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: @ irand(Stack[-2], Stack[-4])
0x309: Pop(0)
0x30a: Push((int) 1)
0x30b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x30c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x30d: @@ GetProperty(Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: PushEmpty(bool, string)
0x310: Stack[-1] = Stack[-3]
0x311: Call2 0x35f

0x312: Stack[-14] = Stack[-2]
0x313: Pop(2)
0x314: Return(); Pop(10)

0x315: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x316: Push("d")
0x317: PushEmpty(int)
0x318: Call2 0x38a

0x319: Pop(0)
0x31a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31b: Push("m")
0x31c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x31d: Stack[-4] = (int) 0
0x31e: Push((int) 1)
0x31f: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x320: Push((int) 1)
0x321: Pop(1); Push(Stack[-5] + Stack[-1]);
0x322: Pop(1); Push(Stack[-6] + Stack[-1]);
0x323: @@ HasProperty(Stack[-1], Stack[-4])
0x324: Pop(1)
0x325: Pop(0); Push((bool) Stack[-3] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x32b

0x328: Push((int) 1)
0x329: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x32a: GOTO 0x31e

0x32b: Pop(0); Push((bool) Stack[-4] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-12] = (bool) 0
0x32e: Return(); Pop(10)

0x32f: Stack[-2] = (int) 0
0x330: Push((int) 1)
0x331: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: @ irand(Stack[-2], Stack[-4])
0x334: Pop(0)
0x335: Push((int) 1)
0x336: Pop(1); Push(Stack[-3] + Stack[-1]);
0x337: Pop(1); Push(Stack[-6] + Stack[-1]);
0x338: @@ GetProperty(Stack[-1], Stack[-2])
0x339: Pop(1)
0x33a: PushEmpty(bool, string)
0x33b: Stack[-1] = Stack[-3]
0x33c: Call2 0x35f

0x33d: Stack[-14] = Stack[-2]
0x33e: Pop(2)
0x33f: Return(); Pop(10)

0x340: PushEmpty(bool, float, float, bool, float, float)
0x341: @ lshHasAnimation(Stack[-3], Stack[-7])
0x342: Pop(0)
0x343: Push(Stack[-3])
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x346: Pop(0)
0x347: Push((bool) 0)
0x348: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(1)
0x34a: GOTO 0x34f

0x34b: Push("Can't find lsh animation : ")
0x34c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x34d: @ Trace(Stack[-1])
0x34e: Pop(1)
0x34f: Return(); Pop(6)

0x350: PushEmpty(bool, float, float, bool, float, float)
0x351: @ lshHasAnimation(Stack[-3], Stack[-8])
0x352: Pop(0)
0x353: Push(Stack[-3])
0x354: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x355: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x356: Pop(0)
0x357: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x358: Pop(0)
0x359: GOTO 0x35e

0x35a: Push("Can't find lsh animation : ")
0x35b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x35c: @ Trace(Stack[-1])
0x35d: Pop(1)
0x35e: Return(); Pop(6)

0x35f: PushEmpty(bool, bool)
0x360: PushEmpty(bool)
0x361: Call2 0x400

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x364: @ lshHasSpeech(Stack[-1], Stack[-3])
0x365: Pop(0)
0x366: Push(Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: @ lshPlaySpeech(Stack[-3])
0x369: Pop(0)
0x36a: Stack[-4] = (bool) 1
0x36b: Return(); Pop(2)

0x36c: Stack[-4] = (bool) 0
0x36d: Return(); Pop(2)

0x36e: PushEmpty(bool)
0x36f: Call2 0x400

0x370: Pop(0)
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: @ lshStopSpeech()
0x373: Pop(0)
0x374: Return(); Pop(0)

0x375: PushEmpty(object, object)
0x376: @ self(Stack[-1])
0x377: Pop(0)
0x378: Stack[-3] = Stack[-1]
0x379: Return(); Pop(2)

0x37a: Stack[-1] = 0
0x37b: PushEmpty(float, float)
0x37c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x37d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37e: Push((float)0.0)
0x37f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x382: Return(); Pop(2)

0x383: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x384: Return(); Pop(2)

0x385: PushEmpty(int, int)
0x386: @ GetVariable(Stack[-3], Stack[-1])
0x387: Pop(0)
0x388: Stack[-4] = Stack[-1]
0x389: Return(); Pop(2)

0x38a: PushEmpty(float, float)
0x38b: @ GetGameTime(Stack[-1])
0x38c: Pop(0)
0x38d: Push((int) 1)
0x38e: PushEmpty(int)
0x38f: Push((int) 24)
0x390: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x391: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x392: Return(); Pop(2)

0x393: PushEmpty()
0x394: Push("oob12DankoSobor1")
0x395: Push((int) 1)
0x396: @ SetVariable(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: Push("oob12DankoSobor2")
0x39b: Push((int) 1)
0x39c: @ SetVariable(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: Push("oob12DankoSobor3")
0x3a1: Push((int) 1)
0x3a2: @ SetVariable(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: Return(); Pop(0)

0x3a5: PushEmpty()
0x3a6: Push("oob12DankoSobor4")
0x3a7: Push((int) 1)
0x3a8: @ SetVariable(Stack[-2], Stack[-1])
0x3a9: Pop(2)
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: PushEmpty(int, string)
0x3ad: Stack[-1] = "game_final"
0x3ae: Call2 0x385

0x3af: Pop(1)
0x3b0: Push((int) 0)
0x3b1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-2] = (bool) 1
0x3b4: Return(); Pop(0)

0x3b5: Stack[-2] = (bool) 0
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: PushEmpty(int, string)
0x3b9: Stack[-1] = "oob12DankoSobor1"
0x3ba: Call2 0x385

0x3bb: Pop(1)
0x3bc: Push((int) 0)
0x3bd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: Stack[-2] = (bool) 1
0x3c0: Return(); Pop(0)

0x3c1: Stack[-2] = (bool) 0
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: PushEmpty(int, string)
0x3c5: Stack[-1] = "oob12DankoSobor2"
0x3c6: Call2 0x385

0x3c7: Pop(1)
0x3c8: Push((int) 0)
0x3c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-2] = (bool) 1
0x3cc: Return(); Pop(0)

0x3cd: Stack[-2] = (bool) 0
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: PushEmpty(int, string)
0x3d1: Stack[-1] = "oob12DankoSobor3"
0x3d2: Call2 0x385

0x3d3: Pop(1)
0x3d4: Push((int) 0)
0x3d5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-2] = (bool) 1
0x3d8: Return(); Pop(0)

0x3d9: Stack[-2] = (bool) 0
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: PushEmpty(int, string)
0x3dd: Stack[-1] = "oob12DankoSobor4"
0x3de: Call2 0x385

0x3df: Pop(1)
0x3e0: Push((int) 0)
0x3e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: Stack[-2] = (bool) 1
0x3e4: Return(); Pop(0)

0x3e5: Stack[-2] = (bool) 0
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty(int, int)
0x3e8: Push("branch")
0x3e9: @ GetVariable(Stack[-1], Stack[-2])
0x3ea: Pop(1)
0x3eb: Push((int) 0)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ee: Stack[-3] = (int) 1
0x3ef: Return(); Pop(2)

0x3f0: GOTO 0x3f6

0x3f1: Push((int) 1)
0x3f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-3] = (int) 2
0x3f5: Return(); Pop(2)

0x3f6: Stack[-3] = (int) 3
0x3f7: Return(); Pop(2)

0x3f8: Stack[-1] = (int) 515573
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = (int) 504032
0x3fb: Return(); Pop(0)

0x3fc: Stack[-1] = "ui/NPC_Bakalavr.png"
0x3fd: Return(); Pop(0)

0x3fe: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x3ff: Return(); Pop(0)

0x400: Stack[-1] = (bool) 1
0x401: Return(); Pop(0)

