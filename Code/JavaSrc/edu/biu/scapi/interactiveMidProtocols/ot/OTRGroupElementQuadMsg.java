/**
* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* 
* Copyright (c) 2012 - SCAPI (http://crypto.biu.ac.il/scapi)
* This file is part of the SCAPI project.
* DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
* and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
* FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* 
* We request that any publication and/or code referring to and/or based on SCAPI contain an appropriate citation to SCAPI, including a reference to
* http://crypto.biu.ac.il/SCAPI.
* 
* SCAPI uses Crypto++, Miracl, NTL and Bouncy Castle. Please see these projects for any further licensing issues.
* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
* 
*/
package edu.biu.scapi.interactiveMidProtocols.ot;

import java.io.Serializable;

import edu.biu.scapi.primitives.dlog.GroupElementSendableData;

/**
 * Concrete implementation of OT receiver message used by some OT receivers implementations. 
 * This implementation is common for OT on byteArray and on GroupElement.
 * The message contains tuple of four GroupElements - (x, y, z0, z1).
 * 
 * @author Cryptography and Computer Security Research Group Department of Computer Science Bar-Ilan University (Moriya Farbstein)
 *
 */
public class OTRGroupElementQuadMsg implements Serializable{
	
	private static final long serialVersionUID = 8620542140745898146L;
	
	private GroupElementSendableData x;
	private GroupElementSendableData y;
	private GroupElementSendableData z0;
	private GroupElementSendableData z1;
	
	public OTRGroupElementQuadMsg(GroupElementSendableData x, GroupElementSendableData y, 
							 GroupElementSendableData z0, GroupElementSendableData z1){
		this.x = x;
		this.y = y;
		this.z0 = z0;
		this.z1 = z1;
	}
	
	public GroupElementSendableData getX(){
		return x;
	}
	
	public GroupElementSendableData getY(){
		return y;
	}
	
	public GroupElementSendableData getZ0(){
		return z0;
	}
	
	public GroupElementSendableData getZ1(){
		return z1;
	}
}