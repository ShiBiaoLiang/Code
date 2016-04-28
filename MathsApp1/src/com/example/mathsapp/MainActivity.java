package com.example.mathsapp;

import android.app.Activity;
import android.content.Intent;
import android.media.MediaPlayer;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends Activity {
	private MediaPlayer mPlayer;//��������
	private boolean isPause=false;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final Button botton4=(Button)findViewById(R.id.button4);
        botton4.setOnClickListener(new View.OnClickListener() {
    		
    		@Override
    		public void onClick(View v) {
    			// TODO �Զ����ɵķ������
    			if(!isPause)
    			{
    				isPause=true;
    				((Button)v).setText("��ͣ");
                     mPlayer.pause();
    				
    			}else{
    				mPlayer.start();
    				((Button)v).setText("����");
    			}
    		}
    	});
        
    }

     @Override
    protected void onResume() {
    	// TODO Auto-generated method stub
    	 mPlayer=MediaPlayer.create(this,R.raw.bg_mic);
		mPlayer.start();
		 //mPlayer.setLooping(true);//ѭ�����ű�������
     	
    	super.onResume();
    }
    
     //�������Ǻ���ͣ��
     @Override
    protected void onPause() {
    	// TODO Auto-generated method stub
    	 mPlayer.stop();
    	 mPlayer.release();
    	super.onPause();
    }

     @Override
    protected void onDestroy() {
    	// TODO Auto-generated method stub
    	 mPlayer.stop();
    	 mPlayer.release();
    	super.onDestroy();
    }
     
     public void openDialog(View view) {
         finish();//ʵ����Ϸ�Ľ���
     }
     
public void Start(View view)
{
	
	
	mPlayer=MediaPlayer.create(this, R.raw.click);
	mPlayer.start();
	Intent intent=new Intent(this,PlayActivity.class);
	startActivity(intent);
	
	//MainActivity.this.finish();
}
    
}
