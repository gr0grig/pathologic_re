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

RunOp = 0x1db
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc0 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_26 Op = 0x1ec Vars = (string)
		EVENT_6 Op = 0x200 Vars = ()
		EVENT_5 Op = 0x20c Vars = ()
		EVENT_0 Op = 0x211 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x239

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x36f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x36d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x371

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x373

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x389

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
0x31: Call2 0x34f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x290

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
0x48: Call2 0x27e

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
0x56: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x37d

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(object, object)
0x5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60: Call2 0x377

0x61: Pop(2)
0x62: PushEmpty(string)
0x63: Stack[-1] = "Isee"
0x64: Call2 0xaa

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
0x70: Push((int) 530923)
0x71: Push((int) 32251)
0x72: Push((int) 32250)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0x8c

0x76: PushEmpty(string)
0x77: Stack[-1] = "Neutral"
0x78: Call2 0xaa

0x79: Pop(1)
0x7a: Push((int) 530288)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: Push((int) 530289)
0x80: Push((int) -1)
0x81: Push((int) 31677)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: Push((int) 530918)
0x85: Push((int) -1)
0x86: Push((int) 32245)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: GOTO 0x8c

0x8a: Return(); Pop(0)

0x8b: GOTO 0x55

0x8c: PushEmpty(bool)
0x8d: Call2 0x375

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: @ lshWaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: PushEmpty(string)
0x96: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97: Call2 0x31a

0x98: Pop(1)
0x99: GOTO 0x90

0x9a: GOTO 0xa9

0x9b: Push("all")
0x9c: Push("idle")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: Push("all")
0xa5: Push("idle")
0xa6: @ PlayAnimation(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: GOTO 0x9f

0xa9: Return(); Pop(0)

0xaa: PushEmpty()
0xab: PushEmpty(bool)
0xac: Call2 0x375

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Return(); Pop(0)

0xb1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty(string, bool)
0xb5: Stack[-2] = Stack[-3]
0xb6: Push("")
0xb7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: GOTO 0xbc

0xbb: Stack[-1] = (bool) 1
0xbc: Call2 0x32a

0xbd: Pop(2)
0xbe: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: Push((int) 1)
0xc2: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0x348

0xc5: Pop(0)
0xc6: Push((int) 31666)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x37d

0xcc: Pop(1)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x377

0xd3: Pop(2)
0xd4: PushEmpty(string)
0xd5: Stack[-1] = "Isee"
0xd6: Call2 0xaa

0xd7: Pop(1)
0xd8: Push((int) 530278)
0xd9: @@ SetMessage(Stack[-1])
0xda: Pop(1)
0xdb: @@ ClearReplies()
0xdc: Pop(0)
0xdd: Push((int) 530919)
0xde: Push((int) 32247)
0xdf: Push((int) 32246)
0xe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: Push((int) 530923)
0xe3: Push((int) 32251)
0xe4: Push((int) 32250)
0xe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6: Pop(3)
0xe7: Return(); Pop(0)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0xaa

0xeb: Pop(1)
0xec: Push((int) 530288)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 530289)
0xf2: Push((int) -1)
0xf3: Push((int) 31677)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Push((int) 530918)
0xf7: Push((int) -1)
0xf8: Push((int) 32245)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 32251)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0xaa

0x102: Pop(1)
0x103: Push((int) 530924)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 530926)
0x109: Push((int) 32247)
0x10a: Push((int) 32253)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Push((int) 530925)
0x10e: Push((int) 32247)
0x10f: Push((int) 32252)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 32247)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Isee"
0x118: Call2 0xaa

0x119: Pop(1)
0x11a: Push((int) 530920)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 530921)
0x120: Push((int) 32249)
0x121: Push((int) 32248)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Push((int) 531006)
0x125: Push((int) -1)
0x126: Push((int) 32333)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 32249)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0xaa

0x130: Pop(1)
0x131: Push((int) 530922)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 530279)
0x137: Push((int) 31668)
0x138: Push((int) 31667)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 531005)
0x13c: Push((int) 32334)
0x13d: Push((int) 32332)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 32334)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0xaa

0x147: Pop(1)
0x148: Push((int) 531007)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 531008)
0x14e: Push((int) 31668)
0x14f: Push((int) 32335)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 31668)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0xaa

0x159: Pop(1)
0x15a: Push((int) 530280)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 531011)
0x160: Push((int) 32340)
0x161: Push((int) 32339)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 531009)
0x165: Push((int) 32338)
0x166: Push((int) 32337)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 32338)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0xaa

0x170: Pop(1)
0x171: Push((int) 531010)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 531013)
0x177: Push((int) 32340)
0x178: Push((int) 32341)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Push((int) 531014)
0x17c: Push((int) -1)
0x17d: Push((int) 32342)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Return(); Pop(0)

0x181: Push((int) 32340)
0x182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x184: PushEmpty(string)
0x185: Stack[-1] = "Threat"
0x186: Call2 0xaa

0x187: Pop(1)
0x188: Push((int) 531012)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 530281)
0x18e: Push((int) 31670)
0x18f: Push((int) 31669)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 531016)
0x193: Push((int) -1)
0x194: Push((int) 32345)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 31670)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xaa

0x19e: Pop(1)
0x19f: Push((int) 530282)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 530283)
0x1a5: Push((int) -1)
0x1a6: Push((int) 31671)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 531015)
0x1aa: Push((int) 32346)
0x1ab: Push((int) 32344)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Return(); Pop(0)

0x1af: Push((int) 32346)
0x1b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1b2: PushEmpty(string)
0x1b3: Stack[-1] = "Neutral"
0x1b4: Call2 0xaa

0x1b5: Pop(1)
0x1b6: Push((int) 531017)
0x1b7: @@ SetMessage(Stack[-1])
0x1b8: Pop(1)
0x1b9: @@ ClearReplies()
0x1ba: Pop(0)
0x1bb: Push((int) 531018)
0x1bc: Push((int) -1)
0x1bd: Push((int) 32347)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Push((int) 531019)
0x1c1: Push((int) -1)
0x1c2: Push((int) 32348)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Return(); Pop(0)

0x1c6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c7: PushEmpty(bool)
0x1c8: Call2 0x375

0x1c9: Pop(0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: @ lshStopAnimation()
0x1cc: Pop(0)
0x1cd: GOTO 0x1d0

0x1ce: @ StopAnimation()
0x1cf: Pop(0)
0x1d0: Return(); Pop(0)

0x1d1: GOTO 0xc1

0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: PushEmpty(int, object)
0x1d5: Stack[-1] = Stack[-3]
0x1d6: Push(-2, 1); TaskCall(0)
0x1d7: Call2 0x0

0x1d8: Pop(-2, 1); TaskReturn
0x1d9: Pop(2)
0x1da: Return(); Pop(0)

0x1db: PushEmpty(bool)
0x1dc: Call2 0x234

0x1dd: Pop(0)
0x1de: Pop(1); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: @ Hold()
0x1e1: Pop(0)
0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0x31a

0x1e5: Pop(1)
0x1e6: @ lshWaitForAnimEnd()
0x1e7: Pop(0)
0x1e8: GOTO 0x1e2

0x1e9: @ Hold()
0x1ea: Pop(0)
0x1eb: Return(); Pop(0)

0x1ec: PushEmpty(bool, bool)
0x1ed: Push("cleanup")
0x1ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1f1: @ IsLoaded(Stack[-1])
0x1f2: Pop(0)
0x1f3: Pop(0); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f5: PushEmpty(object)
0x1f6: Call2 0x34f

0x1f7: Pop(0)
0x1f8: @ RemoveActor(Stack[-1])
0x1f9: Pop(1)
0x1fa: GOTO 0x1ff

0x1fb: Push("restore")
0x1fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1ff: Return(); Pop(2)

0x200: Push( Stack[0 + Tasks[-1].StackPointer] )
0x201: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x202: PushEmpty(object)
0x203: Call2 0x34f

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: @ Hold()
0x208: Pop(0)
0x209: @ Hold()
0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: @ StopGroup0()
0x20d: Pop(0)
0x20e: @ sync()
0x20f: Pop(0)
0x210: Return(); Pop(0)

0x211: PushEmpty(bool, bool)
0x212: @ IsOverrideActive(Stack[-1])
0x213: Pop(0)
0x214: Pop(0); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x216: EventDisable(0)
0x217: PushEmpty(bool, object)
0x218: Stack[-1] = Stack[-5]
0x219: Call2 0x22b

0x21a: Pop(2)
0x21b: EventEnable(0)
0x21c: PushEmpty(object)
0x21d: Stack[-1] = Stack[-4]
0x21e: Call2 0x1d3

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x222: @ GetPosition(Stack[-3])
0x223: Pop(0)
0x224: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x225: Push(CvectorIndex(Stack[-2], 0))
0x226: Push(CvectorIndex(Stack[-3], 2))
0x227: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x228: Pop(2)
0x229: Stack[-8] = Stack[-1]
0x22a: Return(); Pop(6)

0x22b: PushEmpty(cvector, cvector)
0x22c: @@ GetPosition(Stack[-1])
0x22d: Pop(0)
0x22e: PushEmpty(bool, cvector)
0x22f: Stack[-1] = Stack[-3]
0x230: Call2 0x221

0x231: Stack[-6] = Stack[-2]
0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty(bool, bool)
0x235: @ IsLoaded(Stack[-1])
0x236: Pop(0)
0x237: Stack[-3] = Stack[-1]
0x238: Return(); Pop(2)

0x239: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x23a: @@ GetPosition(Stack[-8])
0x23b: Pop(0)
0x23c: @@ GetEyesHeight(Stack[-9])
0x23d: Pop(0)
0x23e: Push(CvectorIndex(Stack[-8], 1))
0x23f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x240: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x241: @ GetPosition(Stack[-7])
0x242: Pop(0)
0x243: @ GetEyesHeight(Stack[-9])
0x244: Pop(0)
0x245: Push(CvectorIndex(Stack[-7], 1))
0x246: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x247: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x248: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x249: Push(CvectorIndex(Stack[-6], 1))
0x24a: Stack[-1] = (int) 0
0x24b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x24c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x24d: Pop(1); Push(Sqrt(Stack[-1]))
0x24e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x24f: Stack[-5] = -Stack[-6]; Pop(0);
0x250: Pop(0); Push(Stack[-6] * Stack[-19]);
0x251: PushEmpty(cvector, cvector)
0x252: Push(CVector(0.0, 1.0, 0.0))
0x253: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x254: Call2 0x355

0x255: Pop(1)
0x256: Push((int) 25)
0x257: Pop(2); Push(Stack[-2] * Stack[-1]);
0x258: Pop(2); Push(Stack[-2] + Stack[-1]);
0x259: Push(CVector(0.0, 10.0, 0.0))
0x25a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x25b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x25c: @ IsOverrideActive(Stack[-2])
0x25d: Pop(0)
0x25e: Push(Stack[-2])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[-21] = (bool) 0
0x261: Return(); Pop(18)

0x262: @ StopWorld()
0x263: Pop(0)
0x264: Push((bool) 1)
0x265: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x266: Pop(1)
0x267: Push(CvectorIndex(Stack[-4], 0))
0x268: Push(CvectorIndex(Stack[-5], 2))
0x269: @ Rotate(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: PushEmpty(bool)
0x26c: Call2 0x375

0x26d: Pop(0)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x278

0x270: Push("head")
0x271: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x272: Pop(1)
0x273: Push(Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x275: Push("head")
0x276: @ LookAsyncCamera(Stack[-1])
0x277: Pop(1)
0x278: @ CameraWaitForPlayFinish()
0x279: Pop(0)
0x27a: @ ResumeWorld()
0x27b: Pop(0)
0x27c: Stack[-21] = (bool) 1
0x27d: Return(); Pop(18)

0x27e: PushEmpty(bool, bool)
0x27f: Push((bool) 1)
0x280: @ CameraSwitchToNormal(Stack[-1])
0x281: Pop(1)
0x282: PushEmpty(bool)
0x283: Call2 0x375

0x284: Pop(0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28f

0x287: Push("head")
0x288: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x289: Pop(1)
0x28a: Push(Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28c: Push("head")
0x28d: @ UnlookAsync(Stack[-1])
0x28e: Pop(1)
0x28f: Return(); Pop(2)

0x290: PushEmpty(int, int, int, int)
0x291: Push("voice_common")
0x292: @ GetVariable(Stack[-1], Stack[-3])
0x293: Pop(1)
0x294: Push(Stack[-2])
0x295: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x296: PushEmpty(bool, object)
0x297: Stack[-1] = Stack[-7]
0x298: Call2 0x2ca

0x299: Pop(1)
0x29a: Pop(1); Push((bool) Stack[-1] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29c: PushEmpty(bool, object)
0x29d: Stack[-1] = Stack[-7]
0x29e: Call2 0x2ef

0x29f: Pop(1)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a2: Stack[-6] = (bool) 0
0x2a3: Return(); Pop(4)

0x2a4: Push((int) 2)
0x2a5: @ irand(Stack[-2], Stack[-1])
0x2a6: Pop(1)
0x2a7: Push(Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a9: Push("voice_common")
0x2aa: Push((int) 1)
0x2ab: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ac: Push((int) 3)
0x2ad: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2ae: @ SetVariable(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2b5

0x2b1: Push("voice_common")
0x2b2: Push((int) 0)
0x2b3: @ SetVariable(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: GOTO 0x2c8

0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[-7]
0x2b8: Call2 0x2ef

0x2b9: Pop(1)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[-7]
0x2be: Call2 0x2ca

0x2bf: Pop(1)
0x2c0: Pop(1); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-6] = (bool) 0
0x2c3: Return(); Pop(4)

0x2c4: Push("voice_common")
0x2c5: Push((int) 1)
0x2c6: @ SetVariable(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: Stack[-6] = (bool) 1
0x2c9: Return(); Pop(4)

0x2ca: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2cb: Stack[-5] = "c"
0x2cc: Stack[-4] = (int) 0
0x2cd: Push((int) 1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2cf: Push((int) 1)
0x2d0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2d1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d2: @@ HasProperty(Stack[-1], Stack[-4])
0x2d3: Pop(1)
0x2d4: Pop(0); Push((bool) Stack[-3] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2da

0x2d7: Push((int) 1)
0x2d8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d9: GOTO 0x2cd

0x2da: Pop(0); Push((bool) Stack[-4] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-12] = (bool) 0
0x2dd: Return(); Pop(10)

0x2de: Stack[-2] = (int) 0
0x2df: Push((int) 1)
0x2e0: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: @ irand(Stack[-2], Stack[-4])
0x2e3: Pop(0)
0x2e4: Push((int) 1)
0x2e5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2e7: @@ GetProperty(Stack[-1], Stack[-2])
0x2e8: Pop(1)
0x2e9: PushEmpty(bool, string)
0x2ea: Stack[-1] = Stack[-3]
0x2eb: Call2 0x339

0x2ec: Stack[-14] = Stack[-2]
0x2ed: Pop(2)
0x2ee: Return(); Pop(10)

0x2ef: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2f0: Push("d")
0x2f1: PushEmpty(int)
0x2f2: Call2 0x364

0x2f3: Pop(0)
0x2f4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f5: Push("m")
0x2f6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2f7: Stack[-4] = (int) 0
0x2f8: Push((int) 1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fa: Push((int) 1)
0x2fb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2fc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2fd: @@ HasProperty(Stack[-1], Stack[-4])
0x2fe: Pop(1)
0x2ff: Pop(0); Push((bool) Stack[-3] == 0)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: GOTO 0x305

0x302: Push((int) 1)
0x303: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x304: GOTO 0x2f8

0x305: Pop(0); Push((bool) Stack[-4] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-12] = (bool) 0
0x308: Return(); Pop(10)

0x309: Stack[-2] = (int) 0
0x30a: Push((int) 1)
0x30b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: @ irand(Stack[-2], Stack[-4])
0x30e: Pop(0)
0x30f: Push((int) 1)
0x310: Pop(1); Push(Stack[-3] + Stack[-1]);
0x311: Pop(1); Push(Stack[-6] + Stack[-1]);
0x312: @@ GetProperty(Stack[-1], Stack[-2])
0x313: Pop(1)
0x314: PushEmpty(bool, string)
0x315: Stack[-1] = Stack[-3]
0x316: Call2 0x339

0x317: Stack[-14] = Stack[-2]
0x318: Pop(2)
0x319: Return(); Pop(10)

0x31a: PushEmpty(bool, float, float, bool, float, float)
0x31b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x31c: Pop(0)
0x31d: Push(Stack[-3])
0x31e: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x320: Pop(0)
0x321: Push((bool) 0)
0x322: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(1)
0x324: GOTO 0x329

0x325: Push("Can't find lsh animation : ")
0x326: Pop(1); Push(Stack[-1] + Stack[-8]);
0x327: @ Trace(Stack[-1])
0x328: Pop(1)
0x329: Return(); Pop(6)

0x32a: PushEmpty(bool, float, float, bool, float, float)
0x32b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x32c: Pop(0)
0x32d: Push(Stack[-3])
0x32e: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x330: Pop(0)
0x331: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x332: Pop(0)
0x333: GOTO 0x338

0x334: Push("Can't find lsh animation : ")
0x335: Pop(1); Push(Stack[-1] + Stack[-9]);
0x336: @ Trace(Stack[-1])
0x337: Pop(1)
0x338: Return(); Pop(6)

0x339: PushEmpty(bool, bool)
0x33a: PushEmpty(bool)
0x33b: Call2 0x375

0x33c: Pop(0)
0x33d: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x33e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x33f: Pop(0)
0x340: Push(Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x342: @ lshPlaySpeech(Stack[-3])
0x343: Pop(0)
0x344: Stack[-4] = (bool) 1
0x345: Return(); Pop(2)

0x346: Stack[-4] = (bool) 0
0x347: Return(); Pop(2)

0x348: PushEmpty(bool)
0x349: Call2 0x375

0x34a: Pop(0)
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: @ lshStopSpeech()
0x34d: Pop(0)
0x34e: Return(); Pop(0)

0x34f: PushEmpty(object, object)
0x350: @ self(Stack[-1])
0x351: Pop(0)
0x352: Stack[-3] = Stack[-1]
0x353: Return(); Pop(2)

0x354: Stack[-1] = 0
0x355: PushEmpty(float, float)
0x356: Pop(0); Push(Stack[-3] | Stack[-3]);
0x357: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x358: Push((float)0.0)
0x359: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x35c: Return(); Pop(2)

0x35d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35e: Return(); Pop(2)

0x35f: PushEmpty(int, int)
0x360: @ GetVariable(Stack[-3], Stack[-1])
0x361: Pop(0)
0x362: Stack[-4] = Stack[-1]
0x363: Return(); Pop(2)

0x364: PushEmpty(float, float)
0x365: @ GetGameTime(Stack[-1])
0x366: Pop(0)
0x367: Push((int) 1)
0x368: PushEmpty(int)
0x369: Push((int) 24)
0x36a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x36b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x36c: Return(); Pop(2)

0x36d: Stack[-1] = (int) 515527
0x36e: Return(); Pop(0)

0x36f: Stack[-1] = (int) 513334
0x370: Return(); Pop(0)

0x371: Stack[-1] = "ui/NPC_Aglaja.png"
0x372: Return(); Pop(0)

0x373: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x374: Return(); Pop(0)

0x375: Stack[-1] = (bool) 1
0x376: Return(); Pop(0)

0x377: PushEmpty()
0x378: Push("b9q03AglajaTalk")
0x379: Push((int) 1)
0x37a: @ SetVariable(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(int, string)
0x37f: Stack[-1] = "b9q03AglajaTalk"
0x380: Call2 0x35f

0x381: Pop(1)
0x382: Push((int) 0)
0x383: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-2] = (bool) 1
0x386: Return(); Pop(0)

0x387: Stack[-2] = (bool) 0
0x388: Return(); Pop(0)

0x389: PushEmpty(int, int)
0x38a: Push("branch")
0x38b: @ GetVariable(Stack[-1], Stack[-2])
0x38c: Pop(1)
0x38d: Push((int) 0)
0x38e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x390: Stack[-3] = (int) 1
0x391: Return(); Pop(2)

0x392: GOTO 0x398

0x393: Push((int) 1)
0x394: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-3] = (int) 2
0x397: Return(); Pop(2)

0x398: Stack[-3] = (int) 3
0x399: Return(); Pop(2)

