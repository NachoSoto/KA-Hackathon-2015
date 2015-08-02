package org.khanacademy.jnitest;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

import com.google.common.base.Function;
import com.google.common.collect.Lists;

import org.khanacademy.core.shared.Video;
import org.khanacademy.core.shared.VideoFetcher;

import java.util.List;

import javax.annotation.Nullable;

public class MainActivity extends Activity {

    TextView textView;

    static {
        System.loadLibrary("sharedcore");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textView = (TextView) findViewById(R.id.text);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    protected void onStart() {
        super.onStart();

        final VideoFetcher fetcher = VideoFetcher.createFetcher();
        final List<Video> videos = fetcher.fetchVideos();

        textView.setText(getVideoTitles(videos).toString());
    }


    private static List<String> getVideoTitles(List<Video> videos) {
        return Lists.transform(videos, new Function<Video, String>() {
            @Nullable
            @Override
            public String apply(Video input) {
                return input.getTitle();
            }
        });
    }


    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
