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
	ook12DankoSobor1
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

RunOp = 0x1ad
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xca Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1b1 Vars = (object)
		EVENT_26 Op = 0x1bd Vars = (string)
		EVENT_6 Op = 0x1d9 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1eb

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x34e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x34c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x350

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x352

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x33b

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
0x31: Call2 0x2ff

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x240

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
0x48: Call2 0x22f

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
0x59: Call2 0x323

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xb4

0x60: Pop(1)
0x61: Push((int) 539204)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x32f

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 539205)
0x6c: Push((int) 43669)
0x6d: Push((int) 41148)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x32f

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 541506)
0x76: Push((int) 45318)
0x77: Push((int) 43668)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: Push((int) 543011)
0x7b: Push((int) -1)
0x7c: Push((int) 45463)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: GOTO 0x96

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xb4

0x83: Pop(1)
0x84: Push((int) 539206)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 539207)
0x8a: Push((int) -1)
0x8b: Push((int) 41150)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 541505)
0x8f: Push((int) -1)
0x90: Push((int) 43667)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x55

0x96: PushEmpty(bool)
0x97: Call2 0x354

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call2 0x2ca

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
0xb6: Call2 0x354

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
0xc6: Call2 0x2da

0xc7: Pop(2)
0xc8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push((int) 1)
0xcc: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x2f8

0xcf: Pop(0)
0xd0: Push((int) 41148)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x31d

0xd7: Pop(2)
0xd8: Push((int) 43668)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x31d

0xdf: Pop(2)
0xe0: Push((int) 41147)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x323

0xe6: Pop(1)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0xb4

0xec: Pop(1)
0xed: Push((int) 539204)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x32f

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: Push((int) 539205)
0xf8: Push((int) 43669)
0xf9: Push((int) 41148)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0x32f

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: Push((int) 541506)
0x102: Push((int) 45318)
0x103: Push((int) 43668)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 543011)
0x107: Push((int) -1)
0x108: Push((int) 45463)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0xb4

0x10f: Pop(1)
0x110: Push((int) 539206)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 539207)
0x116: Push((int) -1)
0x117: Push((int) 41150)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 541505)
0x11b: Push((int) -1)
0x11c: Push((int) 43667)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 43669)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0xb4

0x126: Pop(1)
0x127: Push((int) 541507)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 541508)
0x12d: Push((int) 43671)
0x12e: Push((int) 43670)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 541510)
0x132: Push((int) 43673)
0x133: Push((int) 43672)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 43671)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Sorrow"
0x13c: Call2 0xb4

0x13d: Pop(1)
0x13e: Push((int) 541509)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 541513)
0x144: Push((int) 43673)
0x145: Push((int) 43675)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 43673)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Sorrow"
0x14e: Call2 0xb4

0x14f: Pop(1)
0x150: Push((int) 541511)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 541512)
0x156: Push((int) 45318)
0x157: Push((int) 43674)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Push((int) 541514)
0x15b: Push((int) 45318)
0x15c: Push((int) 43677)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Return(); Pop(0)

0x160: Push((int) 45318)
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral"
0x165: Call2 0xb4

0x166: Pop(1)
0x167: Push((int) 542892)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: Push((int) 542893)
0x16d: Push((int) -1)
0x16e: Push((int) 45319)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 542894)
0x172: Push((int) 45323)
0x173: Push((int) 45320)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 45323)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0xb4

0x17d: Pop(1)
0x17e: Push((int) 542895)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 542896)
0x184: Push((int) 45325)
0x185: Push((int) 45324)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Push((int) 45325)
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18c: PushEmpty(string)
0x18d: Stack[-1] = "Neutral"
0x18e: Call2 0xb4

0x18f: Pop(1)
0x190: Push((int) 542897)
0x191: @@ SetMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ ClearReplies()
0x194: Pop(0)
0x195: Push((int) 542899)
0x196: Push((int) -1)
0x197: Push((int) 45328)
0x198: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x199: Pop(3)
0x19a: Push((int) 542900)
0x19b: Push((int) -1)
0x19c: Push((int) 45329)
0x19d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19e: Pop(3)
0x19f: Return(); Pop(0)

0x1a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a1: PushEmpty(bool)
0x1a2: Call2 0x354

0x1a3: Pop(0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: @ lshStopAnimation()
0x1a6: Pop(0)
0x1a7: GOTO 0x1aa

0x1a8: @ StopAnimation()
0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: GOTO 0xcb

0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Call2 0x1b9

0x1af: Pop(0)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-3]
0x1b4: Push(-2, 1); TaskCall(0)
0x1b5: Call2 0x0

0x1b6: Pop(-2, 1); TaskReturn
0x1b7: Pop(2)
0x1b8: Return(); Pop(0)

0x1b9: @ Hold()
0x1ba: Pop(0)
0x1bb: GOTO 0x1b9

0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(bool, bool)
0x1be: Push("cleanup")
0x1bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c2: @ IsLoaded(Stack[-1])
0x1c3: Pop(0)
0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: Pop(0); Push((bool) Stack[-2] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x1e9

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Call2 0x2ff

0x1d0: Pop(0)
0x1d1: @ RemoveActor(Stack[-1])
0x1d2: Pop(1)
0x1d3: GOTO 0x1d8

0x1d4: Push("restore")
0x1d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d8: Return(); Pop(2)

0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: PushEmpty(bool)
0x1de: Call2 0x1e9

0x1df: Pop(0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Stack[-1] = (bool) 1
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(object)
0x1e4: Call2 0x2ff

0x1e5: Pop(0)
0x1e6: @ RemoveActor(Stack[-1])
0x1e7: Pop(1)
0x1e8: Return(); Pop(0)

0x1e9: Stack[-1] = (bool) 1
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1ec: @@ GetPosition(Stack[-8])
0x1ed: Pop(0)
0x1ee: @@ GetEyesHeight(Stack[-9])
0x1ef: Pop(0)
0x1f0: Push(CvectorIndex(Stack[-8], 1))
0x1f1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1f3: @ GetPosition(Stack[-7])
0x1f4: Pop(0)
0x1f5: @ GetEyesHeight(Stack[-9])
0x1f6: Pop(0)
0x1f7: Push(CvectorIndex(Stack[-7], 1))
0x1f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1fa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1fb: Push(CvectorIndex(Stack[-6], 1))
0x1fc: Stack[-1] = (int) 0
0x1fd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1fe: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1ff: Pop(1); Push(Sqrt(Stack[-1]))
0x200: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x201: Stack[-5] = -Stack[-6]; Pop(0);
0x202: Pop(0); Push(Stack[-6] * Stack[-19]);
0x203: PushEmpty(cvector, cvector)
0x204: Push(CVector(0.0, 1.0, 0.0))
0x205: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x206: Call2 0x305

0x207: Pop(1)
0x208: Push((int) 25)
0x209: Pop(2); Push(Stack[-2] * Stack[-1]);
0x20a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20b: Push(CVector(0.0, 10.0, 0.0))
0x20c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x20d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x20e: @ IsOverrideActive(Stack[-2])
0x20f: Pop(0)
0x210: Push(Stack[-2])
0x211: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x212: Stack[-21] = (bool) 0
0x213: Return(); Pop(18)

0x214: @ StopWorld()
0x215: Pop(0)
0x216: @ CameraTransit(Stack[-3], Stack[-5])
0x217: Pop(0)
0x218: Push(CvectorIndex(Stack[-4], 0))
0x219: Push(CvectorIndex(Stack[-5], 2))
0x21a: @ Rotate(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: PushEmpty(bool)
0x21d: Call2 0x354

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x229

0x221: Push("head")
0x222: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x223: Pop(1)
0x224: Push(Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x226: Push("head")
0x227: @ LookAsyncCamera(Stack[-1])
0x228: Pop(1)
0x229: @ CameraWaitForPlayFinish()
0x22a: Pop(0)
0x22b: @ ResumeWorld()
0x22c: Pop(0)
0x22d: Stack[-21] = (bool) 1
0x22e: Return(); Pop(18)

0x22f: PushEmpty(bool, bool)
0x230: @ CameraSwitchToNormal()
0x231: Pop(0)
0x232: PushEmpty(bool)
0x233: Call2 0x354

0x234: Pop(0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: GOTO 0x23f

0x237: Push("head")
0x238: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x239: Pop(1)
0x23a: Push(Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23c: Push("head")
0x23d: @ UnlookAsync(Stack[-1])
0x23e: Pop(1)
0x23f: Return(); Pop(2)

0x240: PushEmpty(int, int, int, int)
0x241: Push("voice_common")
0x242: @ GetVariable(Stack[-1], Stack[-3])
0x243: Pop(1)
0x244: Push(Stack[-2])
0x245: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x246: PushEmpty(bool, object)
0x247: Stack[-1] = Stack[-7]
0x248: Call2 0x27a

0x249: Pop(1)
0x24a: Pop(1); Push((bool) Stack[-1] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[-7]
0x24e: Call2 0x29f

0x24f: Pop(1)
0x250: Pop(1); Push((bool) Stack[-1] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: Stack[-6] = (bool) 0
0x253: Return(); Pop(4)

0x254: Push((int) 2)
0x255: @ irand(Stack[-2], Stack[-1])
0x256: Pop(1)
0x257: Push(Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x259: Push("voice_common")
0x25a: Push((int) 1)
0x25b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x25c: Push((int) 3)
0x25d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x25e: @ SetVariable(Stack[-2], Stack[-1])
0x25f: Pop(2)
0x260: GOTO 0x265

0x261: Push("voice_common")
0x262: Push((int) 0)
0x263: @ SetVariable(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: GOTO 0x278

0x266: PushEmpty(bool, object)
0x267: Stack[-1] = Stack[-7]
0x268: Call2 0x29f

0x269: Pop(1)
0x26a: Pop(1); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[-7]
0x26e: Call2 0x27a

0x26f: Pop(1)
0x270: Pop(1); Push((bool) Stack[-1] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-6] = (bool) 0
0x273: Return(); Pop(4)

0x274: Push("voice_common")
0x275: Push((int) 1)
0x276: @ SetVariable(Stack[-2], Stack[-1])
0x277: Pop(2)
0x278: Stack[-6] = (bool) 1
0x279: Return(); Pop(4)

0x27a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x27b: Stack[-5] = "c"
0x27c: Stack[-4] = (int) 0
0x27d: Push((int) 1)
0x27e: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x27f: Push((int) 1)
0x280: Pop(1); Push(Stack[-5] + Stack[-1]);
0x281: Pop(1); Push(Stack[-6] + Stack[-1]);
0x282: @@ HasProperty(Stack[-1], Stack[-4])
0x283: Pop(1)
0x284: Pop(0); Push((bool) Stack[-3] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28a

0x287: Push((int) 1)
0x288: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x289: GOTO 0x27d

0x28a: Pop(0); Push((bool) Stack[-4] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-12] = (bool) 0
0x28d: Return(); Pop(10)

0x28e: Stack[-2] = (int) 0
0x28f: Push((int) 1)
0x290: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x292: @ irand(Stack[-2], Stack[-4])
0x293: Pop(0)
0x294: Push((int) 1)
0x295: Pop(1); Push(Stack[-3] + Stack[-1]);
0x296: Pop(1); Push(Stack[-6] + Stack[-1]);
0x297: @@ GetProperty(Stack[-1], Stack[-2])
0x298: Pop(1)
0x299: PushEmpty(bool, string)
0x29a: Stack[-1] = Stack[-3]
0x29b: Call2 0x2e9

0x29c: Stack[-14] = Stack[-2]
0x29d: Pop(2)
0x29e: Return(); Pop(10)

0x29f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2a0: Push("d")
0x2a1: PushEmpty(int)
0x2a2: Call2 0x314

0x2a3: Pop(0)
0x2a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a5: Push("m")
0x2a6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2a7: Stack[-4] = (int) 0
0x2a8: Push((int) 1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2aa: Push((int) 1)
0x2ab: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ac: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ad: @@ HasProperty(Stack[-1], Stack[-4])
0x2ae: Pop(1)
0x2af: Pop(0); Push((bool) Stack[-3] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2b5

0x2b2: Push((int) 1)
0x2b3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2b4: GOTO 0x2a8

0x2b5: Pop(0); Push((bool) Stack[-4] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-12] = (bool) 0
0x2b8: Return(); Pop(10)

0x2b9: Stack[-2] = (int) 0
0x2ba: Push((int) 1)
0x2bb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: @ irand(Stack[-2], Stack[-4])
0x2be: Pop(0)
0x2bf: Push((int) 1)
0x2c0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c2: @@ GetProperty(Stack[-1], Stack[-2])
0x2c3: Pop(1)
0x2c4: PushEmpty(bool, string)
0x2c5: Stack[-1] = Stack[-3]
0x2c6: Call2 0x2e9

0x2c7: Stack[-14] = Stack[-2]
0x2c8: Pop(2)
0x2c9: Return(); Pop(10)

0x2ca: PushEmpty(bool, float, float, bool, float, float)
0x2cb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2cc: Pop(0)
0x2cd: Push(Stack[-3])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d0: Pop(0)
0x2d1: Push((bool) 0)
0x2d2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d3: Pop(1)
0x2d4: GOTO 0x2d9

0x2d5: Push("Can't find lsh animation : ")
0x2d6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2d7: @ Trace(Stack[-1])
0x2d8: Pop(1)
0x2d9: Return(); Pop(6)

0x2da: PushEmpty(bool, float, float, bool, float, float)
0x2db: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2dc: Pop(0)
0x2dd: Push(Stack[-3])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2df: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e0: Pop(0)
0x2e1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e2: Pop(0)
0x2e3: GOTO 0x2e8

0x2e4: Push("Can't find lsh animation : ")
0x2e5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2e6: @ Trace(Stack[-1])
0x2e7: Pop(1)
0x2e8: Return(); Pop(6)

0x2e9: PushEmpty(bool, bool)
0x2ea: PushEmpty(bool)
0x2eb: Call2 0x354

0x2ec: Pop(0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ee: @ lshHasSpeech(Stack[-1], Stack[-3])
0x2ef: Pop(0)
0x2f0: Push(Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f2: @ lshPlaySpeech(Stack[-3])
0x2f3: Pop(0)
0x2f4: Stack[-4] = (bool) 1
0x2f5: Return(); Pop(2)

0x2f6: Stack[-4] = (bool) 0
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x354

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: @ lshStopSpeech()
0x2fd: Pop(0)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object, object)
0x300: @ self(Stack[-1])
0x301: Pop(0)
0x302: Stack[-3] = Stack[-1]
0x303: Return(); Pop(2)

0x304: Stack[-1] = 0
0x305: PushEmpty(float, float)
0x306: Pop(0); Push(Stack[-3] | Stack[-3]);
0x307: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x308: Push((float)0.0)
0x309: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x30c: Return(); Pop(2)

0x30d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30e: Return(); Pop(2)

0x30f: PushEmpty(int, int)
0x310: @ GetVariable(Stack[-3], Stack[-1])
0x311: Pop(0)
0x312: Stack[-4] = Stack[-1]
0x313: Return(); Pop(2)

0x314: PushEmpty(float, float)
0x315: @ GetGameTime(Stack[-1])
0x316: Pop(0)
0x317: Push((int) 1)
0x318: PushEmpty(int)
0x319: Push((int) 24)
0x31a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x31b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x31c: Return(); Pop(2)

0x31d: PushEmpty()
0x31e: Push("ook12DankoSobor1")
0x31f: Push((int) 1)
0x320: @ SetVariable(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: PushEmpty(int, string)
0x325: Stack[-1] = "game_final"
0x326: Call2 0x30f

0x327: Pop(1)
0x328: Push((int) 0)
0x329: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-2] = (bool) 1
0x32c: Return(); Pop(0)

0x32d: Stack[-2] = (bool) 0
0x32e: Return(); Pop(0)

0x32f: PushEmpty()
0x330: PushEmpty(int, string)
0x331: Stack[-1] = "ook12DankoSobor1"
0x332: Call2 0x30f

0x333: Pop(1)
0x334: Push((int) 0)
0x335: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: Stack[-2] = (bool) 1
0x338: Return(); Pop(0)

0x339: Stack[-2] = (bool) 0
0x33a: Return(); Pop(0)

0x33b: PushEmpty(int, int)
0x33c: Push("branch")
0x33d: @ GetVariable(Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Push((int) 0)
0x340: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x342: Stack[-3] = (int) 1
0x343: Return(); Pop(2)

0x344: GOTO 0x34a

0x345: Push((int) 1)
0x346: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-3] = (int) 2
0x349: Return(); Pop(2)

0x34a: Stack[-3] = (int) 3
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = (int) 515573
0x34d: Return(); Pop(0)

0x34e: Stack[-1] = (int) 504032
0x34f: Return(); Pop(0)

0x350: Stack[-1] = "ui/NPC_Bakalavr.png"
0x351: Return(); Pop(0)

0x352: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x353: Return(); Pop(0)

0x354: Stack[-1] = (bool) 1
0x355: Return(); Pop(0)

