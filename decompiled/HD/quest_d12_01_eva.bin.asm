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
	Sexy
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Love
	Neutral
	Fear
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
	ood12EvaRevenant1
	branch
	ui/NPC_Eva.png
	ui/NPC_Eva_b.png

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

RunOp = 0x229
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x22d Vars = (object)
		EVENT_26 Op = 0x239 Vars = (string)
		EVENT_6 Op = 0x255 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x267

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3c0

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3be

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3c2

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3c4

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ad

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
0x31: Call2 0x37d

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2be

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
0x48: Call2 0x2ac

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Sexy"
0x59: Call2 0xa4

0x5a: Pop(1)
0x5b: Push((int) 541659)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x3a1

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 541660)
0x66: Push((int) 43852)
0x67: Push((int) 43835)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x3a1

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 541664)
0x70: Push((int) 43840)
0x71: Push((int) 43839)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x3a1

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: Push((int) 541668)
0x7a: Push((int) 43845)
0x7b: Push((int) 43844)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 541661)
0x7f: Push((int) -1)
0x80: Push((int) 43836)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x3c6

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x348

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x3c6

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x358

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x376

0xbf: Pop(0)
0xc0: Push((int) 43835)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x39b

0xc7: Pop(2)
0xc8: Push((int) 43839)
0xc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call2 0x39b

0xcf: Pop(2)
0xd0: Push((int) 43844)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x39b

0xd7: Pop(2)
0xd8: Push((int) 43834)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Sexy"
0xdd: Call2 0xa4

0xde: Pop(1)
0xdf: Push((int) 541659)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Call2 0x3a1

0xe7: Pop(1)
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: Push((int) 541660)
0xea: Push((int) 43852)
0xeb: Push((int) 43835)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: PushEmpty(bool, object)
0xef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Call2 0x3a1

0xf1: Pop(1)
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: Push((int) 541664)
0xf4: Push((int) 43840)
0xf5: Push((int) 43839)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: PushEmpty(bool, object)
0xf9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Call2 0x3a1

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: Push((int) 541668)
0xfe: Push((int) 43845)
0xff: Push((int) 43844)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 541661)
0x103: Push((int) -1)
0x104: Push((int) 43836)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 43845)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Love"
0x10d: Call2 0xa4

0x10e: Pop(1)
0x10f: Push((int) 541669)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 541670)
0x115: Push((int) 43840)
0x116: Push((int) 43846)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 541682)
0x11a: Push((int) 43860)
0x11b: Push((int) 43859)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 43860)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Love"
0x124: Call2 0xa4

0x125: Pop(1)
0x126: Push((int) 541683)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 541684)
0x12c: Push((int) 43863)
0x12d: Push((int) 43861)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 541685)
0x131: Push((int) -1)
0x132: Push((int) 43862)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 43863)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xa4

0x13c: Pop(1)
0x13d: Push((int) 541686)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 541687)
0x143: Push((int) -1)
0x144: Push((int) 43864)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 541688)
0x148: Push((int) -1)
0x149: Push((int) 43865)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 43840)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Sexy"
0x152: Call2 0xa4

0x153: Pop(1)
0x154: Push((int) 541665)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 541666)
0x15a: Push((int) 43852)
0x15b: Push((int) 43841)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 541667)
0x15f: Push((int) 43851)
0x160: Push((int) 43842)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 43851)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Fear"
0x169: Call2 0xa4

0x16a: Pop(1)
0x16b: Push((int) 541675)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 541680)
0x171: Push((int) 43838)
0x172: Push((int) 43856)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Push((int) 541681)
0x176: Push((int) -1)
0x177: Push((int) 43857)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 43852)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Sexy"
0x180: Call2 0xa4

0x181: Pop(1)
0x182: Push((int) 541676)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 541677)
0x188: Push((int) 43854)
0x189: Push((int) 43853)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Push((int) 541689)
0x18d: Push((int) -1)
0x18e: Push((int) 43867)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 43854)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Sexy"
0x197: Call2 0xa4

0x198: Pop(1)
0x199: Push((int) 541678)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 541679)
0x19f: Push((int) 43838)
0x1a0: Push((int) 43855)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 541690)
0x1a4: Push((int) 43850)
0x1a5: Push((int) 43869)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 43838)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Fear"
0x1ae: Call2 0xa4

0x1af: Pop(1)
0x1b0: Push((int) 541663)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 541671)
0x1b6: Push((int) 43848)
0x1b7: Push((int) 43847)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 541691)
0x1bb: Push((int) 43871)
0x1bc: Push((int) 43870)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 43871)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Love"
0x1c5: Call2 0xa4

0x1c6: Pop(1)
0x1c7: Push((int) 541692)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 541694)
0x1cd: Push((int) 43875)
0x1ce: Push((int) 43873)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 541858)
0x1d2: Push((int) 43875)
0x1d3: Push((int) 44083)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 43848)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Fear"
0x1dc: Call2 0xa4

0x1dd: Pop(1)
0x1de: Push((int) 541672)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 541673)
0x1e4: Push((int) 43875)
0x1e5: Push((int) 43849)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 541693)
0x1e9: Push((int) 43850)
0x1ea: Push((int) 43872)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 43850)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Fear"
0x1f3: Call2 0xa4

0x1f4: Pop(1)
0x1f5: Push((int) 541674)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 541698)
0x1fb: Push((int) 43875)
0x1fc: Push((int) 43879)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Push((int) 541699)
0x200: Push((int) -1)
0x201: Push((int) 43881)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 43875)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Love"
0x20a: Call2 0xa4

0x20b: Pop(1)
0x20c: Push((int) 541695)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 541696)
0x212: Push((int) -1)
0x213: Push((int) 43876)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 541697)
0x217: Push((int) -1)
0x218: Push((int) 43877)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21d: PushEmpty(bool)
0x21e: Call2 0x3c6

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x221: @ lshStopAnimation()
0x222: Pop(0)
0x223: GOTO 0x226

0x224: @ StopAnimation()
0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: GOTO 0xbb

0x228: Return(); Pop(0)

0x229: PushEmpty()
0x22a: Call2 0x235

0x22b: Pop(0)
0x22c: Return(); Pop(0)

0x22d: PushEmpty()
0x22e: PushEmpty(int, object)
0x22f: Stack[-1] = Stack[-3]
0x230: Push(-2, 1); TaskCall(0)
0x231: Call2 0x0

0x232: Pop(-2, 1); TaskReturn
0x233: Pop(2)
0x234: Return(); Pop(0)

0x235: @ Hold()
0x236: Pop(0)
0x237: GOTO 0x235

0x238: Return(); Pop(0)

0x239: PushEmpty(bool, bool)
0x23a: Push("cleanup")
0x23b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x23d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x23e: @ IsLoaded(Stack[-1])
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Stack[-1] = (bool) 0
0x242: Pop(0); Push((bool) Stack[-2] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x244: PushEmpty(bool)
0x245: Call2 0x265

0x246: Pop(0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-1] = (bool) 1
0x249: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24a: PushEmpty(object)
0x24b: Call2 0x37d

0x24c: Pop(0)
0x24d: @ RemoveActor(Stack[-1])
0x24e: Pop(1)
0x24f: GOTO 0x254

0x250: Push("restore")
0x251: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x254: Return(); Pop(2)

0x255: PushEmpty(bool)
0x256: Stack[-1] = (bool) 0
0x257: Push( Stack[0 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x259: PushEmpty(bool)
0x25a: Call2 0x265

0x25b: Pop(0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Stack[-1] = (bool) 1
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: PushEmpty(object)
0x260: Call2 0x37d

0x261: Pop(0)
0x262: @ RemoveActor(Stack[-1])
0x263: Pop(1)
0x264: Return(); Pop(0)

0x265: Stack[-1] = (bool) 1
0x266: Return(); Pop(0)

0x267: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x268: @@ GetPosition(Stack[-8])
0x269: Pop(0)
0x26a: @@ GetEyesHeight(Stack[-9])
0x26b: Pop(0)
0x26c: Push(CvectorIndex(Stack[-8], 1))
0x26d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x26f: @ GetPosition(Stack[-7])
0x270: Pop(0)
0x271: @ GetEyesHeight(Stack[-9])
0x272: Pop(0)
0x273: Push(CvectorIndex(Stack[-7], 1))
0x274: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x275: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x276: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x277: Push(CvectorIndex(Stack[-6], 1))
0x278: Stack[-1] = (int) 0
0x279: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x27a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x27b: Pop(1); Push(Sqrt(Stack[-1]))
0x27c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x27d: Stack[-5] = -Stack[-6]; Pop(0);
0x27e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x27f: PushEmpty(cvector, cvector)
0x280: Push(CVector(0.0, 1.0, 0.0))
0x281: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x282: Call2 0x383

0x283: Pop(1)
0x284: Push((int) 25)
0x285: Pop(2); Push(Stack[-2] * Stack[-1]);
0x286: Pop(2); Push(Stack[-2] + Stack[-1]);
0x287: Push(CVector(0.0, 10.0, 0.0))
0x288: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x289: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x28a: @ IsOverrideActive(Stack[-2])
0x28b: Pop(0)
0x28c: Push(Stack[-2])
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: Stack[-21] = (bool) 0
0x28f: Return(); Pop(18)

0x290: @ StopWorld()
0x291: Pop(0)
0x292: Push((bool) 1)
0x293: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x294: Pop(1)
0x295: Push(CvectorIndex(Stack[-4], 0))
0x296: Push(CvectorIndex(Stack[-5], 2))
0x297: @ Rotate(Stack[-2], Stack[-1])
0x298: Pop(2)
0x299: PushEmpty(bool)
0x29a: Call2 0x3c6

0x29b: Pop(0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2a6

0x29e: Push("head")
0x29f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a0: Pop(1)
0x2a1: Push(Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a3: Push("head")
0x2a4: @ LookAsyncCamera(Stack[-1])
0x2a5: Pop(1)
0x2a6: @ CameraWaitForPlayFinish()
0x2a7: Pop(0)
0x2a8: @ ResumeWorld()
0x2a9: Pop(0)
0x2aa: Stack[-21] = (bool) 1
0x2ab: Return(); Pop(18)

0x2ac: PushEmpty(bool, bool)
0x2ad: Push((bool) 1)
0x2ae: @ CameraSwitchToNormal(Stack[-1])
0x2af: Pop(1)
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x3c6

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2bd

0x2b5: Push("head")
0x2b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: Push("head")
0x2bb: @ UnlookAsync(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(int, int, int, int)
0x2bf: Push("voice_common")
0x2c0: @ GetVariable(Stack[-1], Stack[-3])
0x2c1: Pop(1)
0x2c2: Push(Stack[-2])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2c4: PushEmpty(bool, object)
0x2c5: Stack[-1] = Stack[-7]
0x2c6: Call2 0x2f8

0x2c7: Pop(1)
0x2c8: Pop(1); Push((bool) Stack[-1] == 0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[-7]
0x2cc: Call2 0x31d

0x2cd: Pop(1)
0x2ce: Pop(1); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2d0: Stack[-6] = (bool) 0
0x2d1: Return(); Pop(4)

0x2d2: Push((int) 2)
0x2d3: @ irand(Stack[-2], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push(Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2d7: Push("voice_common")
0x2d8: Push((int) 1)
0x2d9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2da: Push((int) 3)
0x2db: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2dc: @ SetVariable(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: GOTO 0x2e3

0x2df: Push("voice_common")
0x2e0: Push((int) 0)
0x2e1: @ SetVariable(Stack[-2], Stack[-1])
0x2e2: Pop(2)
0x2e3: GOTO 0x2f6

0x2e4: PushEmpty(bool, object)
0x2e5: Stack[-1] = Stack[-7]
0x2e6: Call2 0x31d

0x2e7: Pop(1)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ea: PushEmpty(bool, object)
0x2eb: Stack[-1] = Stack[-7]
0x2ec: Call2 0x2f8

0x2ed: Pop(1)
0x2ee: Pop(1); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-6] = (bool) 0
0x2f1: Return(); Pop(4)

0x2f2: Push("voice_common")
0x2f3: Push((int) 1)
0x2f4: @ SetVariable(Stack[-2], Stack[-1])
0x2f5: Pop(2)
0x2f6: Stack[-6] = (bool) 1
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2f9: Stack[-5] = "c"
0x2fa: Stack[-4] = (int) 0
0x2fb: Push((int) 1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2fd: Push((int) 1)
0x2fe: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ff: Pop(1); Push(Stack[-6] + Stack[-1]);
0x300: @@ HasProperty(Stack[-1], Stack[-4])
0x301: Pop(1)
0x302: Pop(0); Push((bool) Stack[-3] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x308

0x305: Push((int) 1)
0x306: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x307: GOTO 0x2fb

0x308: Pop(0); Push((bool) Stack[-4] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-12] = (bool) 0
0x30b: Return(); Pop(10)

0x30c: Stack[-2] = (int) 0
0x30d: Push((int) 1)
0x30e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: @ irand(Stack[-2], Stack[-4])
0x311: Pop(0)
0x312: Push((int) 1)
0x313: Pop(1); Push(Stack[-3] + Stack[-1]);
0x314: Pop(1); Push(Stack[-6] + Stack[-1]);
0x315: @@ GetProperty(Stack[-1], Stack[-2])
0x316: Pop(1)
0x317: PushEmpty(bool, string)
0x318: Stack[-1] = Stack[-3]
0x319: Call2 0x367

0x31a: Stack[-14] = Stack[-2]
0x31b: Pop(2)
0x31c: Return(); Pop(10)

0x31d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x31e: Push("d")
0x31f: PushEmpty(int)
0x320: Call2 0x392

0x321: Pop(0)
0x322: Pop(2); Push(Stack[-2] + Stack[-1]);
0x323: Push("m")
0x324: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x325: Stack[-4] = (int) 0
0x326: Push((int) 1)
0x327: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x328: Push((int) 1)
0x329: Pop(1); Push(Stack[-5] + Stack[-1]);
0x32a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x32b: @@ HasProperty(Stack[-1], Stack[-4])
0x32c: Pop(1)
0x32d: Pop(0); Push((bool) Stack[-3] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x333

0x330: Push((int) 1)
0x331: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x332: GOTO 0x326

0x333: Pop(0); Push((bool) Stack[-4] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-12] = (bool) 0
0x336: Return(); Pop(10)

0x337: Stack[-2] = (int) 0
0x338: Push((int) 1)
0x339: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: @ irand(Stack[-2], Stack[-4])
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x33f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x340: @@ GetProperty(Stack[-1], Stack[-2])
0x341: Pop(1)
0x342: PushEmpty(bool, string)
0x343: Stack[-1] = Stack[-3]
0x344: Call2 0x367

0x345: Stack[-14] = Stack[-2]
0x346: Pop(2)
0x347: Return(); Pop(10)

0x348: PushEmpty(bool, float, float, bool, float, float)
0x349: @ lshHasAnimation(Stack[-3], Stack[-7])
0x34a: Pop(0)
0x34b: Push(Stack[-3])
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x34e: Pop(0)
0x34f: Push((bool) 0)
0x350: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x351: Pop(1)
0x352: GOTO 0x357

0x353: Push("Can't find lsh animation : ")
0x354: Pop(1); Push(Stack[-1] + Stack[-8]);
0x355: @ Trace(Stack[-1])
0x356: Pop(1)
0x357: Return(); Pop(6)

0x358: PushEmpty(bool, float, float, bool, float, float)
0x359: @ lshHasAnimation(Stack[-3], Stack[-8])
0x35a: Pop(0)
0x35b: Push(Stack[-3])
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x35e: Pop(0)
0x35f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x360: Pop(0)
0x361: GOTO 0x366

0x362: Push("Can't find lsh animation : ")
0x363: Pop(1); Push(Stack[-1] + Stack[-9]);
0x364: @ Trace(Stack[-1])
0x365: Pop(1)
0x366: Return(); Pop(6)

0x367: PushEmpty(bool, bool)
0x368: PushEmpty(bool)
0x369: Call2 0x3c6

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36c: @ lshHasSpeech(Stack[-1], Stack[-3])
0x36d: Pop(0)
0x36e: Push(Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x370: @ lshPlaySpeech(Stack[-3])
0x371: Pop(0)
0x372: Stack[-4] = (bool) 1
0x373: Return(); Pop(2)

0x374: Stack[-4] = (bool) 0
0x375: Return(); Pop(2)

0x376: PushEmpty(bool)
0x377: Call2 0x3c6

0x378: Pop(0)
0x379: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37a: @ lshStopSpeech()
0x37b: Pop(0)
0x37c: Return(); Pop(0)

0x37d: PushEmpty(object, object)
0x37e: @ self(Stack[-1])
0x37f: Pop(0)
0x380: Stack[-3] = Stack[-1]
0x381: Return(); Pop(2)

0x382: Stack[-1] = 0
0x383: PushEmpty(float, float)
0x384: Pop(0); Push(Stack[-3] | Stack[-3]);
0x385: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x386: Push((float)0.0)
0x387: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x38a: Return(); Pop(2)

0x38b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x38c: Return(); Pop(2)

0x38d: PushEmpty(int, int)
0x38e: @ GetVariable(Stack[-3], Stack[-1])
0x38f: Pop(0)
0x390: Stack[-4] = Stack[-1]
0x391: Return(); Pop(2)

0x392: PushEmpty(float, float)
0x393: @ GetGameTime(Stack[-1])
0x394: Pop(0)
0x395: Push((int) 1)
0x396: PushEmpty(int)
0x397: Push((int) 24)
0x398: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x399: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x39a: Return(); Pop(2)

0x39b: PushEmpty()
0x39c: Push("ood12EvaRevenant1")
0x39d: Push((int) 1)
0x39e: @ SetVariable(Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty()
0x3a2: PushEmpty(int, string)
0x3a3: Stack[-1] = "ood12EvaRevenant1"
0x3a4: Call2 0x38d

0x3a5: Pop(1)
0x3a6: Push((int) 0)
0x3a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a9: Stack[-2] = (bool) 1
0x3aa: Return(); Pop(0)

0x3ab: Stack[-2] = (bool) 0
0x3ac: Return(); Pop(0)

0x3ad: PushEmpty(int, int)
0x3ae: Push("branch")
0x3af: @ GetVariable(Stack[-1], Stack[-2])
0x3b0: Pop(1)
0x3b1: Push((int) 0)
0x3b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b4: Stack[-3] = (int) 1
0x3b5: Return(); Pop(2)

0x3b6: GOTO 0x3bc

0x3b7: Push((int) 1)
0x3b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-3] = (int) 2
0x3bb: Return(); Pop(2)

0x3bc: Stack[-3] = (int) 3
0x3bd: Return(); Pop(2)

0x3be: Stack[-1] = (int) 515533
0x3bf: Return(); Pop(0)

0x3c0: Stack[-1] = (int) 502858
0x3c1: Return(); Pop(0)

0x3c2: Stack[-1] = "ui/NPC_Eva.png"
0x3c3: Return(); Pop(0)

0x3c4: Stack[-1] = "ui/NPC_Eva_b.png"
0x3c5: Return(); Pop(0)

0x3c6: Stack[-1] = (bool) 1
0x3c7: Return(); Pop(0)

