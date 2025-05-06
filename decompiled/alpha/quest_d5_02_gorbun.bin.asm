GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	money10000 is given
	money
	playsound
	givemoney
	d5q02
	d5q02GorbunFindTheDaughter
	pt_map_gorbun
	AddMark
	ood5Gorbun1
	d5q02AnnaGotoGorbun
	FindMark
	Remove
	d5q02AnnaGotoGorbunSelf
	d5q02AnnaGotoKabak
	d5q02NudeMeeting
	ood5Gorbun2
	ood5Gorbun3
	money 50000 is given
	d5q02KnowNudeIsDead
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_Black.png

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
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x2eb
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdb Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2e3 Vars = (object)
		EVENT_26 Op = 0x2ef Vars = (string)
		EVENT_6 Op = 0x30b Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x324

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x4be

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x4c0

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x48d

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x35c

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x40a

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x416

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x53: PushEmpty(string)
0x54: Stack[-1] = "Neutral"
0x55: Call 0xcb

0x56: Pop(1)
0x57: Push((int) 11917)
0x58: @@ SetMessage(Stack[-1])
0x59: Pop(1)
0x5a: @@ ClearReplies()
0x5b: Pop(0)
0x5c: Push((int) 11918)
0x5d: Push((int) 13135)
0x5e: Push((int) 13134)
0x5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60: Pop(3)
0x61: GOTO 0xad

0x62: PushEmpty(string)
0x63: Stack[-1] = "Neutral"
0x64: Call 0xcb

0x65: Pop(1)
0x66: Push((int) 11935)
0x67: @@ SetMessage(Stack[-1])
0x68: Pop(1)
0x69: @@ ClearReplies()
0x6a: Pop(0)
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call 0x40a

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 12489)
0x71: Push((int) 13660)
0x72: Push((int) 13658)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: PushEmpty(bool)
0x76: Stack[-1] = (bool) 0
0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call 0x422

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call 0x42e

0x81: Pop(1)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call 0x446

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Stack[-1] = (bool) 1
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 11936)
0x8e: Push((int) 13155)
0x8f: Push((int) 13153)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call 0x42e

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call 0x43a

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Stack[-1] = (bool) 1
0x9f: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa0: Push((int) 11937)
0xa1: Push((int) 13156)
0xa2: Push((int) 13154)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: Push((int) 12490)
0xa6: Push((int) -1)
0xa7: Push((int) 13659)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: GOTO 0xad

0xab: Return(); Pop(0)

0xac: GOTO 0x43

0xad: PushEmpty(bool)
0xae: Call 0x4c2

0xaf: Pop(0)
0xb0: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb1: @ lshWaitForAnimEnd()
0xb2: Pop(0)
0xb3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: GOTO 0xbb

0xb6: PushEmpty(string)
0xb7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb8: Call 0x360

0xb9: Pop(1)
0xba: GOTO 0xb1

0xbb: GOTO 0xca

0xbc: Push("all")
0xbd: Push("idle")
0xbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: @ WaitForAnimEnd()
0xc1: Pop(0)
0xc2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: GOTO 0xca

0xc5: Push("all")
0xc6: Push("idle")
0xc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: GOTO 0xc0

0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: PushEmpty(bool)
0xcd: Call 0x4c2

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: Return(); Pop(0)

0xd2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Return(); Pop(0)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = Stack[-2]
0xd7: Call 0x360

0xd8: Pop(1)
0xd9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xda: Return(); Pop(0)

0xdb: PushEmpty()
0xdc: Push((int) 1)
0xdd: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0xde: PushEmpty()
0xdf: Call 0x372

0xe0: Pop(0)
0xe1: Push((int) 13144)
0xe2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call 0x3a4

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call 0x3bb

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0x393

0xf2: Pop(2)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call 0x39e

0xf7: Pop(2)
0xf8: Push((int) 13151)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call 0x3bb

0xff: Pop(2)
0x100: Push((int) 13661)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call 0x3a4

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call 0x393

0x10c: Pop(2)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call 0x39e

0x111: Pop(2)
0x112: Push((int) 13170)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call 0x3f9

0x119: Pop(2)
0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call 0x3ff

0x11e: Pop(2)
0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call 0x39e

0x123: Pop(2)
0x124: Push((int) 13172)
0x125: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x127: PushEmpty(object, object)
0x128: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x129: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12a: Call 0x3c1

0x12b: Pop(2)
0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call 0x3f3

0x130: Pop(2)
0x131: Push((int) 13133)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 0
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call 0x40a

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call 0x416

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Stack[-1] = (bool) 1
0x141: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x142: PushEmpty(string)
0x143: Stack[-1] = "Neutral"
0x144: Call 0xcb

0x145: Pop(1)
0x146: Push((int) 11917)
0x147: @@ SetMessage(Stack[-1])
0x148: Pop(1)
0x149: @@ ClearReplies()
0x14a: Pop(0)
0x14b: Push((int) 11918)
0x14c: Push((int) 13135)
0x14d: Push((int) 13134)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call 0xcb

0x154: Pop(1)
0x155: Push((int) 11935)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call 0x40a

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: Push((int) 12489)
0x160: Push((int) 13660)
0x161: Push((int) 13658)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: PushEmpty(bool)
0x165: Stack[-1] = (bool) 0
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call 0x422

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16f: Call 0x42e

0x170: Pop(1)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 1
0x174: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call 0x446

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 11936)
0x17d: Push((int) 13155)
0x17e: Push((int) 13153)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: PushEmpty(bool)
0x182: Stack[-1] = (bool) 0
0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call 0x42e

0x186: Pop(1)
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18a: Call 0x43a

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: Push((int) 11937)
0x190: Push((int) 13156)
0x191: Push((int) 13154)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Push((int) 12490)
0x195: Push((int) -1)
0x196: Push((int) 13659)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 13156)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral"
0x19f: Call 0xcb

0x1a0: Pop(1)
0x1a1: Push((int) 11939)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 11947)
0x1a7: Push((int) 13165)
0x1a8: Push((int) 13164)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 13165)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Neutral"
0x1b1: Call 0xcb

0x1b2: Pop(1)
0x1b3: Push((int) 11948)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 11949)
0x1b9: Push((int) 13167)
0x1ba: Push((int) 13166)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 13167)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Neutral"
0x1c3: Call 0xcb

0x1c4: Pop(1)
0x1c5: Push((int) 11950)
0x1c6: @@ SetMessage(Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ ClearReplies()
0x1c9: Pop(0)
0x1ca: Push((int) 11951)
0x1cb: Push((int) 13171)
0x1cc: Push((int) 13168)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Return(); Pop(0)

0x1d0: Push((int) 13171)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d3: PushEmpty(string)
0x1d4: Stack[-1] = "Neutral"
0x1d5: Call 0xcb

0x1d6: Pop(1)
0x1d7: Push((int) 11954)
0x1d8: @@ SetMessage(Stack[-1])
0x1d9: Pop(1)
0x1da: @@ ClearReplies()
0x1db: Pop(0)
0x1dc: Push((int) 11955)
0x1dd: Push((int) -1)
0x1de: Push((int) 13172)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: Return(); Pop(0)

0x1e2: Push((int) 13155)
0x1e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = "Neutral"
0x1e7: Call 0xcb

0x1e8: Pop(1)
0x1e9: Push((int) 11938)
0x1ea: @@ SetMessage(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ ClearReplies()
0x1ed: Pop(0)
0x1ee: Push((int) 11940)
0x1ef: Push((int) 13158)
0x1f0: Push((int) 13157)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 13158)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Neutral"
0x1f9: Call 0xcb

0x1fa: Pop(1)
0x1fb: Push((int) 11941)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 11942)
0x201: Push((int) 13160)
0x202: Push((int) 13159)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 13160)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Neutral"
0x20b: Call 0xcb

0x20c: Pop(1)
0x20d: Push((int) 11943)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 11944)
0x213: Push((int) 13162)
0x214: Push((int) 13161)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 13162)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral"
0x21d: Call 0xcb

0x21e: Pop(1)
0x21f: Push((int) 11945)
0x220: @@ SetMessage(Stack[-1])
0x221: Pop(1)
0x222: @@ ClearReplies()
0x223: Pop(0)
0x224: Push((int) 11946)
0x225: Push((int) 13169)
0x226: Push((int) 13163)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 13169)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Neutral"
0x22f: Call 0xcb

0x230: Pop(1)
0x231: Push((int) 11952)
0x232: @@ SetMessage(Stack[-1])
0x233: Pop(1)
0x234: @@ ClearReplies()
0x235: Pop(0)
0x236: Push((int) 11953)
0x237: Push((int) -1)
0x238: Push((int) 13170)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: Push((int) 13660)
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x23f: PushEmpty(string)
0x240: Stack[-1] = "Neutral"
0x241: Call 0xcb

0x242: Pop(1)
0x243: Push((int) 12491)
0x244: @@ SetMessage(Stack[-1])
0x245: Pop(1)
0x246: @@ ClearReplies()
0x247: Pop(0)
0x248: Push((int) 12492)
0x249: Push((int) -1)
0x24a: Push((int) 13661)
0x24b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(3)
0x24d: Return(); Pop(0)

0x24e: Push((int) 13135)
0x24f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x250: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x251: PushEmpty(string)
0x252: Stack[-1] = "Neutral"
0x253: Call 0xcb

0x254: Pop(1)
0x255: Push((int) 11919)
0x256: @@ SetMessage(Stack[-1])
0x257: Pop(1)
0x258: @@ ClearReplies()
0x259: Pop(0)
0x25a: Push((int) 11920)
0x25b: Push((int) 13137)
0x25c: Push((int) 13136)
0x25d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(3)
0x25f: Return(); Pop(0)

0x260: Push((int) 13137)
0x261: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x263: PushEmpty(string)
0x264: Stack[-1] = "Neutral"
0x265: Call 0xcb

0x266: Pop(1)
0x267: Push((int) 11921)
0x268: @@ SetMessage(Stack[-1])
0x269: Pop(1)
0x26a: @@ ClearReplies()
0x26b: Pop(0)
0x26c: Push((int) 11924)
0x26d: Push((int) 13141)
0x26e: Push((int) 13140)
0x26f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x270: Pop(3)
0x271: Push((int) 11922)
0x272: Push((int) 13139)
0x273: Push((int) 13138)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Return(); Pop(0)

0x277: Push((int) 13139)
0x278: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x27a: PushEmpty(string)
0x27b: Stack[-1] = "Neutral"
0x27c: Call 0xcb

0x27d: Pop(1)
0x27e: Push((int) 11923)
0x27f: @@ SetMessage(Stack[-1])
0x280: Pop(1)
0x281: @@ ClearReplies()
0x282: Pop(0)
0x283: Push((int) 11929)
0x284: Push((int) 13141)
0x285: Push((int) 13145)
0x286: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x287: Pop(3)
0x288: Return(); Pop(0)

0x289: Push((int) 13141)
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral"
0x28e: Call 0xcb

0x28f: Pop(1)
0x290: Push((int) 11925)
0x291: @@ SetMessage(Stack[-1])
0x292: Pop(1)
0x293: @@ ClearReplies()
0x294: Pop(0)
0x295: Push((int) 11926)
0x296: Push((int) 13143)
0x297: Push((int) 13142)
0x298: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x299: Pop(3)
0x29a: Push((int) 11930)
0x29b: Push((int) 13148)
0x29c: Push((int) 13147)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: Push((int) 13148)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral"
0x2a5: Call 0xcb

0x2a6: Pop(1)
0x2a7: Push((int) 11931)
0x2a8: @@ SetMessage(Stack[-1])
0x2a9: Pop(1)
0x2aa: @@ ClearReplies()
0x2ab: Pop(0)
0x2ac: Push((int) 11932)
0x2ad: Push((int) 13150)
0x2ae: Push((int) 13149)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Return(); Pop(0)

0x2b2: Push((int) 13150)
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "Neutral"
0x2b7: Call 0xcb

0x2b8: Pop(1)
0x2b9: Push((int) 11933)
0x2ba: @@ SetMessage(Stack[-1])
0x2bb: Pop(1)
0x2bc: @@ ClearReplies()
0x2bd: Pop(0)
0x2be: Push((int) 11934)
0x2bf: Push((int) -1)
0x2c0: Push((int) 13151)
0x2c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c2: Pop(3)
0x2c3: Return(); Pop(0)

0x2c4: Push((int) 13143)
0x2c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral"
0x2c9: Call 0xcb

0x2ca: Pop(1)
0x2cb: Push((int) 11927)
0x2cc: @@ SetMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ ClearReplies()
0x2cf: Pop(0)
0x2d0: Push((int) 11928)
0x2d1: Push((int) -1)
0x2d2: Push((int) 13144)
0x2d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d4: Pop(3)
0x2d5: Return(); Pop(0)

0x2d6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2d7: PushEmpty(bool)
0x2d8: Call 0x4c2

0x2d9: Pop(0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2db: @ lshStopAnimation()
0x2dc: Pop(0)
0x2dd: GOTO 0x2e0

0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: GOTO 0xdc

0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-3]
0x2e6: Push(-2, 1); TaskCall(0)
0x2e7: Call 0x0

0x2e8: Pop(-2, 1); TaskReturn
0x2e9: Pop(2)
0x2ea: Return(); Pop(0)

0x2eb: @ Hold()
0x2ec: Pop(0)
0x2ed: GOTO 0x2eb

0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(bool, bool)
0x2f0: Push("cleanup")
0x2f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2f3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2f4: @ IsLoaded(Stack[-1])
0x2f5: Pop(0)
0x2f6: PushEmpty(bool)
0x2f7: Stack[-1] = (bool) 0
0x2f8: Pop(0); Push((bool) Stack[-2] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(bool)
0x2fb: Call 0x31b

0x2fc: Pop(0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Stack[-1] = (bool) 1
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(object)
0x301: Call 0x379

0x302: Pop(0)
0x303: @ RemoveActor(Stack[-1])
0x304: Pop(1)
0x305: GOTO 0x30a

0x306: Push("restore")
0x307: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30a: Return(); Pop(2)

0x30b: PushEmpty(bool)
0x30c: Stack[-1] = (bool) 0
0x30d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(bool)
0x310: Call 0x31b

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 1
0x314: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x315: PushEmpty(object)
0x316: Call 0x379

0x317: Pop(0)
0x318: @ RemoveActor(Stack[-1])
0x319: Pop(1)
0x31a: Return(); Pop(0)

0x31b: Stack[-1] = (bool) 1
0x31c: Return(); Pop(0)

0x31d: PushEmpty(int, int)
0x31e: @@ GetProperty(Stack[-4], Stack[-1])
0x31f: Pop(0)
0x320: Pop(0); Push(Stack[-1] + Stack[-3]);
0x321: @@ SetProperty(Stack[-5], Stack[-1])
0x322: Pop(1)
0x323: Return(); Pop(2)

0x324: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x325: @@ GetPosition(Stack[-7])
0x326: Pop(0)
0x327: @@ GetEyesHeight(Stack[-8])
0x328: Pop(0)
0x329: Push(CvectorIndex(Stack[-7], 1))
0x32a: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x32b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x32c: @ GetPosition(Stack[-6])
0x32d: Pop(0)
0x32e: @ GetEyesHeight(Stack[-8])
0x32f: Pop(0)
0x330: Push(CvectorIndex(Stack[-6], 1))
0x331: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x332: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x333: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x334: Push(CvectorIndex(Stack[-5], 1))
0x335: Stack[-1] = (int) 0
0x336: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x337: Pop(0); Push(Stack[-5] | Stack[-5]);
0x338: Pop(1); Push(Sqrt(Stack[-1]))
0x339: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x33a: Stack[-4] = -Stack[-5]; Pop(0);
0x33b: Push((int) 70)
0x33c: Pop(1); Push(Stack[-6] * Stack[-1]);
0x33d: PushEmpty(cvector, cvector)
0x33e: Push(CVector(0.0, 1.0, 0.0))
0x33f: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x340: Call 0x37f

0x341: Pop(1)
0x342: Push((int) 25)
0x343: Pop(2); Push(Stack[-2] * Stack[-1]);
0x344: Pop(2); Push(Stack[-2] + Stack[-1]);
0x345: Push(CVector(0.0, 10.0, 0.0))
0x346: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x347: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x348: @ IsOverrideActive(Stack[-1])
0x349: Pop(0)
0x34a: Push(Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34c: Stack[-18] = (bool) 0
0x34d: Return(); Pop(16)

0x34e: @ StopWorld()
0x34f: Pop(0)
0x350: @ CameraTransit(Stack[-2], Stack[-4])
0x351: Pop(0)
0x352: Push(CvectorIndex(Stack[-3], 0))
0x353: Push(CvectorIndex(Stack[-4], 2))
0x354: @ Rotate(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: @ CameraWaitForPlayFinish()
0x357: Pop(0)
0x358: @ ResumeWorld()
0x359: Pop(0)
0x35a: Stack[-18] = (bool) 1
0x35b: Return(); Pop(16)

0x35c: PushEmpty()
0x35d: @ CameraSwitchToNormal()
0x35e: Pop(0)
0x35f: Return(); Pop(0)

0x360: PushEmpty(float, float, float, float)
0x361: Push("playing ")
0x362: Pop(1); Push(Stack[-1] + Stack[-6]);
0x363: @ Trace(Stack[-1])
0x364: Pop(1)
0x365: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x366: Pop(0)
0x367: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x368: Pop(0)
0x369: Push("start: ")
0x36a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x36b: @ Trace(Stack[-1])
0x36c: Pop(1)
0x36d: Push("end: ")
0x36e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x36f: @ Trace(Stack[-1])
0x370: Pop(1)
0x371: Return(); Pop(4)

0x372: PushEmpty(bool)
0x373: Call 0x4c2

0x374: Pop(0)
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: @ lshStopSpeech()
0x377: Pop(0)
0x378: Return(); Pop(0)

0x379: PushEmpty(object, object)
0x37a: @ self(Stack[-1])
0x37b: Pop(0)
0x37c: Stack[-3] = Stack[-1]
0x37d: Return(); Pop(2)

0x37e: Stack[-1] = 0
0x37f: PushEmpty(float, float)
0x380: Pop(0); Push(Stack[-3] | Stack[-3]);
0x381: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x382: Push((float)0.0)
0x383: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x386: Return(); Pop(2)

0x387: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x388: Return(); Pop(2)

0x389: PushEmpty(int, int)
0x38a: @ GetVariable(Stack[-3], Stack[-1])
0x38b: Pop(0)
0x38c: Stack[-4] = Stack[-1]
0x38d: Return(); Pop(2)

0x38e: PushEmpty(float, float)
0x38f: @ GetGameTime(Stack[-1])
0x390: Pop(0)
0x391: Stack[-3] = Stack[-1]
0x392: Return(); Pop(2)

0x393: PushEmpty()
0x394: Push("money10000 is given")
0x395: @ Trace(Stack[-1])
0x396: Pop(1)
0x397: PushEmpty(object, string, int)
0x398: Stack[-3] = Stack[-5]
0x399: Stack[-2] = "money"
0x39a: Stack[-1] = (int) 10000
0x39b: Call 0x31d

0x39c: Pop(3)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: Push("playsound")
0x3a0: Push("givemoney")
0x3a1: @ TriggerWorld(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty(object, object)
0x3a5: Push("d5q02")
0x3a6: Push((int) 2)
0x3a7: @ SetVariable(Stack[-2], Stack[-1])
0x3a8: Pop(2)
0x3a9: PushEmpty(object)
0x3aa: Call 0x47c

0x3ab: Stack[-2] = Stack[-1]
0x3ac: Pop(1)
0x3ad: Push("d5q02GorbunFindTheDaughter")
0x3ae: Push("pt_map_gorbun")
0x3af: Push((int) 0)
0x3b0: Push((int) 15362)
0x3b1: PushEmpty(float)
0x3b2: Call 0x38e

0x3b3: Pop(0)
0x3b4: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(5)
0x3b6: PushEmpty()
0x3b7: Call 0x49e

0x3b8: Pop(0)
0x3b9: Return(); Pop(2)

0x3ba: Stack[-1] = 0
0x3bb: PushEmpty()
0x3bc: Push("ood5Gorbun1")
0x3bd: Push((int) 1)
0x3be: @ SetVariable(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty(object, object, object, object)
0x3c2: Push("d5q02")
0x3c3: Push((int) 1000)
0x3c4: @ SetVariable(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: PushEmpty(object)
0x3c7: Call 0x47c

0x3c8: Stack[-3] = Stack[-1]
0x3c9: Pop(1)
0x3ca: Push("d5q02AnnaGotoGorbun")
0x3cb: @@ FindMark(Stack[-2], Stack[-1])
0x3cc: Pop(1)
0x3cd: Push(Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cf: @@ Remove()
0x3d0: Pop(0)
0x3d1: Push("d5q02AnnaGotoGorbunSelf")
0x3d2: @@ FindMark(Stack[-2], Stack[-1])
0x3d3: Pop(1)
0x3d4: Push(Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: @@ Remove()
0x3d7: Pop(0)
0x3d8: Push("d5q02AnnaGotoKabak")
0x3d9: @@ FindMark(Stack[-2], Stack[-1])
0x3da: Pop(1)
0x3db: Push(Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: @@ Remove()
0x3de: Pop(0)
0x3df: Push("d5q02GorbunFindTheDaughter")
0x3e0: @@ FindMark(Stack[-2], Stack[-1])
0x3e1: Pop(1)
0x3e2: Push(Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: @@ Remove()
0x3e5: Pop(0)
0x3e6: Push("d5q02NudeMeeting")
0x3e7: @@ FindMark(Stack[-2], Stack[-1])
0x3e8: Pop(1)
0x3e9: Push(Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: @@ Remove()
0x3ec: Pop(0)
0x3ed: PushEmpty()
0x3ee: Call 0x4ae

0x3ef: Pop(0)
0x3f0: Return(); Pop(4)

0x3f1: Stack[-1] = 0
0x3f2: Stack[-2] = 0
0x3f3: PushEmpty()
0x3f4: Push("ood5Gorbun2")
0x3f5: Push((int) 1)
0x3f6: @ SetVariable(Stack[-2], Stack[-1])
0x3f7: Pop(2)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: Push("ood5Gorbun3")
0x3fb: Push((int) 1)
0x3fc: @ SetVariable(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: Push("money 50000 is given")
0x401: @ Trace(Stack[-1])
0x402: Pop(1)
0x403: PushEmpty(object, string, int)
0x404: Stack[-3] = Stack[-5]
0x405: Stack[-2] = "money"
0x406: Stack[-1] = (int) 50000
0x407: Call 0x31d

0x408: Pop(3)
0x409: Return(); Pop(0)

0x40a: PushEmpty()
0x40b: PushEmpty(int, string)
0x40c: Stack[-1] = "d5q02"
0x40d: Call 0x389

0x40e: Pop(1)
0x40f: Push((int) 1)
0x410: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x412: Stack[-2] = (bool) 1
0x413: Return(); Pop(0)

0x414: Stack[-2] = (bool) 0
0x415: Return(); Pop(0)

0x416: PushEmpty()
0x417: PushEmpty(int, string)
0x418: Stack[-1] = "ood5Gorbun1"
0x419: Call 0x389

0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-2] = (bool) 1
0x41f: Return(); Pop(0)

0x420: Stack[-2] = (bool) 0
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(int, string)
0x424: Stack[-1] = "d5q02"
0x425: Call 0x389

0x426: Pop(1)
0x427: Push((int) 4)
0x428: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-2] = (bool) 1
0x42b: Return(); Pop(0)

0x42c: Stack[-2] = (bool) 0
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(int, string)
0x430: Stack[-1] = "d5q02KnowNudeIsDead"
0x431: Call 0x389

0x432: Pop(1)
0x433: Push((int) 1)
0x434: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-2] = (bool) 1
0x437: Return(); Pop(0)

0x438: Stack[-2] = (bool) 0
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: PushEmpty(int, string)
0x43c: Stack[-1] = "ood5Gorbun2"
0x43d: Call 0x389

0x43e: Pop(1)
0x43f: Push((int) 0)
0x440: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-2] = (bool) 1
0x443: Return(); Pop(0)

0x444: Stack[-2] = (bool) 0
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(int, string)
0x448: Stack[-1] = "ood5Gorbun3"
0x449: Call 0x389

0x44a: Pop(1)
0x44b: Push((int) 0)
0x44c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-2] = (bool) 1
0x44f: Return(); Pop(0)

0x450: Stack[-2] = (bool) 0
0x451: Return(); Pop(0)

0x452: PushEmpty(object, object)
0x453: @ GetDiaryRoot(Stack[-1])
0x454: Pop(0)
0x455: Pop(0); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x457: Push("Can't retrieve diary root")
0x458: @ Trace(Stack[-1])
0x459: Pop(1)
0x45a: Stack[-3] = (bool) 0
0x45b: Return(); Pop(2)

0x45c: Stack[-3] = Stack[-1]
0x45d: Return(); Pop(2)

0x45e: Stack[-1] = 0
0x45f: PushEmpty(object, object, int, object, object, int)
0x460: PushEmpty(object)
0x461: Call 0x452

0x462: Stack[-4] = Stack[-1]
0x463: Pop(1)
0x464: @@ Find(Stack[-7], Stack[-2])
0x465: Pop(0)
0x466: Pop(0); Push((bool) Stack[-2] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x468: Push("Can't find diary parent with id: ")
0x469: Pop(1); Push(Stack[-1] + Stack[-8]);
0x46a: @ Trace(Stack[-1])
0x46b: Pop(1)
0x46c: Stack[-9] = (bool) 0
0x46d: Return(); Pop(6)

0x46e: @@ AddChild(Stack[-8])
0x46f: Pop(0)
0x470: Push("player_diary")
0x471: Push((int) 1)
0x472: @ SetVariable(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: @@ GetCategory(Stack[-1])
0x475: Pop(0)
0x476: @ SetDiarySection(Stack[-1])
0x477: Pop(0)
0x478: Stack[-9] = (bool) 0
0x479: Return(); Pop(6)

0x47a: Stack[-2] = 0
0x47b: Stack[-3] = 0
0x47c: PushEmpty(object, object, object, object)
0x47d: @ GetMainOutdoorScene(Stack[-2])
0x47e: Pop(0)
0x47f: Pop(0); Push((bool) Stack[-2] == 0)
0x480: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x481: Push("Can't find main outdoor scene")
0x482: @ Trace(Stack[-1])
0x483: Pop(1)
0x484: Stack[-1] = 0
0x485: Stack[-5] = Stack[-1]
0x486: Return(); Pop(4)

0x487: @@ GetMap(Stack[-1])
0x488: Pop(0)
0x489: Stack[-5] = Stack[-1]
0x48a: Return(); Pop(4)

0x48b: Stack[-1] = 0
0x48c: Stack[-2] = 0
0x48d: PushEmpty(int, int)
0x48e: Push("player")
0x48f: @ GetVariable(Stack[-1], Stack[-2])
0x490: Pop(1)
0x491: Push((int) 0)
0x492: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x494: Stack[-3] = (int) 200001
0x495: Return(); Pop(2)

0x496: GOTO 0x49c

0x497: Push((int) 1)
0x498: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49a: Stack[-3] = (int) 200002
0x49b: Return(); Pop(2)

0x49c: Stack[-3] = (int) 200003
0x49d: Return(); Pop(2)

0x49e: PushEmpty(object, object)
0x49f: Push("Adding diary entry")
0x4a0: @ Trace(Stack[-1])
0x4a1: Pop(1)
0x4a2: Push((int) 150)
0x4a3: Push((int) 2)
0x4a4: Push((int) 15356)
0x4a5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4a6: Pop(3)
0x4a7: PushEmpty(bool, object, int)
0x4a8: Stack[-2] = Stack[-4]
0x4a9: Stack[-1] = (int) 148
0x4aa: Call 0x45f

0x4ab: Pop(3)
0x4ac: Return(); Pop(2)

0x4ad: Stack[-1] = 0
0x4ae: PushEmpty(object, object)
0x4af: Push("Adding diary entry")
0x4b0: @ Trace(Stack[-1])
0x4b1: Pop(1)
0x4b2: Push((int) 153)
0x4b3: Push((int) 2)
0x4b4: Push((int) 15359)
0x4b5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: PushEmpty(bool, object, int)
0x4b8: Stack[-2] = Stack[-4]
0x4b9: Stack[-1] = (int) 148
0x4ba: Call 0x45f

0x4bb: Pop(3)
0x4bc: Return(); Pop(2)

0x4bd: Stack[-1] = 0
0x4be: Stack[-1] = (int) 12583
0x4bf: Return(); Pop(0)

0x4c0: Stack[-1] = "ui/NPC_Black.png"
0x4c1: Return(); Pop(0)

0x4c2: Stack[-1] = (bool) 0
0x4c3: Return(); Pop(0)

