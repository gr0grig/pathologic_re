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
	Saveyouall
	SetMessage
	ClearReplies
	AddReply
	Neutral
	idle
	Fear
	Smile
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
	oob12KlaraSobor1
	oob12KlaraSobor2
	game_final
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
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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

RunOp = 0x1d1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xca Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1d5 Vars = (object)
		EVENT_26 Op = 0x1e1 Vars = (string)
		EVENT_6 Op = 0x1fd Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x386

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x384

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x388

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x38a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x373

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
0x31: Call2 0x325

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x266

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
0x48: Call2 0x254

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
0x56: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x34f

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Saveyouall"
0x5f: Call2 0xb4

0x60: Pop(1)
0x61: Push((int) 522183)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x35b

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 523114)
0x6c: Push((int) 24315)
0x6d: Push((int) 24314)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x367

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 523126)
0x76: Push((int) 24327)
0x77: Push((int) 24326)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: Push((int) 523113)
0x7b: Push((int) -1)
0x7c: Push((int) 24313)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: GOTO 0x96

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xb4

0x83: Pop(1)
0x84: Push((int) 523167)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 522184)
0x8a: Push((int) -1)
0x8b: Push((int) 23351)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 523175)
0x8f: Push((int) -1)
0x90: Push((int) 24377)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x55

0x96: PushEmpty(bool)
0x97: Call2 0x38c

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call2 0x2f0

0xa2: Pop(1)
0xa3: GOTO 0x9a

0xa4: GOTO 0xb3

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: GOTO 0xa9

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: PushEmpty(bool)
0xb6: Call2 0x38c

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string, bool)
0xbf: Stack[-2] = Stack[-3]
0xc0: Push("")
0xc1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-1] = (bool) 0
0xc4: GOTO 0xc6

0xc5: Stack[-1] = (bool) 1
0xc6: Call2 0x300

0xc7: Pop(2)
0xc8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push((int) 1)
0xcc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x31e

0xcf: Pop(0)
0xd0: Push((int) 24314)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x343

0xd7: Pop(2)
0xd8: Push((int) 24326)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x349

0xdf: Pop(2)
0xe0: Push((int) 23350)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x34f

0xe6: Pop(1)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Saveyouall"
0xeb: Call2 0xb4

0xec: Pop(1)
0xed: Push((int) 522183)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x35b

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: Push((int) 523114)
0xf8: Push((int) 24315)
0xf9: Push((int) 24314)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0x367

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: Push((int) 523126)
0x102: Push((int) 24327)
0x103: Push((int) 24326)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 523113)
0x107: Push((int) -1)
0x108: Push((int) 24313)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0xb4

0x10f: Pop(1)
0x110: Push((int) 523167)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 522184)
0x116: Push((int) -1)
0x117: Push((int) 23351)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 523175)
0x11b: Push((int) -1)
0x11c: Push((int) 24377)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 24327)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Fear"
0x125: Call2 0xb4

0x126: Pop(1)
0x127: Push((int) 523127)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 523128)
0x12d: Push((int) 24329)
0x12e: Push((int) 24328)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Return(); Pop(0)

0x132: Push((int) 24329)
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x135: PushEmpty(string)
0x136: Stack[-1] = "Fear"
0x137: Call2 0xb4

0x138: Pop(1)
0x139: Push((int) 523129)
0x13a: @@ SetMessage(Stack[-1])
0x13b: Pop(1)
0x13c: @@ ClearReplies()
0x13d: Pop(0)
0x13e: Push((int) 523130)
0x13f: Push((int) -1)
0x140: Push((int) 24330)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: Push((int) 523131)
0x144: Push((int) 24332)
0x145: Push((int) 24331)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 24332)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call2 0xb4

0x14f: Pop(1)
0x150: Push((int) 523132)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 523133)
0x156: Push((int) -1)
0x157: Push((int) 24333)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Push((int) 523134)
0x15b: Push((int) -1)
0x15c: Push((int) 24334)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 24315)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Saveyouall"
0x165: Call2 0xb4

0x166: Pop(1)
0x167: Push((int) 523115)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 523116)
0x16d: Push((int) 24317)
0x16e: Push((int) 24316)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Return(); Pop(0)

0x172: Push((int) 24317)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Smile"
0x177: Call2 0xb4

0x178: Pop(1)
0x179: Push((int) 523117)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 523118)
0x17f: Push((int) 24319)
0x180: Push((int) 24318)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 540129)
0x184: Push((int) 24321)
0x185: Push((int) 42100)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 24319)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Smile"
0x18e: Call2 0xb4

0x18f: Pop(1)
0x190: Push((int) 523119)
0x191: @@ SetMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ ClearReplies()
0x194: Pop(0)
0x195: Push((int) 523120)
0x196: Push((int) 24321)
0x197: Push((int) 24320)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Return(); Pop(0)

0x19b: Push((int) 24321)
0x19c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x19e: PushEmpty(string)
0x19f: Stack[-1] = "Smile"
0x1a0: Call2 0xb4

0x1a1: Pop(1)
0x1a2: Push((int) 523121)
0x1a3: @@ SetMessage(Stack[-1])
0x1a4: Pop(1)
0x1a5: @@ ClearReplies()
0x1a6: Pop(0)
0x1a7: Push((int) 523122)
0x1a8: Push((int) 24323)
0x1a9: Push((int) 24322)
0x1aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ab: Pop(3)
0x1ac: Return(); Pop(0)

0x1ad: Push((int) 24323)
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b0: PushEmpty(string)
0x1b1: Stack[-1] = "Smile"
0x1b2: Call2 0xb4

0x1b3: Pop(1)
0x1b4: Push((int) 523123)
0x1b5: @@ SetMessage(Stack[-1])
0x1b6: Pop(1)
0x1b7: @@ ClearReplies()
0x1b8: Pop(0)
0x1b9: Push((int) 523124)
0x1ba: Push((int) -1)
0x1bb: Push((int) 24324)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Push((int) 523125)
0x1bf: Push((int) -1)
0x1c0: Push((int) 24325)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: Return(); Pop(0)

0x1c4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c5: PushEmpty(bool)
0x1c6: Call2 0x38c

0x1c7: Pop(0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: @ lshStopAnimation()
0x1ca: Pop(0)
0x1cb: GOTO 0x1ce

0x1cc: @ StopAnimation()
0x1cd: Pop(0)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0xcb

0x1d0: Return(); Pop(0)

0x1d1: PushEmpty()
0x1d2: Call2 0x1dd

0x1d3: Pop(0)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: PushEmpty(int, object)
0x1d7: Stack[-1] = Stack[-3]
0x1d8: Push(-2, 1); TaskCall(0)
0x1d9: Call2 0x0

0x1da: Pop(-2, 1); TaskReturn
0x1db: Pop(2)
0x1dc: Return(); Pop(0)

0x1dd: @ Hold()
0x1de: Pop(0)
0x1df: GOTO 0x1dd

0x1e0: Return(); Pop(0)

0x1e1: PushEmpty(bool, bool)
0x1e2: Push("cleanup")
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e6: @ IsLoaded(Stack[-1])
0x1e7: Pop(0)
0x1e8: PushEmpty(bool)
0x1e9: Stack[-1] = (bool) 0
0x1ea: Pop(0); Push((bool) Stack[-2] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ec: PushEmpty(bool)
0x1ed: Call2 0x20d

0x1ee: Pop(0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: Stack[-1] = (bool) 1
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: PushEmpty(object)
0x1f3: Call2 0x325

0x1f4: Pop(0)
0x1f5: @ RemoveActor(Stack[-1])
0x1f6: Pop(1)
0x1f7: GOTO 0x1fc

0x1f8: Push("restore")
0x1f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1fc: Return(); Pop(2)

0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: Push( Stack[0 + Tasks[-1].StackPointer] )
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: PushEmpty(bool)
0x202: Call2 0x20d

0x203: Pop(0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Stack[-1] = (bool) 1
0x206: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x207: PushEmpty(object)
0x208: Call2 0x325

0x209: Pop(0)
0x20a: @ RemoveActor(Stack[-1])
0x20b: Pop(1)
0x20c: Return(); Pop(0)

0x20d: Stack[-1] = (bool) 1
0x20e: Return(); Pop(0)

0x20f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x210: @@ GetPosition(Stack[-8])
0x211: Pop(0)
0x212: @@ GetEyesHeight(Stack[-9])
0x213: Pop(0)
0x214: Push(CvectorIndex(Stack[-8], 1))
0x215: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x216: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x217: @ GetPosition(Stack[-7])
0x218: Pop(0)
0x219: @ GetEyesHeight(Stack[-9])
0x21a: Pop(0)
0x21b: Push(CvectorIndex(Stack[-7], 1))
0x21c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x21e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21f: Push(CvectorIndex(Stack[-6], 1))
0x220: Stack[-1] = (int) 0
0x221: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x222: Pop(0); Push(Stack[-6] | Stack[-6]);
0x223: Pop(1); Push(Sqrt(Stack[-1]))
0x224: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x225: Stack[-5] = -Stack[-6]; Pop(0);
0x226: Pop(0); Push(Stack[-6] * Stack[-19]);
0x227: PushEmpty(cvector, cvector)
0x228: Push(CVector(0.0, 1.0, 0.0))
0x229: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22a: Call2 0x32b

0x22b: Pop(1)
0x22c: Push((int) 25)
0x22d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x22e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22f: Push(CVector(0.0, 10.0, 0.0))
0x230: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x231: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x232: @ IsOverrideActive(Stack[-2])
0x233: Pop(0)
0x234: Push(Stack[-2])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-21] = (bool) 0
0x237: Return(); Pop(18)

0x238: @ StopWorld()
0x239: Pop(0)
0x23a: Push((bool) 1)
0x23b: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x23c: Pop(1)
0x23d: Push(CvectorIndex(Stack[-4], 0))
0x23e: Push(CvectorIndex(Stack[-5], 2))
0x23f: @ Rotate(Stack[-2], Stack[-1])
0x240: Pop(2)
0x241: PushEmpty(bool)
0x242: Call2 0x38c

0x243: Pop(0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: GOTO 0x24e

0x246: Push("head")
0x247: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x248: Pop(1)
0x249: Push(Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: Push("head")
0x24c: @ LookAsyncCamera(Stack[-1])
0x24d: Pop(1)
0x24e: @ CameraWaitForPlayFinish()
0x24f: Pop(0)
0x250: @ ResumeWorld()
0x251: Pop(0)
0x252: Stack[-21] = (bool) 1
0x253: Return(); Pop(18)

0x254: PushEmpty(bool, bool)
0x255: Push((bool) 1)
0x256: @ CameraSwitchToNormal(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(bool)
0x259: Call2 0x38c

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: GOTO 0x265

0x25d: Push("head")
0x25e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25f: Pop(1)
0x260: Push(Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x262: Push("head")
0x263: @ UnlookAsync(Stack[-1])
0x264: Pop(1)
0x265: Return(); Pop(2)

0x266: PushEmpty(int, int, int, int)
0x267: Push("voice_common")
0x268: @ GetVariable(Stack[-1], Stack[-3])
0x269: Pop(1)
0x26a: Push(Stack[-2])
0x26b: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[-7]
0x26e: Call2 0x2a0

0x26f: Pop(1)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x272: PushEmpty(bool, object)
0x273: Stack[-1] = Stack[-7]
0x274: Call2 0x2c5

0x275: Pop(1)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-6] = (bool) 0
0x279: Return(); Pop(4)

0x27a: Push((int) 2)
0x27b: @ irand(Stack[-2], Stack[-1])
0x27c: Pop(1)
0x27d: Push(Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x27f: Push("voice_common")
0x280: Push((int) 1)
0x281: Pop(1); Push(Stack[-4] + Stack[-1]);
0x282: Push((int) 3)
0x283: Pop(2); Push(Stack[-2] % Stack[-1]);
0x284: @ SetVariable(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: GOTO 0x28b

0x287: Push("voice_common")
0x288: Push((int) 0)
0x289: @ SetVariable(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: GOTO 0x29e

0x28c: PushEmpty(bool, object)
0x28d: Stack[-1] = Stack[-7]
0x28e: Call2 0x2c5

0x28f: Pop(1)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[-7]
0x294: Call2 0x2a0

0x295: Pop(1)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: Stack[-6] = (bool) 0
0x299: Return(); Pop(4)

0x29a: Push("voice_common")
0x29b: Push((int) 1)
0x29c: @ SetVariable(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: Stack[-6] = (bool) 1
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2a1: Stack[-5] = "c"
0x2a2: Stack[-4] = (int) 0
0x2a3: Push((int) 1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a5: Push((int) 1)
0x2a6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a8: @@ HasProperty(Stack[-1], Stack[-4])
0x2a9: Pop(1)
0x2aa: Pop(0); Push((bool) Stack[-3] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b0

0x2ad: Push((int) 1)
0x2ae: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2af: GOTO 0x2a3

0x2b0: Pop(0); Push((bool) Stack[-4] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-12] = (bool) 0
0x2b3: Return(); Pop(10)

0x2b4: Stack[-2] = (int) 0
0x2b5: Push((int) 1)
0x2b6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: @ irand(Stack[-2], Stack[-4])
0x2b9: Pop(0)
0x2ba: Push((int) 1)
0x2bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2bc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2bd: @@ GetProperty(Stack[-1], Stack[-2])
0x2be: Pop(1)
0x2bf: PushEmpty(bool, string)
0x2c0: Stack[-1] = Stack[-3]
0x2c1: Call2 0x30f

0x2c2: Stack[-14] = Stack[-2]
0x2c3: Pop(2)
0x2c4: Return(); Pop(10)

0x2c5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c6: Push("d")
0x2c7: PushEmpty(int)
0x2c8: Call2 0x33a

0x2c9: Pop(0)
0x2ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cb: Push("m")
0x2cc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2cd: Stack[-4] = (int) 0
0x2ce: Push((int) 1)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d0: Push((int) 1)
0x2d1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d3: @@ HasProperty(Stack[-1], Stack[-4])
0x2d4: Pop(1)
0x2d5: Pop(0); Push((bool) Stack[-3] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: Push((int) 1)
0x2d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2da: GOTO 0x2ce

0x2db: Pop(0); Push((bool) Stack[-4] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-12] = (bool) 0
0x2de: Return(); Pop(10)

0x2df: Stack[-2] = (int) 0
0x2e0: Push((int) 1)
0x2e1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: @ irand(Stack[-2], Stack[-4])
0x2e4: Pop(0)
0x2e5: Push((int) 1)
0x2e6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e8: @@ GetProperty(Stack[-1], Stack[-2])
0x2e9: Pop(1)
0x2ea: PushEmpty(bool, string)
0x2eb: Stack[-1] = Stack[-3]
0x2ec: Call2 0x30f

0x2ed: Stack[-14] = Stack[-2]
0x2ee: Pop(2)
0x2ef: Return(); Pop(10)

0x2f0: PushEmpty(bool, float, float, bool, float, float)
0x2f1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2f2: Pop(0)
0x2f3: Push(Stack[-3])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2f6: Pop(0)
0x2f7: Push((bool) 0)
0x2f8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: GOTO 0x2ff

0x2fb: Push("Can't find lsh animation : ")
0x2fc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2fd: @ Trace(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(6)

0x300: PushEmpty(bool, float, float, bool, float, float)
0x301: @ lshHasAnimation(Stack[-3], Stack[-8])
0x302: Pop(0)
0x303: Push(Stack[-3])
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x306: Pop(0)
0x307: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x308: Pop(0)
0x309: GOTO 0x30e

0x30a: Push("Can't find lsh animation : ")
0x30b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x30c: @ Trace(Stack[-1])
0x30d: Pop(1)
0x30e: Return(); Pop(6)

0x30f: PushEmpty(bool, bool)
0x310: PushEmpty(bool)
0x311: Call2 0x38c

0x312: Pop(0)
0x313: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x314: @ lshHasSpeech(Stack[-1], Stack[-3])
0x315: Pop(0)
0x316: Push(Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x318: @ lshPlaySpeech(Stack[-3])
0x319: Pop(0)
0x31a: Stack[-4] = (bool) 1
0x31b: Return(); Pop(2)

0x31c: Stack[-4] = (bool) 0
0x31d: Return(); Pop(2)

0x31e: PushEmpty(bool)
0x31f: Call2 0x38c

0x320: Pop(0)
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: @ lshStopSpeech()
0x323: Pop(0)
0x324: Return(); Pop(0)

0x325: PushEmpty(object, object)
0x326: @ self(Stack[-1])
0x327: Pop(0)
0x328: Stack[-3] = Stack[-1]
0x329: Return(); Pop(2)

0x32a: Stack[-1] = 0
0x32b: PushEmpty(float, float)
0x32c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32e: Push((float)0.0)
0x32f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x332: Return(); Pop(2)

0x333: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x334: Return(); Pop(2)

0x335: PushEmpty(int, int)
0x336: @ GetVariable(Stack[-3], Stack[-1])
0x337: Pop(0)
0x338: Stack[-4] = Stack[-1]
0x339: Return(); Pop(2)

0x33a: PushEmpty(float, float)
0x33b: @ GetGameTime(Stack[-1])
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: PushEmpty(int)
0x33f: Push((int) 24)
0x340: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x341: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x342: Return(); Pop(2)

0x343: PushEmpty()
0x344: Push("oob12KlaraSobor1")
0x345: Push((int) 1)
0x346: @ SetVariable(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: Return(); Pop(0)

0x349: PushEmpty()
0x34a: Push("oob12KlaraSobor2")
0x34b: Push((int) 1)
0x34c: @ SetVariable(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: PushEmpty(int, string)
0x351: Stack[-1] = "game_final"
0x352: Call2 0x335

0x353: Pop(1)
0x354: Push((int) 0)
0x355: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = (bool) 1
0x358: Return(); Pop(0)

0x359: Stack[-2] = (bool) 0
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: PushEmpty(int, string)
0x35d: Stack[-1] = "oob12KlaraSobor1"
0x35e: Call2 0x335

0x35f: Pop(1)
0x360: Push((int) 0)
0x361: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-2] = (bool) 1
0x364: Return(); Pop(0)

0x365: Stack[-2] = (bool) 0
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: PushEmpty(int, string)
0x369: Stack[-1] = "oob12KlaraSobor2"
0x36a: Call2 0x335

0x36b: Pop(1)
0x36c: Push((int) 0)
0x36d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-2] = (bool) 1
0x370: Return(); Pop(0)

0x371: Stack[-2] = (bool) 0
0x372: Return(); Pop(0)

0x373: PushEmpty(int, int)
0x374: Push("branch")
0x375: @ GetVariable(Stack[-1], Stack[-2])
0x376: Pop(1)
0x377: Push((int) 0)
0x378: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37a: Stack[-3] = (int) 1
0x37b: Return(); Pop(2)

0x37c: GOTO 0x382

0x37d: Push((int) 1)
0x37e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-3] = (int) 2
0x381: Return(); Pop(2)

0x382: Stack[-3] = (int) 3
0x383: Return(); Pop(2)

0x384: Stack[-1] = (int) 515540
0x385: Return(); Pop(0)

0x386: Stack[-1] = (int) 502865
0x387: Return(); Pop(0)

0x388: Stack[-1] = "ui/NPC_Klara.png"
0x389: Return(); Pop(0)

0x38a: Stack[-1] = "ui/NPC_Klara_b.png"
0x38b: Return(); Pop(0)

0x38c: Stack[-1] = (bool) 1
0x38d: Return(); Pop(0)

