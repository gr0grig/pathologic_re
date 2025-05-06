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
	Isee
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Threat
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
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png
	b9q03AglajaTalk
	branch

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
	StopGroup0 (0 args)
	GetPosition (1 args)
	Rotate (3 args)
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

RunOp = 0x1bd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_26 Op = 0x1ce Vars = (string)
		EVENT_6 Op = 0x1e2 Vars = ()
		EVENT_5 Op = 0x1ee Vars = ()
		EVENT_0 Op = 0x1f3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x21b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x34f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x34d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x351

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x353

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x369

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
0x31: Call2 0x32f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x270

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
0x48: Call2 0x25f

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
0x56: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x35d

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x5d: PushEmpty(object, object)
0x5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60: Call2 0x357

0x61: Pop(2)
0x62: PushEmpty(string)
0x63: Stack[-1] = "Isee"
0x64: Call2 0xa5

0x65: Pop(1)
0x66: Push((int) 530278)
0x67: @@ SetMessage(Stack[-1])
0x68: Pop(1)
0x69: @@ ClearReplies()
0x6a: Pop(0)
0x6b: Push((int) 530919)
0x6c: Push((int) 32247)
0x6d: Push((int) 32246)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: GOTO 0x87

0x71: PushEmpty(string)
0x72: Stack[-1] = "Neutral"
0x73: Call2 0xa5

0x74: Pop(1)
0x75: Push((int) 530288)
0x76: @@ SetMessage(Stack[-1])
0x77: Pop(1)
0x78: @@ ClearReplies()
0x79: Pop(0)
0x7a: Push((int) 530289)
0x7b: Push((int) -1)
0x7c: Push((int) 31677)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: Push((int) 530918)
0x80: Push((int) -1)
0x81: Push((int) 32245)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x55

0x87: PushEmpty(bool)
0x88: Call2 0x355

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x2fa

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all")
0x97: Push("idle")
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x355

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-2] = Stack[-3]
0xb1: Push("")
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x30a

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x328

0xc0: Pop(0)
0xc1: Push((int) 31666)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xc4: PushEmpty(bool, object)
0xc5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Call2 0x35d

0xc7: Pop(1)
0xc8: Pop(1); Push((bool) Stack[-1] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x357

0xce: Pop(2)
0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Isee"
0xd1: Call2 0xa5

0xd2: Pop(1)
0xd3: Push((int) 530278)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: Push((int) 530919)
0xd9: Push((int) 32247)
0xda: Push((int) 32246)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: PushEmpty(string)
0xdf: Stack[-1] = "Neutral"
0xe0: Call2 0xa5

0xe1: Pop(1)
0xe2: Push((int) 530288)
0xe3: @@ SetMessage(Stack[-1])
0xe4: Pop(1)
0xe5: @@ ClearReplies()
0xe6: Pop(0)
0xe7: Push((int) 530289)
0xe8: Push((int) -1)
0xe9: Push((int) 31677)
0xea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb: Pop(3)
0xec: Push((int) 530918)
0xed: Push((int) -1)
0xee: Push((int) 32245)
0xef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0: Pop(3)
0xf1: Return(); Pop(0)

0xf2: Push((int) 32251)
0xf3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf5: Push((int) 32247)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Isee"
0xfa: Call2 0xa5

0xfb: Pop(1)
0xfc: Push((int) 530920)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 530921)
0x102: Push((int) 32249)
0x103: Push((int) 32248)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 531006)
0x107: Push((int) -1)
0x108: Push((int) 32333)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 32249)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0xa5

0x112: Pop(1)
0x113: Push((int) 530922)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 530279)
0x119: Push((int) 31668)
0x11a: Push((int) 31667)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 531005)
0x11e: Push((int) 32334)
0x11f: Push((int) 32332)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 32334)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0xa5

0x129: Pop(1)
0x12a: Push((int) 531007)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 531008)
0x130: Push((int) 31668)
0x131: Push((int) 32335)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 31668)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xa5

0x13b: Pop(1)
0x13c: Push((int) 530280)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 531011)
0x142: Push((int) 32340)
0x143: Push((int) 32339)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 531009)
0x147: Push((int) 32338)
0x148: Push((int) 32337)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 32338)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0xa5

0x152: Pop(1)
0x153: Push((int) 531010)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 531013)
0x159: Push((int) 32340)
0x15a: Push((int) 32341)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 531014)
0x15e: Push((int) -1)
0x15f: Push((int) 32342)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 32340)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Threat"
0x168: Call2 0xa5

0x169: Pop(1)
0x16a: Push((int) 531012)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 530281)
0x170: Push((int) 31670)
0x171: Push((int) 31669)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 531016)
0x175: Push((int) -1)
0x176: Push((int) 32345)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: Push((int) 31670)
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0xa5

0x180: Pop(1)
0x181: Push((int) 530282)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 530283)
0x187: Push((int) -1)
0x188: Push((int) 31671)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 531015)
0x18c: Push((int) 32346)
0x18d: Push((int) 32344)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 32346)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xa5

0x197: Pop(1)
0x198: Push((int) 531017)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 531018)
0x19e: Push((int) -1)
0x19f: Push((int) 32347)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 531019)
0x1a3: Push((int) -1)
0x1a4: Push((int) 32348)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a9: PushEmpty(bool)
0x1aa: Call2 0x355

0x1ab: Pop(0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ad: @ lshStopAnimation()
0x1ae: Pop(0)
0x1af: GOTO 0x1b2

0x1b0: @ StopAnimation()
0x1b1: Pop(0)
0x1b2: Return(); Pop(0)

0x1b3: GOTO 0xbc

0x1b4: Return(); Pop(0)

0x1b5: PushEmpty()
0x1b6: PushEmpty(int, object)
0x1b7: Stack[-1] = Stack[-3]
0x1b8: Push(-2, 1); TaskCall(0)
0x1b9: Call2 0x0

0x1ba: Pop(-2, 1); TaskReturn
0x1bb: Pop(2)
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty(bool)
0x1be: Call2 0x216

0x1bf: Pop(0)
0x1c0: Pop(1); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c2: @ Hold()
0x1c3: Pop(0)
0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Neutral"
0x1c6: Call2 0x2fa

0x1c7: Pop(1)
0x1c8: @ lshWaitForAnimEnd()
0x1c9: Pop(0)
0x1ca: GOTO 0x1c4

0x1cb: @ Hold()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty(bool, bool)
0x1cf: Push("cleanup")
0x1d0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d2: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d3: @ IsLoaded(Stack[-1])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(object)
0x1d8: Call2 0x32f

0x1d9: Pop(0)
0x1da: @ RemoveActor(Stack[-1])
0x1db: Pop(1)
0x1dc: GOTO 0x1e1

0x1dd: Push("restore")
0x1de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Return(); Pop(2)

0x1e2: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1e3: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e4: PushEmpty(object)
0x1e5: Call2 0x32f

0x1e6: Pop(0)
0x1e7: @ RemoveActor(Stack[-1])
0x1e8: Pop(1)
0x1e9: @ Hold()
0x1ea: Pop(0)
0x1eb: @ Hold()
0x1ec: Pop(0)
0x1ed: Return(); Pop(0)

0x1ee: @ StopGroup0()
0x1ef: Pop(0)
0x1f0: @ sync()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(bool, bool)
0x1f4: @ IsOverrideActive(Stack[-1])
0x1f5: Pop(0)
0x1f6: Pop(0); Push((bool) Stack[-1] == 0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f8: EventDisable(0)
0x1f9: PushEmpty(bool, object)
0x1fa: Stack[-1] = Stack[-5]
0x1fb: Call2 0x20d

0x1fc: Pop(2)
0x1fd: EventEnable(0)
0x1fe: PushEmpty(object)
0x1ff: Stack[-1] = Stack[-4]
0x200: Call2 0x1b5

0x201: Pop(1)
0x202: Return(); Pop(2)

0x203: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x204: @ GetPosition(Stack[-3])
0x205: Pop(0)
0x206: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x207: Push(CvectorIndex(Stack[-2], 0))
0x208: Push(CvectorIndex(Stack[-3], 2))
0x209: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x20a: Pop(2)
0x20b: Stack[-8] = Stack[-1]
0x20c: Return(); Pop(6)

0x20d: PushEmpty(cvector, cvector)
0x20e: @@ GetPosition(Stack[-1])
0x20f: Pop(0)
0x210: PushEmpty(bool, cvector)
0x211: Stack[-1] = Stack[-3]
0x212: Call2 0x203

0x213: Stack[-6] = Stack[-2]
0x214: Pop(2)
0x215: Return(); Pop(2)

0x216: PushEmpty(bool, bool)
0x217: @ IsLoaded(Stack[-1])
0x218: Pop(0)
0x219: Stack[-3] = Stack[-1]
0x21a: Return(); Pop(2)

0x21b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x21c: @@ GetPosition(Stack[-8])
0x21d: Pop(0)
0x21e: @@ GetEyesHeight(Stack[-9])
0x21f: Pop(0)
0x220: Push(CvectorIndex(Stack[-8], 1))
0x221: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x222: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x223: @ GetPosition(Stack[-7])
0x224: Pop(0)
0x225: @ GetEyesHeight(Stack[-9])
0x226: Pop(0)
0x227: Push(CvectorIndex(Stack[-7], 1))
0x228: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x229: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x22a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x22b: Push(CvectorIndex(Stack[-6], 1))
0x22c: Stack[-1] = (int) 0
0x22d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x22e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x22f: Pop(1); Push(Sqrt(Stack[-1]))
0x230: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x231: Stack[-5] = -Stack[-6]; Pop(0);
0x232: Pop(0); Push(Stack[-6] * Stack[-19]);
0x233: PushEmpty(cvector, cvector)
0x234: Push(CVector(0.0, 1.0, 0.0))
0x235: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x236: Call2 0x335

0x237: Pop(1)
0x238: Push((int) 25)
0x239: Pop(2); Push(Stack[-2] * Stack[-1]);
0x23a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23b: Push(CVector(0.0, 10.0, 0.0))
0x23c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x23d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x23e: @ IsOverrideActive(Stack[-2])
0x23f: Pop(0)
0x240: Push(Stack[-2])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-21] = (bool) 0
0x243: Return(); Pop(18)

0x244: @ StopWorld()
0x245: Pop(0)
0x246: @ CameraTransit(Stack[-3], Stack[-5])
0x247: Pop(0)
0x248: Push(CvectorIndex(Stack[-4], 0))
0x249: Push(CvectorIndex(Stack[-5], 2))
0x24a: @ Rotate(Stack[-2], Stack[-1])
0x24b: Pop(2)
0x24c: PushEmpty(bool)
0x24d: Call2 0x355

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x259

0x251: Push("head")
0x252: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x253: Pop(1)
0x254: Push(Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x256: Push("head")
0x257: @ LookAsyncCamera(Stack[-1])
0x258: Pop(1)
0x259: @ CameraWaitForPlayFinish()
0x25a: Pop(0)
0x25b: @ ResumeWorld()
0x25c: Pop(0)
0x25d: Stack[-21] = (bool) 1
0x25e: Return(); Pop(18)

0x25f: PushEmpty(bool, bool)
0x260: @ CameraSwitchToNormal()
0x261: Pop(0)
0x262: PushEmpty(bool)
0x263: Call2 0x355

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x26f

0x267: Push("head")
0x268: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x269: Pop(1)
0x26a: Push(Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26c: Push("head")
0x26d: @ UnlookAsync(Stack[-1])
0x26e: Pop(1)
0x26f: Return(); Pop(2)

0x270: PushEmpty(int, int, int, int)
0x271: Push("voice_common")
0x272: @ GetVariable(Stack[-1], Stack[-3])
0x273: Pop(1)
0x274: Push(Stack[-2])
0x275: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x276: PushEmpty(bool, object)
0x277: Stack[-1] = Stack[-7]
0x278: Call2 0x2aa

0x279: Pop(1)
0x27a: Pop(1); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27c: PushEmpty(bool, object)
0x27d: Stack[-1] = Stack[-7]
0x27e: Call2 0x2cf

0x27f: Pop(1)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x282: Stack[-6] = (bool) 0
0x283: Return(); Pop(4)

0x284: Push((int) 2)
0x285: @ irand(Stack[-2], Stack[-1])
0x286: Pop(1)
0x287: Push(Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x289: Push("voice_common")
0x28a: Push((int) 1)
0x28b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x28c: Push((int) 3)
0x28d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x28e: @ SetVariable(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: GOTO 0x295

0x291: Push("voice_common")
0x292: Push((int) 0)
0x293: @ SetVariable(Stack[-2], Stack[-1])
0x294: Pop(2)
0x295: GOTO 0x2a8

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[-7]
0x298: Call2 0x2cf

0x299: Pop(1)
0x29a: Pop(1); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29c: PushEmpty(bool, object)
0x29d: Stack[-1] = Stack[-7]
0x29e: Call2 0x2aa

0x29f: Pop(1)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-6] = (bool) 0
0x2a3: Return(); Pop(4)

0x2a4: Push("voice_common")
0x2a5: Push((int) 1)
0x2a6: @ SetVariable(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: Stack[-6] = (bool) 1
0x2a9: Return(); Pop(4)

0x2aa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ab: Stack[-5] = "c"
0x2ac: Stack[-4] = (int) 0
0x2ad: Push((int) 1)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2af: Push((int) 1)
0x2b0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2b1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2b2: @@ HasProperty(Stack[-1], Stack[-4])
0x2b3: Pop(1)
0x2b4: Pop(0); Push((bool) Stack[-3] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2ba

0x2b7: Push((int) 1)
0x2b8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2b9: GOTO 0x2ad

0x2ba: Pop(0); Push((bool) Stack[-4] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-12] = (bool) 0
0x2bd: Return(); Pop(10)

0x2be: Stack[-2] = (int) 0
0x2bf: Push((int) 1)
0x2c0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: @ irand(Stack[-2], Stack[-4])
0x2c3: Pop(0)
0x2c4: Push((int) 1)
0x2c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c7: @@ GetProperty(Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: PushEmpty(bool, string)
0x2ca: Stack[-1] = Stack[-3]
0x2cb: Call2 0x319

0x2cc: Stack[-14] = Stack[-2]
0x2cd: Pop(2)
0x2ce: Return(); Pop(10)

0x2cf: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2d0: Push("d")
0x2d1: PushEmpty(int)
0x2d2: Call2 0x344

0x2d3: Pop(0)
0x2d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d5: Push("m")
0x2d6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2d7: Stack[-4] = (int) 0
0x2d8: Push((int) 1)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2da: Push((int) 1)
0x2db: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2dd: @@ HasProperty(Stack[-1], Stack[-4])
0x2de: Pop(1)
0x2df: Pop(0); Push((bool) Stack[-3] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e5

0x2e2: Push((int) 1)
0x2e3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2e4: GOTO 0x2d8

0x2e5: Pop(0); Push((bool) Stack[-4] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e7: Stack[-12] = (bool) 0
0x2e8: Return(); Pop(10)

0x2e9: Stack[-2] = (int) 0
0x2ea: Push((int) 1)
0x2eb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ed: @ irand(Stack[-2], Stack[-4])
0x2ee: Pop(0)
0x2ef: Push((int) 1)
0x2f0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f2: @@ GetProperty(Stack[-1], Stack[-2])
0x2f3: Pop(1)
0x2f4: PushEmpty(bool, string)
0x2f5: Stack[-1] = Stack[-3]
0x2f6: Call2 0x319

0x2f7: Stack[-14] = Stack[-2]
0x2f8: Pop(2)
0x2f9: Return(); Pop(10)

0x2fa: PushEmpty(bool, float, float, bool, float, float)
0x2fb: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2fc: Pop(0)
0x2fd: Push(Stack[-3])
0x2fe: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2ff: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x300: Pop(0)
0x301: Push((bool) 0)
0x302: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(1)
0x304: GOTO 0x309

0x305: Push("Can't find lsh animation : ")
0x306: Pop(1); Push(Stack[-1] + Stack[-8]);
0x307: @ Trace(Stack[-1])
0x308: Pop(1)
0x309: Return(); Pop(6)

0x30a: PushEmpty(bool, float, float, bool, float, float)
0x30b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x30c: Pop(0)
0x30d: Push(Stack[-3])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x310: Pop(0)
0x311: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x312: Pop(0)
0x313: GOTO 0x318

0x314: Push("Can't find lsh animation : ")
0x315: Pop(1); Push(Stack[-1] + Stack[-9]);
0x316: @ Trace(Stack[-1])
0x317: Pop(1)
0x318: Return(); Pop(6)

0x319: PushEmpty(bool, bool)
0x31a: PushEmpty(bool)
0x31b: Call2 0x355

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x31f: Pop(0)
0x320: Push(Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x322: @ lshPlaySpeech(Stack[-3])
0x323: Pop(0)
0x324: Stack[-4] = (bool) 1
0x325: Return(); Pop(2)

0x326: Stack[-4] = (bool) 0
0x327: Return(); Pop(2)

0x328: PushEmpty(bool)
0x329: Call2 0x355

0x32a: Pop(0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: @ lshStopSpeech()
0x32d: Pop(0)
0x32e: Return(); Pop(0)

0x32f: PushEmpty(object, object)
0x330: @ self(Stack[-1])
0x331: Pop(0)
0x332: Stack[-3] = Stack[-1]
0x333: Return(); Pop(2)

0x334: Stack[-1] = 0
0x335: PushEmpty(float, float)
0x336: Pop(0); Push(Stack[-3] | Stack[-3]);
0x337: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x338: Push((float)0.0)
0x339: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x33c: Return(); Pop(2)

0x33d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x33e: Return(); Pop(2)

0x33f: PushEmpty(int, int)
0x340: @ GetVariable(Stack[-3], Stack[-1])
0x341: Pop(0)
0x342: Stack[-4] = Stack[-1]
0x343: Return(); Pop(2)

0x344: PushEmpty(float, float)
0x345: @ GetGameTime(Stack[-1])
0x346: Pop(0)
0x347: Push((int) 1)
0x348: PushEmpty(int)
0x349: Push((int) 24)
0x34a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x34b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x34c: Return(); Pop(2)

0x34d: Stack[-1] = (int) 515527
0x34e: Return(); Pop(0)

0x34f: Stack[-1] = (int) 513334
0x350: Return(); Pop(0)

0x351: Stack[-1] = "ui/NPC_Aglaja.png"
0x352: Return(); Pop(0)

0x353: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x354: Return(); Pop(0)

0x355: Stack[-1] = (bool) 1
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: Push("b9q03AglajaTalk")
0x359: Push((int) 1)
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: PushEmpty(int, string)
0x35f: Stack[-1] = "b9q03AglajaTalk"
0x360: Call2 0x33f

0x361: Pop(1)
0x362: Push((int) 0)
0x363: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-2] = (bool) 1
0x366: Return(); Pop(0)

0x367: Stack[-2] = (bool) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(int, int)
0x36a: Push("branch")
0x36b: @ GetVariable(Stack[-1], Stack[-2])
0x36c: Pop(1)
0x36d: Push((int) 0)
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x370: Stack[-3] = (int) 1
0x371: Return(); Pop(2)

0x372: GOTO 0x378

0x373: Push((int) 1)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-3] = (int) 2
0x377: Return(); Pop(2)

0x378: Stack[-3] = (int) 3
0x379: Return(); Pop(2)

