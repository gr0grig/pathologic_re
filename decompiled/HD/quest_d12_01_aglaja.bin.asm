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
	Isee
	Threat
	Arrogance
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
	ood12AglajaSobor1
	branch
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png

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

RunOp = 0x1d5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1d9 Vars = (object)
		EVENT_26 Op = 0x1e5 Vars = (string)
		EVENT_6 Op = 0x201 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x213

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x36e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x370

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x359

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
0x31: Call2 0x329

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x26a

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
0x48: Call2 0x258

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x95

0x5a: Pop(1)
0x5b: Push((int) 538452)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x34d

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 538453)
0x66: Push((int) 40350)
0x67: Push((int) 40335)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 538470)
0x6b: Push((int) -1)
0x6c: Push((int) 40352)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 538472)
0x70: Push((int) -1)
0x71: Push((int) 40354)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x372

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x2f4

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x372

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x304

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x322

0xb0: Pop(0)
0xb1: Push((int) 40335)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x347

0xb8: Pop(2)
0xb9: Push((int) 40334)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral"
0xbe: Call2 0x95

0xbf: Pop(1)
0xc0: Push((int) 538452)
0xc1: @@ SetMessage(Stack[-1])
0xc2: Pop(1)
0xc3: @@ ClearReplies()
0xc4: Pop(0)
0xc5: PushEmpty(bool, object)
0xc6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc7: Call2 0x34d

0xc8: Pop(1)
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: Push((int) 538453)
0xcb: Push((int) 40350)
0xcc: Push((int) 40335)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 538470)
0xd0: Push((int) -1)
0xd1: Push((int) 40352)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Push((int) 538472)
0xd5: Push((int) -1)
0xd6: Push((int) 40354)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: Push((int) 40350)
0xdb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Isee"
0xdf: Call2 0x95

0xe0: Pop(1)
0xe1: Push((int) 538468)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 539946)
0xe7: Push((int) 41911)
0xe8: Push((int) 41910)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Push((int) 539948)
0xec: Push((int) -1)
0xed: Push((int) 41912)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Return(); Pop(0)

0xf1: Push((int) 41911)
0xf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf4: PushEmpty(string)
0xf5: Stack[-1] = "Isee"
0xf6: Call2 0x95

0xf7: Pop(1)
0xf8: Push((int) 539947)
0xf9: @@ SetMessage(Stack[-1])
0xfa: Pop(1)
0xfb: @@ ClearReplies()
0xfc: Pop(0)
0xfd: Push((int) 539949)
0xfe: Push((int) 41914)
0xff: Push((int) 41913)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Push((int) 539951)
0x103: Push((int) -1)
0x104: Push((int) 41915)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Return(); Pop(0)

0x108: Push((int) 41914)
0x109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "Neutral"
0x10d: Call2 0x95

0x10e: Pop(1)
0x10f: Push((int) 539950)
0x110: @@ SetMessage(Stack[-1])
0x111: Pop(1)
0x112: @@ ClearReplies()
0x113: Pop(0)
0x114: Push((int) 538469)
0x115: Push((int) 40336)
0x116: Push((int) 40351)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Push((int) 539952)
0x11a: Push((int) 40338)
0x11b: Push((int) 41916)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Return(); Pop(0)

0x11f: Push((int) 40336)
0x120: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0x95

0x125: Pop(1)
0x126: Push((int) 538454)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 538455)
0x12c: Push((int) 40338)
0x12d: Push((int) 40337)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 539953)
0x131: Push((int) 40342)
0x132: Push((int) 41918)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 40338)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x95

0x13c: Pop(1)
0x13d: Push((int) 538456)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 538457)
0x143: Push((int) 40340)
0x144: Push((int) 40339)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 40340)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0x95

0x14e: Pop(1)
0x14f: Push((int) 538458)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 538459)
0x155: Push((int) 40342)
0x156: Push((int) 40341)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 40342)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Threat"
0x15f: Call2 0x95

0x160: Pop(1)
0x161: Push((int) 538460)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 538461)
0x167: Push((int) 40344)
0x168: Push((int) 40343)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 538475)
0x16c: Push((int) 40344)
0x16d: Push((int) 40358)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 40344)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Threat"
0x176: Call2 0x95

0x177: Pop(1)
0x178: Push((int) 538462)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 538463)
0x17e: Push((int) 40346)
0x17f: Push((int) 40345)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 40346)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0x95

0x189: Pop(1)
0x18a: Push((int) 538464)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 538465)
0x190: Push((int) 40348)
0x191: Push((int) 40347)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Push((int) 538474)
0x195: Push((int) 40348)
0x196: Push((int) 40356)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 40348)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral"
0x19f: Call2 0x95

0x1a0: Pop(1)
0x1a1: Push((int) 538466)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 538467)
0x1a7: Push((int) 16089)
0x1a8: Push((int) 40349)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Push((int) 538473)
0x1ac: Push((int) 16089)
0x1ad: Push((int) 40355)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 16089)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Arrogance"
0x1b6: Call2 0x95

0x1b7: Pop(1)
0x1b8: Push((int) 514843)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 514844)
0x1be: Push((int) -1)
0x1bf: Push((int) 16090)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 514845)
0x1c3: Push((int) -1)
0x1c4: Push((int) 16091)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c9: PushEmpty(bool)
0x1ca: Call2 0x372

0x1cb: Pop(0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cd: @ lshStopAnimation()
0x1ce: Pop(0)
0x1cf: GOTO 0x1d2

0x1d0: @ StopAnimation()
0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: GOTO 0xac

0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Call2 0x1e1

0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty()
0x1da: PushEmpty(int, object)
0x1db: Stack[-1] = Stack[-3]
0x1dc: Push(-2, 1); TaskCall(0)
0x1dd: Call2 0x0

0x1de: Pop(-2, 1); TaskReturn
0x1df: Pop(2)
0x1e0: Return(); Pop(0)

0x1e1: @ Hold()
0x1e2: Pop(0)
0x1e3: GOTO 0x1e1

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(bool, bool)
0x1e6: Push("cleanup")
0x1e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ea: @ IsLoaded(Stack[-1])
0x1eb: Pop(0)
0x1ec: PushEmpty(bool)
0x1ed: Stack[-1] = (bool) 0
0x1ee: Pop(0); Push((bool) Stack[-2] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x211

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Stack[-1] = (bool) 1
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Call2 0x329

0x1f8: Pop(0)
0x1f9: @ RemoveActor(Stack[-1])
0x1fa: Pop(1)
0x1fb: GOTO 0x200

0x1fc: Push("restore")
0x1fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x200: Return(); Pop(2)

0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Push( Stack[0 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x211

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(object)
0x20c: Call2 0x329

0x20d: Pop(0)
0x20e: @ RemoveActor(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(0)

0x211: Stack[-1] = (bool) 1
0x212: Return(); Pop(0)

0x213: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x214: @@ GetPosition(Stack[-8])
0x215: Pop(0)
0x216: @@ GetEyesHeight(Stack[-9])
0x217: Pop(0)
0x218: Push(CvectorIndex(Stack[-8], 1))
0x219: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x21b: @ GetPosition(Stack[-7])
0x21c: Pop(0)
0x21d: @ GetEyesHeight(Stack[-9])
0x21e: Pop(0)
0x21f: Push(CvectorIndex(Stack[-7], 1))
0x220: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x221: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x222: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x223: Push(CvectorIndex(Stack[-6], 1))
0x224: Stack[-1] = (int) 0
0x225: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x226: Pop(0); Push(Stack[-6] | Stack[-6]);
0x227: Pop(1); Push(Sqrt(Stack[-1]))
0x228: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x229: Stack[-5] = -Stack[-6]; Pop(0);
0x22a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x22b: PushEmpty(cvector, cvector)
0x22c: Push(CVector(0.0, 1.0, 0.0))
0x22d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22e: Call2 0x32f

0x22f: Pop(1)
0x230: Push((int) 25)
0x231: Pop(2); Push(Stack[-2] * Stack[-1]);
0x232: Pop(2); Push(Stack[-2] + Stack[-1]);
0x233: Push(CVector(0.0, 10.0, 0.0))
0x234: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x235: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x236: @ IsOverrideActive(Stack[-2])
0x237: Pop(0)
0x238: Push(Stack[-2])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-21] = (bool) 0
0x23b: Return(); Pop(18)

0x23c: @ StopWorld()
0x23d: Pop(0)
0x23e: Push((bool) 1)
0x23f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x240: Pop(1)
0x241: Push(CvectorIndex(Stack[-4], 0))
0x242: Push(CvectorIndex(Stack[-5], 2))
0x243: @ Rotate(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: PushEmpty(bool)
0x246: Call2 0x372

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x252

0x24a: Push("head")
0x24b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: Push(Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Push("head")
0x250: @ LookAsyncCamera(Stack[-1])
0x251: Pop(1)
0x252: @ CameraWaitForPlayFinish()
0x253: Pop(0)
0x254: @ ResumeWorld()
0x255: Pop(0)
0x256: Stack[-21] = (bool) 1
0x257: Return(); Pop(18)

0x258: PushEmpty(bool, bool)
0x259: Push((bool) 1)
0x25a: @ CameraSwitchToNormal(Stack[-1])
0x25b: Pop(1)
0x25c: PushEmpty(bool)
0x25d: Call2 0x372

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x269

0x261: Push("head")
0x262: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x263: Pop(1)
0x264: Push(Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x266: Push("head")
0x267: @ UnlookAsync(Stack[-1])
0x268: Pop(1)
0x269: Return(); Pop(2)

0x26a: PushEmpty(int, int, int, int)
0x26b: Push("voice_common")
0x26c: @ GetVariable(Stack[-1], Stack[-3])
0x26d: Pop(1)
0x26e: Push(Stack[-2])
0x26f: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[-7]
0x272: Call2 0x2a4

0x273: Pop(1)
0x274: Pop(1); Push((bool) Stack[-1] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x276: PushEmpty(bool, object)
0x277: Stack[-1] = Stack[-7]
0x278: Call2 0x2c9

0x279: Pop(1)
0x27a: Pop(1); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27c: Stack[-6] = (bool) 0
0x27d: Return(); Pop(4)

0x27e: Push((int) 2)
0x27f: @ irand(Stack[-2], Stack[-1])
0x280: Pop(1)
0x281: Push(Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x283: Push("voice_common")
0x284: Push((int) 1)
0x285: Pop(1); Push(Stack[-4] + Stack[-1]);
0x286: Push((int) 3)
0x287: Pop(2); Push(Stack[-2] % Stack[-1]);
0x288: @ SetVariable(Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: GOTO 0x28f

0x28b: Push("voice_common")
0x28c: Push((int) 0)
0x28d: @ SetVariable(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: GOTO 0x2a2

0x290: PushEmpty(bool, object)
0x291: Stack[-1] = Stack[-7]
0x292: Call2 0x2c9

0x293: Pop(1)
0x294: Pop(1); Push((bool) Stack[-1] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[-7]
0x298: Call2 0x2a4

0x299: Pop(1)
0x29a: Pop(1); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: Stack[-6] = (bool) 0
0x29d: Return(); Pop(4)

0x29e: Push("voice_common")
0x29f: Push((int) 1)
0x2a0: @ SetVariable(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: Stack[-6] = (bool) 1
0x2a3: Return(); Pop(4)

0x2a4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2a5: Stack[-5] = "c"
0x2a6: Stack[-4] = (int) 0
0x2a7: Push((int) 1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a9: Push((int) 1)
0x2aa: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ab: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ac: @@ HasProperty(Stack[-1], Stack[-4])
0x2ad: Pop(1)
0x2ae: Pop(0); Push((bool) Stack[-3] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: GOTO 0x2b4

0x2b1: Push((int) 1)
0x2b2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2b3: GOTO 0x2a7

0x2b4: Pop(0); Push((bool) Stack[-4] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b6: Stack[-12] = (bool) 0
0x2b7: Return(); Pop(10)

0x2b8: Stack[-2] = (int) 0
0x2b9: Push((int) 1)
0x2ba: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: @ irand(Stack[-2], Stack[-4])
0x2bd: Pop(0)
0x2be: Push((int) 1)
0x2bf: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c1: @@ GetProperty(Stack[-1], Stack[-2])
0x2c2: Pop(1)
0x2c3: PushEmpty(bool, string)
0x2c4: Stack[-1] = Stack[-3]
0x2c5: Call2 0x313

0x2c6: Stack[-14] = Stack[-2]
0x2c7: Pop(2)
0x2c8: Return(); Pop(10)

0x2c9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ca: Push("d")
0x2cb: PushEmpty(int)
0x2cc: Call2 0x33e

0x2cd: Pop(0)
0x2ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cf: Push("m")
0x2d0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2d1: Stack[-4] = (int) 0
0x2d2: Push((int) 1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2d4: Push((int) 1)
0x2d5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d7: @@ HasProperty(Stack[-1], Stack[-4])
0x2d8: Pop(1)
0x2d9: Pop(0); Push((bool) Stack[-3] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2df

0x2dc: Push((int) 1)
0x2dd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2de: GOTO 0x2d2

0x2df: Pop(0); Push((bool) Stack[-4] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: Stack[-12] = (bool) 0
0x2e2: Return(); Pop(10)

0x2e3: Stack[-2] = (int) 0
0x2e4: Push((int) 1)
0x2e5: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: @ irand(Stack[-2], Stack[-4])
0x2e8: Pop(0)
0x2e9: Push((int) 1)
0x2ea: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ec: @@ GetProperty(Stack[-1], Stack[-2])
0x2ed: Pop(1)
0x2ee: PushEmpty(bool, string)
0x2ef: Stack[-1] = Stack[-3]
0x2f0: Call2 0x313

0x2f1: Stack[-14] = Stack[-2]
0x2f2: Pop(2)
0x2f3: Return(); Pop(10)

0x2f4: PushEmpty(bool, float, float, bool, float, float)
0x2f5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2f6: Pop(0)
0x2f7: Push(Stack[-3])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2fa: Pop(0)
0x2fb: Push((bool) 0)
0x2fc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(1)
0x2fe: GOTO 0x303

0x2ff: Push("Can't find lsh animation : ")
0x300: Pop(1); Push(Stack[-1] + Stack[-8]);
0x301: @ Trace(Stack[-1])
0x302: Pop(1)
0x303: Return(); Pop(6)

0x304: PushEmpty(bool, float, float, bool, float, float)
0x305: @ lshHasAnimation(Stack[-3], Stack[-8])
0x306: Pop(0)
0x307: Push(Stack[-3])
0x308: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x309: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x30a: Pop(0)
0x30b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x30c: Pop(0)
0x30d: GOTO 0x312

0x30e: Push("Can't find lsh animation : ")
0x30f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x310: @ Trace(Stack[-1])
0x311: Pop(1)
0x312: Return(); Pop(6)

0x313: PushEmpty(bool, bool)
0x314: PushEmpty(bool)
0x315: Call2 0x372

0x316: Pop(0)
0x317: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x318: @ lshHasSpeech(Stack[-1], Stack[-3])
0x319: Pop(0)
0x31a: Push(Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31c: @ lshPlaySpeech(Stack[-3])
0x31d: Pop(0)
0x31e: Stack[-4] = (bool) 1
0x31f: Return(); Pop(2)

0x320: Stack[-4] = (bool) 0
0x321: Return(); Pop(2)

0x322: PushEmpty(bool)
0x323: Call2 0x372

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: @ lshStopSpeech()
0x327: Pop(0)
0x328: Return(); Pop(0)

0x329: PushEmpty(object, object)
0x32a: @ self(Stack[-1])
0x32b: Pop(0)
0x32c: Stack[-3] = Stack[-1]
0x32d: Return(); Pop(2)

0x32e: Stack[-1] = 0
0x32f: PushEmpty(float, float)
0x330: Pop(0); Push(Stack[-3] | Stack[-3]);
0x331: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x332: Push((float)0.0)
0x333: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x336: Return(); Pop(2)

0x337: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x338: Return(); Pop(2)

0x339: PushEmpty(int, int)
0x33a: @ GetVariable(Stack[-3], Stack[-1])
0x33b: Pop(0)
0x33c: Stack[-4] = Stack[-1]
0x33d: Return(); Pop(2)

0x33e: PushEmpty(float, float)
0x33f: @ GetGameTime(Stack[-1])
0x340: Pop(0)
0x341: Push((int) 1)
0x342: PushEmpty(int)
0x343: Push((int) 24)
0x344: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x345: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x346: Return(); Pop(2)

0x347: PushEmpty()
0x348: Push("ood12AglajaSobor1")
0x349: Push((int) 1)
0x34a: @ SetVariable(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: PushEmpty(int, string)
0x34f: Stack[-1] = "ood12AglajaSobor1"
0x350: Call2 0x339

0x351: Pop(1)
0x352: Push((int) 0)
0x353: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-2] = (bool) 1
0x356: Return(); Pop(0)

0x357: Stack[-2] = (bool) 0
0x358: Return(); Pop(0)

0x359: PushEmpty(int, int)
0x35a: Push("branch")
0x35b: @ GetVariable(Stack[-1], Stack[-2])
0x35c: Pop(1)
0x35d: Push((int) 0)
0x35e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x360: Stack[-3] = (int) 1
0x361: Return(); Pop(2)

0x362: GOTO 0x368

0x363: Push((int) 1)
0x364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-3] = (int) 2
0x367: Return(); Pop(2)

0x368: Stack[-3] = (int) 3
0x369: Return(); Pop(2)

0x36a: Stack[-1] = (int) 515527
0x36b: Return(); Pop(0)

0x36c: Stack[-1] = (int) 513334
0x36d: Return(); Pop(0)

0x36e: Stack[-1] = "ui/NPC_Aglaja.png"
0x36f: Return(); Pop(0)

0x370: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x371: Return(); Pop(0)

0x372: Stack[-1] = (bool) 1
0x373: Return(); Pop(0)

