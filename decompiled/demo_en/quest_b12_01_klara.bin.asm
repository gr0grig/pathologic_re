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
0xe: Call2 0x384

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x382

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x386

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x388

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x371

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
0x31: Call2 0x323

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x264

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
0x48: Call2 0x253

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
0x59: Call2 0x34d

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
0x68: Call2 0x359

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 523114)
0x6c: Push((int) 24315)
0x6d: Push((int) 24314)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x365

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
0x97: Call2 0x38a

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call2 0x2ee

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
0xb6: Call2 0x38a

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
0xc6: Call2 0x2fe

0xc7: Pop(2)
0xc8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push((int) 1)
0xcc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x31c

0xcf: Pop(0)
0xd0: Push((int) 24314)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x341

0xd7: Pop(2)
0xd8: Push((int) 24326)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x347

0xdf: Pop(2)
0xe0: Push((int) 23350)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x34d

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
0xf4: Call2 0x359

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: Push((int) 523114)
0xf8: Push((int) 24315)
0xf9: Push((int) 24314)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0x365

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
0x1c6: Call2 0x38a

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
0x1f3: Call2 0x323

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
0x208: Call2 0x323

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
0x22a: Call2 0x329

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
0x23a: @ CameraTransit(Stack[-3], Stack[-5])
0x23b: Pop(0)
0x23c: Push(CvectorIndex(Stack[-4], 0))
0x23d: Push(CvectorIndex(Stack[-5], 2))
0x23e: @ Rotate(Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: PushEmpty(bool)
0x241: Call2 0x38a

0x242: Pop(0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: GOTO 0x24d

0x245: Push("head")
0x246: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x247: Pop(1)
0x248: Push(Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: Push("head")
0x24b: @ LookAsyncCamera(Stack[-1])
0x24c: Pop(1)
0x24d: @ CameraWaitForPlayFinish()
0x24e: Pop(0)
0x24f: @ ResumeWorld()
0x250: Pop(0)
0x251: Stack[-21] = (bool) 1
0x252: Return(); Pop(18)

0x253: PushEmpty(bool, bool)
0x254: @ CameraSwitchToNormal()
0x255: Pop(0)
0x256: PushEmpty(bool)
0x257: Call2 0x38a

0x258: Pop(0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x263

0x25b: Push("head")
0x25c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x25d: Pop(1)
0x25e: Push(Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x260: Push("head")
0x261: @ UnlookAsync(Stack[-1])
0x262: Pop(1)
0x263: Return(); Pop(2)

0x264: PushEmpty(int, int, int, int)
0x265: Push("voice_common")
0x266: @ GetVariable(Stack[-1], Stack[-3])
0x267: Pop(1)
0x268: Push(Stack[-2])
0x269: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[-7]
0x26c: Call2 0x29e

0x26d: Pop(1)
0x26e: Pop(1); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[-7]
0x272: Call2 0x2c3

0x273: Pop(1)
0x274: Pop(1); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-6] = (bool) 0
0x277: Return(); Pop(4)

0x278: Push((int) 2)
0x279: @ irand(Stack[-2], Stack[-1])
0x27a: Pop(1)
0x27b: Push(Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27d: Push("voice_common")
0x27e: Push((int) 1)
0x27f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x280: Push((int) 3)
0x281: Pop(2); Push(Stack[-2] % Stack[-1]);
0x282: @ SetVariable(Stack[-2], Stack[-1])
0x283: Pop(2)
0x284: GOTO 0x289

0x285: Push("voice_common")
0x286: Push((int) 0)
0x287: @ SetVariable(Stack[-2], Stack[-1])
0x288: Pop(2)
0x289: GOTO 0x29c

0x28a: PushEmpty(bool, object)
0x28b: Stack[-1] = Stack[-7]
0x28c: Call2 0x2c3

0x28d: Pop(1)
0x28e: Pop(1); Push((bool) Stack[-1] == 0)
0x28f: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x290: PushEmpty(bool, object)
0x291: Stack[-1] = Stack[-7]
0x292: Call2 0x29e

0x293: Pop(1)
0x294: Pop(1); Push((bool) Stack[-1] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-6] = (bool) 0
0x297: Return(); Pop(4)

0x298: Push("voice_common")
0x299: Push((int) 1)
0x29a: @ SetVariable(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: Stack[-6] = (bool) 1
0x29d: Return(); Pop(4)

0x29e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x29f: Stack[-5] = "c"
0x2a0: Stack[-4] = (int) 0
0x2a1: Push((int) 1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a3: Push((int) 1)
0x2a4: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2a6: @@ HasProperty(Stack[-1], Stack[-4])
0x2a7: Pop(1)
0x2a8: Pop(0); Push((bool) Stack[-3] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: GOTO 0x2ae

0x2ab: Push((int) 1)
0x2ac: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ad: GOTO 0x2a1

0x2ae: Pop(0); Push((bool) Stack[-4] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-12] = (bool) 0
0x2b1: Return(); Pop(10)

0x2b2: Stack[-2] = (int) 0
0x2b3: Push((int) 1)
0x2b4: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: @ irand(Stack[-2], Stack[-4])
0x2b7: Pop(0)
0x2b8: Push((int) 1)
0x2b9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2ba: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2bb: @@ GetProperty(Stack[-1], Stack[-2])
0x2bc: Pop(1)
0x2bd: PushEmpty(bool, string)
0x2be: Stack[-1] = Stack[-3]
0x2bf: Call2 0x30d

0x2c0: Stack[-14] = Stack[-2]
0x2c1: Pop(2)
0x2c2: Return(); Pop(10)

0x2c3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2c4: Push("d")
0x2c5: PushEmpty(int)
0x2c6: Call2 0x338

0x2c7: Pop(0)
0x2c8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c9: Push("m")
0x2ca: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2cb: Stack[-4] = (int) 0
0x2cc: Push((int) 1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ce: Push((int) 1)
0x2cf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d1: @@ HasProperty(Stack[-1], Stack[-4])
0x2d2: Pop(1)
0x2d3: Pop(0); Push((bool) Stack[-3] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: GOTO 0x2d9

0x2d6: Push((int) 1)
0x2d7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d8: GOTO 0x2cc

0x2d9: Pop(0); Push((bool) Stack[-4] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: Stack[-12] = (bool) 0
0x2dc: Return(); Pop(10)

0x2dd: Stack[-2] = (int) 0
0x2de: Push((int) 1)
0x2df: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: @ irand(Stack[-2], Stack[-4])
0x2e2: Pop(0)
0x2e3: Push((int) 1)
0x2e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e6: @@ GetProperty(Stack[-1], Stack[-2])
0x2e7: Pop(1)
0x2e8: PushEmpty(bool, string)
0x2e9: Stack[-1] = Stack[-3]
0x2ea: Call2 0x30d

0x2eb: Stack[-14] = Stack[-2]
0x2ec: Pop(2)
0x2ed: Return(); Pop(10)

0x2ee: PushEmpty(bool, float, float, bool, float, float)
0x2ef: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2f0: Pop(0)
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2f4: Pop(0)
0x2f5: Push((bool) 0)
0x2f6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f7: Pop(1)
0x2f8: GOTO 0x2fd

0x2f9: Push("Can't find lsh animation : ")
0x2fa: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2fb: @ Trace(Stack[-1])
0x2fc: Pop(1)
0x2fd: Return(); Pop(6)

0x2fe: PushEmpty(bool, float, float, bool, float, float)
0x2ff: @ lshHasAnimation(Stack[-3], Stack[-8])
0x300: Pop(0)
0x301: Push(Stack[-3])
0x302: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x303: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x304: Pop(0)
0x305: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x306: Pop(0)
0x307: GOTO 0x30c

0x308: Push("Can't find lsh animation : ")
0x309: Pop(1); Push(Stack[-1] + Stack[-9]);
0x30a: @ Trace(Stack[-1])
0x30b: Pop(1)
0x30c: Return(); Pop(6)

0x30d: PushEmpty(bool, bool)
0x30e: PushEmpty(bool)
0x30f: Call2 0x38a

0x310: Pop(0)
0x311: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x312: @ lshHasSpeech(Stack[-1], Stack[-3])
0x313: Pop(0)
0x314: Push(Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x316: @ lshPlaySpeech(Stack[-3])
0x317: Pop(0)
0x318: Stack[-4] = (bool) 1
0x319: Return(); Pop(2)

0x31a: Stack[-4] = (bool) 0
0x31b: Return(); Pop(2)

0x31c: PushEmpty(bool)
0x31d: Call2 0x38a

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: @ lshStopSpeech()
0x321: Pop(0)
0x322: Return(); Pop(0)

0x323: PushEmpty(object, object)
0x324: @ self(Stack[-1])
0x325: Pop(0)
0x326: Stack[-3] = Stack[-1]
0x327: Return(); Pop(2)

0x328: Stack[-1] = 0
0x329: PushEmpty(float, float)
0x32a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x32b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32c: Push((float)0.0)
0x32d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x330: Return(); Pop(2)

0x331: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x332: Return(); Pop(2)

0x333: PushEmpty(int, int)
0x334: @ GetVariable(Stack[-3], Stack[-1])
0x335: Pop(0)
0x336: Stack[-4] = Stack[-1]
0x337: Return(); Pop(2)

0x338: PushEmpty(float, float)
0x339: @ GetGameTime(Stack[-1])
0x33a: Pop(0)
0x33b: Push((int) 1)
0x33c: PushEmpty(int)
0x33d: Push((int) 24)
0x33e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x33f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x340: Return(); Pop(2)

0x341: PushEmpty()
0x342: Push("oob12KlaraSobor1")
0x343: Push((int) 1)
0x344: @ SetVariable(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: Push("oob12KlaraSobor2")
0x349: Push((int) 1)
0x34a: @ SetVariable(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(int, string)
0x34f: Stack[-1] = "game_final"
0x350: Call2 0x333

0x351: Pop(1)
0x352: Push((int) 0)
0x353: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-2] = (bool) 1
0x356: Return(); Pop(0)

0x357: Stack[-2] = (bool) 0
0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: PushEmpty(int, string)
0x35b: Stack[-1] = "oob12KlaraSobor1"
0x35c: Call2 0x333

0x35d: Pop(1)
0x35e: Push((int) 0)
0x35f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = (bool) 1
0x362: Return(); Pop(0)

0x363: Stack[-2] = (bool) 0
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(int, string)
0x367: Stack[-1] = "oob12KlaraSobor2"
0x368: Call2 0x333

0x369: Pop(1)
0x36a: Push((int) 0)
0x36b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-2] = (bool) 1
0x36e: Return(); Pop(0)

0x36f: Stack[-2] = (bool) 0
0x370: Return(); Pop(0)

0x371: PushEmpty(int, int)
0x372: Push("branch")
0x373: @ GetVariable(Stack[-1], Stack[-2])
0x374: Pop(1)
0x375: Push((int) 0)
0x376: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x378: Stack[-3] = (int) 1
0x379: Return(); Pop(2)

0x37a: GOTO 0x380

0x37b: Push((int) 1)
0x37c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-3] = (int) 2
0x37f: Return(); Pop(2)

0x380: Stack[-3] = (int) 3
0x381: Return(); Pop(2)

0x382: Stack[-1] = (int) 515540
0x383: Return(); Pop(0)

0x384: Stack[-1] = (int) 502865
0x385: Return(); Pop(0)

0x386: Stack[-1] = "ui/NPC_Klara.png"
0x387: Return(); Pop(0)

0x388: Stack[-1] = "ui/NPC_Klara_b.png"
0x389: Return(); Pop(0)

0x38a: Stack[-1] = (bool) 1
0x38b: Return(); Pop(0)

