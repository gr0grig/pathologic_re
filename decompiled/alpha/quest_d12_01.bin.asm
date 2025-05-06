GlobalVarCount = 0

Strings:
	place_birdmask
	pt_d12q01_birdmask
	pers_birdmask
	d12q01_birdmask.xml
	init_sobor
	NPC_Aglaja
	noaglaja
	pt_d12q01_Klara
	NPC_Klara
	d12q01_Klara.xml
	pt_d12q01_Block
	NPC_Block
	d12q01_Block.xml
	pt_d12q01_Burah
	NPC_Burah
	d12q01_Burah.xml
	pt_d12q01_Aglaja
	d12q01_Aglaja.xml
	isobor@door1
	init_theater
	d12q01_tbirdmask.xml
	pt_d12q01_whitemask
	pers_whitemask
	d12q01_twhitemask.xml
	itheater@door1
	init_mnogogrannik
	hidden_room@door1
	hidden_room
	pt_girl
	pers_littlegirl2
	d12q01_littlegirl.xml
	pt_boy
	pers_littleboy2
	d12q01_littleboy.xml
	fail
	completed
	d12q01
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	AddActor (6 args)
	FindActor (2 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object, object, object, object, object)
0x5: @ Trace(Stack[-9])
0x6: Pop(0)
0x7: Push("place_birdmask")
0x8: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-4] = Stack[-9]
0xe: Stack[-3] = "pt_d12q01_birdmask"
0xf: Stack[-2] = "pers_birdmask"
0x10: Stack[-1] = "d12q01_birdmask.xml"
0x11: Call 0xad

0x12: Pop(5)
0x13: Stack[-4] = 0
0x14: GOTO 0x88

0x15: Push("init_sobor")
0x16: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x18: Push("sobor")
0x19: @ GetSceneByName(Stack[-4], Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(bool, string)
0x1c: Stack[-1] = "NPC_Aglaja"
0x1d: Call 0xcf

0x1e: Pop(2)
0x1f: Push("noaglaja")
0x20: @ Trigger(Stack[-4], Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-4] = Stack[-8]
0x24: Stack[-3] = "pt_d12q01_Klara"
0x25: Stack[-2] = "NPC_Klara"
0x26: Stack[-1] = "d12q01_Klara.xml"
0x27: Call 0x9b

0x28: Pop(5)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-8]
0x2b: Stack[-3] = "pt_d12q01_Block"
0x2c: Stack[-2] = "NPC_Block"
0x2d: Stack[-1] = "d12q01_Block.xml"
0x2e: Call 0x9b

0x2f: Pop(5)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-4] = Stack[-8]
0x32: Stack[-3] = "pt_d12q01_Burah"
0x33: Stack[-2] = "NPC_Burah"
0x34: Stack[-1] = "d12q01_Burah.xml"
0x35: Call 0x9b

0x36: Pop(5)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-4] = Stack[-8]
0x39: Stack[-3] = "pt_d12q01_Aglaja"
0x3a: Stack[-2] = "NPC_Aglaja"
0x3b: Stack[-1] = "d12q01_Aglaja.xml"
0x3c: Call 0x9b

0x3d: Pop(5)
0x3e: PushEmpty(string, bool)
0x3f: Stack[-2] = "isobor@door1"
0x40: Stack[-1] = (bool) 1
0x41: Call 0xbf

0x42: Pop(2)
0x43: Stack[-3] = 0
0x44: GOTO 0x88

0x45: Push("init_theater")
0x46: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x48: Push("theater")
0x49: @ GetSceneByName(Stack[-3], Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-4] = Stack[-7]
0x4d: Stack[-3] = "pt_d12q01_birdmask"
0x4e: Stack[-2] = "pers_birdmask"
0x4f: Stack[-1] = "d12q01_tbirdmask.xml"
0x50: Call 0x9b

0x51: Pop(5)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-4] = Stack[-7]
0x54: Stack[-3] = "pt_d12q01_whitemask"
0x55: Stack[-2] = "pers_whitemask"
0x56: Stack[-1] = "d12q01_twhitemask.xml"
0x57: Call 0x9b

0x58: Pop(5)
0x59: PushEmpty(string, bool)
0x5a: Stack[-2] = "itheater@door1"
0x5b: Stack[-1] = (bool) 1
0x5c: Call 0xbf

0x5d: Pop(2)
0x5e: Stack[-2] = 0
0x5f: GOTO 0x88

0x60: Push("init_mnogogrannik")
0x61: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x63: PushEmpty(string, bool)
0x64: Stack[-2] = "hidden_room@door1"
0x65: Stack[-1] = (bool) 0
0x66: Call 0xbf

0x67: Pop(2)
0x68: Push("hidden_room")
0x69: @ GetSceneByName(Stack[-2], Stack[-1])
0x6a: Pop(1)
0x6b: PushEmpty(object, object, string, string, string)
0x6c: Stack[-4] = Stack[-6]
0x6d: Stack[-3] = "pt_girl"
0x6e: Stack[-2] = "pers_littlegirl2"
0x6f: Stack[-1] = "d12q01_littlegirl.xml"
0x70: Call 0x9b

0x71: Pop(5)
0x72: PushEmpty(object, object, string, string, string)
0x73: Stack[-4] = Stack[-6]
0x74: Stack[-3] = "pt_boy"
0x75: Stack[-2] = "pers_littleboy2"
0x76: Stack[-1] = "d12q01_littleboy.xml"
0x77: Call 0x9b

0x78: Pop(5)
0x79: Stack[-1] = 0
0x7a: GOTO 0x88

0x7b: Push("fail")
0x7c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7e: PushEmpty()
0x7f: Call 0x89

0x80: Pop(0)
0x81: GOTO 0x88

0x82: Push("completed")
0x83: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x85: PushEmpty()
0x86: Call 0x91

0x87: Pop(0)
0x88: Return(); Pop(8)

0x89: Push("d12q01")
0x8a: Push((int) -1)
0x8b: @ SetVariable(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: PushEmpty()
0x8e: Call 0x99

0x8f: Pop(0)
0x90: Return(); Pop(0)

0x91: Push("d12q01")
0x92: Push((int) 1000)
0x93: @ SetVariable(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: PushEmpty()
0x96: Call 0x99

0x97: Pop(0)
0x98: Return(); Pop(0)

0x99: EventDisable(26)
0x9a: Return(); Pop(0)

0x9b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x9d: Pop(0)
0x9e: Pop(0); Push((bool) Stack[-4] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa0: Push("Locator ")
0xa1: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa2: Push(" doesn't exist")
0xa3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa4: @ Trace(Stack[-1])
0xa5: Pop(1)
0xa6: Stack[-1] = 0
0xa7: GOTO 0xaa

0xa8: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa9: Pop(0)
0xaa: Stack[-13] = Stack[-1]
0xab: Return(); Pop(8)

0xac: Stack[-1] = 0
0xad: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xae: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xaf: Pop(0)
0xb0: Pop(0); Push((bool) Stack[-4] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb2: Push("Locator ")
0xb3: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb4: Push(" doesn't exist")
0xb5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb6: @ Trace(Stack[-1])
0xb7: Pop(1)
0xb8: Stack[-1] = 0
0xb9: GOTO 0xbc

0xba: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xbb: Pop(0)
0xbc: Stack[-13] = Stack[-1]
0xbd: Return(); Pop(8)

0xbe: Stack[-1] = 0
0xbf: PushEmpty(object, object)
0xc0: @ FindActor(Stack[-1], Stack[-4])
0xc1: Pop(0)
0xc2: Pop(0); Push((bool) Stack[-1] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc4: Push("Door ")
0xc5: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc6: Push(" not found")
0xc7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8: @ Trace(Stack[-1])
0xc9: Pop(1)
0xca: Push("locked")
0xcb: @@ SetProperty(Stack[-1], Stack[-4])
0xcc: Pop(1)
0xcd: Return(); Pop(2)

0xce: Stack[-1] = 0
0xcf: PushEmpty(object, object)
0xd0: @ FindActor(Stack[-1], Stack[-3])
0xd1: Pop(0)
0xd2: Pop(0); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-4] = (bool) 0
0xd5: Return(); Pop(2)

0xd6: @ RemoveActor(Stack[-1])
0xd7: Pop(0)
0xd8: Stack[-4] = (bool) 1
0xd9: Return(); Pop(2)

0xda: Stack[-1] = 0
