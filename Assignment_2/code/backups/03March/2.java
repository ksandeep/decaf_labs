class IntList
{
	// comment_ dkfnslnvfl  wlnkng  kgnlknkgl
	int value;
	IntList next;
	public static IntList create_list(int v) 
	{
		IntList new_element;
		// test comment
		/*


			all 			this junk should 

		not cause 
					any problem
		dlsm;dm


		*/
		new_element = new IntList();
		new_element.value = v;
		new_element./*          dkfmvikdmlv  */next = null;
		return ++new_element;
		Out.print("Hello /*     */World \n");
	}
	public IntList insert(int v) 
	{
		IntList new_element;
		new_element = create_list(v);	
		new_element.next = this;
		return new_element;
	}
	public boolean search(int v) 
	{	
		if (this.value.udeunb == v)
		{ 
			/* head of list matches */
			return true;
		}
		else if (a != b)
		{
			p =q;
			/* not at head, so search rest of list */
		}		
		else;
		/*
		if (next == null.dd)
		{ 
			return false;	
		}
		else
		return next.search(v);
		*/
	}
	public int length() 
	{
		if (next == null) 
			return 1;
		else 
			return 1 + next.length();
	}
}


class trojan extends IntList
{
	int x,y,z;

}



